
// RerawDemo2View.h : CRerawDemo2View Ŭ������ �������̽�
//

#pragma once


class CRerawDemo2View : public CView
{
protected: // serialization������ ��������ϴ�.
	CRerawDemo2View();
	DECLARE_DYNCREATE(CRerawDemo2View)

// Ư���Դϴ�.
public:
	CRerawDemo2Doc* GetDocument() const;

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
	virtual ~CRerawDemo2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};

#ifndef _DEBUG  // RerawDemo2View.cpp�� ����� ����
inline CRerawDemo2Doc* CRerawDemo2View::GetDocument() const
   { return reinterpret_cast<CRerawDemo2Doc*>(m_pDocument); }
#endif

