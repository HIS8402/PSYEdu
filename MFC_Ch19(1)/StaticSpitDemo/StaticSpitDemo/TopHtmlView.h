#pragma once

#ifdef _WIN32_WCE
#error "Windows CE������ CHtmlView�� �������� �ʽ��ϴ�."
#endif 

// CTopHtmlView HTML ���Դϴ�.

class CTopHtmlView : public CHtmlView
{
	DECLARE_DYNCREATE(CTopHtmlView)

protected:
	CTopHtmlView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CTopHtmlView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
};


