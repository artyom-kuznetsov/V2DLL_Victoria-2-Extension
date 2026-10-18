// FUN_00a040d0 @ 00a040d0 body=[[00a040d0, 00a041a3]]


undefined4 *
FUN_00a040d0(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4919e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0xec;
  param_1[0xc] = 0xec;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = param_5;
  *(undefined2 *)(param_1 + 10) = param_6;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3e868;
  *(undefined1 *)(param_1 + 0xf) = param_2;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00408ed0(param_4,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

