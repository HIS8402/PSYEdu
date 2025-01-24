
// PagerDemoView.cpp : CPagerDemoView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "PagerDemo.h"
#endif

#include "PagerDemoDoc.h"
#include "PagerDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPagerDemoView

IMPLEMENT_DYNCREATE(CPagerDemoView, CView)

BEGIN_MESSAGE_MAP(CPagerDemoView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CPagerDemoView::OnFilePrintPreview)
	ON_NOTIFY(PGN_CALCSIZE, 1234, &CPagerDemoView::OnCalcSize)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CPagerDemoView 생성/소멸

CPagerDemoView::CPagerDemoView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CPagerDemoView::~CPagerDemoView()
{
}

BOOL CPagerDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CPagerDemoView 그리기

void CPagerDemoView::OnDraw(CDC* /*pDC*/)
{
	CPagerDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CPagerDemoView 인쇄


void CPagerDemoView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CPagerDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CPagerDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CPagerDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CPagerDemoView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CPagerDemoView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CPagerDemoView 진단

#ifdef _DEBUG
void CPagerDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CPagerDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPagerDemoDoc* CPagerDemoView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPagerDemoDoc)));
	return (CPagerDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CPagerDemoView 메시지 처리기


int CPagerDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.

	m_wndPager.Create(WS_VISIBLE|WS_VISIBLE|WS_CHILD|PGS_HORZ,CRect(0,0,100,32),this,1234);

	m_wndToolBar.CreateEx(&m_wndPager);
	m_wndToolBar.LoadToolBar(IDR_MAINFRAME);

	m_wndPager.SetChild(m_wndToolBar.m_hWnd);
	m_wndPager.SetButtonSize(10);
	m_wndPager.SetBorder(1);

	return 0;
}

void CPagerDemoView::OnCalcSize(NMHDR* pNotifyStruct, LRESULT* result)

{    //자식 윈도우의 폭을 계산하는 함수

	LPNMPGCALCSIZE pNMPGCALCSIZE = (LPNMPGCALCSIZE)pNotifyStruct;
	if (pNMPGCALCSIZE->dwFlag == PGF_CALCWIDTH)
	{
		SIZE size;
		m_wndToolBar.SendMessage(TB_GETMAXSIZE, 0, (LPARAM)&size);
		pNMPGCALCSIZE->iWidth = size.cx;
	}
}