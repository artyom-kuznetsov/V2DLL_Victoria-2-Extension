// FUN_0042d110 @ 0042d110 body=[[0042d110, 0042d1b0]]


void FUN_0042d110(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0042d450(iVar1 * 0x10 + in_EAX,param_3);
    FUN_0042d450(iVar1 * 8 + param_1,param_3);
    FUN_0042d450(param_2,param_3);
    FUN_0042d450(param_2 + iVar1 * -8,param_3);
    return;
  }
  FUN_0042d450(param_2,param_3);
  return;
}

