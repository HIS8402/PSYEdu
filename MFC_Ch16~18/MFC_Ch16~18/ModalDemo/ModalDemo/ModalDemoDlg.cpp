
// ModalDemoDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "ModalDemo.h"
#include "ModalDemoDlg.h"
#include "afxdialogex.h"

#include "ModalDlg.h"
#include "ModalessDlg.h"

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


// CModalDemoDlg 대화 상자




CModalDemoDlg::CModalDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CModalDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CModalDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CModalDemoDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CModalDemoDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CModalDemoDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_Button_Font, &CModalDemoDlg::OnBnClickedButtonFont)
	ON_BN_CLICKED(IDC_Button_File, &CModalDemoDlg::OnBnClickedButtonFile)
	ON_BN_CLICKED(IDC_Button_Color, &CModalDemoDlg::OnBnClickedButtonColor)
	ON_BN_CLICKED(IDC_Button_Find, &CModalDemoDlg::OnBnClickedButtonFind)
END_MESSAGE_MAP()


// CModalDemoDlg 메시지 처리기

BOOL CModalDemoDlg::OnInitDialog()
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

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CModalDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CModalDemoDlg::OnPaint()
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
HCURSOR CModalDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CModalDemoDlg::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CModalDlg Dlg;
	INT_PTR nResult=Dlg.DoModal();
	if(nResult == IDOK)
	{
		AfxMessageBox(_T("OK 버튼 클릭!"));
	}
}


void CModalDemoDlg::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	static CModalessDlg Dlg;
	if(Dlg.GetSafeHwnd()==NULL)
	{
		Dlg.Create(IDD_Dialog_Modaless);
	}
	Dlg.ShowWindow(SW_SHOW);
}

void CModalDemoDlg::OnBnClickedButtonFont()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CClientDC dc(this);

	CString strTmp=_T("");
	LOGFONT lfont;
	::ZeroMemory(&lfont,sizeof(LOGFONT));
	lfont.lfHeight= -MulDiv(9,dc.GetDeviceCaps(LOGPIXELSY),72);
	wsprintf(lfont.lfFaceName,_T("%s"),_T("굴림"));

	CFontDialog Dlg(&lfont);
	if(Dlg.DoModal()==IDOK)
	{
		strTmp.Format(_T("Font : %s, Size : %d"),Dlg.GetFaceName(),Dlg.GetSize());

		AfxMessageBox(strTmp);
	}
}


void CModalDemoDlg::OnBnClickedButtonFile()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString strTmp=_T("");
	CFileDialog Dlg(TRUE,_T("EXE"),NULL,
		OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST,
		_T("EXE Files(*.exe)|*.exe|All Files(*.*)|*.*||"),this);
	if(Dlg.DoModal()==IDOK)
	{
		strTmp.Format(_T("Full path : %s, Filename : %s, Extension : %s"),Dlg.GetPathName(),Dlg.GetFileName(),Dlg.GetFileExt());

		AfxMessageBox(strTmp);
	}
}


void CModalDemoDlg::OnBnClickedButtonColor()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString strTmp=_T("");
	CColorDialog Dlg (RGB(0,0,0),CC_FULLOPEN);
	if(Dlg.DoModal()==IDOK)
	{
		COLORREF color = Dlg.GetColor();
		strTmp.Format(_T("RGB(%u, %u, %u)"), GetRValue(color),GetGValue(color),GetBValue(color));

		AfxMessageBox(strTmp);
	}
}


void CModalDemoDlg::OnBnClickedButtonFind()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	BROWSEINFO bi;
	TCHAR szBuffer[MAX_PATH];
	::ZeroMemory(&bi,sizeof(BROWSEINFO));
	::ZeroMemory(szBuffer,MAX_PATH);

	bi.hwndOwner		= m_hWnd;
	bi.lpszTitle				= _T(" 파일이 저장될 폴더를 선택해주세요");
	bi.ulFlags				= BIF_NEWDIALOGSTYLE | BIF_EDITBOX | BIF_RETURNONLYFSDIRS;

	LPITEMIDLIST pItemIdList = ::SHBrowseForFolder(&bi);
	if(::SHGetPathFromIDList(pItemIdList,szBuffer))
	{
		AfxMessageBox(szBuffer);
	}
}
