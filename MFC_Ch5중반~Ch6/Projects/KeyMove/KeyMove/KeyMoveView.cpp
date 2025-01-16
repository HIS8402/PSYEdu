
// KeyMoveView.cpp : CKeyMoveView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "KeyMove.h"
#endif

#include "KeyMoveDoc.h"
#include "KeyMoveView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CKeyMoveView

IMPLEMENT_DYNCREATE(CKeyMoveView, CView)

BEGIN_MESSAGE_MAP(CKeyMoveView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_KEYDOWN()
	ON_WM_CHAR()
	ON_WM_SYSKEYDOWN()
	ON_WM_SYSCHAR()
END_MESSAGE_MAP()

// CKeyMoveView 생성/소멸

CKeyMoveView::CKeyMoveView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CKeyMoveView::~CKeyMoveView()
{
}

BOOL CKeyMoveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CKeyMoveView 그리기

void CKeyMoveView::OnDraw(CDC* /*pDC*/)
{
	CKeyMoveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CKeyMoveView 인쇄

BOOL CKeyMoveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CKeyMoveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CKeyMoveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CKeyMoveView 진단

#ifdef _DEBUG
void CKeyMoveView::AssertValid() const
{
	CView::AssertValid();
}

void CKeyMoveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CKeyMoveDoc* CKeyMoveView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CKeyMoveDoc)));
	return (CKeyMoveDoc*)m_pDocument;
}
#endif //_DEBUG


// CKeyMoveView 메시지 처리기


int CKeyMoveView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	m_wndChild.Create(TEXT("STATIC"),TEXT("KeyMove"),WS_CHILD|WS_VISIBLE|WS_BORDER,CRect(100,100,200,200),this,1234);

	return 0;
}


void CKeyMoveView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//<ADD Start> 예제2)
	//CPoint ptChild;
	//CRect Rect;

	//m_wndChild.GetWindowRect(&Rect);

	//ptChild.x=Rect.left;
	//ptChild.y=Rect.top;

	//ScreenToClient(&ptChild);


	//BOOL bCtrl = (GetAsyncKeyState(VK_CONTROL) & 0x8000) != 0;

	//int addDistance = 10; // 기본 이동 거리

	//if (bCtrl) 
	//	addDistance = 100; // Ctrl 키가 눌린 경우 이동 

	//switch(nChar)
	//{
	//case VK_LEFT:
	//	ptChild.x-= addDistance;
	//	break;
	//case VK_RIGHT:
	//	ptChild.x+=addDistance;
	//	break;

	//case VK_UP:
	//	ptChild.y -= addDistance;
	//	break;

	//case VK_DOWN:
	//	ptChild.y += addDistance;
	//	break;
	//}
	

	//m_wndChild.SetWindowPos(&CWnd::wndTop, ptChild.x, ptChild.y, 0, 0, SWP_SHOWWINDOW | SWP_NOZORDER | SWP_NOSIZE);
	//<ADD End> 예제2)

	//<ADD Start> 예제3)
	CRect Rect;
	m_wndChild.GetWindowRect(&Rect);

	int addSize = 20;

	switch (nChar)
	{
	case VK_LEFT:
		Rect.right -= addSize;
		if (Rect.right < Rect.left)
			Rect.right = Rect.left;
		break;

	case VK_RIGHT:
		Rect.right += addSize;
		break;

	case VK_UP:
		Rect.bottom -= addSize;
		if (Rect.bottom < Rect.top) 
			Rect.bottom = Rect.top;
		break;

	case VK_DOWN:
		Rect.bottom += addSize;
		if (Rect.bottom > GetSystemMetrics(SM_CYSCREEN)) 
			Rect.bottom = GetSystemMetrics(SM_CYSCREEN);
		break;
	}

	if (m_wndChild.GetSafeHwnd() != nullptr) 
	{
		m_wndChild.MoveWindow(Rect.left, Rect.top, Rect.Width(), Rect.Height());
	}
	//<ADD End> 예제3)
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CKeyMoveView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CString strText=TEXT("");
	strText.Format(TEXT("%c"),nChar);

	if(nChar!=VK_RETURN && nChar != VK_BACK && nChar != VK_ESCAPE)
	{
		m_wndChild.SetWindowText(strText);
	}

	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CKeyMoveView::OnSysKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CString strMessage=TEXT("");
	WORD wResult=::GetKeyState(VK_SPACE);
	BYTE byHigh = HIBYTE(wResult);

	if(byHigh&0X01)
	{
		strMessage+=TEXT("Alt+Space, ");
		wResult=::GetKeyState(VK_CAPITAL);
		BYTE byLow=LOBYTE(wResult);
		if(byLow&0x01)strMessage+=TEXT("CAPS LOCK ON");
		else		strMessage+=TEXT("CAPS LOCK OFF");

		AfxMessageBox(strMessage);
	}

	CView::OnSysKeyDown(nChar, nRepCnt, nFlags);
}


void CKeyMoveView::OnSysChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	if(nChar==VK_RETURN)
		AfxMessageBox(TEXT("Alt + Enter"));

	else if(nChar=='s' || nChar=='S')
		AfxMessageBox(TEXT("Alt + S"));

	//<ADD Start> 예제4)
	else if(nChar=='x' || nChar=='X'){
		AfxMessageBox(TEXT("Alt + X"));
		AfxPostQuitMessage(0);
	}
	//<ADD End> 예제4)
	

	CView::OnSysChar(nChar, nRepCnt, nFlags);
}
