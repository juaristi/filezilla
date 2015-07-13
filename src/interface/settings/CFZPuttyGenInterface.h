#ifndef __CFZPUTTYGENINTERFACE_H__
#define __CFZPUTTYGENINTERFACE_H__

#include <wx/process.h>

class CFZPuttyGenInterface
{
public:
	CFZPuttyGenInterface(const wxString& executable, wxWindow* parent);
	virtual ~CFZPuttyGenInterface();
	bool LoadKeyFile(wxString& keyFile, bool silent, wxString& comment, wxString& data);

protected:
	wxProcess* m_pProcess;
	bool m_initialized;
	wxString m_executable;
	wxWindow* m_parent;

	enum ReplyCode
	{
		success,
		error,
		failure
	};

	bool LoadProcess();
	bool Send(const wxString& cmd);
	enum ReplyCode GetReply(wxString& reply);
};

#endif /* __CFZPUTTYGENINTERFACE_H__ */
