#pragma once


// CFormSecond 대화 상자입니다.

class CFormSecond : public CDialogEx
{
	DECLARE_DYNAMIC(CFormSecond)

public:
	CFormSecond(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CFormSecond();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_Form_Second };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
