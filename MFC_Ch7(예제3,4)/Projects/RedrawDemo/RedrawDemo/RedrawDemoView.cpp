
// RedrawDemoView.cpp : CRedrawDemoView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CRedrawDemoView 생성/소멸

CRedrawDemoView::CRedrawDemoView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CRedrawDemoView::~CRedrawDemoView()
{
}

BOOL CRedrawDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CRedrawDemoView 그리기

void CRedrawDemoView::OnDraw(CDC* /*pDC*/)
{
	CRedrawDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CRedrawDemoView 인쇄

BOOL CRedrawDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CRedrawDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CRedrawDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CRedrawDemoView 진단

#ifdef _DEBUG
void CRedrawDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CRedrawDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRedrawDemoDoc* CRedrawDemoView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRedrawDemoDoc)));
	return (CRedrawDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CRedrawDemoView 메시지 처리기


void CRedrawDemoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//CDC* pDC = GetDC();
	//pDC->Rectangle(10,10,110,110);
	//ReleaseDC(pDC);
	//CView::OnLButtonDown(nFlags, point);
}


void CRedrawDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CView::OnPaint()을(를) 호출하지 마십시오.
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

	//<ADD Start> 예제1)
	//dc.Rectangle(200,200,320,320);
	//<ADD End> 예제1)



	//<ADD Start> 예제2)
	//CPen Pen(PS_SOLID,3,RGB(250,0,0));
	//CBrush Brush(RGB(192,192,192));

	//CPen*pOldPen=dc.SelectObject(&Pen);
	//CBrush*pOldBrush=dc.SelectObject(&Brush);

	//dc.Rectangle(200,200,320,320);

	//dc.SelectObject(pOldPen);
	//dc.SelectObject(pOldBrush);
	//<ADD End> 예제2)



	//<ADD Start> 예제3)
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
	//<ADD End> 예제3)



	//<ADD Start> 예제4)
	//CRect rect;
 //   GetClientRect(rect);

 //   int roundRadius = 20;

 //   dc.FillSolidRect(rect, RGB(255, 255, 255));
 //   dc.RoundRect(rect, CPoint(roundRadius, roundRadius));
	//<ADD End> 예제4)

//CRect rect;
//GetClientRect(&rect);
//
//int roundRadius = 50; // 둥근 모서리 반지름
//
//dc.FillSolidRect(rect, RGB(255, 255, 255));
//dc.SelectObject(&CPen(PS_SOLID, 2, RGB(0, 0, 0)));
//
//// 상단 선
//dc.MoveTo(rect.left + roundRadius, rect.top);
//dc.LineTo(rect.right - roundRadius, rect.top);
//
//// 오른쪽 상단
//dc.LineTo(rect.right, rect.top + roundRadius);
//dc.MoveTo(rect.right, rect.top + roundRadius);
//dc.LineTo(rect.right, rect.bottom - roundRadius);
//
//// 오른쪽 하단
//dc.LineTo(rect.right - roundRadius, rect.bottom);
//dc.MoveTo(rect.right - roundRadius, rect.bottom);
//dc.LineTo(rect.left + roundRadius, rect.bottom);
//
//// 왼쪽 하단
//dc.LineTo(rect.left, rect.bottom - roundRadius);
//dc.MoveTo(rect.left, rect.bottom - roundRadius);
//dc.LineTo(rect.left, rect.top + roundRadius);
//
//// 왼쪽 상단
//dc.LineTo(rect.left + roundRadius, rect.top);
//
//// 경로 그리기
//dc.StrokePath();


}

