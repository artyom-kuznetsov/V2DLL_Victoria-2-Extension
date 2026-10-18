// FUN_00b1ec50 @ 00b1ec50 body=[[00b1ec50, 00b1ec85]]


void FUN_00b1ec50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_00b19cc0(0x10);
  puVar1 = *(undefined4 **)(in_ECX + 4);
  *(undefined1 *)(in_ECX + 0x14) = 6;
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  *(code **)(in_ECX + 0xc) = FUN_00b1eb70;
  return;
}

