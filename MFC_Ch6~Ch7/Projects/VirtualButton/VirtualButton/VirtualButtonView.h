
// VirtualButtonView.h : CVirtualButtonView 클래스의 인터페이스
//

#pragma once


class CVirtualButtonView : public CView
{
protected: // serialization에서만 만들어집니다.
	CVirtualButtonView();
	DECLARE_DYNCREATE(CVirtualButtonView)

// 특성입니다.
public:
	CVirtualButtonDoc* GetDocument() const;

// 작업입니다.
public:
	CRect m_BtnRect;
	CRect m_BtnRect2;
	BOOL m_bClicked;
	BOOL m_bClicked2;
// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CVirtualButtonView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // VirtualButtonView.cpp의 디버그 버전
inline CVirtualButtonDoc* CVirtualButtonView::GetDocument() const
   { return reinterpret_cast<CVirtualButtonDoc*>(m_pDocument); }
#endif

