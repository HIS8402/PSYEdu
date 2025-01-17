
// VirtualButtonView.cpp : CVirtualButtonView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "VirtualButton.h"
#endif

#include "VirtualButtonDoc.h"
#include "VirtualButtonView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVirtualButtonView

IMPLEMENT_DYNCREATE(CVirtualButtonView, CView)

BEGIN_MESSAGE_MAP(CVirtualButtonView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CVirtualButtonView ����/�Ҹ�

CVirtualButtonView::CVirtualButtonView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	m_BtnRect=CRect(10,10,210,40);
	m_bClicked=FALSE;

}

CVirtualButtonView::~CVirtualButtonView()
{
}

BOOL CVirtualButtonView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CVirtualButtonView �׸���

void CVirtualButtonView::OnDraw(CDC* /*pDC*/)
{
	CVirtualButtonDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CVirtualButtonView �μ�

BOOL CVirtualButtonView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CVirtualButtonView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CVirtualButtonView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CVirtualButtonView ����

#ifdef _DEBUG
void CVirtualButtonView::AssertValid() const
{
	CView::AssertValid();
}

void CVirtualButtonView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVirtualButtonDoc* CVirtualButtonView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVirtualButtonDoc)));
	return (CVirtualButtonDoc*)m_pDocument;
}
#endif //_DEBUG


// CVirtualButtonView �޽��� ó����


void CVirtualButtonView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//<ADD Start> ����3)
	// OK ��ư
	if(m_BtnRect.PtInRect(point))
	{
		m_bClicked=!m_bClicked;
		RedrawWindow(&m_BtnRect);
	}
	// Sysyem Info ��ư
	if (m_BtnRect2.PtInRect(point))
	{
		m_bClicked2 = !m_bClicked2;
		RedrawWindow(&m_BtnRect2);
	}
	//<ADD End> ����3)


	CView::OnLButtonDown(nFlags, point);
}


void CVirtualButtonView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//<ADD Start> ����3)
	if (m_bClicked)
	{
		m_bClicked = !m_bClicked;
		RedrawWindow(&m_BtnRect);
	}

	if (m_bClicked2)
	{
		m_bClicked2 = !m_bClicked2;
		RedrawWindow(&m_BtnRect2);
	}

	if (m_BtnRect.PtInRect(point))
	{
		AfxMessageBox(L"��ư�� Ŭ���߽��ϴ�.");
	}

	if (m_BtnRect2.PtInRect(point))
	{
		AfxMessageBox(L"System Info ��ư�� Ŭ���߽��ϴ�.");
	}
	//<ADD End> ����3)

	CView::OnLButtonUp(nFlags, point);
}


void CVirtualButtonView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	// �׸��� �޽����� ���ؼ��� CView::OnPaint()��(��) ȣ������ ���ʽÿ�.
	//<ADD Start> ����3)
	// OK ��ư
	// OK ��ư �׸���
	CRect Rect(m_BtnRect);
	Rect += CRect(1, 1, 1, 1); // �׵θ� ũ�� ����
	dc.Rectangle(&Rect);
	dc.FillSolidRect(&m_BtnRect, ::GetSysColor(COLOR_BTNFACE));

	if (m_bClicked)
	{
		dc.Draw3dRect(m_BtnRect,
			::GetSysColor(COLOR_3DSHADOW),
			::GetSysColor(COLOR_3DLIGHT));
	}
	else
	{
		dc.Draw3dRect(m_BtnRect,
			::GetSysColor(COLOR_3DLIGHT),
			::GetSysColor(COLOR_3DSHADOW));
	}

	dc.SetBkColor(::GetSysColor(COLOR_BTNFACE));
	dc.SetTextColor(::GetSysColor(COLOR_BTNTEXT));

	if (m_bClicked)
	{
		CRect Rect = m_BtnRect;
		Rect += CRect(0, 0, 2, 2);
		dc.DrawText(L"OK", &Rect, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	}
	else
	{
		dc.DrawText(L"OK", &m_BtnRect, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	}

	// System Info ��ư �׸���
	CRect Rect2(m_BtnRect2);
	Rect2 += CRect(1, 1, 1, 1);  // �׵θ� ũ�� ����
	dc.Rectangle(&Rect2);
	dc.FillSolidRect(&m_BtnRect2, ::GetSysColor(COLOR_BTNFACE));

	if (m_bClicked2)
	{
		dc.Draw3dRect(m_BtnRect2,
			::GetSysColor(COLOR_3DSHADOW),
			::GetSysColor(COLOR_3DLIGHT));
	}
	else
	{
		dc.Draw3dRect(m_BtnRect2,
			::GetSysColor(COLOR_3DLIGHT),
			::GetSysColor(COLOR_3DSHADOW));
	}

	dc.SetBkColor(::GetSysColor(COLOR_BTNFACE));
	dc.SetTextColor(::GetSysColor(COLOR_BTNTEXT));

	if (m_bClicked2)
	{
		CRect Rect = m_BtnRect2;
		Rect += CRect(0, 0, 2, 2);
		dc.DrawText(L"System Info", &Rect, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	}
	else
	{
		dc.DrawText(L"System Info", &m_BtnRect2, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	}

	//<ADD End> ����3)
	//CRect Rect(50,50,250,100);
	//dc.FillSolidRect(&Rect,RGB(192,192,192));

	//CFont Font;
	//LOGFONT lf;
	//::ZeroMemory(&lf,sizeof(lf));
	//lf.lfHeight=24;
	//wsprintf(lf.lfFaceName,TEXT("%s"),TEXT("Arial"));

	//Font.CreateFontIndirect(&lf);
	//CFont*pOldFont=dc.SelectObject(&Font);

	//dc.SetTextColor(RGB(192,0,0));
	//dc.DrawText(TEXT("Test button"),&Rect,DT_CENTER | DT_SINGLELINE | DT_VCENTER);

	//dc.SelectObject(pOldFont);

	

	//<ADD Start> ����1)
	//RECT rect = { 10, 90, 500, 200 };
	//int rect1 =0;

	//dc.TextOut(10, 10, L"\t �̰��� �ǽ��� ���� \n���ڿ��Դϴ�.");
	//dc.TabbedTextOut(10, 50, L"\t �̰��� �ǽ��� ���� \n���ڿ��Դϴ�.", 1,&rect1, 20);

	//dc.DrawText(L"\t �̰��� �ǽ��� ���� \n���ڿ��Դϴ�.",  &rect, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	//<ADD End> ����1)


	//<ADD Start> ����2)
	//RECT rect = { 10, 90, 500, 200 };
	//int rect1 = 0;

	//LOGFONT logFont = {0};
	//logFont.lfHeight = 30;							// �۲� ũ��
	//logFont.lfWeight = FW_BOLD;				// ����
	//logFont.lfItalic = TRUE;						// ���Ÿ�
	//logFont.lfUnderline = TRUE;				// ����

	//CFont font;
	//font.CreateFontIndirect(&logFont);

	//dc.SelectObject(&font);

	//dc.TextOut(10, 10, L"\t �̰��� �ǽ��� ���� \n���ڿ��Դϴ�.");
	//dc.TabbedTextOut(10, 50, L"\t �̰��� �ǽ��� ���� \n���ڿ��Դϴ�.", 1, &rect1, 20);

	//dc.DrawText(L"\t �̰��� �ǽ��� ���� \n���ڿ��Դϴ�.", &rect, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	//<ADD End> ����2)


}
