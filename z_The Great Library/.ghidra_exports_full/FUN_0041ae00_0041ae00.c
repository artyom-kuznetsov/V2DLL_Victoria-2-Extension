// FUN_0041ae00 @ 0041ae00 body=[[0041ae00, 0041aff6] [0041affd, 0041b011] [0041b015, 0041b03a] [0041b03e, 0041b069] [0041b06d, 0041b13e] [0041b142, 0041b173] [0041b177, 0041b1d4] [0041b1d8, 0041b258] [0041b25c, 0041b30c] [0041b310, 0041b340] [0041b344, 0041b370] [0041b374, 0041b3a1] [0041b3aa, 0041b3b9] [0041b3bd, 0041b3e9] [0041b3ed, 0041b424] [0041b428, 0041b43e]]


undefined1 * FUN_0041ae00(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 ***pppuVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  int local_128;
  LARGE_INTEGER local_120;
  int local_114;
  undefined4 **local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined1 local_c8;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  undefined4 local_38 [5];
  uint local_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00ba2448;
  local_14 = ExceptionList;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  local_c = 0;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    local_c8 = 0;
    ExceptionList = &local_14;
    FUN_00409350("Please specify path name.",0x19);
  }
  else {
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350(&DAT_00ded94d,0);
    local_c = CONCAT31(local_c._1_3_,1);
    if (1 < (param_2[1] - *param_2) / 0x1c) {
      FUN_00408ed0(*param_2 + 0x1c,0,0xffffffff);
    }
    iVar5 = *param_2;
    if ((param_2[1] - iVar5) / 0x1c < 3) {
      QueryPerformanceCounter(&local_120);
      uVar7 = local_120.s.LowPart;
    }
    else {
      piVar2 = (int *)(iVar5 + 0x38);
      if (0xf < *(uint *)(iVar5 + 0x4c)) {
        piVar2 = (int *)*piVar2;
      }
      local_120.s.HighPart = FUN_00aaf0c5(piVar2);
      uVar7 = local_120.s.HighPart;
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110[0] = (undefined4 **)((uint)local_110[0] & 0xffffff00);
    local_120.s.LowPart = uVar7;
    FUN_00408ed0(*param_2,0,0xffffffff);
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_c._0_1_ = 3;
    pppuVar3 = (undefined4 ***)local_110[0];
    if (local_fc < 0x10) {
      pppuVar3 = local_110;
    }
    FUN_00992240(pppuVar3,&local_d8,0);
    local_128 = local_d8;
    iVar5 = (local_d4 - local_d8) / 0x1c;
    if (iVar5 == 0) {
      local_c8 = 0;
      FUN_00409350("Folder is empty or path not found.",0x22);
      *param_1 = local_c8;
      *(undefined4 *)(param_1 + 0x18) = 0xf;
      *(undefined4 *)(param_1 + 0x14) = 0;
      param_1[4] = 0;
      FUN_00408ed0(local_c4,0,0xffffffff);
      if (local_128 != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_128);
      }
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_110[0]);
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110[0] = (undefined4 **)((uint)local_110[0] & 0xffffff00);
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c[0]);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c4[0]);
      }
      ExceptionList = local_14;
      return param_1;
    }
    local_c8 = 1;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    if (0 < iVar5) {
      local_114 = iVar5;
      do {
        local_c._0_1_ = 4;
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = local_f4[0] & 0xffffff00;
        FUN_00409350(&DAT_00dedc68,1);
        local_c._0_1_ = 5;
        FUN_00988f20(local_f4);
        local_c._0_1_ = 6;
        FUN_00988f20(local_128);
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54);
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54 = local_54 & 0xffffff00;
        local_c._0_1_ = 9;
        if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_f4[0]);
        }
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = local_f4[0] & 0xffffff00;
        uVar4 = FUN_00988fa0(local_38);
        local_c._0_1_ = 10;
        FUN_00448aa0(uVar4,0,0xffffffff);
        local_c = CONCAT31(local_c._1_3_,9);
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70);
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70 = local_70 & 0xffffff00;
        iVar5 = FUN_004589f0(*(undefined4 *)(DAT_012588e8 + 0xcf4),local_8c,&local_120);
        if (iVar5 == 0) {
          FUN_00448740(" ERROR",6);
          local_c8 = 0;
        }
        else {
          FUN_00448740(&DAT_00df0e74,3);
        }
        local_c._0_1_ = 4;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        local_128 = local_128 + 0x1c;
        local_114 = local_114 + -1;
      } while (local_114 != 0);
      local_114 = 0;
      local_128 = local_d8;
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    local_c._0_1_ = 0xb;
    pcVar6 = __itoa(uVar7,(char *)local_38,10);
    pcVar8 = pcVar6;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
    local_c._0_1_ = 0xc;
    uVar7 = FUN_00988fa0(local_f4);
    local_c._0_1_ = 0xd;
    FUN_00448aa0(uVar7,0,0xffffffff);
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
    local_c._0_1_ = 4;
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
    FUN_00448aa0(local_a8,0,0xffffffff);
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8[0]);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    if (local_128 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_128);
    }
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110[0]);
    }
    local_c = (uint)local_c._1_3_ << 8;
    local_fc = 0xf;
    local_100 = 0;
    local_110[0] = (undefined4 **)((uint)local_110[0] & 0xffffff00);
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
  }
  *param_1 = local_c8;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  FUN_00408ed0(local_c4,0,0xffffffff);
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4[0]);
  }
  ExceptionList = local_14;
  return param_1;
}

