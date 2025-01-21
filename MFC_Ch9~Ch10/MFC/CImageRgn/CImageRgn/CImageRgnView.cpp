
// CImageRgnView.cpp : CCImageRgnView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "CImageRgn.h"
#endif

#include "CImageRgnDoc.h"
#include "CImageRgnView.h"
#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCImageRgnView

IMPLEMENT_DYNCREATE(CCImageRgnView, CView)

BEGIN_MESSAGE_MAP(CCImageRgnView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_PAINT()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_MOUSEHWHEEL()
END_MESSAGE_MAP()

// CCImageRgnView 생성/소멸

CCImageRgnView::CCImageRgnView()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	//m_ptBegin		=CPoint(0,0);
	//m_ptEnd		=CPoint(0,0);

	//m_ptDragBegin = CPoint(0,0);
	//m_ptDragEnd = CPoint(0,0);
	m_nZoomRate=100;

}

CCImageRgnView::~CCImageRgnView()
{
}

BOOL CCImageRgnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CCImageRgnView 그리기

void CCImageRgnView::OnDraw(CDC* pDC)
{
	CCImageRgnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	//CString strtmp=_T("");
	//strtmp.Format(_T("Pixel(HORZRES : %d VERTRES : %d),mm(HORZSIZE : %d VERTSIZE : %d)"),
	//	pDC->GetDeviceCaps(HORZRES),
	//	pDC->GetDeviceCaps(VERTRES),
	//	pDC->GetDeviceCaps(HORZSIZE),
	//	pDC->GetDeviceCaps(VERTSIZE));

	//pDC->TextOut(10,10,strtmp);
	//pDC->MoveTo(0,130);
	//pDC->LineTo(pDC->GetDeviceCaps(HORZRES),130);
	
	//CString strtmp=_T("");
	//strtmp.Format(_T("Pixel(HORZRES : %d VERTRES : %d),mm(HORZSIZE : %d VERTSIZE : %d)"),
	//	pDC->GetDeviceCaps(HORZRES),
	//	pDC->GetDeviceCaps(VERTRES),
	//	pDC->GetDeviceCaps(HORZSIZE),
	//	pDC->GetDeviceCaps(VERTSIZE));

	//if(pDC->IsPrinting())
	//{
	//	pDC->SetMapMode(MM_ISOTROPIC);
	//	pDC->SetWindowExt(100,100);
	//	pDC->SetViewportExt(600,600);
	//}

	//CFont NewFont;
	//LOGFONT lf;
	//::ZeroMemory(&lf,sizeof(lf));
	//lf.lfHeight=24;
	//wsprintf(lf.lfFaceName,_T("%s"),_T("Arial"));
	//NewFont.CreateFontIndirect(&lf);
	//CFont*pOldFont=pDC->SelectObject(&NewFont);

	//pDC->TextOut(10,10,strtmp);
	//pDC->MoveTo(0,130);
	//pDC->LineTo(pDC->GetDeviceCaps(HORZRES),130);

	//pDC->SelectObject(pOldFont);

}


// CCImageRgnView 인쇄

BOOL CCImageRgnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CCImageRgnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CCImageRgnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CCImageRgnView 진단

#ifdef _DEBUG
void CCImageRgnView::AssertValid() const
{
	CView::AssertValid();
}

void CCImageRgnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCImageRgnDoc* CCImageRgnView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCImageRgnDoc)));
	return (CCImageRgnDoc*)m_pDocument;
}
#endif //_DEBUG


// CCImageRgnView 메시지 처리기


int CCImageRgnView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	m_rectVisible=CRect(0,0,0,0);
	m_ImgSample.LoadFromResource(AfxGetInstanceHandle(),IDB_Sample);

	return 0;
}


void CCImageRgnView::OnPaint(/*CDC* pDC*/)
{
	CPaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CView::OnPaint()을(를) 호출하지 마십시오.
	//m_ImgSample.AlphaBlend(dc.m_hDC,0,0,50);
	//CRgn Rgn;
	//Rgn.CreateEllipticRgn(m_rectVisible.left,m_rectVisible.top,m_rectVisible.right,m_rectVisible.bottom);
	//dc.SelectClipRgn(&Rgn);
	//m_ImgSample.BitBlt(dc.m_hDC,0,0);


	//dc.SetMapMode(MM_LOENGLISH);
	//dc.SetWindowExt(100,100);
	//dc.SetViewportExt(m_nZoomRate,m_nZoomRate);
	//dc.SetViewportOrg(300,300);

	//CPen NewPen(PS_SOLID,15,RGB(192,0,0));
	//CPen*pOldPen=dc.SelectObject(&NewPen);
	//dc.MoveTo(-100,100);
	//dc.LineTo(100,-100);
	//dc.SelectObject(pOldPen);

	//dc.MoveTo(-1024,0);
	//dc.LineTo(1024,0);
	//dc.MoveTo(0,-1024);
	//dc.LineTo(0,1024);

	//CImage Image;
	//Image.LoadFromResource(AfxGetInstanceHandle(),IDB_Sample);
	//Image.BitBlt(dc.m_hDC,20,20);

	//dc.TextOut(20,30,_T("Test1"));
	//dc.TextOut(-50,30,_T("Test1"));
	//dc.TextOut(-50,-30,_T("Test1"));
	//dc.TextOut(20,-30,_T("Test1"));


	//CString strtmp = _T("Sample Text");

	//CFont NewFont;
	//LOGFONT lf;
	//::ZeroMemory(&lf, sizeof(lf));
	//lf.lfHeight = 36;
	//wsprintf(lf.lfFaceName, _T("%s"), _T("Arial"));
	//NewFont.CreateFontIndirectW(&lf);
	//CFont* pOldFont = dc.SelectObject(&NewFont);

	//dc.TextOut(10, 90, strtmp);
	//dc.SelectObject(pOldFont);
}


void CCImageRgnView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//if(nFlags & MK_LBUTTON)
	//{
	//	m_rectVisible=CRect(point.x-100,point.y-100,point.x+100,point.y+100);
	//	RedrawWindow();
	//}

	//if(GetCapture()==this)
	//{
	//	DrawInvertLine(point);
	//}

	CView::OnMouseMove(nFlags, point);
}

void CCImageRgnView::DrawInvertLine(CPoint point)
{
	//CClientDC dc(this);
	//CPen NewPen(PS_SOLID,40,RGB(0,128,0));
	//CPen *pOldPen=(CPen*)dc.SelectObject(&NewPen);
	//dc.SetROP2(R2_NOT);

	//dc.MoveTo(m_ptDragBegin);
	//dc.LineTo(m_ptDragEnd);

	//m_ptDragEnd=point;

	//dc.MoveTo(m_ptDragBegin);
	//dc.LineTo(m_ptDragEnd);
	//
	//dc.SelectObject(pOldPen);
}

void CCImageRgnView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//m_rectVisible=CRect(0,0,0,0);
	//RedrawWindow();
	//if(GetCapture()==this)
	//{
	//	m_ptBegin=m_ptDragBegin;
	//	m_ptEnd=m_ptDragEnd;
	//	RedrawWindow();
	//}
	//ReleaseCapture();

	CView::OnLButtonUp(nFlags, point);
}


void CCImageRgnView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//SetCapture();
	//m_ptDragBegin=point;
	//m_ptDragEnd=point;

	CView::OnLButtonDown(nFlags, point);
}


void CCImageRgnView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//CWnd*pWnd=GetDesktopWindow();
	//CWindowDC dc(pWnd);
	//CPen NewPen(PS_SOLID,10,RGB(0,0,0));
	//CPen*pOldPen=(CPen*)dc.SelectObject(&NewPen);

	//int nPrevMode=dc.SetROP2(R2_NOTXORPEN);

	//for(int i=0;i<300;i+=3)
	//{
	//	dc.Rectangle(20,10,210+i,210+i);
	//	::Sleep(5);
	//	dc.Rectangle(20,10,210+i,210+i);
	//}

	//dc.SelectObject(pOldPen);
	//dc.SetROP2(nPrevMode);
	//pWnd->RedrawWindow();

	CView::OnRButtonDown(nFlags, point);
}


void CCImageRgnView::OnMouseHWheel(UINT nFlags, short zDelta, CPoint pt)
{
	// 이 기능을 사용하려면 Windows Vista 이상이 있어야 합니다.
	// _WIN32_WINNT 기호는 0x0600보다 크거나 같아야 합니다.
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//if((nFlags & MK_CONTROL)!=MK_CONTROL)
	//	//return CView::OnMouseWheel(nFlags,zDelta,pt);

	//if(zDelta<0)
	//{
	//	m_nZoomRate+=1;
	//	if(m_nZoomRate>300)
	//		m_nZoomRate=300;
	//}
	//else
	//{
	//	m_nZoomRate-=10;
	//	if(m_nZoomRate<1) m_nZoomRate=1;
	//}

	//RedrawWindow();

	CView::OnMouseHWheel(nFlags, zDelta, pt);
}
