#pragma once


// CModalessDlg ��ȭ �����Դϴ�.

class CModalessDlg : public CDialog
{
	DECLARE_DYNAMIC(CModalessDlg)

public:
	CModalessDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CModalessDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_Dialog_Modaless };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
