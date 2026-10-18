// FUN_0073a1e0 @ 0073a1e0 body=[[0073a1e0, 0073a29b]]


void FUN_0073a1e0(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (param_2 - in_EAX) / 0x28;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0073a8b0();
    FUN_0073a8b0(param_1 + iVar1 * -0x28,iVar1 * 0x28 + param_1,param_3);
    FUN_0073a8b0(param_2 + iVar1 * -0x50,param_2,param_3);
    FUN_0073a8b0(iVar1 * 0x28 + in_EAX,param_2 + iVar1 * -0x28,param_3);
    return;
  }
  FUN_0073a8b0();
  return;
}

