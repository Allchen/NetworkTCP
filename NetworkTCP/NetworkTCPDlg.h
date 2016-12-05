
// NetworkTCPDlg.h : ͷ�ļ�
//

#pragma once
#include "TCPSocket.h"

// CNetworkTCPDlg �Ի���
class CNetworkTCPDlg : public CDialogEx
{
// ����
public:
	CNetworkTCPDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NETWORKTCP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CTCPSocket* m_pRadarServer;				// �����������ӡ���ʼ���񡢷��ͷ��񡢹رշ��񣨷����-�ͻ�������ͨѶ��
	CTCPSocket* m_pCameraServer;
};
