
// CCreateDemoView.h : CCreateDemoView ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CCCreateDemoViewApp:
// �� Ŭ������ ������ ���ؼ��� CCreateDemoView.cpp�� �����Ͻʽÿ�.
//

class CCCreateDemoViewApp : public CWinApp
{
public:
	CCCreateDemoViewApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCCreateDemoViewApp theApp;
