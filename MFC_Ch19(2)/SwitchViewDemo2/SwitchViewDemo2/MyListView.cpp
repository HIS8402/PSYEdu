// MyListView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "SwitchViewDemo2.h"
#include "MyListView.h"


// CMyListView

IMPLEMENT_DYNAMIC(CMyListView, CWnd)

CMyListView::CMyListView()
{

}

CMyListView::~CMyListView()
{
}


BEGIN_MESSAGE_MAP(CMyListView, CWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()



// CMyListView �޽��� ó�����Դϴ�.




int CMyListView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.
	//CListCtrl& List =GetListCtrl();
	//List.InsertColumn(0,_T("Name"),LVCFMT_LEFT,200);
	//List.InsertItem(0,_T("Ho-sung Choi"));

	//List.ModifyStyle(LVS_TYPEMASK,LVS_REPORT);
	//
	return 0;
}
