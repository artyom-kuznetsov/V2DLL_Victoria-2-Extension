// FUN_004c0c00 @ 004c0c00 body=[[004c0c00, 004c0c9d]]


void FUN_004c0c00(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_2 - in_ECX >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004c0e70();
    FUN_004c0e70(param_1 + iVar1 * -8,param_3);
    FUN_004c0e70(param_2 + iVar1 * -0x10,param_3);
    FUN_004c0e70(iVar1 * 8 + in_ECX,param_3);
    return;
  }
  FUN_004c0e70();
  return;
}

