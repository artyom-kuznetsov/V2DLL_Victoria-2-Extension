// FUN_00886010 @ 00886010 body=[[00886010, 0088608d]]


undefined4 * FUN_00886010(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x1c) != '\0') {
    FUN_008a8dc0();
    return param_1;
  }
  if (*(char *)(in_ECX + 0x1d) != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *param_1 = *(undefined4 *)(param_2 + 0x2c);
    param_1[1] = uVar1;
    return param_1;
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    uVar1 = *(undefined4 *)(iVar2 + 0x134);
    *param_1 = *(undefined4 *)(iVar2 + 0x130);
    param_1[1] = uVar1;
    return param_1;
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x24);
  *param_1 = *(undefined4 *)(in_ECX + 0x20);
  param_1[1] = uVar1;
  return param_1;
}

