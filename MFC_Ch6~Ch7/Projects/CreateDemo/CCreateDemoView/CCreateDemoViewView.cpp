
// CCreateDemoViewView.cpp : CCCreateDemoViewView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "CCreateDemoView.h"
#endif

#include "CCreateDemoViewDoc.h"
#include "CCreateDemoViewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCCreateDemoViewView

IMPLEMENT_DYNCREATE(CCCreateDemoViewView, CView)

BEGIN_MESSAGE_MAP(CCCreateDemoViewView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CCCreateDemoViewView ����/�Ҹ�

CCCreateDemoViewView::CCCreateDemoViewView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CCCreateDemoViewView::~CCCreateDemoViewView()
{
}

BOOL CCCreateDemoViewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CCCreateDemoViewView �׸���

void CCCreateDemoViewView::OnDraw(CDC* /*pDC*/)
{
	CCCreateDemoViewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CCCreateDemoViewView �μ�

BOOL CCCreateDemoViewView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CCCreateDemoViewView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CCCreateDemoViewView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CCCreateDemoViewView ����

#ifdef _DEBUG
void CCCreateDemoViewView::AssertValid() const
{
	CView::AssertValid();
}

void CCCreateDemoViewView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCCreateDemoViewDoc* CCCreateDemoViewView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCCreateDemoViewDoc)));
	return (CCCreateDemoViewDoc*)m_pDocument;
}
#endif //_DEBUG


// CCCreateDemoViewView �޽��� ó����

//<ADD>

int CCCreateDemoViewView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.
	//m_wndChild.Create(TEXT("STATIC"),TEXT("DEMO"),WS_CHILD | WS_VISIBLE | WS_BORDER, CRect(50,50,200,100),this,1234);
	//m_wndChild.Create(TEXT("STATIC"),TEXT("DEMO"),WS_CHILD | WS_VISIBLE | WS_BORDER, CRect(50,50,200,100),NULL,1234);
	m_wndChild.Create(TEXT("STATIC"),TEXT("DEMO"),WS_CHILD | WS_VISIBLE | WS_BORDER, CRect(50,50,200,100),this,1234);
	m_wndChild2.Create(ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_BORDER, CRect(50, 150, 250, 250), GetDesktopWindow(), 1235);



	return 0;
}
