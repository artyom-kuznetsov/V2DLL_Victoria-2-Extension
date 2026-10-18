// FUN_0045ccd0 @ 0045ccd0 body=[[0045ccd0, 0045cd7e]]


void FUN_0045ccd0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (param_2 - in_ECX) / 0x14;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0045d470();
    FUN_0045d470(param_1 + iVar1 * -0x14,param_3);
    FUN_0045d470(param_2 + iVar1 * -0x28,param_3);
    FUN_0045d470(iVar1 * 0x14 + in_ECX,param_3);
    return;
  }
  FUN_0045d470();
  return;
}

