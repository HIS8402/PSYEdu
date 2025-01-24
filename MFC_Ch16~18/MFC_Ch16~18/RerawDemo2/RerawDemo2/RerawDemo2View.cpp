
// RerawDemo2View.cpp : CRerawDemo2View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "RerawDemo2.h"
#endif

#include "RerawDemo2Doc.h"
#include "RerawDemo2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRerawDemo2View

IMPLEMENT_DYNCREATE(CRerawDemo2View, CView)

BEGIN_MESSAGE_MAP(CRerawDemo2View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRerawDemo2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

// CRerawDemo2View 생성/소멸

CRerawDemo2View::CRerawDemo2View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CRerawDemo2View::~CRerawDemo2View()
{
}

BOOL CRerawDemo2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CRerawDemo2View 그리기

void CRerawDemo2View::OnDraw(CDC* /*pDC*/)
{
	CRerawDemo2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CRerawDemo2View 인쇄


void CRerawDemo2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CRerawDemo2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CRerawDemo2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CRerawDemo2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CRerawDemo2View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CRerawDemo2View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CRerawDemo2View 진단

#ifdef _DEBUG
void CRerawDemo2View::AssertValid() const
{
	CView::AssertValid();
}

void CRerawDemo2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRerawDemo2Doc* CRerawDemo2View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRerawDemo2Doc)));
	return (CRerawDemo2Doc*)m_pDocument;
}
#endif //_DEBUG


// CRerawDemo2View 메시지 처리기


void CRerawDemo2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CView::OnPaint()을(를) 호출하지 마십시오.
	//CRect Rect;
	//GetClientRect(&Rect);
	//dc.FillSolidRect(&Rect,RGB(192,0,0));

	//Rect-=CRect(7,7,7,7);
	//dc.SelectStockObject(NULL_PEN);
	//dc.RoundRect(&Rect,CPoint(21,21));

	//dc.SetBkMode(TRANSPARENT);
	//dc.TextOutW(30,30,_T("Test string!"));
}


BOOL CRerawDemo2View::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//CRect Rect;
	//GetClientRect(&Rect);
	//pDC->FillSolidRect(&Rect,RGB(255,255,255));

	//CImage ImageBackground;
	//ImageBackground.LoadFromResource(AfxGetInstanceHandle(),IDB_Background);
	//ImageBackground.BitBlt(pDC->m_hDC,0,0);

	CRect Rect,ParentRect;
	GetClientRect(&Rect);
	GetParent()->GetClientRect(&ParentRect);

	CPoint ptLeftTop=CPoint(0,0);
	ClientToScreen(&ptLeftTop);
	GetParent()->ScreenToClient(&ptLeftTop);

	CDC MemDC;
	CBitmap Bmp;

	MemDC.CreateCompatibleDC(NULL);
	Bmp.CreateBitmap(ParentRect.Width(),ParentRect.Height(),
									MemDC.GetDeviceCaps(PLANES),
										MemDC.GetDeviceCaps(BITSPIXEL),NULL);
	CBitmap*pOldBmp=MemDC.SelectObject(&Bmp);

	GetParent()->SendMessage(WM_ERASEBKGND,(WPARAM)MemDC.m_hDC);
	pDC->BitBlt(0,0,Rect.Width(),Rect.Height(),
						&MemDC,ptLeftTop.x,ptLeftTop.y,SRCCOPY);



	return TRUE;

	//return CView::OnEraseBkgnd(pDC);
}
