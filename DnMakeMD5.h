// DnMakeMD5.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDnMakeMD5App:
// �� Ŭ������ ������ ���ؼ��� DnMakeMD5.cpp�� �����Ͻʽÿ�.
//

class CDnMakeMD5App : public CWinApp
{
public:
	CDnMakeMD5App();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDnMakeMD5App theApp;