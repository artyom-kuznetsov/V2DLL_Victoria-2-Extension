// FUN_00451f80 @ 00451f80 body=[[00451f80, 004522ce] [004522d2, 00452317] [0045231b, 0045234a] [0045234e, 0045237a] [0045237e, 004523b3] [004523b7, 004523e8] [004523ec, 0045241b] [0045241f, 0045244e] [00452452, 00452481] [00452485, 004524ae] [004524b2, 004524d2] [004524d6, 004524f6] [004524fa, 00452520] [00452524, 00452536]]


/* WARNING: Removing unreachable block (ram,0x004523ce) */
/* WARNING: Removing unreachable block (ram,0x004523dd) */
/* WARNING: Removing unreachable block (ram,0x004523ec) */

undefined1 FUN_00451f80(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int in_ECX;
  uint local_180 [4];
  undefined4 local_170;
  uint local_16c;
  uint local_164 [4];
  undefined4 local_154;
  uint local_150;
  uint local_148 [4];
  undefined4 local_138;
  uint local_134;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  undefined1 local_a0 [28];
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
  puStack_c = &LAB_00b4724e;
  local_10 = ExceptionList;
  local_14 = 0;
  local_16c = 0xf;
  local_170 = 0;
  local_180[0] = local_180[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("header_title",0xc);
  local_8 = 0;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_14 = 1;
  iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x3c))(local_180);
  if (in_ECX != iVar12) {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350("filter_deselect",0xf);
    local_8 = 1;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    local_14 = 3;
    iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_68);
    if (in_ECX != iVar12) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350("filter_bestguess",0x10);
      local_8 = 2;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      local_14 = 7;
      iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_4c);
      if (in_ECX != iVar12) {
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
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
        FUN_00409350("filter_enemies",0xe);
        local_8 = 3;
        local_14 = 0xf;
        iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_30);
        if (in_ECX != iVar12) {
          FUN_009885d0();
          local_8 = 4;
          bVar11 = false;
          bVar10 = false;
          bVar9 = false;
          bVar8 = false;
          bVar7 = false;
          bVar6 = true;
          bVar5 = true;
          bVar4 = true;
          bVar3 = true;
          bVar2 = false;
          bVar1 = false;
          local_14 = 0x1f;
          iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_148);
          if (in_ECX != iVar12) {
            FUN_009885d0();
            local_8 = 5;
            bVar11 = false;
            bVar10 = false;
            bVar9 = false;
            bVar8 = false;
            bVar7 = false;
            bVar6 = true;
            bVar5 = true;
            bVar4 = true;
            bVar3 = true;
            bVar2 = true;
            bVar1 = false;
            local_14 = 0x3f;
            iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_110);
            if (in_ECX != iVar12) {
              FUN_009885d0();
              local_8 = 6;
              bVar11 = false;
              bVar10 = false;
              bVar9 = false;
              bVar8 = false;
              bVar7 = false;
              bVar6 = true;
              bVar5 = true;
              bVar4 = true;
              bVar3 = true;
              bVar2 = true;
              bVar1 = true;
              local_14 = 0x7f;
              iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_d8);
              if (in_ECX != iVar12) {
                FUN_009885d0();
                local_8 = 7;
                bVar11 = false;
                bVar10 = false;
                bVar9 = false;
                bVar8 = false;
                bVar7 = false;
                bVar6 = true;
                bVar5 = true;
                bVar4 = true;
                bVar3 = true;
                bVar2 = true;
                bVar1 = true;
                local_14 = 0xff;
                iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_a0);
                if (in_ECX != iVar12) {
                  FUN_009885d0();
                  local_8 = 8;
                  bVar11 = true;
                  bVar10 = false;
                  bVar9 = false;
                  bVar8 = false;
                  bVar7 = false;
                  bVar6 = true;
                  bVar5 = true;
                  bVar4 = true;
                  bVar3 = true;
                  bVar2 = true;
                  bVar1 = true;
                  local_14 = 0x1ff;
                  iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_164);
                  if (in_ECX != iVar12) {
                    FUN_009885d0();
                    local_8 = 9;
                    bVar11 = true;
                    bVar10 = true;
                    bVar9 = false;
                    bVar8 = false;
                    bVar7 = false;
                    bVar6 = true;
                    bVar5 = true;
                    bVar4 = true;
                    bVar3 = true;
                    bVar2 = true;
                    bVar1 = true;
                    local_14 = 0x3ff;
                    iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_f4);
                    if (in_ECX != iVar12) {
                      FUN_009885d0();
                      local_8 = 10;
                      bVar11 = true;
                      bVar10 = true;
                      bVar9 = true;
                      bVar8 = false;
                      bVar7 = false;
                      bVar6 = true;
                      bVar5 = true;
                      bVar4 = true;
                      bVar3 = true;
                      bVar2 = true;
                      bVar1 = true;
                      local_14 = 0x7ff;
                      iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_84);
                      if (in_ECX != iVar12) {
                        FUN_009885d0();
                        local_8 = 0xb;
                        bVar11 = true;
                        bVar10 = true;
                        bVar9 = true;
                        bVar8 = true;
                        bVar7 = false;
                        bVar6 = true;
                        bVar5 = true;
                        bVar4 = true;
                        bVar3 = true;
                        bVar2 = true;
                        bVar1 = true;
                        local_14 = 0xfff;
                        iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_bc);
                        if (in_ECX != iVar12) {
                          FUN_009885d0();
                          local_8 = 0xc;
                          bVar11 = true;
                          bVar10 = true;
                          bVar9 = true;
                          bVar8 = true;
                          bVar7 = true;
                          bVar6 = true;
                          bVar5 = true;
                          bVar4 = true;
                          bVar3 = true;
                          bVar2 = true;
                          bVar1 = true;
                          local_14 = 0x1fff;
                          iVar12 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(local_12c);
                          param_1._3_1_ = 0;
                          if (in_ECX != iVar12) goto LAB_004522ac;
                        }
                      }
                    }
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
LAB_004522ac:
  if (bVar7) {
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c[0]);
    }
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = local_12c[0] & 0xffffff00;
  }
  if (bVar8) {
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
  }
  if (bVar9) {
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
  }
  if (bVar10) {
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
  }
  if (bVar11) {
    if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_164[0]);
    }
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = local_164[0] & 0xffffff00;
  }
  if (bVar1) {
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d8[0]);
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
  }
  if (bVar2) {
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110[0]);
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110[0] = local_110[0] & 0xffffff00;
  }
  if (bVar3) {
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_148[0]);
    }
    local_134 = 0xf;
    local_138 = 0;
    local_148[0] = local_148[0] & 0xffffff00;
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
  if (0xf < local_16c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_180[0]);
  }
  ExceptionList = local_10;
  return param_1._3_1_;
}

