#pragma once


// CFormOne ��ȭ �����Դϴ�.

class CFormOne : public CDialogEx
{
	DECLARE_DYNAMIC(CFormOne)

public:
	CFormOne(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CFormOne();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_Form_One };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
