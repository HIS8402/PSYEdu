
// SwitchViewDemo2View.h : CSwitchViewDemo2View 클래스의 인터페이스
//

#pragma once


class CSwitchViewDemo2View : public CView
{
protected: // serialization에서만 만들어집니다.
	CSwitchViewDemo2View();
	DECLARE_DYNCREATE(CSwitchViewDemo2View)

// 특성입니다.
public:
	CSwitchViewDemo2Doc* GetDocument() const;

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
	virtual ~CSwitchViewDemo2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // SwitchViewDemo2View.cpp의 디버그 버전
inline CSwitchViewDemo2Doc* CSwitchViewDemo2View::GetDocument() const
   { return reinterpret_cast<CSwitchViewDemo2Doc*>(m_pDocument); }
#endif

