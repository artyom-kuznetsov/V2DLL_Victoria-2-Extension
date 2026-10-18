// FUN_00650bc0 @ 00650bc0 body=[[00650bc0, 00650cfa] [00650cfe, 00650d35] [00650d39, 00650d54] [00650d58, 00650e5a] [00650e5e, 00650f15] [00650f19, 00651006] [00651010, 006512f7]]


undefined4 FUN_00650bc0(uint param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte *pbVar6;
  int iVar7;
  undefined2 *puVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  code *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  bool bVar15;
  undefined1 local_e4 [4];
  undefined1 local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  int *local_8c;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  piVar11 = param_3;
  puStack_c = &LAB_00b8c1db;
  local_10 = ExceptionList;
  local_18 = 0;
  local_cc = 0xf;
  local_b0 = 0xf;
  local_94 = 0xf;
  local_d0 = 0;
  local_e0 = 0;
  local_b4 = 0;
  local_c4 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_8c = (int *)0x0;
  local_88 = 1;
  local_8 = 0;
  ExceptionList = &local_10;
  pbVar6 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  pbVar13 = &DAT_00dfbe10;
  do {
    bVar1 = *pbVar6;
    bVar15 = bVar1 < *pbVar13;
    if (bVar1 != *pbVar13) {
LAB_00650c70:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_00650c75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar15 = bVar1 < pbVar13[1];
    if (bVar1 != pbVar13[1]) goto LAB_00650c70;
    pbVar6 = pbVar6 + 2;
    pbVar13 = pbVar13 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_00650c75:
  if (iVar7 == 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("CHAT_NONE_TIP",0xd);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_64,local_50);
    local_8._0_1_ = 2;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
    local_8._0_1_ = 3;
    FUN_00408ed0();
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
LAB_00650d14:
    local_34[0] = local_34[0] & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    FUN_009adb70();
    if (local_60 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
LAB_00650d4a:
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pcVar12 = *(code **)(*piVar11 + 0x60);
  }
  else {
    pbVar6 = (byte *)(**(code **)(*piVar11 + 0x44))();
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    pcVar14 = "allies";
    do {
      bVar1 = *pbVar6;
      bVar15 = bVar1 < (byte)*pcVar14;
      if (bVar1 != *pcVar14) {
LAB_00650dd0:
        iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00650dd5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar15 = bVar1 < (byte)pcVar14[1];
      if (bVar1 != pcVar14[1]) goto LAB_00650dd0;
      pbVar6 = pbVar6 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_00650dd5:
    if (iVar7 == 0) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("CHAT_ALLIES_TIP",0xf);
      local_8._0_1_ = 5;
      FUN_009a8ee0(local_64,local_50);
      local_8._0_1_ = 6;
      iVar7 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
      local_8._0_1_ = 7;
      FUN_00408ed0();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 8;
      goto LAB_00650d14;
    }
    (**(code **)(*piVar11 + 0x44))();
    cVar5 = FUN_0040b360();
    if (cVar5 != '\0') {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("CHAT_ENEMIES_TIP",0x10);
      local_8._0_1_ = 9;
      FUN_009a8ee0(local_64,local_50);
      local_8._0_1_ = 10;
      iVar7 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
      local_8._0_1_ = 0xb;
      FUN_00408ed0();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      local_8._0_1_ = 9;
      FUN_009a9740();
      goto LAB_00650d4a;
    }
    (**(code **)(*piVar11 + 0x44))();
    cVar5 = FUN_0040b360();
    if (cVar5 == '\0') {
      iVar7 = *(int *)(DAT_012588e8 + 0x18);
      puVar3 = *(undefined4 **)(param_1 + 0x1618);
      while ((iVar7 != 0 && (puVar3 != (undefined4 *)0x0))) {
        local_78 = (undefined4 *)puVar3[2];
        piVar11 = (int *)*puVar3;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("shield",6);
        local_8 = CONCAT31(local_8._1_3_,0xf);
        local_18 = local_18 | 2;
        piVar9 = (int *)(**(code **)(*piVar11 + 0x48))();
        if (piVar9 == param_3) {
LAB_0065108b:
          param_1 = CONCAT13(1,(undefined3)param_1);
        }
        else {
          FUN_009885d0();
          local_8 = 0x10;
          local_18 = local_18 | 4;
          piVar9 = (int *)(**(code **)(*piVar11 + 0x34))();
          param_1 = param_1 & 0xffffff;
          if (param_3 == piVar9) goto LAB_0065108b;
        }
        if ((local_18 & 4) != 0) {
          local_18 = local_18 & 0xfffffffb;
          FUN_00408ad0();
        }
        local_8 = 0;
        if ((local_18 & 2) != 0) {
          local_18 = local_18 & 0xfffffffd;
          FUN_00408ad0();
        }
        if (param_1._3_1_ != '\0') {
          local_74 = FUN_009885d0();
          local_8._0_1_ = 0x11;
          local_80 = *(undefined4 *)(iVar7 + 0x20);
          local_7c = *(undefined4 *)(iVar7 + 0x24);
          param_1 = FUN_0055dd40();
          local_8._0_1_ = 0x12;
          FUN_009885d0();
          local_8._0_1_ = 0x13;
          FUN_00988f20();
          local_8._0_1_ = 0x14;
          FUN_00988f20();
          local_8._0_1_ = 0x15;
          FUN_00988f20();
          local_8._0_1_ = 0x16;
          FUN_00408ed0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8._0_1_ = 0;
          FUN_00408ad0();
          FUN_0068b610();
          cVar5 = FUN_00416db0();
          if (cVar5 == '\0') {
            FUN_009885d0();
            local_8._0_1_ = 0x17;
            param_1 = FUN_009a8ee0(local_64,local_34);
            local_8._0_1_ = 0x18;
            iVar10 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
            local_8._0_1_ = 0x19;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8._0_1_ = 0x17;
            FUN_009a9740();
            local_8._0_1_ = 0;
            FUN_00408ad0();
          }
          FUN_009885d0();
          local_8._0_1_ = 0x1a;
          FUN_009885d0();
          local_8._0_1_ = 0x1b;
          piVar9 = (int *)(**(code **)(*piVar11 + 0x48))();
          piVar11 = (int *)(**(code **)(*piVar11 + 0x48))();
          iVar10 = (**(code **)(*piVar9 + 0x60))();
          sVar2 = *(short *)(iVar10 + 2);
          puVar8 = (undefined2 *)(**(code **)(*piVar11 + 0x60))(local_e4);
          local_70 = (int *)CONCAT22(sVar2 + -0x28,*puVar8);
          local_8c = local_70;
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00408ad0();
        }
        iVar7 = *(int *)(iVar7 + 0x3c);
        puVar3 = local_78;
      }
      goto LAB_006512cd;
    }
    FUN_009885d0();
    local_8._0_1_ = 0xc;
    FUN_009a8ee0(local_64,local_34);
    local_8._0_1_ = 0xd;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
    local_8._0_1_ = 0xe;
    FUN_00408ed0();
    FUN_00408ad0();
    local_8._0_1_ = 0xc;
    FUN_009a9740();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
    pcVar12 = *(code **)(*piVar11 + 0x60);
  }
  iVar7 = (*pcVar12)();
  sVar2 = *(short *)(iVar7 + 2);
  puVar8 = (undefined2 *)(**(code **)(*piVar11 + 0x60))(&param_1);
  param_3 = (int *)CONCAT22(sVar2 + -0x28,*puVar8);
  local_8c = param_3;
LAB_006512cd:
  uVar4 = param_2;
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_10;
  return uVar4;
}

