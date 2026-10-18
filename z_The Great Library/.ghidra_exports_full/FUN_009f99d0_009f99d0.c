// FUN_009f99d0 @ 009f99d0 body=[[009f99d0, 009f9afd] [009f9b01, 009f9b9a] [009f9b9e, 009f9c3c] [009f9c40, 009f9cde] [009f9ce2, 009f9d08]]


void FUN_009f99d0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined **local_158 [48];
  undefined **local_98 [18];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b568cc;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x20);
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x17) = 1;
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x10) = param_3 / 3;
  }
  else if (iVar1 == 1) {
    *(int *)(param_1 + 0x10) = param_3 + -2;
  }
  else if (iVar1 == 2) {
    *(int *)(param_1 + 0x10) = param_3 + -1;
  }
  piVar3 = (int *)(param_1 + 4);
  *piVar3 = 0;
  local_34 = (**(code **)(*param_2 + 0x6c))
                       (param_2,param_3 * 2,8,0x65,*(char *)(param_1 + 0x14) != '\0',piVar3,0);
  if (*piVar3 == 0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("primitivescontainer.cpp",0x17);
    local_8 = 0;
    FUN_004015b0(local_30,0x7a,0x1000);
    local_8._0_1_ = 1;
    uVar2 = FUN_00987d20(local_34);
    uVar2 = FUN_004931f0(uVar2);
    FUN_00401280(uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00987ac0(local_98);
    local_98[0] = std::ios_base::vftable;
    FUN_00aad52d(local_98);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("primitivescontainer.cpp",0x17);
    local_8 = 2;
    FUN_004015b0(local_30,0x7d,0x1000);
    local_8._0_1_ = 3;
    uVar2 = FUN_00987d20(param_3);
    uVar2 = FUN_00455470(uVar2);
    FUN_00401280(uVar2);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00987ac0(local_98);
    local_98[0] = std::ios_base::vftable;
    FUN_00aad52d(local_98);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    if (*(char *)(param_1 + 0x14) != '\0') {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("primitivescontainer.cpp",0x17);
      local_8 = 4;
      FUN_004015b0(local_30,0x80,0x1000);
      local_8._0_1_ = 5;
      uVar2 = FUN_00987d20();
      FUN_00401280(uVar2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00987ac0(local_98);
      local_98[0] = std::ios_base::vftable;
      FUN_00aad52d(local_98);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
    }
    local_8 = 0xffffffff;
    if (*(char *)(param_1 + 0x17) != '\0') {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("primitivescontainer.cpp",0x17);
      local_8 = 6;
      FUN_004015b0(local_50,0x83,0x1000);
      local_8._0_1_ = 7;
      uVar2 = FUN_00987d20();
      FUN_00401280(uVar2);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_00987ac0(local_158);
      local_158[0] = std::ios_base::vftable;
      FUN_00aad52d(local_158);
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
    }
    local_8 = 0xffffffff;
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  ExceptionList = local_10;
  return;
}

