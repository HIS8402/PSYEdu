// FormOne.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "TapDemo.h"
#include "FormOne.h"
#include "afxdialogex.h"


// CFormOne ��ȭ �����Դϴ�.

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


// CFormOne �޽��� ó�����Դϴ�.
