// FUN_00873a80 @ 00873a80 body=[[00873a80, 00873aea]]


int * FUN_00873a80(int *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == DAT_013f3654) {
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
  FUN_00aa8ce0(param_1,iVar1,DAT_013f3650,param_2,*(undefined4 *)(in_ECX + 0x14),
               *(undefined4 *)(in_ECX + 0x18));
  return param_1;
}

