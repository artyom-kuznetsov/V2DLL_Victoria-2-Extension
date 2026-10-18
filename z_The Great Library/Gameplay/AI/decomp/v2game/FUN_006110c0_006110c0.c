// FUN_006110c0 @ 006110c0 body=[[006110c0, 0061115e]]


void FUN_006110c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_2 - in_ECX >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006126b0();
    FUN_006126b0(param_1 + iVar1 * -0x10,param_3);
    FUN_006126b0(param_2 + iVar1 * -0x20,param_3);
    FUN_006126b0(iVar1 * 0x10 + in_ECX,param_3);
    return;
  }
  FUN_006126b0();
  return;
}

