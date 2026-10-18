// FUN_008218c0 @ 008218c0 body=[[008218c0, 00821962]]


void FUN_008218c0(int param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  iVar1 = in_EAX - in_ECX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00821b20();
    FUN_00821b20(param_1 + iVar1 * -4,iVar1 * 4 + param_1,param_2);
    FUN_00821b20(in_EAX + iVar1 * -8);
    FUN_00821b20(iVar1 * 4 + in_ECX,in_EAX + iVar1 * -4,param_2);
    return;
  }
  FUN_00821b20();
  return;
}

