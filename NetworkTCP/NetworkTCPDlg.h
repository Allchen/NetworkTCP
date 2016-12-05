
// NetworkTCPDlg.h : 头文件
//

#pragma once
#include "TCPSocket.h"

// CNetworkTCPDlg 对话框
class CNetworkTCPDlg : public CDialogEx
{
// 构造
public:
	CNetworkTCPDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NETWORKTCP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CTCPSocket* m_pRadarServer;				// 创建服务连接、开始服务、发送服务、关闭服务（服务端-客户端连接通讯）
	CTCPSocket* m_pCameraServer;
};
