
// ListCtrlDomoDlg.h : 헤더 파일
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// CListCtrlDomoDlg 대화 상자
class CListCtrlDomoDlg : public CDialogEx
{
// 생성입니다.
public:
	CListCtrlDomoDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_LISTCTRLDOMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_List;
	afx_msg void OnLvnEndlabeleditList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton1();
//	CButton m_ListGetItemCount;
};
