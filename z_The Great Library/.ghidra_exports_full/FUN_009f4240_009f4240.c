// FUN_009f4240 @ 009f4240 body=[[009f4240, 009f4314] [009f4318, 009f436b] [009f436f, 009f4383]]


undefined4 *
FUN_009f4240(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4189e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x14b;
  param_1[0xc] = 0x14b;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3d100;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00408ed0(param_4,0,0xffffffff);
  local_8._0_1_ = 2;
  param_1[0xf] = 0;
  param_1[0x10] = DAT_01268fec;
  param_1[0x11] = DAT_01268ff0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(local_34,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_8._0_1_ = 3;
  param_1[0x19] = param_2;
  FUN_0072d4e0(&local_5c,param_3);
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0xf] = local_5c;
  param_1[0x10] = local_58;
  param_1[0x11] = local_54;
  FUN_00408ed0(local_50,0,0xffffffff);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

