
// CImageRgnView.h : CCImageRgnView Ŭ������ �������̽�
//

#pragma once


class CCImageRgnView : public CView
{
protected: // serialization������ ��������ϴ�.
	CCImageRgnView();
	DECLARE_DYNCREATE(CCImageRgnView)

// Ư���Դϴ�.
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
// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CCImageRgnView(); 
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
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

#ifndef _DEBUG  // CImageRgnView.cpp�� ����� ����
inline CCImageRgnDoc* CCImageRgnView::GetDocument() const
   { return reinterpret_cast<CCImageRgnDoc*>(m_pDocument); }
#endif

