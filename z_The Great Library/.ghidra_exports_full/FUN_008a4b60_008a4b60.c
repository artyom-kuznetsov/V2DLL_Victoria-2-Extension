// FUN_008a4b60 @ 008a4b60 body=[[008a4b60, 008a4cca] [008a4cce, 008a4d10] [008a4d14, 008a4d5a] [008a4d60, 008a4da6] [008a4daa, 008a4e2a] [008a4e2e, 008a4e4f] [008a4e53, 008a4e69] [008a4e6d, 008a4e83] [008a4e87, 008a4e9d] [008a4ea1, 008a4ec7] [008a4ecd, 008a4efb] [008a4eff, 008a4f13]]


undefined1 * FUN_008a4b60(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  bool bVar8;
  uint in_stack_00000020;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  int *local_60;
  undefined4 local_58;
  uint local_54 [4];
  uint local_44;
  uint local_40;
  int local_38;
  int local_34;
  int *local_30;
  uint local_2c [4];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b67e0b;
  local_10 = ExceptionList;
  local_38 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_30 = (int *)FUN_008a4900(in_ECX);
  if (local_30 != (int *)0x0) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_8._0_1_ = 1;
    local_60 = *(int **)(param_2 + 8);
    local_38 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
    piVar7 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_38 + 0xbe4) * 4);
    if (*(char *)(in_ECX + 0x20) == '\0') {
      uVar6 = (**(code **)(*piVar7 + 0x1c))(local_7c);
      local_8._0_1_ = 4;
      FUN_00408ed0(uVar6,0,0xffffffff);
      local_8._0_1_ = 1;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_7c[0]);
      }
    }
    else {
      local_34 = piVar7[0x62];
      local_58 = CONCAT31(local_58._1_3_,*(char *)(local_38 + 0x12d0) == '\0');
      piVar7 = *(int **)(local_34 + 0x48);
      while ((*(int **)(local_34 + 0x48) <= piVar7 && (piVar7 < *(int **)(local_34 + 0x4c)))) {
        piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *piVar7 * 4);
        local_60 = piVar7 + 1;
        cVar2 = FUN_00511ef0(local_38,piVar1,0,local_58,0,local_58,local_58);
        piVar7 = piVar7 + 1;
        if (cVar2 != '\0') {
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = local_2c[0] & 0xffffff00;
          FUN_00409350(&DAT_00ded94d,0);
          uVar5 = local_44;
          uVar3 = local_1c;
          if (local_44 < local_1c) {
            uVar3 = local_44;
          }
          iVar4 = FUN_00414bd0(uVar3);
          bVar8 = false;
          if (iVar4 == 0) {
            if (uVar5 < local_1c) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)(uVar5 != local_1c);
            }
            bVar8 = uVar5 == 0;
          }
          local_8._0_1_ = 1;
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_2c[0]);
          }
          if (!bVar8) {
            FUN_00448740(&DAT_00df8148,2);
          }
          uVar6 = (**(code **)(*piVar1 + 0x1c))(local_2c);
          local_8._0_1_ = 3;
          FUN_00448aa0(uVar6,0,0xffffffff);
          local_8._0_1_ = 1;
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_2c[0]);
          }
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = local_2c[0] & 0xffffff00;
          piVar7 = local_60;
        }
      }
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 5;
    cVar2 = FUN_00416db0();
    local_8._0_1_ = 1;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    if (cVar2 == '\0') {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8._0_1_ = 6;
      uVar6 = (**(code **)(*local_30 + 0x18))(local_7c);
      local_8._0_1_ = 7;
      FUN_0043ec10(local_98,&DAT_00e2a7e8,uVar6,"PROVS",local_54);
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_00988f20(local_2c);
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_98[0]);
      }
      local_84 = 0xf;
      local_88 = 0;
      local_98[0] = local_98[0] & 0xffffff00;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_7c[0]);
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = local_7c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_3);
      }
      ExceptionList = local_10;
      return param_1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

