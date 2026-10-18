// FUN_005578e0 @ 005578e0 body=[[005578e0, 0055797d]]


void FUN_005578e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_2 - in_ECX >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_005594d0();
    FUN_005594d0(param_1 + iVar1 * -8,param_3);
    FUN_005594d0(param_2 + iVar1 * -0x10,param_3);
    FUN_005594d0(iVar1 * 8 + in_ECX,param_3);
    return;
  }
  FUN_005594d0();
  return;
}

