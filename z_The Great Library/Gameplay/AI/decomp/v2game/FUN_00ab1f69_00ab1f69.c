// ___crtExitProcess @ 00ab1f69 body=[[00ab1f69, 00ab1f7f]]


/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2010 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  ___crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

