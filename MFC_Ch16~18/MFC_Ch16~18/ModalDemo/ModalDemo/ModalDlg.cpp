// ModalDlg.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "ModalDemo.h"
#include "ModalDlg.h"
#include "afxdialogex.h"


// CModalDlg 대화 상자입니다.

IMPLEMENT_DYNAMIC(CModalDlg, CDialogEx)

CModalDlg::CModalDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CModalDlg::IDD, pParent)
{

}

CModalDlg::~CModalDlg()
{
}

void CModalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CModalDlg, CDialogEx)
	//ON_BN_CLICKED(IDC_Button_Modal, &CModalDlg::OnBnClickedButtonModal)
END_MESSAGE_MAP()


// CModalDlg 메시지 처리기입니다.


//void CModalDlg::OnBnClickedButtonModal()
//{
//	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
//	CModalDlg Dlg;
//	INT_PTR nResult=Dlg.DoModal();
//	if(nResult == IDOK)
//	{
//		AfxMessageBox(_T("OK 버튼 클릭 !"));
//	}
//}
