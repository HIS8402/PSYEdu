
// StaticSpitDemoView.h : CStaticSpitDemoView Ŭ������ �������̽�
//

#pragma once


class CStaticSpitDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CStaticSpitDemoView();
	DECLARE_DYNCREATE(CStaticSpitDemoView)

// Ư���Դϴ�.
public:
	CStaticSpitDemoDoc* GetDocument() const;

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
	virtual ~CStaticSpitDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // StaticSpitDemoView.cpp�� ����� ����
inline CStaticSpitDemoDoc* CStaticSpitDemoView::GetDocument() const
   { return reinterpret_cast<CStaticSpitDemoDoc*>(m_pDocument); }
#endif

