
// LogonDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "LogonDemo.h"
#include "LogonDemoDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
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


// CLogonDemoDlg ��ȭ ����




CLogonDemoDlg::CLogonDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLogonDemoDlg::IDD, pParent)
	, m_strID(_T(""))
	, m_strPassword(_T(""))
	, m_Check(FALSE)
	, m_strInput(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CLogonDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Edit_ID, m_strID);
	DDX_Text(pDX, IDC_Edit_Password, m_strPassword);
	DDV_MaxChars(pDX, m_strID, 12);
	DDX_Check(pDX, IDC_CHECK1, m_Check);
	DDX_Control(pDX, IDC_LIST1, m_List);
	DDX_Text(pDX, IDC_Edit_Input, m_strInput);
	DDX_Control(pDX, IDC_Combo_Address, m_Combo_Address);
}

BEGIN_MESSAGE_MAP(CLogonDemoDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CLogonDemoDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &CLogonDemoDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_Button_InsertString, &CLogonDemoDlg::OnBnClickedButtonInsertstring)
	ON_BN_CLICKED(IDC_Button_Find, &CLogonDemoDlg::OnBnClickedButtonFind)
	ON_BN_CLICKED(IDC_Button_FindExact, &CLogonDemoDlg::OnBnClickedButtonFindexact)
END_MESSAGE_MAP()


// CLogonDemoDlg �޽��� ó����

BOOL CLogonDemoDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
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

	// �� ��ȭ ������ �������� �����մϴ�. ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	// TODO: ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CLogonDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�. ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CLogonDemoDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
HCURSOR CLogonDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CLogonDemoDlg::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData();
	CString strTmp=_T("");
	strTmp.Format(_T("�Է��� ID�� \"%s\"�̸� ��ȣ�� \"%s\"�Դϴ�."), m_strID, m_strPassword);
	AfxMessageBox(strTmp);

	CDialogEx::OnOK();
}


void CLogonDemoDlg::OnBnClickedButton1()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_Check=FALSE;
	UpdateData(FALSE);
	//AfxMessageBox(_T("�׽�Ʈ ��ư�� Ŭ���Ͽ����ϴ�."));
}


void CLogonDemoDlg::OnBnClickedButtonInsertstring()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData();
	m_List.InsertString(0,m_strInput);
}



void CLogonDemoDlg::OnBnClickedButton3()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData();
	m_List.InsertString(0,m_strInput);
}




void CLogonDemoDlg::OnBnClickedButtonFind()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData();
	CString strTmp = _T(""), strFind = _T("");

	int nIndex = m_List.FindString(-1, m_strInput);
	if (nIndex != LB_ERR)
	{
		m_List.GetText(nIndex, strFind);
		strTmp.Format(_T("%d:%s"), nIndex, strFind);
		AfxMessageBox(strTmp);
	}
	else
	{
		AfxMessageBox(_T("��ġ�ϴ� �׸��� ã�� �� �����ϴ�."));
	}
}


void CLogonDemoDlg::OnBnClickedButtonFindexact()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData();
	CString strTmp = _T(""), strFind = _T("");

	int nIndex = m_List.FindStringExact(-1, m_strInput);
	if (nIndex != LB_ERR)
	{
		m_List.GetText(nIndex, strFind);
		strTmp.Format(_T("%d:%s"), nIndex, strFind);
		AfxMessageBox(strTmp);
	}
	else
	{
		AfxMessageBox(_T("��ġ�ϴ� �׸��� ã�� �� �����ϴ�."));
	}
}
