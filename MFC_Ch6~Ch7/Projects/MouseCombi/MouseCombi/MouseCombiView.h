
// MouseCombiView.h : CMouseCombiView 클래스의 인터페이스
//
#include "TrackWnd.h"

#pragma once


class CMouseCombiView : public CView
{
protected: // serialization에서만 만들어집니다.
	CMouseCombiView();
	DECLARE_DYNCREATE(CMouseCombiView)

// 특성입니다.
public:
	CMouseCombiDoc* GetDocument() const;

// 작업입니다.
public:
	CPoint	m_ptItemText;
	bool		m_bDragFlag;
	CTrackWnd m_wndTrack;
	 BOOL m_bTracking;  // 마우스 추적 상태 변수 추가

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
	virtual ~CMouseCombiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMouseLeave();
};

#ifndef _DEBUG  // MouseCombiView.cpp의 디버그 버전
inline CMouseCombiDoc* CMouseCombiView::GetDocument() const
   { return reinterpret_cast<CMouseCombiDoc*>(m_pDocument); }
#endif

