
// KeyMoveView.cpp : CKeyMoveView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_KEYDOWN()
	ON_WM_CHAR()
	ON_WM_SYSKEYDOWN()
	ON_WM_SYSCHAR()
END_MESSAGE_MAP()

// CKeyMoveView ����/�Ҹ�

CKeyMoveView::CKeyMoveView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CKeyMoveView::~CKeyMoveView()
{
}

BOOL CKeyMoveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CKeyMoveView �׸���

void CKeyMoveView::OnDraw(CDC* /*pDC*/)
{
	CKeyMoveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CKeyMoveView �μ�

BOOL CKeyMoveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CKeyMoveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CKeyMoveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CKeyMoveView ����

#ifdef _DEBUG
void CKeyMoveView::AssertValid() const
{
	CView::AssertValid();
}

void CKeyMoveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CKeyMoveDoc* CKeyMoveView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CKeyMoveDoc)));
	return (CKeyMoveDoc*)m_pDocument;
}
#endif //_DEBUG


// CKeyMoveView �޽��� ó����


int CKeyMoveView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.
	m_wndChild.Create(TEXT("STATIC"),TEXT("KeyMove"),WS_CHILD|WS_VISIBLE|WS_BORDER,CRect(100,100,200,200),this,1234);

	return 0;
}


void CKeyMoveView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//<ADD Start> ����2)
	//CPoint ptChild;
	//CRect Rect;

	//m_wndChild.GetWindowRect(&Rect);

	//ptChild.x=Rect.left;
	//ptChild.y=Rect.top;

	//ScreenToClient(&ptChild);


	//BOOL bCtrl = (GetAsyncKeyState(VK_CONTROL) & 0x8000) != 0;

	//int addDistance = 10; // �⺻ �̵� �Ÿ�

	//if (bCtrl) 
	//	addDistance = 100; // Ctrl Ű�� ���� ��� �̵� 

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
	//<ADD End> ����2)

	//<ADD Start> ����3)
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
	//<ADD End> ����3)
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CKeyMoveView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if(nChar==VK_RETURN)
		AfxMessageBox(TEXT("Alt + Enter"));

	else if(nChar=='s' || nChar=='S')
		AfxMessageBox(TEXT("Alt + S"));

	//<ADD Start> ����4)
	else if(nChar=='x' || nChar=='X'){
		AfxMessageBox(TEXT("Alt + X"));
		AfxPostQuitMessage(0);
	}
	//<ADD End> ����4)
	

	CView::OnSysChar(nChar, nRepCnt, nFlags);
}
