
// ModalDemoDlg.h : ��� ����
//

#pragma once


// CModalDemoDlg ��ȭ ����
class CModalDemoDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CModalDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_MODALDEMO_DIALOG };

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
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButtonFont();
	afx_msg void OnBnClickedButtonFile();
	afx_msg void OnBnClickedButtonColor();
	afx_msg void OnBnClickedButtonFind();
};
