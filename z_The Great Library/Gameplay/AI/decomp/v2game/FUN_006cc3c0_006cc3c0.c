// FUN_006cc3c0 @ 006cc3c0 body=[[006cc3c0, 006cc4c0]]


void FUN_006cc3c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_3 - param_1 >> 2 < 0x29) {
    FUN_006cd210(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    iVar1 = (param_3 - param_1 >> 2) + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006cd210(param_1,param_1 + iVar1 * 4,param_1 + iVar1 * 8,param_4,param_5);
    FUN_006cd210(param_2 + iVar1 * -4,param_2,param_2 + iVar1 * 4,param_4,param_5);
    FUN_006cd210(param_3 + iVar1 * -8,param_3 + iVar1 * -4,param_3,param_4,param_5);
    FUN_006cd210(param_1 + iVar1 * 4,param_2,param_3 + iVar1 * -4,param_4,param_5);
  }
  return;
}

