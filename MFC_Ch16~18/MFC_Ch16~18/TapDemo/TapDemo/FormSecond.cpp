// FormSecond.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TapDemo.h"
#include "FormSecond.h"
#include "afxdialogex.h"


// CFormSecond 대화 상자입니다.

IMPLEMENT_DYNAMIC(CFormSecond, CDialogEx)

CFormSecond::CFormSecond(CWnd* pParent /*=NULL*/)
	: CDialogEx(CFormSecond::IDD, pParent)
{

}

CFormSecond::~CFormSecond()
{
}

void CFormSecond::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFormSecond, CDialogEx)
END_MESSAGE_MAP()


// CFormSecond 메시지 처리기입니다.
