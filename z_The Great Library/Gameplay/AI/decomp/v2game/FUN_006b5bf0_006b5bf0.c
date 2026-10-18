// FUN_006b5bf0 @ 006b5bf0 body=[[006b5bf0, 006b5c8e]]


void FUN_006b5bf0(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006b5f30(iVar1 * 8 + in_EAX,param_3);
    FUN_006b5f30(iVar1 * 4 + param_1,param_3);
    FUN_006b5f30(param_2,param_3);
    FUN_006b5f30(param_2 + iVar1 * -4,param_3);
    return;
  }
  FUN_006b5f30(param_2,param_3);
  return;
}

