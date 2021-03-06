#pragma once
#include "afxwin.h"
#include "afxcmn.h"



// CAwesomeWrite 폼 뷰입니다.
class CAwesomeStudyDoc;
class CAwesomeWrite : public CFormView
{
	DECLARE_DYNCREATE(CAwesomeWrite)

public:
	CAwesomeWrite();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CAwesomeWrite();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AWESOMEWRITE };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnHome();
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	CEdit m_write;
	afx_msg void OnBnClickedWriteAllclear();
	afx_msg void OnBnClickedWriteSave();
	afx_msg void OnWriteSelectall();
	afx_msg void OnBnClickedWriteClose();
	afx_msg void OnWriteUndo();
	afx_msg void OnWriteCut();
	afx_msg void OnWriteCopy();
	afx_msg void OnWritePaste();
	afx_msg void OnWriteFind();
	afx_msg void OnWriteFindnext();
	afx_msg void OnWriteReplace();
	afx_msg void OnWriteGo();
	afx_msg void OnWriteDatetime();
	afx_msg void OnWriteFontstate();
	afx_msg void OnEnChangeWrite();
	HTREEITEM PicNode;
	CFindReplaceDialog *pFindDlg;
	COLORREF m_color;
	CFont m_font;

	int m_next_start;//검색을 위해 저장
	bool m_find_next; // 다음검색 함수를 위해
	bool m_replace_first; // Replace처음
protected:
	LRESULT OnFindReplaceCmd(WPARAM wParam, LPARAM lParam);
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	CTreeCtrl m_treeWrite;
	CAwesomeStudyDoc* GetDocument() const;
	afx_msg void OnNMClickWritetree(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnUpdateFileOpen(CCmdUI *pCmdUI);
	afx_msg void OnBnClickedWritesave();
};


