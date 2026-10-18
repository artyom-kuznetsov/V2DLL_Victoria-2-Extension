// FUN_00727ed0 @ 00727ed0 body=[[00727ed0, 00727f72]]


void FUN_00727ed0(int param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  iVar1 = in_EAX - in_ECX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00728e10();
    FUN_00728e10(param_1 + iVar1 * -4,iVar1 * 4 + param_1,param_2);
    FUN_00728e10(in_EAX + iVar1 * -8);
    FUN_00728e10(iVar1 * 4 + in_ECX,in_EAX + iVar1 * -4,param_2);
    return;
  }
  FUN_00728e10();
  return;
}

