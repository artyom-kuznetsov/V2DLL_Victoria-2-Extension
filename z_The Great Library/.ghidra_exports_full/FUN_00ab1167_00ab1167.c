// _JumpToContinuation @ 00ab1167 body=[[00ab1167, 00ab1193]]


/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00ab1192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}

