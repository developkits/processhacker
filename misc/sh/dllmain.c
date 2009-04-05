#include "sh.h"

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
    )
{
	switch (ul_reason_for_call)
	{
	    case DLL_PROCESS_ATTACH:
            ShInit();
            return TRUE;
	    case DLL_PROCESS_DETACH:
            ShDeinit();
		    return FALSE;
	}

	return TRUE;
}
