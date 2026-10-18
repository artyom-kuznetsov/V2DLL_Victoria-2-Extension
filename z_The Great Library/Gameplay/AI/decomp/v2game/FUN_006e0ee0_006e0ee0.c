// FUN_006e0ee0 @ 006e0ee0 body=[[006e0ee0, 006e0f80]]


void FUN_006e0ee0(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006e17f0(iVar1 * 0x10 + in_EAX,param_3);
    FUN_006e17f0(iVar1 * 8 + param_1,param_3);
    FUN_006e17f0(param_2,param_3);
    FUN_006e17f0(param_2 + iVar1 * -8,param_3);
    return;
  }
  FUN_006e17f0(param_2,param_3);
  return;
}

