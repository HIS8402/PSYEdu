// ModalessDlg.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "ModalDemo.h"
#include "ModalessDlg.h"
#include "afxdialogex.h"


// CModalessDlg 대화 상자입니다.

IMPLEMENT_DYNAMIC(CModalessDlg, CDialog)

CModalessDlg::CModalessDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CModalessDlg::IDD, pParent)
{

}

CModalessDlg::~CModalessDlg()
{
}

void CModalessDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CModalessDlg, CDialog)
END_MESSAGE_MAP()


// CModalessDlg 메시지 처리기입니다.
