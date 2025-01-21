
// CImageRgnView.h : CCImageRgnView 클래스의 인터페이스
//

#pragma once


class CCImageRgnView : public CView
{
protected: // serialization에서만 만들어집니다.
	CCImageRgnView();
	DECLARE_DYNCREATE(CCImageRgnView)

// 특성입니다.
public:
	CCImageRgnDoc* GetDocument() const;
	CImage m_ImgSample;
	CRect m_rectVisible;
	CPoint m_ptBegin;
	CPoint m_ptEnd;
	CPoint m_ptDragBegin;
	CPoint m_ptDragEnd;
	void DrawInvertLine(CPoint point);
	int		m_nZoomRate;
// 작업입니다.
public:

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
	virtual ~CCImageRgnView(); 
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint(/*CDC* pDC*/);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseHWheel(UINT nFlags, short zDelta, CPoint pt);
};

#ifndef _DEBUG  // CImageRgnView.cpp의 디버그 버전
inline CCImageRgnDoc* CCImageRgnView::GetDocument() const
   { return reinterpret_cast<CCImageRgnDoc*>(m_pDocument); }
#endif

