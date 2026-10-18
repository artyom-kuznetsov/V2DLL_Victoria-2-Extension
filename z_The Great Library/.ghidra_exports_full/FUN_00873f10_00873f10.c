// FUN_00873f10 @ 00873f10 body=[[00873f10, 00873f7a]]


int * FUN_00873f10(int *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == DAT_013f3638) {
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
  FUN_00aa8ce0(param_1,iVar1,DAT_013f3648,param_2,*(undefined4 *)(in_ECX + 0x14),
               *(undefined4 *)(in_ECX + 0x18));
  return param_1;
}

