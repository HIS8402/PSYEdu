
// TapDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTapDemoApp:
// �� Ŭ������ ������ ���ؼ��� TapDemo.cpp�� �����Ͻʽÿ�.
//

class CTapDemoApp : public CWinApp
{
public:
	CTapDemoApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTapDemoApp theApp;