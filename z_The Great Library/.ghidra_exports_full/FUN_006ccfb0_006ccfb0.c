// FUN_006ccfb0 @ 006ccfb0 body=[[006ccfb0, 006cd096]]


void FUN_006ccfb0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 - param_1 >> 1 < 0x29) {
    FUN_006cd860(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = (param_3 - param_1 >> 1) + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006cd860(param_1,param_1 + iVar1 * 2,param_1 + iVar1 * 4,param_4);
    FUN_006cd860(param_2 + iVar1 * -2,param_2,param_2 + iVar1 * 2,param_4);
    FUN_006cd860(param_3 + iVar1 * -4,param_3 + iVar1 * -2,param_3,param_4);
    FUN_006cd860(param_1 + iVar1 * 2,param_2,param_3 + iVar1 * -2,param_4);
  }
  return;
}

