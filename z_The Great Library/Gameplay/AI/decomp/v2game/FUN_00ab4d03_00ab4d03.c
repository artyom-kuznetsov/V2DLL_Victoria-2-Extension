// ___DestructExceptionObject @ 00ab4d03 body=[[00ab4d03, 00ab4d45]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2010 Release */

void ___DestructExceptionObject(int *param_1)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (iVar1 = *(int *)(param_1[7] + 4), iVar1 != 0)) {
    FID_conflict__CallMemberFunction1(param_1[6],iVar1);
  }
  return;
}

