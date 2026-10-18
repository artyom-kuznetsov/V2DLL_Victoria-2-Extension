// __Mtxunlock @ 00aae267 body=[[00aae267, 00aae276]]


/* Library Function - Single Match
    __Mtxunlock
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __Mtxunlock(_Rmtx *param_1)

{
  LeaveCriticalSection(param_1);
  return;
}

