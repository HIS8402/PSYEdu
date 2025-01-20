
// TextRgnView.cpp : CTextRgnView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "TextRgn.h"
#endif

#include "TextRgnDoc.h"
#include "TextRgnView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTextRgnView

IMPLEMENT_DYNCREATE(CTextRgnView, CView)

BEGIN_MESSAGE_MAP(CTextRgnView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CTextRgnView 생성/소멸

CTextRgnView::CTextRgnView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CTextRgnView::~CTextRgnView()
{
}

BOOL CTextRgnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CTextRgnView 그리기

void CTextRgnView::OnDraw(CDC* /*pDC*/)
{
	CTextRgnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CTextRgnView 인쇄

BOOL CTextRgnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CTextRgnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CTextRgnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CTextRgnView 진단

#ifdef _DEBUG
void CTextRgnView::AssertValid() const
{
	CView::AssertValid();
}

void CTextRgnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTextRgnDoc* CTextRgnView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTextRgnDoc)));
	return (CTextRgnDoc*)m_pDocument;
}
#endif //_DEBUG


// CTextRgnView 메시지 처리기


void CTextRgnView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CView::OnPaint()을(를) 호출하지 마십시오.
	CRect rectLeft=CRect(50,50,250,150);
	CRect rectRight=CRect(250,50,450,150);
	dc.FillSolidRect(&rectLeft,RGB(192,0,0));
	dc.FillSolidRect(&rectRight,RGB(192,192,192));

	CRgn rgnLeft,rgnRight;
	rgnLeft.CreateRectRgnIndirect(rectLeft);
	rgnRight.CreateRectRgnIndirect(rectRight);

	LOGFONT lf;
	::ZeroMemory(&lf,sizeof(lf));
	lf.lfHeight=72;
	wsprintf(lf.lfFaceName,_T("%s"),_T("Arial Black"));
	CFont NewFont;
	NewFont.CreateFontIndirect(&lf);
	CFont*pOldFont=dc.SelectObject(&NewFont);

	dc.SetBkMode(TRANSPARENT);

	dc.SetTextColor(RGB(192,192,192));
	dc.SelectClipRgn(&rgnLeft);
	dc.TextOutW(60,65,TEXT("TEST STRING"));

	dc.SetTextColor(RGB(192,0,0));
	dc.SelectClipRgn(&rgnRight);
	dc.TextOutW(60,65,TEXT("TEST STRING"));

	dc.SelectObject(pOldFont);

}
