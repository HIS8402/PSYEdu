
// HelloSdiView.h : CHelloSdiView 클래스의 인터페이스
//

#pragma once


class CHelloSdiView : public CEditView
{
protected: // serialization에서만 만들어집니다.
	CHelloSdiView();
	DECLARE_DYNCREATE(CHelloSdiView)

// 특성입니다.
public:
	CHelloSdiDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CHelloSdiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // HelloSdiView.cpp의 디버그 버전
inline CHelloSdiDoc* CHelloSdiView::GetDocument() const
   { return reinterpret_cast<CHelloSdiDoc*>(m_pDocument); }
#endif

