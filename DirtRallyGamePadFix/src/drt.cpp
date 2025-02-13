#include <Windows.h>
#include <stdio.h>
#include <stdint.h>
#include <Xinput.h>
#include <dxgi.h>

#include "patcher.h"

#include "../shared/ini_reader.h"

void patch()
{
	if (get_private_profile_bool("DisablePadAssists", TRUE))
		PatchByte(0xF1C471, 0xE8);
	
	// push, 0x10D83DC || -> 0x10D83E8 || 0x10D83DC = xinput_pad; 0x10D83E8 = xinput_wheel
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		init_private_profile();
		patch();
	}

	return TRUE;
}
