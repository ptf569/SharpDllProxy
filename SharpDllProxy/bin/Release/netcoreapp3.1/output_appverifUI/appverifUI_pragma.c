

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define _CRT_SECURE_NO_DEPRECATE
#pragma warning (disable : 4996)

#pragma comment(linker, "/export:DisplayMessageBoxW=tmpA50.dll.DisplayMessageBoxW,@1")
#pragma comment(linker, "/export:StartUI=tmpA50.dll.StartUI,@2")

// cl.exe /D_USRDLL /D_WINDLL appverifUI_pragma.c /MT /link /DLL /OUT:appverifUI.dll

	
	


    BOOL APIENTRY DllMain(HMODULE hModule,
        DWORD ul_reason_for_call,
        LPVOID lpReserved
    )
    {
        HANDLE threadHandle;

        switch (ul_reason_for_call)
        {
            case DLL_PROCESS_ATTACH:
            //    threadHandle = CreateThread(NULL, 0, DoMagic, NULL, 0, NULL);
            //    CloseHandle(threadHandle);

            case DLL_THREAD_ATTACH:
                break;
            case DLL_THREAD_DETACH:
                break;
            case DLL_PROCESS_DETACH:
                break;
        }
        return TRUE;
    }



