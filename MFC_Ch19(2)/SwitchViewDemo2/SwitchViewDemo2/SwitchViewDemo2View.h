
// SwitchViewDemo2View.h : CSwitchViewDemo2View Ŭ������ �������̽�
//

#pragma once


class CSwitchViewDemo2View : public CView
{
protected: // serialization������ ��������ϴ�.
	CSwitchViewDemo2View();
	DECLARE_DYNCREATE(CSwitchViewDemo2View)

// Ư���Դϴ�.
public:
	CSwitchViewDemo2Doc* GetDocument() const;

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
	virtual ~CSwitchViewDemo2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // SwitchViewDemo2View.cpp�� ����� ����
inline CSwitchViewDemo2Doc* CSwitchViewDemo2View::GetDocument() const
   { return reinterpret_cast<CSwitchViewDemo2Doc*>(m_pDocument); }
#endif

