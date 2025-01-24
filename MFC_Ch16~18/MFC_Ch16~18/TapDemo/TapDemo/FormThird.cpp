// FormThird.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TapDemo.h"
#include "FormThird.h"
#include "afxdialogex.h"


// CFormThird 대화 상자입니다.

IMPLEMENT_DYNAMIC(CFormThird, CDialogEx)

CFormThird::CFormThird(CWnd* pParent /*=NULL*/)
	: CDialogEx(CFormThird::IDD, pParent)
{

}

CFormThird::~CFormThird()
{
}

void CFormThird::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFormThird, CDialogEx)
END_MESSAGE_MAP()


// CFormThird 메시지 처리기입니다.
