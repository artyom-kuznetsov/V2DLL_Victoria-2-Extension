// FUN_00a13810 @ 00a13810 body=[[00a13810, 00a13968] [00a1396c, 00a139ad]]


undefined4 * FUN_00a13810(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined **local_78 [18];
  undefined4 *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b54ffa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x159;
  param_1[0xc] = 0x159;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  local_30 = param_1 + 0xf;
  *param_1 = &PTR_FUN_00e3ef3c;
  *local_30 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  FUN_009d5e10(in_ECX);
  local_8._0_1_ = 5;
  FUN_00a15730(param_1 + 0x1e,param_2);
  local_8._0_1_ = 6;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("largefile.cpp",0xd);
  local_8._0_1_ = 7;
  FUN_004015b0(local_2c,0x78,0x301);
  local_8._0_1_ = 8;
  uVar3 = FUN_00987d20(in_ECX[1] - *in_ECX);
  uVar3 = FUN_00455470(uVar3);
  FUN_00401280(uVar3);
  local_8._0_1_ = 7;
  FUN_00987ac0(local_78);
  local_78[0] = std::ios_base::vftable;
  FUN_00aad52d(local_78);
  local_8 = CONCAT31(local_8._1_3_,6);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  iVar1 = *(int *)(param_2 + 0x8c);
  uVar3 = (**(code **)(**(int **)(iVar1 + 0x38) + 0x44))(param_3);
  param_1[9] = uVar3;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x38) + 0x48))(param_3);
  *(undefined2 *)(param_1 + 10) = uVar2;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  ExceptionList = local_10;
  return param_1;
}

