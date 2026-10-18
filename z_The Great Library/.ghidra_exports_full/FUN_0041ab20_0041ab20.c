// FUN_0041ab20 @ 0041ab20 body=[[0041ab20, 0041accc] [0041acd0, 0041aced] [0041acf3, 0041ad1b] [0041ad1f, 0041ad39] [0041ad3d, 0041ad4f]]


undefined1 * FUN_0041ab20(undefined1 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8c [5];
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  LARGE_INTEGER local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ba249c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify fake article name.",0x21);
    ExceptionList = local_10;
    return param_1;
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 1;
  if (1 < (param_2[1] - *param_2) / 0x1c) {
    FUN_00408ed0(*param_2 + 0x1c,0,0xffffffff);
  }
  if ((param_2[1] - *param_2) / 0x1c < 3) {
    QueryPerformanceCounter(&local_1c);
  }
  else {
    puVar1 = (undefined4 *)(*param_2 + 0x38);
    if (0xf < *(uint *)(*param_2 + 0x4c)) {
      puVar1 = (undefined4 *)*puVar1;
    }
    local_1c.s.LowPart = FUN_00aaf0c5(puVar1);
    local_1c.s.HighPart = local_1c.s.LowPart;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00408ed0(*param_2,0,0xffffffff);
  local_8._0_1_ = 2;
  iVar2 = FUN_00458480(*(undefined4 *)(DAT_012588e8 + 0xcf4),local_38,local_54,&local_1c);
  if (iVar2 == 0) {
    *param_1 = 0;
    FUN_00409350("Failed to generate newspaper. See error.log for details.",0x38);
  }
  else {
    *param_1 = 1;
    uVar3 = FUN_009888f0(local_8c);
    local_8._0_1_ = 3;
    uVar3 = FUN_00988fa0(uVar3);
    local_8._0_1_ = 4;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

