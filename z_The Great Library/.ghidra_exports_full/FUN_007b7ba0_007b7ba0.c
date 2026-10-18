// FUN_007b7ba0 @ 007b7ba0 body=[[007b7ba0, 007b7c40] [007b7c44, 007b7d36] [007b7d3a, 007b7e67] [007b7e6b, 007b7f6a] [007b7f6e, 007b814f] [007b8153, 007b819d] [007b81a1, 007b81ee] [007b81f2, 007b81ff] [007b8203, 007b8217]]


/* WARNING: Type propagation algorithm not settling */

undefined4 *
FUN_007b7ba0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *******pppppppcVar8;
  FILE *pFVar9;
  char *pcVar10;
  char *pcVar11;
  double dVar12;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_8c;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  char *******local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  char *******local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b88e4d;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char *******)((uint)local_2c[0] & 0xffffff00);
  ExceptionList = &local_10;
  FUN_00409350("micro_owned_member",0x12);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar4 = (**(code **)(*param_2 + 0x2c))(local_2c,param_3);
  param_1[8] = uVar4;
  local_8._0_1_ = 6;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char *******)((uint)local_2c[0] & 0xffffff00);
  *param_1 = COwnedMicroItemMember::vftable;
  param_1[7] = COwnedMicroItemMember::vftable;
  FUN_007b47e0(param_1 + 10);
  FUN_007b9300(FUN_007b83c0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007b9300(FUN_007b83f0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 9;
  param_1[0x5e] = param_5;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char *******)((uint)local_2c[0] & 0xffffff00);
  FUN_00409350("name_label",10);
  local_8._0_1_ = 10;
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_2c);
  FUN_00408ed0(param_1 + 0x12,0,0xffffffff);
  FUN_00a5ecc0(param_1 + 0x12,0);
  local_8._0_1_ = 9;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 9;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  uVar1 = (uint)local_2c[0] >> 8;
  local_2c[0] = (char *******)(uVar1 << 8);
  if (param_1[0x24] == 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (char *******)(uVar1 << 8);
    FUN_00409350("download",8);
    local_8 = CONCAT31(local_8._1_3_,0xb);
  }
  else {
    local_8._0_1_ = uVar2;
    iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x100))();
    iVar6 = *(int *)(iVar6 + 0x28);
    pcVar11 = (char *)(param_1 + 0x2e);
    if (0xf < (uint)param_1[0x33]) {
      pcVar11 = *(char **)pcVar11;
    }
    dVar12 = _atof(pcVar11);
    FUN_00401000(((float)dVar12 + 0.0005) * 1000.0);
    iVar7 = FUN_00b31c00();
    if (iVar7 <= iVar6) {
      uVar4 = FUN_00988fa0(param_1 + 0x20);
      local_8._0_1_ = 0xd;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = (char *******)((uint)local_64[0] & 0xffffff00);
      FUN_00408ed0(uVar4,0,0xffffffff);
      local_8._0_1_ = 0xf;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      if (local_50 < 0x10) {
        pppppppcVar8 = (char *******)local_64;
LAB_007b7e8c:
        if ((*(char *)pppppppcVar8 != '\0') && (iVar6 = PHYSFS_exists(pppppppcVar8), iVar6 != 0)) {
          local_8c = 0;
          local_e4 = 0;
          local_e0 = 0;
          local_f4 = 0x67452301;
          local_f0 = 0xefcdab89;
          local_ec = 0x98badcfe;
          local_e8 = 0x10325476;
          pppppppcVar8 = local_64[0];
          if (local_50 < 0x10) {
            pppppppcVar8 = (char *******)local_64;
          }
          pFVar9 = _fopen((char *)pppppppcVar8,"rb");
          FUN_00a1d500(&local_f4,pFVar9);
          FUN_00a1d6f0();
          pcVar10 = (char *)FUN_00a1d7c0(&local_f4);
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = (char *******)((uint)local_2c[0] & 0xffffff00);
          pcVar11 = pcVar10;
          do {
            cVar3 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar3 != '\0');
          FUN_00409350(pcVar10,(int)pcVar11 - (int)(pcVar10 + 1));
          local_8._0_1_ = 0x10;
          cVar3 = FUN_00416db0();
          local_8._0_1_ = 0xf;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 0xf;
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_2c[0]);
          }
          if (cVar3 == '\0') {
            local_8._0_1_ = uVar2;
            FUN_009885d0();
            local_8._0_1_ = 0x15;
            piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x3c))(local_48);
            (**(code **)(*piVar5 + 0x38))();
            local_8._0_1_ = 0xf;
            FUN_00408ad0();
            FUN_009885d0();
            local_8._0_1_ = 0x16;
            piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_48);
            (**(code **)(*piVar5 + 0x48))(1);
            local_8._0_1_ = 0xf;
            FUN_00408ad0();
            FUN_009885d0();
            local_8 = CONCAT31(local_8._1_3_,0x17);
            iVar6 = (**(code **)(*(int *)param_1[8] + 0x34))(local_48);
            (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0x36);
            FUN_00408ad0();
            pppppppcVar8 = local_64[0];
            uVar1 = local_50;
          }
          else {
            FUN_009885d0();
            local_8._0_1_ = 0x11;
            piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_48);
            (**(code **)(*piVar5 + 0x48))(2);
            local_8._0_1_ = 0xf;
            FUN_00408ad0();
            FUN_009885d0();
            local_8._0_1_ = 0x12;
            piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x3c))(local_48);
            (**(code **)(*piVar5 + 0x38))();
            local_8._0_1_ = 0xf;
            FUN_00408ad0();
            FUN_009885d0();
            local_8._0_1_ = 0x13;
            iVar6 = (**(code **)(*(int *)param_1[8] + 0x34))(local_48);
            (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0x4a);
            local_8._0_1_ = 0xf;
            FUN_00408ad0();
            FUN_009885d0();
            local_8 = CONCAT31(local_8._1_3_,0x14);
            piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_48);
            (**(code **)(*piVar5 + 0x48))(100);
            FUN_00408ad0();
            *(undefined1 *)(param_1 + 0x5f) = 1;
            pppppppcVar8 = local_64[0];
            uVar1 = local_50;
          }
          goto joined_r0x007b81f5;
        }
      }
      else {
        pppppppcVar8 = local_64[0];
        if (local_64[0] != (char *******)0x0) goto LAB_007b7e8c;
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (char *******)((uint)local_2c[0] & 0xffffff00);
      FUN_00409350("install_label",0xd);
      local_8._0_1_ = 0x18;
      piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x3c))(local_2c);
      (**(code **)(*piVar5 + 0x38))();
      local_8._0_1_ = 0xf;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (char *******)((uint)local_2c[0] & 0xffffff00);
      FUN_00409350("download",8);
      local_8._0_1_ = 0x19;
      piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
      (**(code **)(*piVar5 + 0x48))(1);
      local_8._0_1_ = 0xf;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("download",8);
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      iVar6 = (**(code **)(*(int *)param_1[8] + 0x34))(local_48);
      (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0x36);
      pppppppcVar8 = local_64[0];
      uVar1 = local_50;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      goto joined_r0x007b81f5;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (char *******)((uint)local_2c[0] & 0xffffff00);
    FUN_00409350("download",8);
    local_8 = CONCAT31(local_8._1_3_,0xc);
  }
  piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*piVar5 + 0xbc))();
  pppppppcVar8 = local_2c[0];
  uVar1 = local_18;
joined_r0x007b81f5:
  if (uVar1 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(pppppppcVar8);
}

