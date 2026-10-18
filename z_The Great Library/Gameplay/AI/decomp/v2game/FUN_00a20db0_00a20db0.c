// FUN_00a20db0 @ 00a20db0 body=[[00a20db0, 00a20f7f]]


undefined4 * FUN_00a20db0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5d2ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = DAT_00f092fc;
  local_8 = 0;
  param_1[10] = CLostDeviceInterface::vftable;
  param_1[0xb] = in_ECX;
  *param_1 = &PTR_FUN_00e3f800;
  param_1[10] = &PTR_FUN_00e3f86c;
  param_1[0xe] = 0;
  param_1[0x11] = 0x18d;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  param_1[0x10] = CColor::vftable;
  param_1[0x18] = 0x18d;
  param_1[0x17] = CColor::vftable;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  _memset(param_1 + 0x25,0,0x400);
  local_8._0_1_ = 2;
  param_1[0x127] = 0xffffffff;
  _eh_vector_constructor_iterator_(param_1 + 0x12a,0x20,0x100,FUN_00a20d30,FUN_004010c0);
  param_1[0x9a2] = 0;
  param_1[0x9a3] = 0;
  param_1[0x9a4] = 0;
  param_1[0x9a5] = 0;
  param_1[0x9a6] = 0;
  param_1[0x9a7] = 0;
  *(undefined1 *)(param_1 + 0x9a8) = 0;
  param_1[0x9a9] = 0;
  param_1[0x9aa] = 0;
  param_1[0x9ab] = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  uVar1 = *(undefined4 *)(param_1[0xb] + 0x6b9bc);
  param_1[0xd] = *(undefined4 *)(param_1[0xb] + 0x6b9c0);
  param_1[0xc] = uVar1;
  FUN_0068f390();
  *(undefined1 *)(param_1 + 0x9a8) = 0;
  FUN_009f9630(param_1 + 0x9a3,*(undefined4 *)(param_1[0xb] + 100),4,0x14,0x102,1);
  param_1[0x9ab] = 1;
  _memset(param_1 + 0x952,0,0xa0);
  _memset(param_1 + 0x92a,0,0xa0);
  _memset(param_1 + 0x97a,0,0xa0);
  ExceptionList = local_10;
  return param_1;
}

