// FUN_00611580 @ 00611580 body=[[00611580, 0061161e]]


void FUN_00611580(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_2 - in_ECX >> 5;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00612940();
    FUN_00612940(param_1 + iVar1 * -0x20,param_3);
    FUN_00612940(param_2 + iVar1 * -0x40,param_3);
    FUN_00612940(iVar1 * 0x20 + in_ECX,param_3);
    return;
  }
  FUN_00612940();
  return;
}

