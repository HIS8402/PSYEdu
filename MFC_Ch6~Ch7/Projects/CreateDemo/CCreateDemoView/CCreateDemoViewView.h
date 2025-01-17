
// CCreateDemoViewView.h : CCCreateDemoViewView Ŭ������ �������̽�
//

#pragma once


class CCCreateDemoViewView : public CView
{
protected: // serialization������ ��������ϴ�.
	CCCreateDemoViewView();
	DECLARE_DYNCREATE(CCCreateDemoViewView)

// Ư���Դϴ�.
public:
	CCCreateDemoViewDoc* GetDocument() const;

// �۾��Դϴ�.
public:
	CWnd m_wndChild;
	CEdit m_wndChild2;


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
	virtual ~CCCreateDemoViewView();
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
};

#ifndef _DEBUG  // CCreateDemoViewView.cpp�� ����� ����
inline CCCreateDemoViewDoc* CCCreateDemoViewView::GetDocument() const
   { return reinterpret_cast<CCCreateDemoViewDoc*>(m_pDocument); }
#endif

