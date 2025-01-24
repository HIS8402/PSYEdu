
// PagerDemoView.cpp : CPagerDemoView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CPagerDemoView::OnFilePrintPreview)
	ON_NOTIFY(PGN_CALCSIZE, 1234, &CPagerDemoView::OnCalcSize)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CPagerDemoView ����/�Ҹ�

CPagerDemoView::CPagerDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CPagerDemoView::~CPagerDemoView()
{
}

BOOL CPagerDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CPagerDemoView �׸���

void CPagerDemoView::OnDraw(CDC* /*pDC*/)
{
	CPagerDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CPagerDemoView �μ�


void CPagerDemoView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CPagerDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CPagerDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CPagerDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
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


// CPagerDemoView ����

#ifdef _DEBUG
void CPagerDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CPagerDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPagerDemoDoc* CPagerDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPagerDemoDoc)));
	return (CPagerDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CPagerDemoView �޽��� ó����


int CPagerDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.

	m_wndPager.Create(WS_VISIBLE|WS_VISIBLE|WS_CHILD|PGS_HORZ,CRect(0,0,100,32),this,1234);

	m_wndToolBar.CreateEx(&m_wndPager);
	m_wndToolBar.LoadToolBar(IDR_MAINFRAME);

	m_wndPager.SetChild(m_wndToolBar.m_hWnd);
	m_wndPager.SetButtonSize(10);
	m_wndPager.SetBorder(1);

	return 0;
}

void CPagerDemoView::OnCalcSize(NMHDR* pNotifyStruct, LRESULT* result)

{    //�ڽ� �������� ���� ����ϴ� �Լ�

	LPNMPGCALCSIZE pNMPGCALCSIZE = (LPNMPGCALCSIZE)pNotifyStruct;
	if (pNMPGCALCSIZE->dwFlag == PGF_CALCWIDTH)
	{
		SIZE size;
		m_wndToolBar.SendMessage(TB_GETMAXSIZE, 0, (LPARAM)&size);
		pNMPGCALCSIZE->iWidth = size.cx;
	}
}