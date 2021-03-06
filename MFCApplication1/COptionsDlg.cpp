// COptionsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "COptionsDlg.h"
#include "afxdialogex.h"


// COptionsDlg dialog

IMPLEMENT_DYNAMIC(COptionsDlg, CDialog)

COptionsDlg::COptionsDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_OPTIONS, pParent)
	, m_Text(_T("Ciao"))
	, m_BgColor(0)
	, m_X(0)
	, m_Y(0)
{

}

COptionsDlg::~COptionsDlg()
{
}

void COptionsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TEXT, m_Text);
	DDX_Radio(pDX, IDC_RADIO_RED, m_BgColor);
	DDX_Text(pDX, IDC_EDIT_X, m_X);
	DDV_MinMaxInt(pDX, m_X, 0, 9999);
	DDX_Text(pDX, IDC_EDIT_Y, m_Y);
	DDV_MinMaxInt(pDX, m_Y, 0, 9999);
}


BEGIN_MESSAGE_MAP(COptionsDlg, CDialog)
END_MESSAGE_MAP()


// COptionsDlg message handlers
