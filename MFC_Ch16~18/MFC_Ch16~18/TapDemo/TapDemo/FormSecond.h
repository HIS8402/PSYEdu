#pragma once


// CFormSecond ��ȭ �����Դϴ�.

class CFormSecond : public CDialogEx
{
	DECLARE_DYNAMIC(CFormSecond)

public:
	CFormSecond(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CFormSecond();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_Form_Second };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
