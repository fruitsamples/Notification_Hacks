void GetWindowGlobalRect(WindowPtr wp, Rect *src, Rect *dst){	GrafPtr	savePort;		GetPort(&savePort);	SetPort(wp);		*dst = *src;	LocalToGlobal((Point*)dst);	LocalToGlobal((Point*)&dst->bottom);		SetPort(savePort);}