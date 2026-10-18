// FUN_00739c20 @ 00739c20 body=[[00739c20, 00739cce]]


void FUN_00739c20(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (param_2 - in_EAX) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0073a610(iVar1 * 0x30 + in_EAX,param_3);
    FUN_0073a610(iVar1 * 0x18 + param_1,param_3);
    FUN_0073a610(param_2,param_3);
    FUN_0073a610(param_2 + iVar1 * -0x18,param_3);
    return;
  }
  FUN_0073a610(param_2,param_3);
  return;
}

