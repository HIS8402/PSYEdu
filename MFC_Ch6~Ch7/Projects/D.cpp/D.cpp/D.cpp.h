
// D.cpp.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDcppApp:
// �� Ŭ������ ������ ���ؼ��� D.cpp.cpp�� �����Ͻʽÿ�.
//

class CDcppApp : public CWinApp
{
public:
	CDcppApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDcppApp theApp;