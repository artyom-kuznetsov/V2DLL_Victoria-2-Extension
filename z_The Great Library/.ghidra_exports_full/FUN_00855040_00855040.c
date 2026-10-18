// FUN_00855040 @ 00855040 body=[[00855040, 008550f0]]


void FUN_00855040(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (param_2 - in_ECX) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00855370();
    FUN_00855370(param_1 + iVar1 * -0xc,param_3);
    FUN_00855370(param_2 + iVar1 * -0x18,param_3);
    FUN_00855370(iVar1 * 0xc + in_ECX,param_3);
    return;
  }
  FUN_00855370();
  return;
}

