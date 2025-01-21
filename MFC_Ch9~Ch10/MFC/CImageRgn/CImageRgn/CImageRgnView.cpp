
// CImageRgnView.cpp : CCImageRgnView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
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

// CCImageRgnView ����/�Ҹ�

CCImageRgnView::CCImageRgnView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
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
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CCImageRgnView �׸���

void CCImageRgnView::OnDraw(CDC* pDC)
{
	CCImageRgnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
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


// CCImageRgnView �μ�

BOOL CCImageRgnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CCImageRgnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CCImageRgnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CCImageRgnView ����

#ifdef _DEBUG
void CCImageRgnView::AssertValid() const
{
	CView::AssertValid();
}

void CCImageRgnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCImageRgnDoc* CCImageRgnView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCImageRgnDoc)));
	return (CCImageRgnDoc*)m_pDocument;
}
#endif //_DEBUG


// CCImageRgnView �޽��� ó����


int CCImageRgnView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.
	m_rectVisible=CRect(0,0,0,0);
	m_ImgSample.LoadFromResource(AfxGetInstanceHandle(),IDB_Sample);

	return 0;
}


void CCImageRgnView::OnPaint(/*CDC* pDC*/)
{
	CPaintDC dc(this); // device context for painting
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	// �׸��� �޽����� ���ؼ��� CView::OnPaint()��(��) ȣ������ ���ʽÿ�.
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
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//SetCapture();
	//m_ptDragBegin=point;
	//m_ptDragEnd=point;

	CView::OnLButtonDown(nFlags, point);
}


void CCImageRgnView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
	// �� ����� ����Ϸ��� Windows Vista �̻��� �־�� �մϴ�.
	// _WIN32_WINNT ��ȣ�� 0x0600���� ũ�ų� ���ƾ� �մϴ�.
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
