// FormOne.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TapDemo.h"
#include "FormOne.h"
#include "afxdialogex.h"


// CFormOne 대화 상자입니다.

IMPLEMENT_DYNAMIC(CFormOne, CDialogEx)

CFormOne::CFormOne(CWnd* pParent /*=NULL*/)
	: CDialogEx(CFormOne::IDD, pParent)
{

}

CFormOne::~CFormOne()
{
}

void CFormOne::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFormOne, CDialogEx)
END_MESSAGE_MAP()


// CFormOne 메시지 처리기입니다.
