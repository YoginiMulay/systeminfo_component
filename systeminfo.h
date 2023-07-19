#ifndef _SYSTEMINFO_H_
#define _SYSTEMINFO_H_

#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <glib.h>

extern "C" {
#include "cJSON.h"
#ifdef ENABLE_SD_NOTIFY
#include <systemd/sd-daemon.h>
#endif
}

#ifdef ENABLE_IARM
#include "irMgr.h"
#include "comcastIrKeyCodes.h"
#include "libIARM.h"
#endif

/**
 * @addtogroup SYSTEMINFO_TYPES
 * @{
 */
#define IARM_BUS_SYS_INFO_NAME "SYSTEM_INFO"

#define IARM_BUS_SYSTEMINFO_API_isAvailable "isSystemInfoAvailable"

#endif /* _SYSTEMINFO_H_ */
