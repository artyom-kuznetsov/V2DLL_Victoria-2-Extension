// FUN_006e7d70 @ 006e7d70 body=[[006e7d70, 006e7fbe] [006e7fc2, 006e7feb] [006e7fef, 006e8050] [006e8054, 006e80ee] [006e80f2, 006e8122] [006e8126, 006e81c7] [006e81cb, 006e81f4] [006e81f8, 006e822d] [006e8231, 006e8317] [006e831b, 006e8366] [006e836a, 006e83cf] [006e83d3, 006e83fa] [006e840c, 006e845e] [006e8462, 006e8503] [006e8507, 006e852a] [006e852e, 006e85fd] [006e8601, 006e8624] [006e8628, 006e86d7] [006e86db, 006e873f] [006e8743, 006e878e] [006e8792, 006e87bc] [006e87c0, 006e8880] [006e8884, 006e88a7] [006e88ab, 006e895c] [006e8960, 006e8974] [006e8978, 006e8a33] [006e8a37, 006e8a5a] [006e8a5e, 006e8a96] [006e8a9a, 006e8afc] [006e8b00, 006e8b94] [006e8b98, 006e8bba] [006e8bbe, 006e8c53] [006e8c57, 006e8c7a] [006e8c7e, 006e8ceb] [006e8cef, 006e8d69] [006e8d6d, 006e8dbd] [006e8dc1, 006e8ea3] [006e8ea7, 006e8ef5] [006e8ef9, 006e8f8a] [006e8f8e, 006e8fb7] [006e8fbb, 006e9024] [006e9028, 006e90c7] [006e90cb, 006e91cd] [006e91d1, 006e91f4] [006e91f8, 006e92d6] [006e92da, 006e941c] [006e9420, 006e94e8] [006e94ec, 006e9516] [006e951a, 006e952c]]


void FUN_006e7d70(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  int in_EDX;
  int iVar9;
  int iVar10;
  bool bVar11;
  char local_10c [32];
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b4;
  int *local_b0;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_74;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  int local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ec83;
  local_10 = ExceptionList;
  if ((*(int *)(in_EDX + 0x80) == 0) || (*(int *)(in_EDX + 0x80) == param_2)) {
    ExceptionList = &local_10;
    *(int *)(in_EDX + 0x80) = param_2;
    *(int *)(in_EDX + 0x2c) = param_1;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8 = 0;
    piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
    (**(code **)(*piVar5 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350();
    local_8 = 1;
    piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
    (**(code **)(*piVar5 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    param_2 = 0;
    iVar6 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
    local_4c = 0;
    local_74 = CONCAT44(iVar6,(uint)local_74);
    if (iVar6 < 1) {
LAB_006e8992:
      local_4c = 4 - param_2;
      do {
        local_7c = 0xf;
        local_80 = 0;
        local_90 = local_90 & 0xffffff00;
        local_8 = 10;
        pcVar7 = __itoa(param_2,local_10c,10);
        do {
          cVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar4 != '\0');
        FUN_00409350();
        local_8 = 0xb;
        local_18 = 0xf;
        local_1c = 0;
        local_2c = local_2c & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0xc;
        FUN_00988f20();
        param_2 = param_2 + 1;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c = local_2c & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0xf);
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_7c = 0xf;
        local_80 = 0;
        local_90 = local_90 & 0xffffff00;
        piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
        (**(code **)(*piVar5 + 0x38))();
        local_8 = 0xffffffff;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_4c = local_4c + -1;
      } while (local_4c != 0);
    }
    else {
      do {
        piVar5 = (int *)(*(int *)(*(int *)(in_EDX + 0x80) + 0x6c) +
                        (uint)*(byte *)(*(int *)(in_EDX + 0x80) + 0x2c + local_4c) * 8);
        iVar6 = piVar5[1];
        if ((-1 < iVar6) && ((0 < iVar6 || (*piVar5 != 0)))) {
          local_7c = 0xf;
          local_80 = 0;
          local_90 = local_90 & 0xffffff00;
          local_8 = 2;
          pcVar7 = __itoa(param_2,local_10c,10);
          do {
            cVar4 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar4 != '\0');
          FUN_00409350();
          local_8 = 3;
          local_18 = 0xf;
          local_1c = 0;
          local_2c = local_2c & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 4;
          FUN_00988f20();
          param_2 = param_2 + 1;
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18 = 0xf;
          local_1c = 0;
          local_2c = local_2c & 0xffffff00;
          local_8._0_1_ = 7;
          if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_7c = 0xf;
          local_80 = 0;
          local_90 = local_90 & 0xffffff00;
          piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
          iVar6 = local_4c;
          (**(code **)(*piVar5 + 0x48))();
          local_b0 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
          local_34 = 0xf;
          local_38 = 0;
          local_48 = local_48 & 0xffffff00;
          local_8._0_1_ = 8;
          pcVar7 = __itoa(iVar6,local_10c,10);
          do {
            cVar4 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar4 != '\0');
          FUN_00409350();
          local_8 = CONCAT31(local_8._1_3_,9);
          (**(code **)(*local_b0 + 0x78))();
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)local_74._4_4_);
      if (param_2 < 4) goto LAB_006e8992;
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x10;
    piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x34))();
    (**(code **)(*piVar5 + 0x48))();
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x11;
    piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x34))();
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    local_8._0_1_ = 0x12;
    pcVar7 = __itoa(*(int *)(param_1 + 8),local_10c,10);
    do {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x13);
    (**(code **)(*piVar5 + 0x78))();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x14;
    piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    local_8._0_1_ = 0x15;
    pcVar7 = __itoa(*(int *)(param_1 + 8),local_10c,10);
    do {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x16);
    (**(code **)(*piVar5 + 0x78))();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    uVar2 = local_2c >> 8;
    local_2c = uVar2 << 8;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = uVar2 << 8;
    if (*(int *)(*(int *)(in_EDX + 0x80) + 0x138) == 2) {
      FUN_00409350();
      local_8 = 0x18;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      if (DAT_0131bb34 == 0) {
        iVar6 = FUN_00aae9af();
        local_8._0_1_ = 0x19;
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0041a160();
        }
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        local_74 = local_74 & 0xffffffff;
        if ((iVar6 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0x18);
        DAT_0131bb34 = iVar6;
      }
      if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <
          *(int *)(DAT_0131bb34 + 0x184)) {
        FUN_0096bb70();
      }
      (**(code **)(*piVar5 + 0x48))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_00409350();
      local_8 = 0x17;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x48))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    iVar6 = *(int *)(*(int *)(in_EDX + 0x80) + 0x138);
    iVar9 = *(int *)(*(int *)(*(int *)(in_EDX + 0x80) + 0x80) + 8);
    local_2c = local_2c & 0xffffff00;
    local_1c = 0;
    local_74 = CONCAT44(local_74._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    if (iVar6 == 2) {
      iVar6 = *(int *)(iVar3 + 0x1504);
    }
    else if (iVar6 == 1) {
      iVar6 = *(int *)(iVar3 + 0x1514);
    }
    else {
      iVar6 = *(int *)(iVar3 + 0x1524);
    }
    iVar3 = *(int *)(iVar6 + 4 + iVar9 * 0x18);
    puVar8 = (uint *)(iVar6 + iVar9 * 0x18);
    if ((iVar3 < 1) &&
       (((iVar3 < 0 || (*puVar8 == 0)) && (*(char *)(*(int *)(in_EDX + 0x20) + 0x67) != '\0')))) {
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (uint)local_48._1_3_ << 8;
      FUN_00409350();
      local_8 = 0x1d;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x108))();
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00409350();
      local_8 = 0x1e;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac = local_ac & 0xffffff00;
      FUN_00409350(&DAT_00ded94d);
      local_8 = 0x1f;
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      FUN_00409350("output");
      local_8 = CONCAT31(local_8._1_3_,0x20);
      (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac = local_ac & 0xffffff00;
    }
    else {
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (uint)local_48._1_3_ << 8;
      FUN_00409350();
      local_8 = 0x21;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x104))();
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uVar2 = puVar8[1];
      if ((int)uVar2 < 1) {
        if ((-1 < (int)uVar2) && (0x7fff < *puVar8)) {
          if ((0 < (int)uVar2) || ((-1 < (int)uVar2 && (0x4ffff < *puVar8)))) goto LAB_006e9149;
          local_18 = 0xf;
          local_1c = 0;
          local_2c = (uint)local_2c._1_3_ << 8;
          FUN_00409350();
          local_8 = 0x24;
          FUN_00988bb0(local_68,2);
          local_8 = CONCAT31(local_8._1_3_,0x25);
          goto LAB_006e918f;
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c = (uint)local_2c._1_3_ << 8;
        FUN_00409350();
        local_8 = 0x22;
        FUN_00988bb0(local_68,3);
        local_8 = CONCAT31(local_8._1_3_,0x23);
        (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
        FUN_00408ed0();
        FUN_00a5ecc0();
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
LAB_006e9149:
        local_18 = 0xf;
        local_1c = 0;
        local_2c = (uint)local_2c._1_3_ << 8;
        FUN_00409350();
        local_8 = 0x26;
        FUN_00988bb0(local_68,1);
        local_8 = CONCAT31(local_8._1_3_,0x27);
LAB_006e918f:
        (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
        FUN_00408ed0();
        FUN_00a5ecc0();
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_18) {
        local_8 = 0xffffffff;
        local_54 = 0xf;
        local_58 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_2c = local_2c & 0xffffff00;
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    iVar6 = *(int *)(in_EDX + 0x84);
    if (iVar6 != 0) {
      local_74 = CONCAT44(local_74._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
      iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
      if (*(int *)(iVar6 + 0x138) == 2) {
        iVar9 = *(int *)(iVar9 + 0x1504);
      }
      else if (*(int *)(iVar6 + 0x138) == 1) {
        iVar9 = *(int *)(iVar9 + 0x1514);
      }
      else {
        iVar9 = *(int *)(iVar9 + 0x1524);
      }
      iVar6 = *(int *)(*(int *)(iVar6 + 0x80) + 8);
      iVar3 = *(int *)(iVar9 + 4 + iVar6 * 0x18);
      iVar10 = DAT_012588e8;
      if ((iVar3 < 0) || ((iVar3 < 1 && (*(int *)(iVar9 + iVar6 * 0x18) == 0)))) goto LAB_006e92ec;
      local_7c = 0xf;
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      FUN_00409350();
      local_8 = 0x28;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x104))();
      local_8 = 0xffffffff;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_006e92dd;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 0x29;
    piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
    (**(code **)(*piVar5 + 0x34))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x2a;
    piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
    (**(code **)(*piVar5 + 0x34))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    *(int *)(in_EDX + 0x84) = param_2;
    if (*(int *)(param_2 + 0x138) == 2) {
      FUN_009885d0();
      local_8 = 0x2c;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      if (DAT_0131bb34 == 0) {
        iVar6 = FUN_00aae9af();
        local_8._0_1_ = 0x2d;
        if (iVar6 != 0) {
          FUN_0041a160();
        }
        local_8 = CONCAT31(local_8._1_3_,0x2c);
        FUN_00423700();
      }
      if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <
          *(int *)(DAT_0131bb34 + 0x184)) {
        FUN_0096bb70();
      }
      iVar6 = *piVar5;
    }
    else {
      FUN_009885d0();
      local_8 = 0x2b;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      iVar6 = *piVar5;
    }
    (**(code **)(iVar6 + 0x48))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    piVar5 = (int *)(*(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2);
    param_2 = 0;
    local_4c = 0;
    local_b0 = piVar5;
    if ((int)piVar5 < 1) {
LAB_006e814e:
      param_1 = 4 - param_2;
      do {
        FUN_009888f0();
        local_8 = 0x36;
        local_98 = 0xf;
        local_9c = 0;
        local_ac = local_ac & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0x37;
        FUN_00988f20();
        if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_98 = 0xf;
        local_9c = 0;
        local_ac = local_ac & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0x3a);
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
        (**(code **)(*piVar5 + 0x38))();
        local_8 = 0xffffffff;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        param_1 = param_1 + -1;
        local_34 = 0xf;
        local_38 = 0;
        local_48 = local_48 & 0xffffff00;
      } while (param_1 != 0);
    }
    else {
      do {
        piVar1 = (int *)(*(int *)(*(int *)(in_EDX + 0x84) + 0x6c) +
                        (uint)*(byte *)(local_4c + 0x2c + *(int *)(in_EDX + 0x84)) * 8);
        iVar6 = piVar1[1];
        if ((-1 < iVar6) && ((0 < iVar6 || (*piVar1 != 0)))) {
          FUN_009888f0();
          local_8 = 0x2f;
          local_98 = 0xf;
          local_9c = 0;
          local_ac = local_ac & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x30;
          FUN_00988f20();
          param_2 = param_2 + 1;
          if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_98 = 0xf;
          local_9c = 0;
          local_ac = local_ac & 0xffffff00;
          local_8._0_1_ = 0x33;
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_34 = 0xf;
          local_38 = 0;
          local_48 = local_48 & 0xffffff00;
          local_7c = 0xf;
          local_80 = 0;
          local_90 = local_90 & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x34;
          (**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
          cVar4 = FUN_00416db0();
          local_8._0_1_ = 0x33;
          if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_7c = 0xf;
          local_80 = 0;
          local_90 = local_90 & 0xffffff00;
          if (cVar4 == '\0') {
            piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
            (**(code **)(*piVar5 + 0x34))();
            piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
            (**(code **)(*piVar5 + 0x48))();
            piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
            FUN_009888f0();
            local_8 = CONCAT31(local_8._1_3_,0x35);
            (**(code **)(*piVar5 + 0x78))();
            if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_bc = 0xf;
            local_c0 = 0;
            local_d0 = local_d0 & 0xffffff00;
          }
          local_8 = 0xffffffff;
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18 = 0xf;
          local_1c = 0;
          local_2c = local_2c & 0xffffff00;
          piVar5 = local_b0;
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)piVar5);
      if (param_2 < 4) goto LAB_006e814e;
    }
    iVar6 = *(int *)(*(int *)(in_EDX + 0x84) + 0x138);
    local_74 = CONCAT44(local_74._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
    iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    if (iVar6 == 2) {
      iVar6 = *(int *)(iVar9 + 0x1504);
    }
    else if (iVar6 == 1) {
      iVar6 = *(int *)(iVar9 + 0x1514);
    }
    else {
      iVar6 = *(int *)(iVar9 + 0x1524);
    }
    puVar8 = (uint *)(iVar6 + *(int *)(*(int *)(*(int *)(in_EDX + 0x84) + 0x80) + 8) * 0x18);
    if (((int)puVar8[1] < 1) &&
       ((((int)puVar8[1] < 0 || (*puVar8 == 0)) &&
        (*(char *)(*(int *)(in_EDX + 0x20) + 0x67) != '\0')))) {
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (uint)local_48._1_3_ << 8;
      FUN_00409350();
      local_8 = 0x3b;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x108))();
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00409350();
      local_8 = 0x3c;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_004471e0();
      local_8 = 0x3d;
      FUN_004471e0();
      local_8 = CONCAT31(local_8._1_3_,0x3e);
      (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
LAB_006e852e:
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
    }
    else {
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (uint)local_48._1_3_ << 8;
      FUN_00409350();
      local_8 = 0x3f;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x104))();
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uVar2 = puVar8[1];
      if ((int)uVar2 < 1) {
        if (((int)uVar2 < 0) || (*puVar8 < 0x8000)) {
          local_18 = 0xf;
          local_1c = 0;
          local_2c = local_2c & 0xffffff00;
          FUN_00409350();
          local_8 = 0x40;
          FUN_00988bb0();
          local_8 = CONCAT31(local_8._1_3_,0x41);
          (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
          FUN_00408ed0();
          FUN_00a5ecc0();
          if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          goto LAB_006e852e;
        }
        if ((0 < (int)uVar2) || ((-1 < (int)uVar2 && (0x4ffff < *puVar8)))) goto LAB_006e8585;
        FUN_004471e0();
        local_8 = 0x42;
        FUN_00988bb0();
        local_8 = CONCAT31(local_8._1_3_,0x43);
      }
      else {
LAB_006e8585:
        FUN_009885d0();
        local_8 = 0x44;
        FUN_00988bb0();
        local_8 = CONCAT31(local_8._1_3_,0x45);
      }
      (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_68[0] = local_68[0] & 0xffffff00;
      local_58 = 0;
      local_54 = 0xf;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_48 = local_48 & 0xffffff00;
      local_38 = 0;
      local_34 = 0xf;
    }
    iVar10 = DAT_012588e8;
    local_8 = 0xffffffff;
    if (*(int *)(in_EDX + 0x80) != 0) {
      local_74 = CONCAT44(local_74._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
      piVar5 = (int *)FUN_005394d0();
      if ((piVar5[1] < 0) || ((piVar5[1] < 1 && (*piVar5 == 0)))) goto LAB_006e92ec;
      FUN_004471e0();
      local_8 = 0x46;
      piVar5 = (int *)(**(code **)(**(int **)(in_EDX + 0x20) + 0x44))();
      (**(code **)(*piVar5 + 0x104))();
      local_8 = 0xffffffff;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
LAB_006e92dd:
      local_7c = 0xf;
      local_90 = local_90 & 0xffffff00;
      local_80 = 0;
    }
  }
  local_8 = 0xffffffff;
  iVar10 = DAT_012588e8;
LAB_006e92ec:
  local_74._0_4_ = 0;
  local_74._4_4_ = 0;
  if (*(int *)(in_EDX + 0x80) != 0) {
    local_b4 = *(undefined4 *)(iVar10 + 0xb5c);
    puVar8 = (uint *)FUN_005394d0();
    local_74._0_4_ = *puVar8;
    local_74._4_4_ = puVar8[1];
  }
  if (*(int *)(in_EDX + 0x84) != 0) {
    local_b4 = *(undefined4 *)(iVar10 + 0xb5c);
    puVar8 = (uint *)FUN_005394d0();
    bVar11 = CARRY4((uint)local_74,*puVar8);
    local_74._0_4_ = (uint)local_74 + *puVar8;
    local_74._4_4_ = local_74._4_4_ + puVar8[1] + (uint)bVar11;
  }
  if (((int)local_74._4_4_ < 0) || (((int)local_74._4_4_ < 1 && ((uint)local_74 == 0)))) {
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = local_d0 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x49;
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x4a);
    (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    uVar2 = local_bc;
  }
  else {
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x47;
    FUN_00988bb0();
    local_8 = CONCAT31(local_8._1_3_,0x48);
    (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    uVar2 = local_34;
  }
  if (uVar2 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

