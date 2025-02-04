// MyListView.cpp : 구현 파일입니다.
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



// CMyListView 메시지 처리기입니다.




int CMyListView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	//CListCtrl& List =GetListCtrl();
	//List.InsertColumn(0,_T("Name"),LVCFMT_LEFT,200);
	//List.InsertItem(0,_T("Ho-sung Choi"));

	//List.ModifyStyle(LVS_TYPEMASK,LVS_REPORT);
	//
	return 0;
}
