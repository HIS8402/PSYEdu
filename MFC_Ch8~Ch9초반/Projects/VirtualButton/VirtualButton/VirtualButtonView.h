
// VirtualButtonView.h : CVirtualButtonView Ŭ������ �������̽�
//

#pragma once


class CVirtualButtonView : public CView
{
protected: // serialization������ ��������ϴ�.
	CVirtualButtonView();
	DECLARE_DYNCREATE(CVirtualButtonView)

// Ư���Դϴ�.
public:
	CVirtualButtonDoc* GetDocument() const;

// �۾��Դϴ�.
public:
	CRect m_BtnRect;
	CRect m_BtnRect2;
	BOOL m_bClicked;
	BOOL m_bClicked2;

	//<ADD Start> ����4)
	BOOL m_isDragging;
	CPoint m_dragStartPoint;
	CRect m_dragRect;
	//<ADD End> ����4)
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
	virtual ~CVirtualButtonView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // VirtualButtonView.cpp�� ����� ����
inline CVirtualButtonDoc* CVirtualButtonView::GetDocument() const
   { return reinterpret_cast<CVirtualButtonDoc*>(m_pDocument); }
#endif

