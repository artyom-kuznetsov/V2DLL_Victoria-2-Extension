// FUN_0060e7e0 @ 0060e7e0 body=[[0060e7e0, 0060e89a]]


void FUN_0060e7e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  iVar1 = in_EAX - in_ECX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00610920();
    FUN_00610920(param_1 + iVar1 * -4,iVar1 * 4 + param_1,param_2,param_3);
    FUN_00610920(in_EAX + iVar1 * -8);
    FUN_00610920(iVar1 * 4 + in_ECX,in_EAX + iVar1 * -4,param_2,param_3);
    return;
  }
  FUN_00610920();
  return;
}

