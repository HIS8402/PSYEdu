
// MainFrm.h : CMainFrame Ŭ������ �������̽�
//

#pragma once

#include "MyEditView.h"
#include "MyHtmlView.h"
#include "MyListView.h"

class CMainFrame : public CFrameWnd
{
	
protected: // serialization������ ��������ϴ�.
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Ư���Դϴ�.
public:
	CMyEditView*m_pwndEditView;
	CMyHtmlView*m_pwndHtmlView;
	CMyListView* m_pwndListView;

#define VIEWID_DEFAULT	AFX_IDW_PANE_FIRST
#define VIEWID_HTML		AFX_IDW_PANE_FIRST+10
#define VIEWID_EDIT			AFX_IDW_PANE_FIRST+20
#define VIEWID_LIST			AFX_IDW_PANE_FIRST+30

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// �����Դϴ�.
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // ��Ʈ�� ������ ���Ե� ����Դϴ�.
	CToolBar          m_wndToolBar;
	CStatusBar        m_wndStatusBar;

// ������ �޽��� �� �Լ�
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
};


