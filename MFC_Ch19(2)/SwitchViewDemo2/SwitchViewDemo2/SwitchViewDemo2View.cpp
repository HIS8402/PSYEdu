
// SwitchViewDemo2View.cpp : CSwitchViewDemo2View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "SwitchViewDemo2.h"
#endif

#include "SwitchViewDemo2Doc.h"
#include "SwitchViewDemo2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSwitchViewDemo2View

IMPLEMENT_DYNCREATE(CSwitchViewDemo2View, CView)

BEGIN_MESSAGE_MAP(CSwitchViewDemo2View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CSwitchViewDemo2View ����/�Ҹ�

CSwitchViewDemo2View::CSwitchViewDemo2View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSwitchViewDemo2View::~CSwitchViewDemo2View()
{
}

BOOL CSwitchViewDemo2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CSwitchViewDemo2View �׸���

void CSwitchViewDemo2View::OnDraw(CDC* /*pDC*/)
{
	CSwitchViewDemo2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CSwitchViewDemo2View �μ�

BOOL CSwitchViewDemo2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CSwitchViewDemo2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CSwitchViewDemo2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CSwitchViewDemo2View ����

#ifdef _DEBUG
void CSwitchViewDemo2View::AssertValid() const
{
	CView::AssertValid();
}

void CSwitchViewDemo2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSwitchViewDemo2Doc* CSwitchViewDemo2View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSwitchViewDemo2Doc)));
	return (CSwitchViewDemo2Doc*)m_pDocument;
}
#endif //_DEBUG


// CSwitchViewDemo2View �޽��� ó����
