//----------------------------------------------------------
//
//   SA-MP Multiplayer Modification For GTA:SA
//   Copyright 2013 SA-MP Team, Dan
//
//----------------------------------------------------------

#pragma once

//----------------------------------------------------------

#include <cstring>

//----------------------------------------------------------

#include "amx.h"

//----------------------------------------------------------

#define USENAMETABLE(hdr) \
	((hdr)->defsize==sizeof(AMX_FUNCSTUBNT))

#define NUMENTRIES(hdr,field,nextfield) \
	(unsigned)(((hdr)->nextfield - (hdr)->field) / (hdr)->defsize)

#define GETENTRY(hdr,table,index) \
	(AMX_FUNCSTUB *)((unsigned char*)(hdr) + (unsigned)(hdr)->table + (unsigned)index*(hdr)->defsize)

#define GETENTRYNAME(hdr,entry) \
	(USENAMETABLE(hdr) ? \
		(char *)((unsigned char*)(hdr) + (unsigned)((AMX_FUNCSTUBNT*)(entry))->nameofs) : \
		((AMX_FUNCSTUB*)(entry))->name)

//----------------------------------------------------------

#ifdef  __cplusplus
extern  "C" {
#endif

extern int AMXAPI amx_PushAddress(AMX *amx, cell *address);
extern int AMXAPI amx_GetString_(AMX *amx, cell param, char *&dest);
extern void AMXAPI amx_SetString_(AMX *amx, cell param, char *str, int len);
extern void AMXAPI amx_Redirect(AMX *amx, char *from, ucell to, AMX_NATIVE *store);

#ifdef  __cplusplus
}
#endif

//----------------------------------------------------------
// EOF
