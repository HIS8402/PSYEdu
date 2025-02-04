// TopHtmlView.cpp : 구현 파일입니다.
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


// CTopHtmlView 진단입니다.

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


// CTopHtmlView 메시지 처리기입니다.


void CTopHtmlView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	Navigate2(_T("C:\\"));
}
