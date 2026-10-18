// FUN_0089cb20 @ 0089cb20 body=[[0089cb20, 0089cb98]]


undefined4 * FUN_0089cb20(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  
  if (*(char *)(in_EAX + 0x1c) != '\0') {
    FUN_008a8dc0();
    return param_1;
  }
  if (*(char *)(in_EAX + 0x1d) != '\0') {
    uVar1 = *(undefined4 *)(in_ECX + 0x30);
    *param_1 = *(undefined4 *)(in_ECX + 0x2c);
    param_1[1] = uVar1;
    return param_1;
  }
  if (*(int *)(in_EAX + 0x48) == 0) {
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x10) * 4);
    uVar1 = *(undefined4 *)(iVar2 + 0x130);
    param_1[1] = *(undefined4 *)(iVar2 + 0x134);
    *param_1 = uVar1;
    return param_1;
  }
  uVar1 = *(undefined4 *)(in_EAX + 0x48);
  *param_1 = *(undefined4 *)(in_EAX + 0x44);
  param_1[1] = uVar1;
  return param_1;
}

