#pragma once


// CFormThird ��ȭ �����Դϴ�.

class CFormThird : public CDialogEx
{
	DECLARE_DYNAMIC(CFormThird)

public:
	CFormThird(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CFormThird();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_Form_Thrid };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
