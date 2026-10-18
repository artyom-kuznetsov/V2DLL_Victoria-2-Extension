// FUN_00558a80 @ 00558a80 body=[[00558a80, 00558b1e]]


void FUN_00558a80(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_2 - in_ECX >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00559d70();
    FUN_00559d70(param_1 + iVar1 * -0x10,param_3);
    FUN_00559d70(param_2 + iVar1 * -0x20,param_3);
    FUN_00559d70(iVar1 * 0x10 + in_ECX,param_3);
    return;
  }
  FUN_00559d70();
  return;
}

