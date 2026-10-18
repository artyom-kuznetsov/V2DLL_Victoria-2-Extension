// FUN_00670760 @ 00670760 body=[[00670760, 00670a08] [00670a0c, 00670a4b] [00670a4f, 00670a77] [00670a7b, 00670aaa] [00670aae, 00670add] [00670ae1, 00670b10] [00670b14, 00670b3d] [00670b41, 00670b61] [00670b65, 00670b85] [00670b89, 00670baf] [00670bb3, 00670bc5]]


/* WARNING: Removing unreachable block (ram,0x00670a5d) */
/* WARNING: Removing unreachable block (ram,0x00670a6c) */
/* WARNING: Removing unreachable block (ram,0x00670a7b) */

undefined1 FUN_00670760(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int in_ECX;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined1 local_d8 [28];
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4517b;
  local_10 = ExceptionList;
  local_14 = 0;
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("messageicon_pause",0x11);
  local_8 = 0;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_14 = 1;
  iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_12c);
  if (in_ECX != iVar9) {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350("messageicon_log",0xf);
    local_8 = 1;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    local_14 = 3;
    iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_68);
    if (in_ECX != iVar9) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350("messageicon_dialog",0x12);
      local_8 = 2;
      bVar8 = false;
      bVar7 = false;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      local_14 = 7;
      iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_4c);
      if (in_ECX != iVar9) {
        bVar8 = false;
        bVar7 = false;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350("messageicon_map",0xf);
        local_8 = 3;
        local_14 = 0xf;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_30);
        if (in_ECX != iVar9) {
          FUN_009885d0();
          local_8 = 4;
          bVar8 = false;
          bVar7 = false;
          bVar6 = true;
          bVar5 = true;
          bVar4 = true;
          bVar3 = true;
          bVar2 = false;
          bVar1 = false;
          local_14 = 0x1f;
          iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_f4);
          if (in_ECX != iVar9) {
            FUN_009885d0();
            local_8 = 5;
            bVar8 = false;
            bVar7 = false;
            bVar6 = true;
            bVar5 = true;
            bVar4 = true;
            bVar3 = true;
            bVar2 = true;
            bVar1 = false;
            local_14 = 0x3f;
            iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_bc);
            if (in_ECX != iVar9) {
              FUN_009885d0();
              local_8 = 6;
              bVar8 = false;
              bVar7 = false;
              bVar6 = true;
              bVar5 = true;
              bVar4 = true;
              bVar3 = true;
              bVar2 = true;
              bVar1 = true;
              local_14 = 0x7f;
              iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_a0);
              if (in_ECX != iVar9) {
                FUN_009885d0();
                local_8 = 7;
                bVar8 = false;
                bVar7 = false;
                bVar6 = true;
                bVar5 = true;
                bVar4 = true;
                bVar3 = true;
                bVar2 = true;
                bVar1 = true;
                local_14 = 0xff;
                iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_d8);
                if (in_ECX != iVar9) {
                  FUN_009885d0();
                  local_8 = 8;
                  bVar8 = true;
                  bVar7 = false;
                  bVar6 = true;
                  bVar5 = true;
                  bVar4 = true;
                  bVar3 = true;
                  bVar2 = true;
                  bVar1 = true;
                  local_14 = 0x1ff;
                  iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_84);
                  if (in_ECX != iVar9) {
                    FUN_009885d0();
                    local_8 = 9;
                    bVar8 = true;
                    bVar7 = true;
                    bVar6 = true;
                    bVar5 = true;
                    bVar4 = true;
                    bVar3 = true;
                    bVar2 = true;
                    bVar1 = true;
                    local_14 = 0x3ff;
                    iVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(local_110);
                    param_1._3_1_ = 0;
                    if (in_ECX != iVar9) goto LAB_006709e6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  param_1._3_1_ = 1;
LAB_006709e6:
  if (bVar7) {
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110[0]);
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110[0] = local_110[0] & 0xffffff00;
  }
  if (bVar8) {
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
  }
  if (bVar1) {
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0[0]);
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
  }
  if (bVar2) {
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
  }
  if (bVar3) {
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
  }
  if (bVar4) {
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
  }
  if (bVar5) {
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
  }
  if (bVar6) {
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
  }
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_12c[0]);
  }
  ExceptionList = local_10;
  return param_1._3_1_;
}

