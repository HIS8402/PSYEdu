
// simple.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CsimpleApp:
// �� Ŭ������ ������ ���ؼ��� simple.cpp�� �����Ͻʽÿ�.
//

class CsimpleApp : public CWinApp
{
public:
	CsimpleApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CsimpleApp theApp;