// FUN_00817b40 @ 00817b40 body=[[00817b40, 00817b85]]


void FUN_00817b40(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (-1 < param_1) {
    iVar1 = *(int *)(in_ECX + 0x188);
    if (param_1 < *(int *)(iVar1 + 0x6bd70) - *(int *)(iVar1 + 0x6bd6c) >> 2) {
      *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(*(int *)(iVar1 + 0x6bd6c) + param_1 * 4);
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x1a0) = 0;
  return;
}

