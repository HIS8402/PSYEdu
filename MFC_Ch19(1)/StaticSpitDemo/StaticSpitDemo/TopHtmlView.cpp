// TopHtmlView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "StaticSpitDemo.h"
#include "TopHtmlView.h"


// CTopHtmlView

IMPLEMENT_DYNCREATE(CTopHtmlView, CHtmlView)

CTopHtmlView::CTopHtmlView()
{

}

CTopHtmlView::~CTopHtmlView()
{
}

void CTopHtmlView::DoDataExchange(CDataExchange* pDX)
{
	CHtmlView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTopHtmlView, CHtmlView)
END_MESSAGE_MAP()


// CTopHtmlView �����Դϴ�.

#ifdef _DEBUG
void CTopHtmlView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CTopHtmlView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}
#endif //_DEBUG


// CTopHtmlView �޽��� ó�����Դϴ�.


void CTopHtmlView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	Navigate2(_T("C:\\"));
}
