
// RedrawDemoView.cpp : CRedrawDemoView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "RedrawDemo.h"
#endif

#include "RedrawDemoDoc.h"
#include "RedrawDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRedrawDemoView

IMPLEMENT_DYNCREATE(CRedrawDemoView, CView)

BEGIN_MESSAGE_MAP(CRedrawDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CRedrawDemoView ����/�Ҹ�

CRedrawDemoView::CRedrawDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CRedrawDemoView::~CRedrawDemoView()
{
}

BOOL CRedrawDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CRedrawDemoView �׸���

void CRedrawDemoView::OnDraw(CDC* /*pDC*/)
{
	CRedrawDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CRedrawDemoView �μ�

BOOL CRedrawDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CRedrawDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CRedrawDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CRedrawDemoView ����

#ifdef _DEBUG
void CRedrawDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CRedrawDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRedrawDemoDoc* CRedrawDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRedrawDemoDoc)));
	return (CRedrawDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CRedrawDemoView �޽��� ó����


void CRedrawDemoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//CDC* pDC = GetDC();
	//pDC->Rectangle(10,10,110,110);
	//ReleaseDC(pDC);
	//CView::OnLButtonDown(nFlags, point);
}


void CRedrawDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	// �׸��� �޽����� ���ؼ��� CView::OnPaint()��(��) ȣ������ ���ʽÿ�.
	//dc.Rectangle(120,10,220,110);
	//CPen NewPen(PS_SOLID,10,RGB(0,255,0));
	//CPen*pOldPen=dc.SelectObject(&NewPen);

	//dc.MoveTo(40,40);
	//dc.LineTo(240,40);

	////CBrush NewBrush(RGB(192,192,192));
	////CBrush*pOldBrush=dc.SelectObject(&NewBrush);

	////dc.Rectangle(120,10,220,110);
	//dc.SelectObject(pOldPen);
	////dc.SelectObject(pOldBrush);

	//dc.MoveTo(40,40);
	//dc.LineTo(240,40);

	//LOGBRUSH lb;
	//lb.lbStyle=BS_SOLID;
	//lb.lbColor=RGB(0,255,0);

	//CPen arNewPen[3];
	//CPen*pOldPen=NULL;
	//arNewPen[0].CreatePen(PS_GEOMETRIC|PS_SOLID|PS_ENDCAP_ROUND,20,&lb);
	//arNewPen[1].CreatePen(PS_GEOMETRIC|PS_SOLID|PS_ENDCAP_SQUARE,20,&lb);
	//arNewPen[2].CreatePen(PS_GEOMETRIC|PS_SOLID|PS_ENDCAP_FLAT,20,&lb);

	//for(int i=0;i<3;i++)
	//{
	//	pOldPen=dc.SelectObject(&arNewPen[i]);
	//	dc.MoveTo(40,40*(i+1));
	//	dc.LineTo(240,40*(i+1));

	//	dc.SelectObject(pOldPen);
	//	dc.MoveTo(40,40*(i+1));
	//	dc.LineTo(240,40*(i+1));

	//	arNewPen[i].DeleteObject();

	//}


	//DWORD style[]={6,3};
	//LOGBRUSH lb;
	//lb.lbStyle=BS_SOLID;
	//lb.lbColor=RGB(0,255,0);

	//CPen NewPen;
	//NewPen.CreatePen(PS_GEOMETRIC | PS_USERSTYLE | PS_ENDCAP_FLAT, 10, &lb,2,style);
	//CPen*pOldPen=dc.SelectObject(&NewPen);

	//dc.MoveTo(40,40);
	//dc.LineTo(240,40);

	//dc.SelectObject(pOldPen);




	//CBrush NewBrush(HS_CROSS,RGB(0,255,0));
	//CBrush * pOldBrush=dc.SelectObject(&NewBrush);

	//dc.Rectangle(20,20,140,140);

	//dc.SelectObject(pOldBrush);




	//DWORD style[]={6,3};
	//LOGBRUSH lb;
	//lb.lbStyle=BS_SOLID;
	//lb.lbColor=RGB(0,255,0);

	//CPen NewPen;
	//NewPen.CreatePen(PS_GEOMETRIC | PS_SOLID | PS_ENDCAP_FLAT ,20, &lb);
	//CPen *pOldPen=dc.SelectObject(&NewPen);

	//CBrush NewBrush(RGB(255,0,0));
	//CBrush*pOldBrush=dc.SelectObject(&NewBrush);

	//dc.MoveTo(190,40);
	//dc.LineTo(290,190);
	//dc.MoveTo(90,190);
	//dc.LineTo(190,40);
	//dc.MoveTo(90,190);
	//dc.LineTo(290,190);

	//dc.SelectObject(pOldBrush);
	//dc.SelectObject(pOldPen);

	//dc.MoveTo(190,40);
	//dc.LineTo(290,190);
	//dc.MoveTo(90,190);
	//dc.LineTo(190,40);
	//dc.MoveTo(90,190);
	//dc.LineTo(290,190);



	//dc.BeginPath();
	//dc.MoveTo(190,40);
	//dc.LineTo(290,190);
	//dc.MoveTo(90,10);
	//dc.LineTo(190,40);
	//
	//POINT arPt[3]={ {190,40},{290,190},{90,190} };
	//dc.Polygon(arPt,3);


	//CBrush NewBrush(RGB(0,255,0));
	//CBrush*pOldBrush=dc.SelectObject(&NewBrush);

	//CRect PieRect(20,20,140,140);
	//dc.Pie(PieRect,
	//	CPoint(PieRect.CenterPoint().x, PieRect.top),
	//	CPoint(PieRect.right,PieRect.CenterPoint().y));

	//PieRect=CRect(150,20,270,140);
	//dc.Pie(PieRect,
	//	CPoint(PieRect.right,PieRect.CenterPoint().y),
	//	CPoint(PieRect.CenterPoint().x,PieRect.top));
	////dc.Ellipse(20,20,140,140);

	//dc.SelectObject(pOldBrush);


	//DWORD style[]={3,3};
	//LOGBRUSH lb;
	//lb.lbStyle=BS_SOLID;
	//lb.lbColor=RGB(0,255,0);

	//CPen NewPen;
	//NewPen.CreatePen(PS_GEOMETRIC | PS_USERSTYLE | PS_ENDCAP_FLAT | PS_JOIN_MITER, 10,&lb,2,style);
	//CPen*pOldPen=dc.SelectObject(&NewPen);

	//CBrush NewBrush(RGB(0,255,0));
	//CBrush * pOldBrush=dc.SelectObject(&NewBrush);

	//dc.RoundRect(CRect(20,20,140,140),CPoint(20,20));

	//dc.SelectObject(pOldBrush);
	//dc.SelectObject(pOldPen);

	//<ADD Start> ����1)
	//dc.Rectangle(200,200,320,320);
	//<ADD End> ����1)



	//<ADD Start> ����2)
	//CPen Pen(PS_SOLID,3,RGB(250,0,0));
	//CBrush Brush(RGB(192,192,192));

	//CPen*pOldPen=dc.SelectObject(&Pen);
	//CBrush*pOldBrush=dc.SelectObject(&Brush);

	//dc.Rectangle(200,200,320,320);

	//dc.SelectObject(pOldPen);
	//dc.SelectObject(pOldBrush);
	//<ADD End> ����2)



	//<ADD Start> ����3)
	//CPen Pen(PS_SOLID, 3, RGB(0, 255, 0));
	//CPen* pOldPen = dc.SelectObject(&Pen);

	//dc.MoveTo(200, 100);
	//dc.LineTo(300, 100);
	//dc.LineTo(350, 200);
	//dc.LineTo(300, 300);
	//dc.LineTo(200, 300);
	//dc.LineTo(150, 200);
	//dc.LineTo(200, 100);

	//dc.SelectObject(pOldPen);
	//<ADD End> ����3)



	//<ADD Start> ����4)
	//CRect rect;
 //   GetClientRect(rect);

 //   int roundRadius = 20;

 //   dc.FillSolidRect(rect, RGB(255, 255, 255));
 //   dc.RoundRect(rect, CPoint(roundRadius, roundRadius));
	//<ADD End> ����4)

//CRect rect;
//GetClientRect(&rect);
//
//int roundRadius = 50; // �ձ� �𼭸� ������
//
//dc.FillSolidRect(rect, RGB(255, 255, 255));
//dc.SelectObject(&CPen(PS_SOLID, 2, RGB(0, 0, 0)));
//
//// ��� ��
//dc.MoveTo(rect.left + roundRadius, rect.top);
//dc.LineTo(rect.right - roundRadius, rect.top);
//
//// ������ ���
//dc.LineTo(rect.right, rect.top + roundRadius);
//dc.MoveTo(rect.right, rect.top + roundRadius);
//dc.LineTo(rect.right, rect.bottom - roundRadius);
//
//// ������ �ϴ�
//dc.LineTo(rect.right - roundRadius, rect.bottom);
//dc.MoveTo(rect.right - roundRadius, rect.bottom);
//dc.LineTo(rect.left + roundRadius, rect.bottom);
//
//// ���� �ϴ�
//dc.LineTo(rect.left, rect.bottom - roundRadius);
//dc.MoveTo(rect.left, rect.bottom - roundRadius);
//dc.LineTo(rect.left, rect.top + roundRadius);
//
//// ���� ���
//dc.LineTo(rect.left + roundRadius, rect.top);
//
//// ��� �׸���
//dc.StrokePath();


}

