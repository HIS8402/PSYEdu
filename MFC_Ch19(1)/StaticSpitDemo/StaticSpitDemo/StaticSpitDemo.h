
// StaticSpitDemo.h : StaticSpitDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CStaticSpitDemoApp:
// �� Ŭ������ ������ ���ؼ��� StaticSpitDemo.cpp�� �����Ͻʽÿ�.
//

class CStaticSpitDemoApp : public CWinApp
{
public:
	CStaticSpitDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CStaticSpitDemoApp theApp;
