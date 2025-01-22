
// LogonDemoDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CLogonDemoDlg ��ȭ ����
class CLogonDemoDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CLogonDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_LOGONDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
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
