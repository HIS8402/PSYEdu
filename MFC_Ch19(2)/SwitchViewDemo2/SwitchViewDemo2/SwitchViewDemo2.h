
// SwitchViewDemo2.h : SwitchViewDemo2 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSwitchViewDemo2App:
// �� Ŭ������ ������ ���ؼ��� SwitchViewDemo2.cpp�� �����Ͻʽÿ�.
//

class CSwitchViewDemo2App : public CWinApp
{
public:
	CSwitchViewDemo2App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSwitchViewDemo2App theApp;
