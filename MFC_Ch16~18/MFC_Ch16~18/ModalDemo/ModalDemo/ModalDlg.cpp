// ModalDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "ModalDemo.h"
#include "ModalDlg.h"
#include "afxdialogex.h"


// CModalDlg ��ȭ �����Դϴ�.

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


// CModalDlg �޽��� ó�����Դϴ�.


//void CModalDlg::OnBnClickedButtonModal()
//{
//	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
//	CModalDlg Dlg;
//	INT_PTR nResult=Dlg.DoModal();
//	if(nResult == IDOK)
//	{
//		AfxMessageBox(_T("OK ��ư Ŭ�� !"));
//	}
//}
