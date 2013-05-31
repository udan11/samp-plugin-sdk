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

#include "amx/amx.h"
#include "amxtable.h"

//----------------------------------------------------------

#ifdef  __cplusplus
extern  "C" {
#endif

extern void amx_Redirect(AMX *amx, char* from, ucell to, AMX_NATIVE *store);

#ifdef  __cplusplus
}
#endif

//----------------------------------------------------------
// EOF
