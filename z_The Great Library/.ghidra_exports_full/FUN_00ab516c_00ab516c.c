// ___BuildCatchObject @ 00ab516c body=[[00ab516c, 00ab51f0]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void ___BuildCatchObject(int param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    iVar3 = param_3[2] + 0xc + param_2;
  }
  iVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  return;
}

