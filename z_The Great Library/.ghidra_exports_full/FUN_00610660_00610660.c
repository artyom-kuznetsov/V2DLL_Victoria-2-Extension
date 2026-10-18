// FUN_00610660 @ 00610660 body=[[00610660, 006106fb]]


void FUN_00610660(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_2 - in_ECX >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00612170();
    FUN_00612170(param_1 + iVar1 * -0x10,param_3);
    FUN_00612170(param_2 + iVar1 * -0x20,param_3);
    FUN_00612170(iVar1 * 0x10 + in_ECX,param_3);
    return;
  }
  FUN_00612170();
  return;
}

