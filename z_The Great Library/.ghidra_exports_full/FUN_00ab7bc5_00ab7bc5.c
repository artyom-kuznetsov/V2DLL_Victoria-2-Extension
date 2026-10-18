// __invoke_watson @ 00ab7bc5 body=[[00ab7bc5, 00ab7be9]]


/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2010 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  __call_reportfault(2,0xc0000417,1);
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}

