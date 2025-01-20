
// VirtualButtonView.cpp : CVirtualButtonView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_PAINT()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CVirtualButtonView 생성/소멸

CVirtualButtonView::CVirtualButtonView()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	m_BtnRect=CRect(10,10,210,40);
	m_bClicked=FALSE;
	//<ADD> 예제4)
	m_isDragging = FALSE;

}

CVirtualButtonView::~CVirtualButtonView()
{
}

BOOL CVirtualButtonView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CVirtualButtonView 그리기

void CVirtualButtonView::OnDraw(CDC* /*pDC*/)
{
	CVirtualButtonDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CVirtualButtonView 인쇄

BOOL CVirtualButtonView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CVirtualButtonView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CVirtualButtonView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CVirtualButtonView 진단

#ifdef _DEBUG
void CVirtualButtonView::AssertValid() const
{
	CView::AssertValid();
}

void CVirtualButtonView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVirtualButtonDoc* CVirtualButtonView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVirtualButtonDoc)));
	return (CVirtualButtonDoc*)m_pDocument;
}
#endif //_DEBUG


// CVirtualButtonView 메시지 처리기


void CVirtualButtonView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//<ADD Start> 예제3)
	// OK 버튼
	if(m_BtnRect.PtInRect(point))
	{
		m_bClicked=!m_bClicked;
		RedrawWindow(&m_BtnRect);
	}
	// Sysyem Info 버튼
	if (m_BtnRect2.PtInRect(point))
	{
		m_bClicked2 = !m_bClicked2;
		RedrawWindow(&m_BtnRect2);
	}
	//<ADD End> 예제3)

	//<ADD Start> 예제4)
	m_dragStartPoint = point;
	m_isDragging = TRUE;
	//<ADD End> 예제4)

	CView::OnLButtonDown(nFlags, point);
}


void CVirtualButtonView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//<ADD Start> 예제3)
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
		AfxMessageBox(L"OK 버튼을 클릭했습니다.");
	}

	if (m_BtnRect2.PtInRect(point))
	{
		AfxMessageBox(L"System Info 버튼을 클릭했습니다.");
	}

	//<ADD End> 예제3)

	//<ADD Start> 예제4)
	m_isDragging = FALSE;
	m_dragRect.SetRect(0, 0, 0, 0);
	RedrawWindow();
	//<ADD End> 예제4)

	CView::OnLButtonUp(nFlags, point);
}


void CVirtualButtonView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CView::OnPaint()을(를) 호출하지 마십시오.
	//<ADD Start> 예제3)
	// OK 버튼 그리기
	CRect Rect(m_BtnRect);
	Rect += CRect(1, 1, 1, 1); // 테두리 크기 조정
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

	// System Info 버튼을 윈도우창의 중앙에 위치하도록 설정
	CClientDC clientDC(this); // 윈도우의 클라이언트 영역을 얻기 위해 사용
	CRect clientRect;
	GetClientRect(clientRect); // 클라이언트 영역의 크기 가져오기

	// 버튼 크기 계산 (여기서는 하드코딩된 크기 사용)
	int buttonWidth = 200;
	int buttonHeight = 30;

	// 중앙 위치 계산
	int x = (clientRect.Width() - buttonWidth) / 2-600; // 가로 중앙
	int y = (clientRect.Height() - buttonHeight) / 2-260; // 세로 중앙

	// System Info 버튼의 위치 및 크기 설정
	m_BtnRect2 = CRect(x, y, x + buttonWidth, y + buttonHeight);

	// System Info 버튼 그리기
	CRect Rect2(m_BtnRect2);
	Rect2 += CRect(1, 1, 1, 1);  // 테두리 크기 조정
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
	//<ADD End> 예제3)
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

	

	//<ADD Start> 예제1)
	//RECT rect = { 10, 90, 500, 200 };
	//int rect1 =0;

	//dc.TextOut(10, 10, L"\t 이것은 실습을 위한 \n문자열입니다.");
	//dc.TabbedTextOut(10, 50, L"\t 이것은 실습을 위한 \n문자열입니다.", 1,&rect1, 20);

	//dc.DrawText(L"\t 이것은 실습을 위한 \n문자열입니다.",  &rect, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	//<ADD End> 예제1)


	//<ADD Start> 예제2)
	//RECT rect = { 10, 90, 500, 200 };
	//int rect1 = 0;

	//LOGFONT logFont = {0};
	//logFont.lfHeight = 30;							// 글꼴 크기
	//logFont.lfWeight = FW_BOLD;				// 굵기
	//logFont.lfItalic = TRUE;						// 이탤릭
	//logFont.lfUnderline = TRUE;				// 밑줄

	//CFont font;
	//font.CreateFontIndirect(&logFont);

	//dc.SelectObject(&font);

	//dc.TextOut(10, 10, L"\t 이것은 실습을 위한 \n문자열입니다.");
	//dc.TabbedTextOut(10, 50, L"\t 이것은 실습을 위한 \n문자열입니다.", 1, &rect1, 20);

	//dc.DrawText(L"\t 이것은 실습을 위한 \n문자열입니다.", &rect, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	//<ADD End> 예제2)


}

//<ADD Start> 예제4)
void CVirtualButtonView::OnMouseMove(UINT nFlags, CPoint point)
{
	CClientDC dc(this);

	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	if (m_isDragging) {
		dc.FillSolidRect(&m_dragRect, RGB(192, 192, 192));
		CString text = L"박세영";
		CRect rect = m_dragRect;
		dc.SetBkMode(TRANSPARENT);
		dc.SetTextColor(RGB(0, 0, 0));
		dc.DrawText(text, &rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	}
	else {
		dc.DrawText(L"OK", &m_BtnRect, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	}

	if (m_isDragging) {
		m_dragRect.SetRect(m_dragStartPoint, point);
		//RedrawWindow();
	}
}
//<ADD End> 예제4)