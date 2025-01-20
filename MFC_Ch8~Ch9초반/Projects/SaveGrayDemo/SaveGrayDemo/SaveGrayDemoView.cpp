
// SaveGrayDemoView.cpp : CSaveGrayDemoView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "SaveGrayDemo.h"
#endif

#include "SaveGrayDemoDoc.h"
#include "SaveGrayDemoView.h"
#include <atlimage.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSaveGrayDemoView

IMPLEMENT_DYNCREATE(CSaveGrayDemoView, CView)

BEGIN_MESSAGE_MAP(CSaveGrayDemoView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CSaveGrayDemoView 생성/소멸

CSaveGrayDemoView::CSaveGrayDemoView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CSaveGrayDemoView::~CSaveGrayDemoView()
{
}

BOOL CSaveGrayDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CSaveGrayDemoView 그리기

void CSaveGrayDemoView::OnDraw(CDC* /*pDC*/)
{
	CSaveGrayDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CSaveGrayDemoView 인쇄

BOOL CSaveGrayDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CSaveGrayDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CSaveGrayDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CSaveGrayDemoView 진단

#ifdef _DEBUG
void CSaveGrayDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CSaveGrayDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSaveGrayDemoDoc* CSaveGrayDemoView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSaveGrayDemoDoc)));
	return (CSaveGrayDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CSaveGrayDemoView 메시지 처리기


inline void RGBtoGray(COLORREF& rgb)
{

	BYTE byGray=(GetRValue(rgb)*30
		+ GetGValue(rgb)*59
		+GetBValue(rgb)*11)/100;

	rgb=RGB(byGray,byGray,byGray);
		
}

void CSaveGrayDemoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//CWnd* pWndDesktop =GetDesktopWindow();
	//CWindowDC ScrDC(pWndDesktop);
	//CClientDC dc(this);

	//CImage Image;
	//Image.Create(300,300,ScrDC.GetDeviceCaps(BITSPIXEL));

	//CDC*pDC=CDC::FromHandle(Image.GetDC());
	//pDC->BitBlt(0,0,300,300,&ScrDC,0,0,SRCCOPY);
	//Image.ReleaseDC();

	//COLORREF rgb;
	//for(int x=0;x<200;x++)
	//{
	//	for(int y=0;y<200;y++)
	//	{
	//		rgb=Image.GetPixel(x,y);
	//		RGBtoGray(rgb);
	//		Image.SetPixel(x,y,rgb);
	//	}
	//}
	//Image.BitBlt(dc.m_hDC,0,0);


	CView::OnLButtonDown(nFlags, point);
}


void CSaveGrayDemoView::OnRButtonDown(UINT nFlags, CPoint point)
{
	//CWnd* pWndDesktop = GetDesktopWindow();
	//CWindowDC ScrDC(pWndDesktop);
	//CClientDC dc(this);

	//CRect Rect;
	//pWndDesktop->GetWindowRect(&Rect);

	//CImage Image;
	//int cx = Rect.Width();
	//int cy = Rect.Height();
	//Image.Create(cx, cy, ScrDC.GetDeviceCaps(BITSPIXEL));

	//CDC* pDC = CDC::FromHandle(Image.GetDC());
	//pDC->BitBlt(0, 0, cx, cy, &ScrDC, 0, 0, SRCCOPY);
	//dc.BitBlt(0, 0, cx, cy, pDC, 0, 0, SRCCOPY); 
	//Image.ReleaseDC();

	//Image.Save(TEXT("Desktop.jpg"), Gdiplus::ImageFormatJPEG);
	//::ShellExecute(NULL, TEXT("open"), TEXT("Desktop.jpg"), NULL, NULL, SW_SHOW);


	CView::OnRButtonDown(nFlags, point);
}

void CSaveGrayDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CView::OnPaint()을(를) 호출하지 마십시오.
	//<ADD Start> 예제1)
	//CBitmap bitmap;
	//bitmap.LoadBitmap(IDB_Test_Image);

	//CRect Rect;
	//GetClientRect(&Rect);

	//CDC DC;
	//DC.CreateCompatibleDC(&dc);

	//CBitmap*pOldBitmap=DC.SelectObject(&bitmap);
	//dc.BitBlt(0,0,Rect.Width(),Rect.Height(),&DC,0,0,SRCCOPY);
	//DC.SelectObject(pOldBitmap);
	//<ADD End> 예제1)


	//<ADD Start> 예제2)
	//CBitmap bitmap;
	//bitmap.LoadBitmap(IDB_Test_Image);

	//CRect rect;
	//GetClientRect(&rect);

	//CDC memDC;
	//memDC.CreateCompatibleDC(&dc);

	//CBitmap* pOldBitmap = memDC.SelectObject(&bitmap);

	//dc.BitBlt(0, 0, rect.Width(), rect.Height(), &memDC, 0, 0, SRCCOPY);

	//CDC textDC;
	//textDC.CreateCompatibleDC(&dc);

	//CFont font;
	//font.CreatePointFont(100, _T("Arial"));
	//CFont* pOldFont = textDC.SelectObject(&font);

	//dc.SetTextColor(RGB(0, 255, 0));
	//dc.SetBkMode(TRANSPARENT);
	//dc.TextOut(50, 50, _T("박세영"));

	//memDC.SelectObject(pOldBitmap);
	//textDC.SelectObject(pOldFont);
	//<ADD End> 예제2)


	//<ADD Start> 예제3)


	//CBitmap bitmap1;
	//bitmap1.LoadBitmap(IDB_Test_Image);

	//CBitmap bitmap2;
	//bitmap2.LoadBitmap(IDB_Test_Image2);

	//CRect rect;
	//GetClientRect(&rect);

	//CDC memDC;
	//memDC.CreateCompatibleDC(&dc);

	//CBitmap* pOldBitmap1 = memDC.SelectObject(&bitmap1);
	//dc.BitBlt(0, 0, rect.Width(), rect.Height(), &memDC, 0, 0, SRCINVERT);

	//CBitmap* pOldBitmap2 = memDC.SelectObject(&bitmap2);
	//dc.BitBlt(0, 0, rect.Width(), rect.Height(), &memDC, 0, 0, SRCINVERT);

	//memDC.SelectObject(pOldBitmap1);
	//memDC.SelectObject(pOldBitmap2);

	//<ADD End> 예제3)
}
