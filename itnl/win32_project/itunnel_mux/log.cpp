// ios-usbmux-tunnel log.cpp -- Make TCP tunnel connections via usbmux
//
//   Copyright (C) 2016 Foxlet <foxlet@furcode.co>
//   Copyright (C) 2010 msftguy
//   Based on iPhone_tunnel by novi <novi.mad@gmail.com> http://novis.jimdo.com
//

#include <stdarg.h>
#include <stdio.h>
#include <libmd/libMobiledevice.h>
#include "options.h"

const char* sev2str(LOG_LEVEL severity)
{
	switch(severity)
	{
	case LOG_FATAL:
		return "FATAL";
	case LOG_ERROR:
		return "ERROR";
	case LOG_INFO: 
		return "INFO";
	case LOG_DEBUG:
		return "DEBUG";
	default:
		return "!UNKNOWN!";
	}
}

void LogPrintf(LOG_LEVEL severity, const char* fmt...)
{
	if (severity > g_logSeverity)
		return;
	va_list valist;
	va_start(valist, fmt);
	printf("[%s] ", sev2str(severity));
	vprintf(fmt, valist);
	printf("\n");
	fflush(stdout);
	va_end(valist);
}
