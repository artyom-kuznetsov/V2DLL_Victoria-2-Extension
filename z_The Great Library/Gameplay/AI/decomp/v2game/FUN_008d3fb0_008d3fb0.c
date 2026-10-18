// FUN_008d3fb0 @ 008d3fb0 body=[[008d3fb0, 008d3ffb]]


undefined4 * FUN_008d3fb0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_EAX;
  int in_ECX;
  
  if (*(char *)(in_EAX + 0x18) != '\0') {
    FUN_008a8dc0();
    return param_1;
  }
  if (*(char *)(in_EAX + 0x19) != '\0') {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x2c);
    param_1[1] = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x30);
    *param_1 = uVar1;
    return param_1;
  }
  uVar1 = *(undefined4 *)(in_EAX + 0x1c);
  param_1[1] = *(undefined4 *)(in_EAX + 0x20);
  *param_1 = uVar1;
  return param_1;
}

