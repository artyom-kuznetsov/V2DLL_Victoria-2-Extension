// FUN_006442e0 @ 006442e0 body=[[006442e0, 006445ac] [006445b0, 00644690]]


/* WARNING: Removing unreachable block (ram,0x006445a4) */

undefined4 * FUN_006442e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7f62d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = param_2;
  param_1[2] = 0;
  FUN_0098b350();
  local_8 = 0;
  FUN_0098b350();
  local_8._0_1_ = 1;
  FUN_0098b350();
  local_8._0_1_ = 2;
  FUN_0098b350();
  local_8._0_1_ = 3;
  FUN_0098b350();
  local_8._0_1_ = 4;
  FUN_0098b350();
  local_8._0_1_ = 5;
  FUN_0098b350();
  local_8._0_1_ = 6;
  FUN_0098b350();
  local_8._0_1_ = 7;
  FUN_0098b350();
  local_8._0_1_ = 8;
  FUN_0098b350();
  local_8._0_1_ = 9;
  FUN_0098b350();
  local_8._0_1_ = 10;
  FUN_0098b350();
  local_8._0_1_ = 0xb;
  FUN_0098b350();
  local_8._0_1_ = 0xc;
  FUN_0098b350();
  local_8._0_1_ = 0xd;
  FUN_0098b350();
  local_8._0_1_ = 0xe;
  FUN_0098b350();
  local_8._0_1_ = 0xf;
  FUN_0098b350();
  local_8._0_1_ = 0x10;
  FUN_0098b350();
  local_8._0_1_ = 0x11;
  FUN_0098b350();
  local_8._0_1_ = 0x12;
  FUN_0098b350();
  local_8._0_1_ = 0x13;
  FUN_0098b350();
  local_8._0_1_ = 0x14;
  FUN_0098b350();
  uVar3 = DAT_0125870c;
  local_8._0_1_ = 0x15;
  param_1[0x82d] = 0;
  param_1[0x82e] = uVar3;
  FUN_007ec640(param_1 + 0x82f,param_2,uVar3,param_1 + 0x418,param_1 + 0x3b9,param_1 + 0x17f,
               param_1 + 0x1de,param_1 + 0x23d,param_1 + 0x29c);
  param_1[0xe83] = 0;
  param_1[0xe84] = 0;
  param_1[0xe85] = 0;
  param_1[0xe87] = 0;
  param_1[0xe8c] = 0;
  param_1[0xe8d] = 0;
  param_1[0xe8e] = 0;
  param_1[0xe8f] = 0;
  *(undefined1 *)(param_1 + 0xe90) = 0;
  param_1[0xe92] = 0;
  param_1[0xe93] = 0;
  param_1[0xe94] = 0;
  local_8._0_1_ = 0x19;
  param_1[0xe96] = 0;
  DAT_012588dc = param_1;
  param_1[0xd8e] = param_1;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  iVar1 = FUN_00973bd0();
  if (iVar1 == 0) {
    iVar1 = FUN_00973bd0();
  }
  local_8._0_1_ = 0x19;
  param_1[0xe8b] = iVar1;
  FUN_00409350("MapSetLight",0xb);
  piVar2 = (int *)FUN_00996a10();
  (**(code **)(*piVar2 + 0x34))();
  FUN_00409350("MapSetLight",0xb);
  piVar2 = (int *)FUN_00996a10();
  (**(code **)(*piVar2 + 0x34))();
  *(undefined1 *)(param_1 + 0xe8a) = 0;
  FUN_007ed4d0();
  param_1[0xe88] = *(undefined4 *)(param_1[0x82e] + 0x2abc);
  param_1[0xe89] = *(undefined4 *)(param_1[0x82e] + 0x2ac0);
  (**(code **)(param_1[3] + 0xc))();
  iVar1 = FUN_00aae9af();
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  if (iVar1 == 0) {
    param_1[0xe96] = 0;
  }
  else {
    uVar3 = FUN_00416e70();
    param_1[0xe96] = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}

