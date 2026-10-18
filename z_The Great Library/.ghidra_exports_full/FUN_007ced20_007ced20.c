// FUN_007ced20 @ 007ced20 body=[[007ced20, 007cedc2]]


void FUN_007ced20(int param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  iVar1 = in_EAX - in_ECX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_007d0f50();
    FUN_007d0f50(param_1 + iVar1 * -4,iVar1 * 4 + param_1,param_2);
    FUN_007d0f50(in_EAX + iVar1 * -8);
    FUN_007d0f50(iVar1 * 4 + in_ECX,in_EAX + iVar1 * -4,param_2);
    return;
  }
  FUN_007d0f50();
  return;
}

