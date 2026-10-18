// FUN_00731a10 @ 00731a10 body=[[00731a10, 00731b12] [00731b1b, 00731d0f] [00731d13, 00731d2e] [00731d32, 00731d53] [00731d57, 00731dcd] [00731dd1, 00731deb] [00731def, 00731e0c] [00731e10, 00731f69] [00731f6d, 00731f87] [00731f8b, 00731fa8] [00731fac, 00732106] [0073210a, 00732180] [00732184, 00732264] [00732268, 00732298] [0073229c, 007322b6] [007322ba, 007323c8] [007323cc, 007323ea] [007323ee, 00732453] [00732457, 00732474] [00732478, 00732495] [00732499, 007324a6] [007324aa, 007324d3]]


undefined1 * FUN_00731a10(int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  char local_120 [104];
  int local_b8;
  undefined4 local_a8;
  undefined1 *local_a4;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [3];
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b7c33a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  local_a4 = param_2 + 0x1c;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *local_a4 = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_a8 = 1;
  if (*(char *)(param_1 + 0x90) == '\0') {
    pbVar5 = (byte *)(**(code **)(*param_3 + 0x44))();
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    pcVar10 = "popsize";
    do {
      bVar2 = *pbVar5;
      bVar11 = bVar2 < (byte)*pcVar10;
      if (bVar2 != *pcVar10) {
LAB_00731ac0:
        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00731ac5;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar11 = bVar2 < (byte)pcVar10[1];
      if (bVar2 != pcVar10[1]) goto LAB_00731ac0;
      pbVar5 = pbVar5 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_00731ac5:
    if (iVar6 == 0) {
      iVar6 = FUN_007324e0();
      if (iVar6 != 0) {
        FUN_009652f0();
        local_8 = 1;
        FUN_00448aa0();
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      (**(code **)(*param_3 + 0x44))();
      cVar4 = FUN_0040b360();
      if (cVar4 == '\0') {
        (**(code **)(*param_3 + 0x44))();
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          FUN_0047db00();
          iVar6 = DAT_012588e8;
          local_8 = 0xc;
          local_98 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
          local_9c = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                      *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xe74);
          FUN_0047de60();
          local_98 = *(undefined4 *)(iVar6 + 0xb5c);
          FUN_0047dca0();
          FUN_0047d9e0();
          FUN_0047e3e0();
          if ((-1 < local_18) && ((0 < local_18._4_4_ || ((uint)local_18 != 0)))) {
            FUN_0060d220();
            local_8 = CONCAT31(local_8._1_3_,0xd);
            FUN_00408ed0();
            FUN_00408ad0();
          }
          local_8 = local_8 & 0xffffff00;
          FUN_0047e4a0();
          goto LAB_00732187;
        }
      }
      piVar3 = *(int **)(*(int *)(param_1 + 0x28) + 8);
      local_8c = (undefined1 *)(**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0xc) + 0x1c))();
      local_8 = 2;
      uVar7 = (**(code **)(*piVar3 + 0x18))();
      local_8._0_1_ = 3;
      uVar7 = FUN_0043ec10(local_34,&DAT_00dfbf14,uVar7,&DAT_00df8310);
      local_8._0_1_ = 4;
      FUN_00408ed0(uVar7,0,0xffffffff);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_3c = 0xf;
      local_40 = 0;
      uVar8 = local_50[0] >> 8;
      local_50[0] = uVar8 << 8;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      piVar3 = *(int **)(*(int *)(param_1 + 0x28) + 8);
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = uVar8 << 8;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 5;
      (**(code **)(*piVar3 + 0x20))(local_6c,local_50,0);
      local_8._0_1_ = 6;
      FUN_00988fa0();
      local_8._0_1_ = 7;
      FUN_00448aa0();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_0047db00();
      local_8 = 8;
      local_98 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
      iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                        *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xa60) + 0x48);
      uVar8 = iVar6 + 1000;
      local_18 = __alldiv(iVar6 * 0x40000000,
                          (((int)uVar8 >> 0x1f) << 0xf | uVar8 >> 0x11) << 0xf |
                          (uVar8 & 0x1ffff) >> 2);
      uVar8 = *(uint *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0xc4);
      uVar12 = __alldiv(uVar8 << 0x1e,
                        (((int)uVar8 >> 0x1f) << 0xf | uVar8 >> 0x11) << 0xf |
                        (uVar8 & 0x1ffff) >> 2);
      __allmul(uVar12,(uint)local_18,(int)((ulonglong)local_18 >> 0x20));
      FUN_0047de60();
      FUN_0047e3e0();
      FUN_00988bb0(local_88,3);
      local_8._0_1_ = 9;
      FUN_0042c180();
      local_8._0_1_ = 10;
      FUN_00988fa0();
      local_8._0_1_ = 0xb;
      FUN_00448aa0();
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_b8 != 0) {
LAB_0073217b:
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    local_18 = 0;
    param_3 = (int *)0x0;
    if (0 < (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x14) {
      do {
        FUN_0047db00();
        iVar6 = DAT_012588e8;
        local_8 = 0xe;
        local_90 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        local_94 = *(undefined4 *)
                    (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                    0xe74);
        local_8c = &stack0xfffffecc;
        FUN_0047de60();
        local_90 = *(undefined4 *)(iVar6 + 0xb5c);
        FUN_0047dca0();
        local_8c = &stack0xfffffecc;
        FUN_0047d9e0();
        FUN_0047e3e0();
        iVar6 = (uint)local_18 + local_a0;
        iVar1 = local_18._4_4_ + local_9c + (uint)CARRY4((uint)local_18,local_a0);
        local_18 = CONCAT44(iVar1,iVar6);
        local_8 = local_8 & 0xffffff00;
        if (local_b8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        param_3 = (int *)((int)param_3 + 1);
      } while ((int)param_3 < (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x14);
      if ((-1 < iVar1) && ((0 < iVar1 || (iVar6 != 0)))) {
        FUN_0060d220();
        local_8 = 0xf;
        FUN_00408ed0();
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_74) goto LAB_0073217b;
      }
    }
  }
LAB_00732187:
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0x39) != '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 0x10;
    FUN_009a8ee0();
    local_8._0_1_ = 0x11;
    puVar9 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar6 = FUN_00aae9af();
      local_8._0_1_ = 0x12;
      if (iVar6 == 0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0x13;
      if ((puVar9 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar9;
    local_8._0_1_ = 0x11;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
    local_8._0_1_ = 0x14;
    FUN_00408ed0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_8._0_1_ = 0x15;
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x28) + 0x10);
  if (iVar6 == 0) {
    ExceptionList = local_10;
    return param_2;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x16;
  local_8._1_3_ = 0;
  if (iVar6 == 6) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8._0_1_ = 0x17;
    local_8._1_3_ = 0;
    pcVar10 = __itoa(*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0xa0),local_120,10);
    do {
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    FUN_00409350();
    local_8._0_1_ = 0x18;
    FUN_0042c180();
    local_8._0_1_ = 0x19;
    FUN_00408ed0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    uVar8 = local_20;
  }
  else {
    if (iVar6 != 7) goto LAB_007323ee;
    FUN_00475d50();
    local_8._0_1_ = 0x1a;
    FUN_00408ed0();
    uVar8 = local_74;
  }
  if (0xf < uVar8) {
    local_8._0_1_ = 0x16;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_007323ee:
  local_8._0_1_ = 0x16;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1b;
  FUN_00988f20();
  local_8._0_1_ = 0x1c;
  FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  FUN_00408ed0();
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

