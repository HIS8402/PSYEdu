
// TreeCtrlDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"


// CTreeCtrlDemoDlg ��ȭ ����
class CTreeCtrlDemoDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CTreeCtrlDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_TREECTRLDEMO_DIALOG };

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
public:
	CTreeCtrl m_Tree;
	void InitTreeCtrl(void);
	afx_msg void OnTvnSelchangedTree(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButtonCheckupchild();
	void CheckupChild(HTREEITEM hItem);
	CListCtrl m_List_Left;
	CListCtrl m_List_Right;
	CImageList*		m_pImgListDrag;
	int						m_nIndexLeftSel;
	
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	//afx_msg void OnTvnBeginrdragTree(NMHDR *pNMHDR, LRESULT *pResult);
	void OnLvnBegindragListLeft(NMHDR* pNMHDR, LRESULT* pResult);
};
