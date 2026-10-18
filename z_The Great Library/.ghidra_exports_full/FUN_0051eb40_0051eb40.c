// FUN_0051eb40 @ 0051eb40 body=[[0051eb40, 0051ec4f] [0051ec53, 0051ec70] [0051ec74, 0051ec91] [0051ec95, 0051ed23] [0051ed27, 0051ed44] [0051ed48, 0051ed65] [0051ed69, 0051ed8a] [0051ed93, 0051edfe] [0051ee02, 0051ee1f] [0051ee23, 0051ee40] [0051ee44, 0051ee61] [0051ee65, 0051efe4] [0051efe8, 0051f017] [0051f020, 0051f0bd] [0051f0c1, 0051f0d3]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0051eb40(int *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  char *******pppppppcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *******local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
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
  uint *local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b5f8c6;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_1[0x40] == 0) {
    return;
  }
  if ((int)(param_1[0x277] - param_1[0x276] & 0xfffffffcU) < 1) {
    if ((char)param_1[7] != 'R') {
      return;
    }
    if (*(char *)((int)param_1 + 0x1d) != 'E') {
      return;
    }
    if (*(char *)((int)param_1 + 0x1e) != 'B') {
      return;
    }
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = (char *******)((uint)local_a8[0] & 0xffffff00);
  local_8 = 0;
  if (*(int *)(DAT_012586e0 + 0x50) == 0) {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("/units/",7);
    local_8._0_1_ = 1;
    FUN_00436780();
    local_8._0_1_ = 2;
    FUN_00988f20(local_38);
    local_8._0_1_ = 3;
    uVar3 = FUN_00988f20(param_1 + 0x3c);
    local_8 = CONCAT31(local_8._1_3_,4);
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
      FUN_00aae91b(local_8c);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
LAB_0051ed76:
    local_40 = 0xf;
    local_44 = 0;
    local_5c = 0xf;
    local_60 = 0;
    local_78 = 0xf;
    local_7c = 0;
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
  }
  else {
    if (*(int *)(DAT_012586e0 + 0x50) == 1) {
      ExceptionList = &local_10;
      FUN_009885d0();
      local_8._0_1_ = 5;
      FUN_004367c0();
      local_8._0_1_ = 6;
      FUN_00988f20(local_38);
      local_8._0_1_ = 7;
      uVar3 = FUN_00988f20(param_1 + 0x3c);
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_00408ed0(uVar3,0,0xffffffff);
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c = local_8c & 0xffffff00;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70);
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      goto LAB_0051ed76;
    }
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8._0_1_ = 9;
    FUN_004367c0();
    local_8._0_1_ = 10;
    FUN_00988f20(local_38);
    local_8._0_1_ = 0xb;
    uVar3 = FUN_00988f20(param_1 + 0x3c);
    local_8._0_1_ = 0xc;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    cVar2 = FUN_00991930();
    if (cVar2 == '\0') {
      FUN_009885d0();
      local_8._0_1_ = 0xd;
      FUN_00436780();
      local_8._0_1_ = 0xe;
      FUN_00988f20(local_54);
      local_8._0_1_ = 0xf;
      uVar3 = FUN_00988f20(param_1 + 0x3c);
      local_8._0_1_ = 0x10;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00408ad0();
    }
  }
  if (local_94 < 0x10) {
    pppppppcVar4 = (char *******)local_a8;
  }
  else {
    pppppppcVar4 = local_a8[0];
    if (local_a8[0] == (char *******)0x0) goto joined_r0x0051f0b0;
  }
  if ((*(char *)pppppppcVar4 != '\0') && (iVar5 = PHYSFS_exists(pppppppcVar4), iVar5 != 0)) {
    DAT_0125873d = 1;
    local_1c = (uint *)FUN_00aae9af(0x360);
    local_8._0_1_ = 0x11;
    if (local_1c == (uint *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      FUN_009885d0();
      local_8 = CONCAT31(local_8._1_3_,0x12);
      local_14 = 1;
      puVar6 = (undefined4 *)FUN_00aae9af(0x114);
      local_8 = 0x13;
      local_18 = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_0098ffc0(local_a8);
        *puVar6 = &PTR_FUN_00e37c3c;
      }
      local_8 = CONCAT31(local_8._1_3_,0x12);
      local_18 = (undefined4 *)FUN_009a0bf0(local_1c,puVar6,1);
    }
    puVar6 = local_18;
    local_8 = 0;
    if ((local_14 & 1) != 0) {
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
    }
    (**(code **)(*param_1 + 0xc))(local_18);
    DAT_0125873d = 0;
    puVar1 = (uint *)param_1[0x1ed];
    while (puVar1 != (uint *)0x0) {
      local_1c = (uint *)puVar1[2];
      local_14 = *puVar1;
      puVar1 = local_1c;
      puVar6 = local_18;
      if ((((char)param_1[7] == 'R') && (*(char *)((int)param_1 + 0x1d) == 'E')) &&
         (*(char *)((int)param_1 + 0x1e) == 'B')) {
        if (((*(int *)(local_14 + 0x40) < 1) || (**(int **)(local_14 + 0x38) == 0)) ||
           ((*(int *)(**(int **)(local_14 + 0x38) + 0x30) == 0 ||
            (iVar5 = FUN_00967f50(), iVar5 == 0)))) {
          FUN_0068a850(local_14);
          puVar1 = local_1c;
          puVar6 = local_18;
        }
        else {
          FUN_00967f50();
          FUN_004e2c70();
          puVar1 = local_1c;
          puVar6 = local_18;
        }
      }
    }
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
  }
joined_r0x0051f0b0:
  if (local_94 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_a8[0]);
}

