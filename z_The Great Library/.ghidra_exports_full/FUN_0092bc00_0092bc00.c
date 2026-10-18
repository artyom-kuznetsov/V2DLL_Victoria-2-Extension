// FUN_0092bc00 @ 0092bc00 body=[[0092bc00, 0092bc9d]]


void FUN_0092bc00(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 6;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0092c070(iVar1 * 0x80 + in_EAX,param_3);
    FUN_0092c070(iVar1 * 0x40 + param_1,param_3);
    FUN_0092c070(param_2,param_3);
    FUN_0092c070(param_2 + iVar1 * -0x40,param_3);
    return;
  }
  FUN_0092c070(param_2,param_3);
  return;
}

