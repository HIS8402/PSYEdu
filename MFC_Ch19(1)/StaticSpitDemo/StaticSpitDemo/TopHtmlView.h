#pragma once

#ifdef _WIN32_WCE
#error "Windows CE에서는 CHtmlView가 지원되지 않습니다."
#endif 

// CTopHtmlView HTML 뷰입니다.

class CTopHtmlView : public CHtmlView
{
	DECLARE_DYNCREATE(CTopHtmlView)

protected:
	CTopHtmlView();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CTopHtmlView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
};


