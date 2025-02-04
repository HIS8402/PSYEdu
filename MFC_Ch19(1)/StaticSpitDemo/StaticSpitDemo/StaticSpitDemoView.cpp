
// StaticSpitDemoView.cpp : CStaticSpitDemoView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "StaticSpitDemo.h"
#endif

#include "StaticSpitDemoDoc.h"
#include "StaticSpitDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CStaticSpitDemoView

IMPLEMENT_DYNCREATE(CStaticSpitDemoView, CView)

BEGIN_MESSAGE_MAP(CStaticSpitDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CStaticSpitDemoView ����/�Ҹ�

CStaticSpitDemoView::CStaticSpitDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CStaticSpitDemoView::~CStaticSpitDemoView()
{
}

BOOL CStaticSpitDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CStaticSpitDemoView �׸���

void CStaticSpitDemoView::OnDraw(CDC* /*pDC*/)
{
	CStaticSpitDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CStaticSpitDemoView �μ�

BOOL CStaticSpitDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CStaticSpitDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CStaticSpitDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CStaticSpitDemoView ����

#ifdef _DEBUG
void CStaticSpitDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CStaticSpitDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CStaticSpitDemoDoc* CStaticSpitDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CStaticSpitDemoDoc)));
	return (CStaticSpitDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CStaticSpitDemoView �޽��� ó����
