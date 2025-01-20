
// MouseCombiView.cpp : CMouseCombiView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "MouseCombi.h"
#endif

#include "MouseCombiDoc.h"
#include "MouseCombiView.h"
#include "TrackWnd.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMouseCombiView

IMPLEMENT_DYNCREATE(CMouseCombiView, CView)

BEGIN_MESSAGE_MAP(CMouseCombiView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_PAINT()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_CREATE()
	ON_WM_MOUSELEAVE()
END_MESSAGE_MAP()

// CMouseCombiView ����/�Ҹ�

CMouseCombiView::CMouseCombiView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	m_ptItemText=CPoint(10,30);
	m_bDragFlag=false;
	m_bTracking = false;  // ���콺 ���� �÷��� �ʱ�ȭ
}

CMouseCombiView::~CMouseCombiView()
{
}

BOOL CMouseCombiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CMouseCombiView �׸���

void CMouseCombiView::OnDraw(CDC* /*pDC*/)
{
	CMouseCombiDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CMouseCombiView �μ�

BOOL CMouseCombiView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CMouseCombiView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CMouseCombiView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CMouseCombiView ����

#ifdef _DEBUG
void CMouseCombiView::AssertValid() const
{
	CView::AssertValid();
}

void CMouseCombiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMouseCombiDoc* CMouseCombiView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMouseCombiDoc)));
	return (CMouseCombiDoc*)m_pDocument;
}
#endif //_DEBUG


// CMouseCombiView �޽��� ó����


void CMouseCombiView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.

	CView::OnLButtonDblClk(nFlags, point);
}


void CMouseCombiView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if(point.x>=m_ptItemText.x-32 &&
		point.x<=m_ptItemText.x+32 &&
		point.y>=m_ptItemText.y-32 &&
		point.y<=m_ptItemText.y+32)
	{
		SetCapture();
		m_bDragFlag=true;
		RedrawWindow();
	}
	CView::OnLButtonDown(nFlags, point);
}


void CMouseCombiView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.

	CView::OnRButtonDown(nFlags, point);
}


void CMouseCombiView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	// �׸��� �޽����� ���ؼ��� CView::OnPaint()��(��) ȣ������ ���ʽÿ�.
	if(m_bDragFlag) dc.TextOutW(10,10,TEXT("DRAG"));
	else					dc.TextOutW(10,10,TEXT("---"));

	//dc.TextOutW(m_ptItemText.x,m_ptItemText.y,TEXT("�� ��ǻ��"));

	//<ADD Start> ����2)
	if (m_bTracking)
		dc.TextOutW(m_ptItemText.x, m_ptItemText.y, TEXT("������"));
	else
		dc.TextOutW(m_ptItemText.x, m_ptItemText.y, TEXT("�� ��ǻ��"));
	//<ADD End> ����2)
}


void CMouseCombiView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//<ADD Start> ����2)
	m_bTracking = false;
	SetWindowText(TEXT("�� ��ǻ��"));
	//<ADD End> ����2)
	if(m_bDragFlag)
	{
		m_bDragFlag=false;
		m_ptItemText=point;
		RedrawWindow();
		ReleaseCapture();
	}

	CView::OnLButtonUp(nFlags, point);
}


void CMouseCombiView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//if(m_bDragFlag)
	//{
	//	m_ptItemText=point;
	//	RedrawWindow();
	//}

	//<ADD Start> ����1)
	CRect clientRect;
	GetClientRect(&clientRect);

	if (m_bDragFlag)
	{
		if (point.x < clientRect.left)
			point.x = clientRect.left;
		if (point.y < clientRect.top)
			point.y = clientRect.top;

		if (point.x > clientRect.right - 70)
			point.x = clientRect.right - 70;
		if (point.y > clientRect.bottom - 20)
			point.y = clientRect.bottom - 20;

		m_ptItemText = point;
		RedrawWindow();
	}
	//<ADD End> ����1)

	//<ADD Start> ����2)
	CRect textRect(m_ptItemText.x, m_ptItemText.y, m_ptItemText.x + 100, m_ptItemText.y + 20);
	if (textRect.PtInRect(point))
	{
		m_bTracking = true;
		SetWindowText(TEXT("������"));
	}
	else
	{
		if (m_bTracking)
		{
			m_bTracking = false;
			SetWindowText(TEXT("Mouse Left the Window"));
		}
	}
	//<ADD End> ����2)

	CView::OnMouseMove(nFlags, point);
}


int CMouseCombiView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.
	m_wndTrack.Create(TEXT("STATIC"),TEXT("TRACK TEST"),WS_CHILD|WS_VISIBLE|WS_BORDER|SS_NOTIFY,CRect(100,10,250,160),this,1234);


	return 0;
}


void CMouseCombiView::OnMouseLeave()
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//<ADD Start> ����2)
	m_bTracking = false;
	//<ADD End> ����2)
	CView::OnMouseLeave();
}
