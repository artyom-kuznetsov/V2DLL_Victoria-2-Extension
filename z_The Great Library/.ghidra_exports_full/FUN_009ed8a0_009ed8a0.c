// FUN_009ed8a0 @ 009ed8a0 body=[[009ed8a0, 009ed9c7] [009ed9cb, 009eda74] [009eda78, 009eda8c]]


undefined4 *
FUN_009ed8a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b496b6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,param_5);
  local_8 = 0;
  param_1[0x4f] = CLostDeviceInterface::vftable;
  *param_1 = &PTR_FUN_00e3ccc8;
  param_1[0x4f] = &PTR_FUN_00e3ce44;
  param_1[0x50] = param_2;
  param_1[0x51] = param_3;
  FUN_00595a50(param_1 + 0x53);
  local_8._0_1_ = 1;
  param_1[0x74] = param_5;
  param_1[0x72] = param_7;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  FUN_0068f390();
  param_1[0x6f] = 0;
  param_1[0x70] = param_6;
  param_1[0x71] = *(undefined4 *)(param_1[0x74] + 0x90);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  cVar1 = FUN_00416db0();
  local_8._0_1_ = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (cVar1 == '\0') {
    FUN_009ee040();
  }
  param_1[0x6f] = (float)param_1[0x70] / ((float)param_1[0x72] * (float)param_1[0x71]);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("AnimatedMapText",0xf);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar2 = FUN_00973bd0(local_2c);
  if (iVar2 == 0) {
    iVar2 = FUN_00973bd0(local_2c);
  }
  param_1[0x52] = iVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

