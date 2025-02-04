#pragma once


// CMyListView

class CMyListView : public CWnd
{
	DECLARE_DYNAMIC(CMyListView)

public:
	CMyListView();
	virtual ~CMyListView();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


