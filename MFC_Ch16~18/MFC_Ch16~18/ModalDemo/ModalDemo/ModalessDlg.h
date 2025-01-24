#pragma once


// CModalessDlg 대화 상자입니다.

class CModalessDlg : public CDialog
{
	DECLARE_DYNAMIC(CModalessDlg)

public:
	CModalessDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CModalessDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_Dialog_Modaless };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
