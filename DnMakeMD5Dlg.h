// DnMakeMD5Dlg.h : ��� ����
//

#pragma once


// CDnMakeMD5Dlg ��ȭ ����
class CDnMakeMD5Dlg : public CDialog
{
// �����Դϴ�.
public:
	CDnMakeMD5Dlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DNMAKEMD5_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CString m_szText;
	CString m_szFilePath;
	CString m_szChecksum;

public:
	afx_msg void OnBnClickedButtonOpen();
	afx_msg void OnBnClickedButtonSave();
	void DropFile(HDROP hDrop);
	
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	bool LoadFile(CString& str);
	bool SaveFile(CString str);
};
