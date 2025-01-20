
// SaveGrayDemoView.cpp : CSaveGrayDemoView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CSaveGrayDemoView ����/�Ҹ�

CSaveGrayDemoView::CSaveGrayDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSaveGrayDemoView::~CSaveGrayDemoView()
{
}

BOOL CSaveGrayDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CSaveGrayDemoView �׸���

void CSaveGrayDemoView::OnDraw(CDC* /*pDC*/)
{
	CSaveGrayDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CSaveGrayDemoView �μ�

BOOL CSaveGrayDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CSaveGrayDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CSaveGrayDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CSaveGrayDemoView ����

#ifdef _DEBUG
void CSaveGrayDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CSaveGrayDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSaveGrayDemoDoc* CSaveGrayDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSaveGrayDemoDoc)));
	return (CSaveGrayDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CSaveGrayDemoView �޽��� ó����


inline void RGBtoGray(COLORREF& rgb)
{

	BYTE byGray=(GetRValue(rgb)*30
		+ GetGValue(rgb)*59
		+GetBValue(rgb)*11)/100;

	rgb=RGB(byGray,byGray,byGray);
		
}

void CSaveGrayDemoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	// �׸��� �޽����� ���ؼ��� CView::OnPaint()��(��) ȣ������ ���ʽÿ�.
	//<ADD Start> ����1)
	//CBitmap bitmap;
	//bitmap.LoadBitmap(IDB_Test_Image);

	//CRect Rect;
	//GetClientRect(&Rect);

	//CDC DC;
	//DC.CreateCompatibleDC(&dc);

	//CBitmap*pOldBitmap=DC.SelectObject(&bitmap);
	//dc.BitBlt(0,0,Rect.Width(),Rect.Height(),&DC,0,0,SRCCOPY);
	//DC.SelectObject(pOldBitmap);
	//<ADD End> ����1)


	//<ADD Start> ����2)
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
	//dc.TextOut(50, 50, _T("�ڼ���"));

	//memDC.SelectObject(pOldBitmap);
	//textDC.SelectObject(pOldFont);
	//<ADD End> ����2)


	//<ADD Start> ����3)


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

	//<ADD End> ����3)
}
