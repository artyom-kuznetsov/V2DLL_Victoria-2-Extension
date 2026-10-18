// FUN_007d9130 @ 007d9130 body=[[007d9130, 007d91c8]]


void FUN_007d9130(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (param_2 - in_ECX) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_007d94b0(iVar1 * 0x18 + in_ECX);
    FUN_007d94b0(iVar1 * 0xc + param_1);
    FUN_007d94b0(param_2);
    FUN_007d94b0(param_2 + iVar1 * -0xc);
    return;
  }
  FUN_007d94b0(param_2);
  return;
}

