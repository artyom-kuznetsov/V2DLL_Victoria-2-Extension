// FUN_00b1ebf0 @ 00b1ebf0 body=[[00b1ebf0, 00b1ec19]]


void FUN_00b1ebf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_00b19cc0(8);
  puVar1 = *(undefined4 **)(in_ECX + 4);
  *(undefined1 *)(in_ECX + 0x14) = 4;
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *(undefined1 **)(in_ECX + 0xc) = &LAB_00b1eae0;
  return;
}

