// CSonDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Ftn1.h"
#include "CSonDlg.h"
#include "afxdialogex.h"


// CSonDlg 대화 상자

IMPLEMENT_DYNAMIC(CSonDlg, CDialogEx)

CSonDlg::CSonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CSonDlg::~CSonDlg()
{
}

void CSonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSonDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CSonDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CSonDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CSonDlg 메시지 처리기

#include"Ftn1Dlg.h"

void CSonDlg::OnBnClickedButton1()
{
	CFtn1Dlg* dlg = (CFtn1Dlg*)GetParent();
	CString str;
	GetDlgItemText(IDC_EDIT1, str);
	dlg->m_list.AddString(str);
	DestroyWindow();
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSonDlg::OnBnClickedButton2()
{
	CFtn1Dlg* dlg = (CFtn1Dlg*)GetParent();
	dlg->m_list.ResetContent();
	DestroyWindow();
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
