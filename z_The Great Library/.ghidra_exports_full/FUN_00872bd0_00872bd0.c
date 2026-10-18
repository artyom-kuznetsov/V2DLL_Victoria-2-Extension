// FUN_00872bd0 @ 00872bd0 body=[[00872bd0, 00872c3a]]


int * FUN_00872bd0(int *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == DAT_013f3634) {
    *param_1 = in_ECX + 0xc;
    param_1[1] = 0;
    return param_1;
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  if ((iVar1 == 0) && (iVar1 = *(int *)(in_ECX + 0xc), iVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  FUN_00aa8ce0(param_1,iVar1,DAT_013f3660,param_2,*(undefined4 *)(in_ECX + 0x14),
               *(undefined4 *)(in_ECX + 0x18));
  return param_1;
}

