// FUN_005f5030 @ 005f5030 body=[[005f5030, 005f5135]]


undefined4 * FUN_005f5030(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f8e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f3c40(param_1);
  local_8 = 0;
  *in_ECX = CRevoltChange::vftable;
  FUN_00988530();
  local_8._0_1_ = 1;
  FUN_00988530();
  local_8._0_1_ = 2;
  FUN_00988530();
  local_8._0_1_ = 3;
  FUN_00988530();
  local_8 = CONCAT31(local_8._1_3_,4);
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  FUN_004012f0(in_ECX + 6);
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  FUN_004012f0(in_ECX + 0x16);
  FUN_004012f0(in_ECX + 0xd);
  FUN_004012f0(in_ECX + 0x1d);
  *(undefined1 *)(in_ECX + 0x24) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

