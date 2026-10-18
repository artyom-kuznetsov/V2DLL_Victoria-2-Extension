// FUN_00b1ec20 @ 00b1ec20 body=[[00b1ec20, 00b1ec4f]]


void FUN_00b1ec20(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_00b19cc0(0xc);
  puVar1 = *(undefined4 **)(in_ECX + 4);
  *(undefined1 *)(in_ECX + 0x14) = 5;
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  *(undefined1 **)(in_ECX + 0xc) = &LAB_00b1eb20;
  return;
}

