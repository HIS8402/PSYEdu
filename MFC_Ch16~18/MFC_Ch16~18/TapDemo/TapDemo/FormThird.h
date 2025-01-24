#pragma once


// CFormThird 대화 상자입니다.

class CFormThird : public CDialogEx
{
	DECLARE_DYNAMIC(CFormThird)

public:
	CFormThird(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CFormThird();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_Form_Thrid };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
