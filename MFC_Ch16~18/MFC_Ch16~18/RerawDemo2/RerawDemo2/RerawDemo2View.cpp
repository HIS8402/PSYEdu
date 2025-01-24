
// RerawDemo2View.cpp : CRerawDemo2View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRerawDemo2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

// CRerawDemo2View ����/�Ҹ�

CRerawDemo2View::CRerawDemo2View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CRerawDemo2View::~CRerawDemo2View()
{
}

BOOL CRerawDemo2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CRerawDemo2View �׸���

void CRerawDemo2View::OnDraw(CDC* /*pDC*/)
{
	CRerawDemo2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CRerawDemo2View �μ�


void CRerawDemo2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CRerawDemo2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CRerawDemo2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CRerawDemo2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
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


// CRerawDemo2View ����

#ifdef _DEBUG
void CRerawDemo2View::AssertValid() const
{
	CView::AssertValid();
}

void CRerawDemo2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRerawDemo2Doc* CRerawDemo2View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRerawDemo2Doc)));
	return (CRerawDemo2Doc*)m_pDocument;
}
#endif //_DEBUG


// CRerawDemo2View �޽��� ó����


void CRerawDemo2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	// �׸��� �޽����� ���ؼ��� CView::OnPaint()��(��) ȣ������ ���ʽÿ�.
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
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
