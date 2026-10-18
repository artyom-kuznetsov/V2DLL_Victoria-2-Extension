// FUN_007b0bf0 @ 007b0bf0 body=[[007b0bf0, 007b0c9f] [007b0ca3, 007b0d7b] [007b0d7f, 007b0dcd] [007b0dd1, 007b0e44] [007b0e48, 007b0ec9] [007b0ecd, 007b0eeb] [007b0eef, 007b0f4f] [007b0f53, 007b0fcc] [007b0fd0, 007b0fe5] [007b0fe9, 007b0ffd]]


undefined4 * FUN_007b0bf0(undefined4 *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_68 [5];
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4324a;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("unitbrowse_entry",0x10);
  local_8 = 0;
  local_14 = (**(code **)(*param_2 + 0x3c))();
  piVar1 = (int *)(**(code **)(*param_2 + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_30,local_14);
  param_1[8] = uVar2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  *param_1 = _anon_4106B20A::CUnitBrowserEntry::vftable;
  param_1[7] = _anon_4106B20A::CUnitBrowserEntry::vftable;
  FUN_007b15f0(FUN_004010c0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007b15f0(&LAB_0077a0a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 8;
  FUN_0079de40(param_1 + 0x32,param_4);
  local_8._0_1_ = 9;
  param_1[0x3e] = param_3;
  param_1[0x3c] = param_2;
  param_1[0x3d] = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("expand",6);
  local_8._0_1_ = 10;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 10);
  local_8._0_1_ = 9;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("select_frame",0xc);
  local_8._0_1_ = 0xb;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x1e);
  local_8._0_1_ = 9;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00df09f4,4);
  local_8._0_1_ = 0xc;
  piVar1 = (int *)param_1[8];
  uVar2 = (**(code **)(*param_4 + 0x20))();
  (**(code **)(*piVar1 + 0x3c))(local_30);
  FUN_00408ed0(uVar2,0,0xffffffff);
  FUN_00a5ecc0(uVar2,0);
  local_8._0_1_ = 9;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("location",8);
  local_8._0_1_ = 0xd;
  piVar1 = (int *)param_1[8];
  uVar2 = (**(code **)(*(int *)param_4[0x37] + 0x1c))(local_4c);
  local_8._0_1_ = 0xe;
  (**(code **)(*piVar1 + 0x3c))(local_30);
  FUN_00408ed0(uVar2,0,0xffffffff);
  FUN_00a5ecc0(uVar2,0);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 9;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("GFX_counter_",0xc);
  local_8._0_1_ = 0xf;
  if (((param_4[0x10] < 1) || (*(int *)param_4[0xe] == 0)) ||
     (iVar3 = *(int *)(*(int *)param_4[0xe] + 0x38), iVar3 == 0)) {
    puVar4 = &DAT_00f0b7f4;
  }
  else {
    puVar4 = (undefined4 *)(iVar3 + 8);
  }
  FUN_00988f20(puVar4);
  local_8._0_1_ = 0x11;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  (**(code **)(*(int *)param_1[0x3c] + 0x40))();
  iVar3 = FUN_005c2ad0(local_68);
  if (iVar3 != 0) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("counter_type",0xc);
    local_8._0_1_ = 0x12;
    piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_4c);
    (**(code **)(*piVar1 + 0xe4))(local_68);
    local_8._0_1_ = 0x11;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
  }
  FUN_007b10e0();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

