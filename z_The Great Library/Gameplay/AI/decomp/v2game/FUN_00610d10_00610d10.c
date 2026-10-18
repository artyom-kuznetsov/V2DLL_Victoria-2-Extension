// FUN_00610d10 @ 00610d10 body=[[00610d10, 00610dc3]]


void FUN_00610d10(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (param_2 - in_ECX) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006124b0();
    FUN_006124b0(param_1 + iVar1 * -0x18,param_3);
    FUN_006124b0(param_2 + iVar1 * -0x30,param_3);
    FUN_006124b0(iVar1 * 0x18 + in_ECX,param_3);
    return;
  }
  FUN_006124b0();
  return;
}

