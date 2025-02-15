
// LogonDemoDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"


// CLogonDemoDlg 대화 상자
class CLogonDemoDlg : public CDialogEx
{
// 생성입니다.
public:
	CLogonDemoDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_LOGONDEMO_DIALOG };

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
	CString m_strID;
	afx_msg void OnBnClickedOk();
	CString m_strPassword;
	afx_msg void OnBnClickedButton1();
	BOOL m_Check;
	CListBox m_List;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CString m_strInput;
	afx_msg void OnBnClickedButtonInsertstring();
	afx_msg void OnBnClickedButtonFind();
	afx_msg void OnBnClickedButtonFindexact();
	CComboBox m_Combo_Address;
};
