// FUN_006cd3c0 @ 006cd3c0 body=[[006cd3c0, 006cd4b1]]


void FUN_006cd3c0(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  
  if (param_3 - param_1 >> 2 < 0x29) {
    FUN_006cdaa0(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = (param_3 - param_1 >> 2) + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006cdaa0(param_1,param_1 + iVar1 * 4,param_1 + iVar1 * 8,param_4);
    FUN_006cdaa0(param_2 + iVar1 * -4,param_2,param_2 + iVar1 * 4,param_4);
    FUN_006cdaa0(param_3 + iVar1 * -8,param_3 + iVar1 * -4,param_3,param_4);
    FUN_006cdaa0(param_1 + iVar1 * 4,param_2,param_3 + iVar1 * -4,param_4);
  }
  return;
}

