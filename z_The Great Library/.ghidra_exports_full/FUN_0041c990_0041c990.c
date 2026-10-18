// FUN_0041c990 @ 0041c990 body=[[0041c990, 0041cc0d] [0041cc11, 0041cc3b] [0041cc3f, 0041cc66] [0041cc6a, 0041cc8b] [0041cc8f, 0041ccaa] [0041ccae, 0041ccc9] [0041cccd, 0041cd2d] [0041cd31, 0041cd4c] [0041cd50, 0041cd65]]


undefined1 * FUN_0041c990(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 local_100 [16];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined *puStack_e8;
  uint *puStack_e4;
  uint *puStack_e0;
  uint local_bc;
  uint local_a0;
  uint local_84;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ba9fb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  puStack_e0 = (uint *)*param_2;
  local_20 = 1;
  if ((param_2[1] - (int)puStack_e0) / 0x1c < 1) {
    puStack_e0 = (uint *)0x1b;
    puStack_e4 = (uint *)0xdf1080;
    puStack_e8 = (undefined *)0x41ca01;
    FUN_00409350();
    *param_1 = 0;
    ExceptionList = local_10;
    return param_1;
  }
  if (0xf < puStack_e0[5]) {
    puStack_e0 = (uint *)*puStack_e0;
  }
  puStack_e4 = (uint *)0x41ca26;
  iVar2 = FUN_00aaf0c5();
  piVar6 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4);
  piVar3 = (int *)piVar6[0x65];
  param_2 = (undefined4 *)0x0;
  local_1c = 0;
  local_14 = piVar6;
  while (((int *)piVar6[0x65] <= piVar3 && (piVar3 < (int *)piVar6[0x66]))) {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 4;
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x27c);
      if (local_1c < *(int *)(iVar1 + 0x58)) {
        param_2 = (undefined4 *)iVar1;
        local_1c = *(int *)(iVar1 + 0x58);
      }
      puStack_e0 = (uint *)0x41ca86;
      iVar4 = FUN_009666f0();
      piVar6 = local_14;
      if (0 < iVar4) {
        puStack_e0 = (uint *)0x41ca95;
        iVar4 = FUN_00967f50();
        piVar6 = local_14;
        if (iVar4 != 0) {
          puStack_e0 = (uint *)0x41cab4;
          uVar7 = FUN_00b31c36();
          puStack_e0 = (uint *)0x1;
          puStack_e4 = (uint *)0x0;
          *(undefined8 *)(iVar4 + 0xb8) = uVar7;
          local_ec = 0x41caca;
          puStack_e8 = (undefined *)iVar4;
          FUN_004e7ed0();
          *(undefined4 *)(iVar1 + 0x120) = 0x50000;
          *(undefined4 *)(iVar1 + 0x124) = 0;
          piVar6 = local_14;
          param_2 = (undefined4 *)iVar4;
          goto LAB_0041cb60;
        }
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    puStack_e0 = (uint *)0x0;
    local_18 = 0x2d2d2d;
    puStack_e4 = (uint *)0x2d2d2d;
    local_14 = (int *)local_100;
    local_ec = 0xf;
    local_f0 = 0;
    local_100[0] = 0;
    FUN_00409350(&DAT_00ded94d,0);
    iVar2 = FUN_0068bc90(DAT_012588e8,param_2,0);
    if (iVar2 != 0) {
      puStack_e0 = param_2;
      puStack_e8 = (undefined *)0x41cb41;
      puStack_e4 = (uint *)iVar2;
      FUN_004e7c00();
      puStack_e0 = (uint *)0x1;
      puStack_e4 = (uint *)0x0;
      local_ec = 0x41cb4a;
      puStack_e8 = (undefined *)iVar2;
      FUN_004e7ed0();
      *(undefined4 *)((int)param_2 + 0x120) = 0x50000;
      *(undefined4 *)((int)param_2 + 0x124) = 0;
      param_2 = (undefined4 *)iVar2;
LAB_0041cb60:
      puStack_e0 = (uint *)0x4;
      puStack_e4 = (uint *)&DAT_00df12c8;
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      puStack_e8 = (undefined *)0x41cb7d;
      FUN_00409350();
      local_8 = 1;
      puStack_e0 = local_3c;
      puStack_e4 = (uint *)0x41cb91;
      uVar5 = (**(code **)(*piVar6 + 0x1c))();
      puStack_e4 = param_2;
      local_8._0_1_ = 2;
      puStack_e8 = (undefined *)0x41cba3;
      puStack_e4 = (uint *)FUN_0041a080();
      local_8._0_1_ = 3;
      puStack_e8 = (undefined *)0x41cbb8;
      FUN_00988fa0();
      puStack_e4 = local_74;
      local_8._0_1_ = 4;
      puStack_e8 = (undefined *)0x41cbd0;
      FUN_00988f20();
      local_8._0_1_ = 5;
      puStack_e8 = (undefined *)0x41cbe2;
      puStack_e4 = (uint *)uVar5;
      local_ec = FUN_00988f20();
      puStack_e4 = (uint *)0xffffffff;
      local_8 = CONCAT31(local_8._1_3_,6);
      puStack_e8 = (undefined *)0x0;
      local_f0 = 0x41cbf5;
      FUN_00408ed0();
      if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
        puStack_e8 = &UNK_0041cc0e;
        FUN_00aae91b();
      }
      if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
        puStack_e8 = &UNK_0041cc3c;
        FUN_00aae91b();
      }
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        puStack_e8 = &UNK_0041cc67;
        FUN_00aae91b();
      }
      if (local_44 < 0x10) {
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        if (0xf < local_28) {
          puStack_e4 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
          puStack_e8 = &UNK_0041ccab;
          FUN_00aae91b();
        }
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        if (local_60 < 0x10) {
          *param_1 = 1;
          ExceptionList = local_10;
          return param_1;
        }
        puStack_e4 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
        puStack_e8 = &UNK_0041ccca;
        FUN_00aae91b();
      }
      puStack_e4 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
      puStack_e8 = &UNK_0041cc8c;
      FUN_00aae91b();
    }
  }
  puStack_e0 = local_58;
  puStack_e4 = (uint *)0x41ccf0;
  puStack_e4 = (uint *)(**(code **)(*piVar6 + 0x1c))();
  local_8 = 7;
  puStack_e8 = (undefined *)0x41cd05;
  local_ec = FUN_00988fa0();
  puStack_e4 = (uint *)0xffffffff;
  local_8 = CONCAT31(local_8._1_3_,8);
  puStack_e8 = (undefined *)0x0;
  local_f0 = 0x41cd1b;
  FUN_00408ed0();
  if (0xf < local_28) {
    puStack_e4 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    puStack_e8 = &UNK_0041cd2e;
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (local_44 < 0x10) {
    *param_1 = 0;
    ExceptionList = local_10;
    return param_1;
  }
  puStack_e4 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
  puStack_e8 = &UNK_0041cd4d;
  FUN_00aae91b();
}

