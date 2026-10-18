// FUN_004c2e10 @ 004c2e10 body=[[004c2e10, 004c2ef4]]


undefined4 * FUN_004c2e10(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b46778;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(in_ECX + 4);
  *param_1 = CStateEmployment::vftable;
  param_1[2] = *(undefined4 *)(in_ECX + 8);
  param_1[3] = *(undefined4 *)(in_ECX + 0xc);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_8 = 0;
  FUN_004c02a0(param_1 + 4,in_ECX + 0x10);
  local_8 = 1;
  param_1[8] = *(undefined4 *)(in_ECX + 0x20);
  param_1[9] = *(undefined4 *)(in_ECX + 0x24);
  param_1[10] = *(undefined4 *)(in_ECX + 0x28);
  param_1[0xb] = *(undefined4 *)(in_ECX + 0x2c);
  param_1[0xc] = *(undefined4 *)(in_ECX + 0x30);
  param_1[0xd] = *(undefined4 *)(in_ECX + 0x34);
  param_1[0xe] = *(undefined4 *)(in_ECX + 0x38);
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  param_1[0x12] = *(undefined4 *)(in_ECX + 0x48);
  FUN_004c2f30(param_1 + 0x13,in_ECX + 0x4c);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_009beeb0(in_ECX + 0x5c);
  ExceptionList = local_10;
  return param_1;
}

