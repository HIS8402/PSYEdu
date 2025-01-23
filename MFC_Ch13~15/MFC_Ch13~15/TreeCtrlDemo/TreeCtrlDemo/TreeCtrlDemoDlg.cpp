
// TreeCtrlDemoDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "TreeCtrlDemo.h"
#include "TreeCtrlDemoDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CTreeCtrlDemoDlg 대화 상자




CTreeCtrlDemoDlg::CTreeCtrlDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTreeCtrlDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pImgListDrag=NULL;
	m_nIndexLeftSel=-1;
}

void CTreeCtrlDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE, m_Tree);
}

BEGIN_MESSAGE_MAP(CTreeCtrlDemoDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE, &CTreeCtrlDemoDlg::OnTvnSelchangedTree)
	ON_BN_CLICKED(IDC_Button_CheckupChild, &CTreeCtrlDemoDlg::OnBnClickedButtonCheckupchild)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	//ON_NOTIFY(TVN_BEGINRDRAG, IDC_TREE, &CTreeCtrlDemoDlg::OnTvnBeginrdragTree)
END_MESSAGE_MAP()


// CTreeCtrlDemoDlg 메시지 처리기

BOOL CTreeCtrlDemoDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다. 응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.
	InitTreeCtrl();
	
	//static CImageList ImgList;
	//ImgList.Create(32,32,ILC_COLOR32|ILC_MASK,5,0);
	//ImgList.Add(&Bitmap,RGB(0,0,0));
	//m_List_Left.SetImageList(&ImgList,LVSIL_NORMAL);
	//m_List_Right,SetImageList(&ImgList,LVSIL_NORMAL);

	//CString strItem=_T("");
	//for(int i=0;i<5;i++)
	//{
	//	strItem.Format(_T("%dth Item"),i);
	//	m_List_Left.InsertItem(i,strItem,i);
	//}
	//DWORD dwExStyle=m_List_Left.GetExtendedStyle();
	//m_List_Left.SetExtendedStyle(dwExStyle|LVS_EX_BORDERSELECT);
	//dwExStyle=m_List_Right.GetExtendedStyle();
	//m_List_Right.SetExtendedStyle(dwExStyle|LVS_EX_BORDERSELECT);


	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CTreeCtrlDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다. 문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CTreeCtrlDemoDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CTreeCtrlDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CTreeCtrlDemoDlg::InitTreeCtrl(void)
{
	CBitmap Bmp;
	Bmp.LoadBitmap(IDB_TreeImageList);

	static CImageList ImgList;
	ImgList.Create(16,16,ILC_COLOR24,6,0);
	ImgList.Add(&Bmp,RGB(255,0,0));
	m_Tree.SetImageList(&ImgList,TVSIL_NORMAL);

	HTREEITEM hItem=NULL;
	hItem=m_Tree.InsertItem(_T("바탕 화면"),0,0,TVI_ROOT);
	hItem=m_Tree.InsertItem(_T("내 문서"),1,5,hItem);
	m_Tree.InsertItem(_T("내 그림"),2,5,hItem);
	m_Tree.InsertItem(_T("내 비디오"),3,5,hItem);
	hItem=m_Tree.InsertItem(_T("Sample folder"),4,5,hItem);
	hItem=m_Tree.InsertItem(_T("Sub folder"),4,5,hItem);

	m_Tree.EnsureVisible(hItem);
}


void CTreeCtrlDemoDlg::OnTvnSelchangedTree(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString strItem=m_Tree.GetItemText(pNMTreeView->itemNew.hItem);
	GetDlgItem(IDC_Static_Selected)->SetWindowText(strItem);

	*pResult = 0;
}


void CTreeCtrlDemoDlg::OnBnClickedButtonCheckupchild()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	HTREEITEM hItem=m_Tree.GetRootItem();
	if(m_Tree.GetCheck(hItem))
		AfxMessageBox(m_Tree.GetItemText(hItem));

	CheckupChild(m_Tree.GetRootItem());
}




void CTreeCtrlDemoDlg::CheckupChild(HTREEITEM hItem)
{
	HTREEITEM hChildItem=m_Tree.GetChildItem(hItem);

	while(hChildItem!=NULL)
	{
		if(m_Tree.GetCheck(hChildItem))
			AfxMessageBox(m_Tree.GetItemText(hChildItem));

		if(m_Tree.ItemHasChildren(hChildItem))
			CheckupChild(hChildItem);

		hChildItem=m_Tree.GetNextItem(hChildItem,TVGN_NEXT);
	}
}


void CTreeCtrlDemoDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	if(m_pImgListDrag!=NULL)
	{
		ClientToScreen(&point);

		CWnd*pWnd=CWnd::WindowFromPoint(point);
		if(pWnd!=NULL)
		{
			if(this==pWnd||IsChild(pWnd))
			{
				m_pImgListDrag->DragEnter(NULL,point);
				m_pImgListDrag->DragMove(NULL);
			}
			else
			{
				m_pImgListDrag->DragLeave(NULL);
			}
		}
	}
	CDialogEx::OnMouseMove(nFlags, point);
}


void CTreeCtrlDemoDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CString strTmp=_T("");
	if(m_pImgListDrag!=NULL)
	{
		ClientToScreen(&point);

		m_pImgListDrag->DragLeave(NULL);
		m_pImgListDrag->EndDrag();
		ReleaseCapture();

		CWnd*pWnd=CWnd::WindowFromPoint(point);
		if(pWnd==&m_List_Right&&m_nIndexLeftSel>=0)
		{

			LVITEM lvItem;
			TCHAR szBuffer[256];
			::ZeroMemory(&lvItem,sizeof(lvItem));
			::ZeroMemory(&lvItem,sizeof(256));

			lvItem.mask=LVIF_TEXT|LVIF_IMAGE;
			lvItem.iItem=m_nIndexLeftSel;
			lvItem.pszText=szBuffer;
			lvItem.cchTextMax=256;
			m_List_Left.GetItem(&lvItem);

			m_List_Right.InsertItem(0,lvItem.pszText,lvItem.iImage);
		}
		else
		{
			m_List_Left.ScreenToClient(&point);
			int nIndex=m_List_Left.HitTest(point);
			if(nIndex>=0)
			{
				strTmp.Format(_T("Drop on%dth item"),nIndex);
				AfxMessageBox(strTmp);
			}
		}
		delete m_pImgListDrag;
		m_pImgListDrag=NULL;
		m_nIndexLeftSel= -1;
	}

	CDialogEx::OnLButtonUp(nFlags, point);
}

void CTreeCtrlDemoDlg::OnLvnBegindragListLeft(NMHDR* pNMHDR, LRESULT* pResult)
{
	//LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	//// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//CPoint ptDrag,ptAction;
	//m_nIndexLeftSel=pNMLV->iItem;
	//m_pImgListDrag=m_List_Left.CreateDragImage(pNMLV->iItem,&ptDrag);
	//m_pImgListDrag->SetBkColor(RGB(0,0,0));
	//ptAction=pNMLV->ptAction;

	//SetCapture();
	//m_pImgListDrag->BeginDrag(0,ptAction-ptDrag);
	//m_List_Left.ClientToScreen(&ptAction);
	//m_pImgListDrag->DragEnter(NULL,ptAction);

	//*pResult = 0;
}
