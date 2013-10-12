#ifndef _X64_DBG_H
#define _X64_DBG_H

#include <windows.h>
#include "_global.h"

#ifdef __cplusplus
extern "C"
{
#endif

const char* DLL_EXPORT _dbg_dbginit();
bool DLL_EXPORT _dbg_dbgcmdexec(const char* cmd);

#ifdef __cplusplus
}
#endif

#endif // _X64_DBG_H
