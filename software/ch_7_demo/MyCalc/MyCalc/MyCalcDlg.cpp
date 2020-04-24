
// MyCalcDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MyCalc.h"
#include "MyCalcDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMyCalcDlg 对话框



CMyCalcDlg::CMyCalcDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MYCALC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyCalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMyCalcDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_EQU, &CMyCalcDlg::OnBnClickedButtonEqu)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, &CMyCalcDlg::OnBnClickedButtonClear)
	ON_BN_CLICKED(IDC_BUTTON_ONE, &CMyCalcDlg::OnBnClickedButtonOne)
	ON_BN_CLICKED(IDC_BUTTON_TWO, &CMyCalcDlg::OnBnClickedButtonTwo)
	ON_BN_CLICKED(IDC_BUTTON_THREE, &CMyCalcDlg::OnBnClickedButtonThree)
	ON_BN_CLICKED(IDC_BUTTON_ADD, &CMyCalcDlg::OnBnClickedButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_SUB, &CMyCalcDlg::OnBnClickedButtonSub)
	ON_BN_CLICKED(IDC_BUTTON_FOUR, &CMyCalcDlg::OnBnClickedButtonFour)
END_MESSAGE_MAP()


// CMyCalcDlg 消息处理程序

BOOL CMyCalcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMyCalcDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMyCalcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMyCalcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

CString strValue = L"0";




void CMyCalcDlg::OnBnClickedButtonClear()
{
	GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(L"");
}


void CMyCalcDlg::OnBnClickedButtonOne()
{
	CString cur;
	GetDlgItem(IDC_EDIT_SHOW)->GetWindowText(cur);
	cur += L"1";
	GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(cur);

}


void CMyCalcDlg::OnBnClickedButtonTwo()
{
	CString cur;
	GetDlgItem(IDC_EDIT_SHOW)->GetWindowText(cur);
	cur += L"2";
	GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(cur);
}


void CMyCalcDlg::OnBnClickedButtonThree()
{
	CString cur;
	GetDlgItem(IDC_EDIT_SHOW)->GetWindowText(cur);
	cur += L"3";
	GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(cur);
}

int first = 0;
int second = 0;
int add = 0;

void CMyCalcDlg::OnBnClickedButtonAdd()
{
	CString cur;
	GetDlgItem(IDC_EDIT_SHOW)->GetWindowText(cur);

	if (cur.IsEmpty())
		return;
	
	first = _ttoi(cur);
	GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(L"");
	add = 1;
}


void CMyCalcDlg::OnBnClickedButtonSub()
{
	CString cur;
	GetDlgItem(IDC_EDIT_SHOW)->GetWindowText(cur);

	if (cur.IsEmpty())
		return;

	first = _ttoi(cur);
	GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(L"");

	add = -1;
}

void CMyCalcDlg::OnBnClickedButtonEqu()
{
	CString cur;
	GetDlgItem(IDC_EDIT_SHOW)->GetWindowText(cur);

	if (cur.IsEmpty())
	{
		MessageBox(L"没有操作数", L"Info", MB_ICONERROR);
		return;
	}
	

	second = _ttoi(cur);
	//GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(L"");
	
	int res = add == 1 ? first + second : first - second;

	//cur.Format(_T("%d"), res);

	cur.Format(_T("%d%s%d=%d"),first, add==1?L"+" :L"-",second, res);
	GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(cur);
}

void CMyCalcDlg::OnBnClickedButtonFour()
{
	CString cur;
	GetDlgItem(IDC_EDIT_SHOW)->GetWindowText(cur);
	cur += L"4";
	GetDlgItem(IDC_EDIT_SHOW)->SetWindowText(cur);
}
