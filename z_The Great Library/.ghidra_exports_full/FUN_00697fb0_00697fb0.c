// FUN_00697fb0 @ 00697fb0 body=[[00697fb0, 00698152] [00698156, 006981aa] [006981b0, 006981e3] [006981e7, 006982ce] [006982ef, 006983e7] [006983eb, 00698439] [0069843d, 006985eb] [006985ef, 00698651]]


/* WARNING: Removing unreachable block (ram,0x00698551) */

void FUN_00697fb0(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  bool bVar9;
  undefined4 *local_90;
  undefined4 *local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 auStack_54 [4];
  uint local_50 [2];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6eee3;
  local_14 = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  bVar9 = false;
  if (param_1 == 5) {
    ExceptionList = &local_14;
    FUN_009b1040();
    local_c = 0;
    local_90 = local_80[0];
    if (local_80[0] != (undefined4 *)0x0) {
      do {
        iVar4 = FUN_0068b500();
        if (*(int *)(iVar4 + 0x1c) != -1) {
          puVar5 = (undefined4 *)FUN_00aae9af();
          local_c._0_1_ = 1;
          if (puVar5 != (undefined4 *)0x0) {
            local_3c = 0xf;
            local_40 = 0;
            local_50[0] = local_50[0] & 0xffffff00;
            FUN_00409350("LOST_PLAYER",0xb);
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_009a8ee0(local_64,local_50);
            local_c = 3;
            iVar4 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
            local_c = 4;
            puVar5[1] = 0x18d;
            *puVar5 = &PTR_FUN_00e3cffc;
            bVar2 = true;
            bVar1 = true;
            bVar9 = true;
            puVar5[7] = 0xf;
            puVar5[6] = 0;
            *(undefined1 *)(puVar5 + 2) = 0;
            FUN_00408ed0();
            *puVar5 = &PTR_FUN_00e3d020;
          }
          local_c = 7;
          FUN_00696b10();
          if (bVar1) {
            bVar1 = false;
            if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_20 = 0xf;
            local_24 = 0;
            local_34[0] = local_34[0] & 0xffffff00;
          }
          if (bVar2) {
            bVar2 = false;
            local_c = 8;
            FUN_009adb70();
            if (local_60 != 0) {
              FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_60 = 0;
            local_5c = 0;
            local_58 = 0;
          }
          local_c = 0;
          if ((bVar9) && (bVar9 = false, 0xf < local_3c)) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          iVar4 = FUN_00aae9af();
          local_c._0_1_ = 9;
          if (iVar4 != 0) {
            uVar6 = FUN_0068b500();
            FUN_0072c420(iVar4,uVar6,*local_90,0,in_ECX + -0x30);
          }
          local_c = (uint)local_c._1_3_ << 8;
          (**(code **)(**(int **)(*(int *)(in_ECX + 0xac) + 0x38) + 0x18))();
          iVar4 = FUN_00aae9af(0x44);
          puStack_10._0_1_ = 10;
          if (iVar4 == 0) {
            uVar6 = 0;
          }
          else {
            iVar7 = FUN_0068b500(DAT_012588e8);
            uVar6 = FUN_0072c180(iVar4,*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0x24));
          }
          puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
          (**(code **)(**(int **)(*(int *)(in_ECX + 0xac) + 0x38) + 0x18))(uVar6);
        }
        local_90 = (undefined4 *)local_90[2];
      } while (local_90 != (undefined4 *)0x0);
      if (local_80[0] != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    if (param_1 == 3) {
      ExceptionList = &local_14;
      iVar4 = FUN_00aae9af();
      local_c = 0xb;
      bVar9 = iVar4 != 0;
      if (bVar9) {
        local_6c = 0xf;
        local_70 = 0;
        local_80[0] = (undefined4 *)((uint)local_80[0] & 0xffffff00);
        FUN_00409350("SERVER_LOST",0xb);
        local_c = CONCAT31(local_c._1_3_,0xc);
        FUN_009a8ee0(local_64,local_80);
        local_c = 0xd;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_c = 0xe;
        FUN_009f23c0();
      }
      local_c = 0x11;
      FUN_00696b10();
      if (bVar9) {
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
      }
      local_c = 0xf;
      if ((bVar9) && (FUN_009a9740(), 0xf < local_6c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_004097a0();
      ExceptionList = local_14;
      return;
    }
    if (param_1 == 9) {
      ExceptionList = &local_14;
      iVar4 = FUN_00aae9af();
      local_c = 0x12;
      bVar9 = iVar4 != 0;
      if (bVar9) {
        FUN_009885d0();
        local_c = CONCAT31(local_c._1_3_,0x13);
        FUN_009a8ee0(local_64,local_34);
        local_c = 0x14;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_c = 0x15;
        FUN_009f23c0();
      }
      local_c = 0x18;
      FUN_00696b10();
      if (bVar9) {
        FUN_00408ad0();
      }
      local_c = 0xffffffff;
      if (bVar9) {
        FUN_00408ad0();
      }
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xac) + 0x38) + 0xc))();
      local_40 = 0xf;
      uStack_44 = 0;
      auStack_54[0] = 0;
      FUN_00409350();
      puStack_10 = (undefined1 *)0x19;
      piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x7c))(auStack_54);
      local_14 = (void *)0xffffffff;
      if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_44 = 0xf;
      uStack_48 = 0;
      local_58 = local_58 & 0xffffff00;
      puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))();
      puVar5 = (undefined4 *)*puVar5;
      while (puVar5 != (undefined4 *)0x0) {
        uVar6 = *puVar5;
        puVar5 = (undefined4 *)puVar5[2];
        cVar3 = FUN_00416db0();
        if (cVar3 != '\0') {
          (**(code **)(*piVar8 + 0x20))(uVar6,1);
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

