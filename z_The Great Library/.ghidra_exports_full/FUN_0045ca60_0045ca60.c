// FUN_0045ca60 @ 0045ca60 body=[[0045ca60, 0045cafd]]


void FUN_0045ca60(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_2 - in_ECX >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0045d360();
    FUN_0045d360(param_1 + iVar1 * -8,param_3);
    FUN_0045d360(param_2 + iVar1 * -0x10,param_3);
    FUN_0045d360(iVar1 * 8 + in_ECX,param_3);
    return;
  }
  FUN_0045d360();
  return;
}

