
// SdiSeqView.cpp : CSdiSeqView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "SdiSeq.h"
#endif

#include "SdiSeqDoc.h"
#include "SdiSeqView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSdiSeqView

IMPLEMENT_DYNCREATE(CSdiSeqView, CView)

BEGIN_MESSAGE_MAP(CSdiSeqView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CSdiSeqView ����/�Ҹ�

CSdiSeqView::CSdiSeqView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSdiSeqView::~CSdiSeqView()
{
}

BOOL CSdiSeqView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CSdiSeqView �׸���

void CSdiSeqView::OnDraw(CDC* /*pDC*/)
{
	CSdiSeqDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CSdiSeqView �μ�

BOOL CSdiSeqView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CSdiSeqView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CSdiSeqView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CSdiSeqView ����

#ifdef _DEBUG
void CSdiSeqView::AssertValid() const
{
	CView::AssertValid();
}

void CSdiSeqView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSdiSeqDoc* CSdiSeqView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSdiSeqDoc)));
	return (CSdiSeqDoc*)m_pDocument;
}
#endif //_DEBUG


// CSdiSeqView �޽��� ó����
