
// CImageRgn.h : CImageRgn ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CCImageRgnApp:
// �� Ŭ������ ������ ���ؼ��� CImageRgn.cpp�� �����Ͻʽÿ�.
//

class CCImageRgnApp : public CWinApp
{
public:
	CCImageRgnApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCImageRgnApp theApp;
