#pragma once


// CFormOne 대화 상자입니다.

class CFormOne : public CDialogEx
{
	DECLARE_DYNAMIC(CFormOne)

public:
	CFormOne(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CFormOne();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_Form_One };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
