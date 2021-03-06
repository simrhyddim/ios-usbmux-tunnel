// ios-usbmux-tunnel options.cpp -- Make TCP tunnel connections via usbmux
//
//   Copyright (C) 2016 Foxlet <foxlet@furcode.co>
//   Copyright (C) 2010 msftguy
//   Based on iPhone_tunnel by novi <novi.mad@gmail.com> http://novis.jimdo.com
//

#include "main.h"


char g_ibss        [BUFSIZ]	= "";
char g_exploit     [BUFSIZ] = "";
char g_ibec        [BUFSIZ]	= "";
char g_ramdisk     [BUFSIZ]	= "";
char g_devicetree  [BUFSIZ]	= "";
char g_kernelcache [BUFSIZ]	= "";
char g_ramdiskCmd  [BUFSIZ]	= "ramdisk";
char g_goCmd       [BUFSIZ] = "go";
bool g_autoboot				= FALSE;
bool g_builtinApi			= FALSE;
int g_ramdiskDelay			= 5;
int g_logSeverity			= LOG_INFO;