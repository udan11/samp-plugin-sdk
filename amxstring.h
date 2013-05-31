//----------------------------------------------------------
//
//   SA-MP Multiplayer Modification For GTA:SA
//   Copyright 2013 SA-MP Team, Dan
//
//----------------------------------------------------------

#pragma once

//----------------------------------------------------------

#include <cstdlib>
#include <cstring>

//----------------------------------------------------------

#include "amx/amx.h"

//----------------------------------------------------------

#ifdef  __cplusplus
extern  "C" {
#endif

extern int amx_GetString_(AMX* amx, cell param, char *&dest);
extern void amx_SetString_(AMX* amx, cell param, char *str, int len);

#ifdef  __cplusplus
}
#endif

//----------------------------------------------------------
// EOF
