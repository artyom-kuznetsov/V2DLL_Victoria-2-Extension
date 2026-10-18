// FUN_007bb740 @ 007bb740 body=[[007bb740, 007bb906] [007bb90a, 007bb951] [007bb955, 007bb9a2] [007bb9a6, 007bb9f3] [007bb9f7, 007bba48] [007bba61, 007bbab9] [007bbabd, 007bd1a8]]


/* WARNING: Removing unreachable block (ram,0x007bbab0) */
/* WARNING: Removing unreachable block (ram,0x007bb8fd) */

undefined1 * FUN_007bb740(int param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *local_23c;
  int local_230;
  int iStack_228;
  int iStack_224;
  uint uStack_20c;
  int iStack_1e0;
  int iStack_10c;
  undefined1 auStack_d0 [180];
  void *pvStack_1c;
  undefined1 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba4fb6;
  local_14 = ExceptionList;
  piVar7 = *(int **)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x2c) < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_007bb7bb;
    ExceptionList = &local_14;
    piVar5 = (int *)FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_007bb7bb:
    piVar5 = (int *)0x0;
    ExceptionList = &local_14;
  }
  else {
    ExceptionList = &local_14;
    piVar5 = (int *)FUN_009c1d40();
  }
  *(int **)(param_1 + 0x28) = piVar5;
  if (piVar5 == (int *)0x0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x30) = 0xf;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    param_2[0x1c] = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0xf;
    *(undefined4 *)(param_2 + 0x48) = 0;
    param_2[0x38] = 0;
    *(undefined4 *)(param_2 + 0x54) = 0;
    param_2[0x58] = 1;
    ExceptionList = local_14;
    return param_2;
  }
  cVar4 = (**(code **)(*piVar5 + 0x20))();
  if (cVar4 == '\0') {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x30) = 0xf;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    param_2[0x1c] = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0xf;
    *(undefined4 *)(param_2 + 0x48) = 0;
    param_2[0x38] = 0;
    *(undefined4 *)(param_2 + 0x54) = 0;
    param_2[0x58] = 1;
    ExceptionList = local_14;
    return param_2;
  }
  uStack_c = 0;
  FUN_00409350();
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  local_23c = (int *)((uint)(param_3 == piVar6) * 0x1000000);
  puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
  if (param_3 == piVar6) {
    (**(code **)(*(int *)piVar5[0x19] + 0x1c))();
    local_14._0_1_ = 2;
    FUN_00408ed0();
    local_14._0_1_ = 0;
    if (0xf < uStack_20c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448740();
    FUN_009644e0();
    local_14._0_1_ = 3;
    FUN_00448aa0();
    local_14._0_1_ = 0;
    if (0xf < uStack_20c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448740();
    FUN_009648e0();
    local_14._0_1_ = 4;
    FUN_00448aa0();
    local_14._0_1_ = 0;
    if (0xf < uStack_20c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448740();
    FUN_00964d80();
    local_14._0_1_ = 5;
    FUN_00448aa0();
    local_14._0_1_ = 0;
    uVar3 = local_14._0_1_;
    local_14._0_1_ = 0;
    if (0xf < uStack_20c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))();
    local_14 = (void *)((uint)local_14 & 0xffffff00);
    if (param_3 == piVar6) {
      FUN_0096d650();
      local_14._0_1_ = 7;
      FUN_00408ed0();
      local_14._0_1_ = 0;
      FUN_00408ad0();
      FUN_00448740();
      FUN_0095bdf0();
      local_14._0_1_ = 8;
      FUN_00448aa0();
      local_14._0_1_ = 0;
      FUN_00408ad0();
      FUN_00448740();
      FUN_0095c450();
      local_14._0_1_ = 9;
      FUN_00448aa0();
      local_14._0_1_ = 0;
      FUN_00408ad0();
      FUN_009885d0();
      local_14._0_1_ = 10;
      FUN_009a8ee0();
      local_14._0_1_ = 0xb;
      FUN_00475500();
      FUN_009a9880();
      local_14._0_1_ = 0xc;
      FUN_00408ed0();
      FUN_00408ad0();
      local_14._0_1_ = 10;
      FUN_009a9740();
      local_14._0_1_ = 0;
      FUN_00408ad0();
      uVar3 = local_14._0_1_;
      if (((piVar5[0x10] - piVar5[0xf] & 0xfffffffcU) != 0) &&
         (local_230 = 0, 0 < (int)(local_23c[0x10] - local_23c[0xf] & 0xfffffffcU))) {
        do {
          piVar5 = *(int **)(local_23c[0xf] + local_230 * 4);
          if ((piVar5[0x1d] != 0) &&
             (((iVar8 = piVar5[0x18], (char)iVar8 != 'R' || ((char)((uint)iVar8 >> 8) != 'E')) ||
              ((char)((uint)iVar8 >> 0x10) != 'B')))) {
            FUN_009885d0();
            local_14._0_1_ = 0xd;
            FUN_009885d0();
            local_14._0_1_ = 0xe;
            (**(code **)(*piVar5 + 0x20))();
            uStack_18 = 0xf;
            FUN_00988fa0();
            uStack_18 = 0x10;
            FUN_00988f20();
            uStack_18 = 0x11;
            (**(code **)(*piVar7 + 0x20))();
            FUN_00988f20();
            local_14._0_1_ = 0x12;
            FUN_00988f20();
            local_14._0_1_ = 0x13;
            FUN_00448aa0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_14._0_1_ = 0;
            FUN_00408ad0();
          }
          local_230 = local_230 + 1;
        } while (local_230 < local_23c[0x10] - local_23c[0xf] >> 2);
        FUN_0040c830();
        goto LAB_007bd184;
      }
    }
    else {
      FUN_009885d0();
      local_14._0_1_ = 0x14;
      piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
      local_14._0_1_ = 0;
      FUN_00408ad0();
      if (piVar7 == param_3) {
        FUN_00567250();
        local_14._0_1_ = 0x15;
        FUN_00408ed0();
        local_14._0_1_ = 0;
        FUN_00408ad0();
        FUN_00448740();
        FUN_0095ed10();
        local_14._0_1_ = 0x16;
        FUN_00448aa0();
        local_14._0_1_ = 0;
        FUN_00408ad0();
        FUN_0095f780();
        local_14 = (void *)CONCAT31(local_14._1_3_,0x17);
LAB_007bbec4:
        FUN_00408ed0();
      }
      else {
        (**(code **)(*param_3 + 0x44))();
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          (**(code **)(*param_3 + 0x44))();
          cVar4 = FUN_0040b360();
          if (cVar4 == '\0') {
            (**(code **)(*param_3 + 0x44))();
            cVar4 = FUN_0040b360();
            if (cVar4 == '\0') {
              (**(code **)(*param_3 + 0x44))();
              cVar4 = FUN_0040b360();
              if (cVar4 == '\0') {
                (**(code **)(*param_3 + 0x44))();
                cVar4 = FUN_0040b360();
                if (cVar4 != '\0') {
                  if (*(char *)(DAT_012588e8 + 0xb20) == '\0') {
                    FUN_00966520();
                    local_14._0_1_ = 0x36;
                    FUN_00448aa0();
                    local_14._0_1_ = 0;
                    FUN_00408ad0();
                    FUN_00965e80();
                    local_14._0_1_ = 0x37;
                    FUN_00448aa0();
                    local_14._0_1_ = 0;
                    FUN_00408ad0();
                    __alldiv(local_23c[0x94] << 0xf,
                             local_23c[0x95] << 0xf | (uint)local_23c[0x94] >> 0x11);
                    FUN_00988bb0();
                    local_14._0_1_ = 0x38;
                    FUN_0042c180();
                    local_14._0_1_ = 0x39;
                    FUN_00448aa0();
                    FUN_00408ad0();
                    local_14._0_1_ = 0;
                    FUN_00408ad0();
                    FUN_004115d0();
                    FUN_0040c830();
                  }
                  else {
                    FUN_004115d0();
                    FUN_0040c830();
                  }
                  goto LAB_007bd184;
                }
                (**(code **)(*param_3 + 0x44))();
                cVar4 = FUN_0040b360();
                if (cVar4 == '\0') {
                  (**(code **)(*param_3 + 0x44))();
                  cVar4 = FUN_0040b360();
                  if (cVar4 == '\0') {
                    (**(code **)(*param_3 + 0x44))();
                    cVar4 = FUN_0040b360();
                    if (cVar4 == '\0') {
                      (**(code **)(*param_3 + 0x44))();
                      cVar4 = FUN_0040b360();
                      if (cVar4 == '\0') {
                        (**(code **)(*param_3 + 0x44))();
                        cVar4 = FUN_0040b360();
                        if (cVar4 == '\0') {
                          (**(code **)(*param_3 + 0x44))();
                          cVar4 = FUN_0040b360();
                          if (cVar4 == '\0') {
                            (**(code **)(*param_3 + 0x44))();
                            cVar4 = FUN_0040b360();
                            if (cVar4 != '\0') {
                              iVar8 = FUN_00967f50();
                              uVar3 = local_14._0_1_;
                              if (iVar8 != 0) {
                                FUN_00967f50();
                                FUN_0041a080();
                                local_14._0_1_ = 0x3a;
                                FUN_00408ed0();
                                local_14._0_1_ = 0;
                                FUN_00408ad0();
                                FUN_00967f50();
                                FUN_004e42c0();
                                local_14 = (void *)CONCAT31(local_14._1_3_,0x3b);
                                goto LAB_007bbec4;
                              }
                              goto LAB_007bd150;
                            }
                            (**(code **)(*param_3 + 0x44))();
                            cVar4 = FUN_0040b360();
                            if (cVar4 == '\0') {
                              (**(code **)(*param_3 + 0x44))();
                              cVar4 = FUN_0040b360();
                              if (cVar4 == '\0') {
                                (**(code **)(*param_3 + 0x44))();
                                cVar4 = FUN_0040b360();
                                if (cVar4 == '\0') {
                                  (**(code **)(*param_3 + 0x44))();
                                  cVar4 = FUN_0040b360();
                                  if (cVar4 == '\0') {
                                    (**(code **)(*param_3 + 0x44))();
                                    cVar4 = FUN_0040b360();
                                    if (cVar4 == '\0') {
                                      (**(code **)(*param_3 + 0x44))();
                                      cVar4 = FUN_0040b360();
                                      if (cVar4 != '\0') {
                                        FUN_0095ead0();
                                        local_14._0_1_ = 0x47;
                                        FUN_004115d0();
                                        local_14._0_1_ = 0;
                                        FUN_00459820();
                                        FUN_0040c830();
                                        goto LAB_007bd184;
                                      }
                                      (**(code **)(*param_3 + 0x44))();
                                      cVar4 = FUN_0040b360();
                                      if (cVar4 == '\0') {
                                        (**(code **)(*param_3 + 0x44))();
                                        cVar4 = FUN_0040b360();
                                        if (cVar4 != '\0') {
                                          FUN_009885d0();
                                          local_14._0_1_ = 0x4d;
                                          FUN_009a8ee0();
                                          local_14._0_1_ = 0x4e;
                                          FUN_00475500();
                                          FUN_009a9880();
                                          local_14._0_1_ = 0x4f;
                                          FUN_00408ed0();
                                          FUN_00408ad0();
                                          local_14._0_1_ = 0x4d;
                                          FUN_009a9740();
                                          local_14 = (void *)((uint)local_14._1_3_ << 8);
                                          FUN_00408ad0();
                                          FUN_00448740();
                                          if ((piVar5[0x16] != 0) &&
                                             (*(char *)(piVar5[0x1a] + 0x40) != '\0')) {
                                            __alldiv();
                                          }
                                          FUN_00408d50();
                                          FUN_0043a6a0();
                                          FUN_00988b20();
                                          local_14._0_1_ = 0x50;
                                          FUN_00448aa0();
                                          local_14._0_1_ = 0;
                                          FUN_00408ad0();
                                          FUN_00448740();
                                          FUN_0040c830();
                                          goto LAB_007bd184;
                                        }
                                        (**(code **)(*param_3 + 0x44))();
                                        cVar4 = FUN_0040b360();
                                        uVar3 = local_14._0_1_;
                                        if ((cVar4 != '\0') && (*(int *)(param_1 + 0x50) != 0)) {
                                          FUN_005659c0();
                                          local_14._0_1_ = 0x51;
                                          FUN_00408ed0();
                                          local_14._0_1_ = 0;
                                          FUN_00408ad0();
                                          uVar3 = local_14._0_1_;
                                          if (local_23c[0x75] != 0) {
                                            FUN_009885d0();
                                            local_14._0_1_ = 0x52;
                                            FUN_009885d0();
                                            local_14._0_1_ = 0x53;
                                            FUN_009885d0();
                                            local_14._0_1_ = 0x54;
                                            FUN_00988bb0();
                                            local_14._0_1_ = 0x55;
                                            FUN_009a8ee0();
                                            local_14._0_1_ = 0x56;
                                            FUN_00475500();
                                            FUN_009a9880();
                                            local_14._0_1_ = 0x57;
                                            FUN_009885d0();
                                            local_14._0_1_ = 0x58;
                                            FUN_00988f20();
                                            local_14._0_1_ = 0x59;
                                            FUN_00988f20();
                                            local_14._0_1_ = 0x5a;
                                            FUN_00988f20();
                                            local_14._0_1_ = 0x5b;
                                            FUN_00988f20();
                                            local_14._0_1_ = 0x5c;
                                            FUN_00448aa0();
                                            FUN_00408ad0();
                                            FUN_00408ad0();
                                            FUN_00408ad0();
                                            FUN_00408ad0();
                                            FUN_00408ad0();
                                            FUN_00408ad0();
                                            local_14 = (void *)CONCAT31(local_14._1_3_,0x55);
                                            FUN_009a9740();
                                            FUN_00408ad0();
                                            FUN_00408ad0();
                                            FUN_00408ad0();
                                            goto LAB_007bd144;
                                          }
                                        }
                                        goto LAB_007bd150;
                                      }
                                      if ((char)piVar5[0x13] == '\0') {
                                        FUN_0095efd0();
                                        local_14._0_1_ = 0x48;
                                        FUN_00448aa0();
                                        local_14._0_1_ = 0;
                                        FUN_00408ad0();
                                        FUN_0095f9b0();
                                        local_14 = (void *)CONCAT31(local_14._1_3_,0x49);
                                        FUN_00408ed0();
                                      }
                                      else {
                                        FUN_009885d0();
                                        local_14._0_1_ = 0x4a;
                                        FUN_009a8ee0();
                                        local_14._0_1_ = 0x4b;
                                        FUN_00475500();
                                        FUN_009a9880();
                                        local_14._0_1_ = 0x4c;
                                        FUN_00448aa0();
                                        FUN_00408ad0();
                                        local_14 = (void *)CONCAT31(local_14._1_3_,0x4a);
                                        FUN_009a9740();
                                      }
                                    }
                                    else {
                                      FUN_009659f0();
                                      FUN_009885d0();
                                      local_14._0_1_ = 0x3e;
                                      FUN_009885d0();
                                      local_14._0_1_ = 0x3f;
                                      FUN_009885d0();
                                      local_14._0_1_ = 0x40;
                                      FUN_009c80d0(auStack_d0);
                                      local_14._0_1_ = 0x41;
                                      FUN_009a8ee0();
                                      local_14._0_1_ = 0x42;
                                      FUN_00475500();
                                      FUN_009a9880();
                                      local_14._0_1_ = 0x43;
                                      FUN_00988f20();
                                      local_14._0_1_ = 0x44;
                                      FUN_00988f20();
                                      local_14._0_1_ = 0x45;
                                      FUN_00988f20();
                                      local_14._0_1_ = 0x46;
                                      FUN_00408ed0();
                                      FUN_00408ad0();
                                      FUN_00408ad0();
                                      FUN_00408ad0();
                                      FUN_00408ad0();
                                      local_14 = (void *)CONCAT31(local_14._1_3_,0x41);
                                      FUN_009a9740();
                                      FUN_00408ad0();
                                      FUN_00408ad0();
                                      FUN_00408ad0();
                                    }
                                    goto LAB_007bd144;
                                  }
                                }
                              }
                            }
                            uVar3 = local_14._0_1_;
                            if (piVar5[0x9d] == 0) goto LAB_007bd150;
                            FUN_00471d20();
                            local_14._0_1_ = 0x3c;
                            FUN_00408ed0();
                            local_14._0_1_ = 0;
                            FUN_00408ad0();
                            FUN_00472cd0();
                            local_14 = (void *)CONCAT31(local_14._1_3_,0x3d);
                            FUN_00408ed0();
                            goto LAB_007bd144;
                          }
                        }
                        FUN_0095d930();
                        goto LAB_007bd184;
                      }
                    }
                    FUN_0095d3a0();
                    goto LAB_007bd184;
                  }
                }
                FUN_0095ce10();
                goto LAB_007bd184;
              }
              (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x58) + 0x4c))();
              cVar4 = FUN_009e0c90();
              iVar8 = DAT_01258a3c;
              if (cVar4 != '\0') {
                local_230 = 0;
                iStack_228 = 1;
                if (4 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) &
                             0xfffffffcU)) {
                  do {
                    piVar7 = (int *)(piVar5[0x1f] + iStack_228 * 8);
                    iVar2 = piVar7[1];
                    if ((-1 < iVar2) && ((0 < iVar2 || (*piVar7 != 0)))) {
                      piVar7 = *(int **)(*(int *)(iVar8 + 0xc) + iStack_228 * 4);
                      FUN_009885d0();
                      local_14._0_1_ = 0x28;
                      FUN_00988bb0();
                      local_14._0_1_ = 0x29;
                      FUN_009885d0();
                      local_14._0_1_ = 0x2a;
                      (**(code **)(*piVar7 + 0x18))();
                      local_14._0_1_ = 0x2b;
                      FUN_00988f20();
                      local_14._0_1_ = 0x2c;
                      FUN_00988f20();
                      local_14._0_1_ = 0x2d;
                      FUN_00988f20();
                      local_14._0_1_ = 0x2e;
                      FUN_00448aa0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      local_14._0_1_ = 0;
                      FUN_00408ad0();
                      FUN_00448740();
                      if (local_230 == iStack_1e0) {
                        FUN_009885d0();
                        local_14._0_1_ = 0x2f;
                        FUN_00988bb0();
                        local_14._0_1_ = 0x30;
                        FUN_009885d0();
                        local_14._0_1_ = 0x31;
                        (**(code **)(*piVar7 + 0x18))();
                        local_14._0_1_ = 0x32;
                        FUN_00988f20();
                        local_14._0_1_ = 0x33;
                        FUN_00988f20();
                        local_14._0_1_ = 0x34;
                        FUN_00988f20();
                        local_14._0_1_ = 0x35;
                        FUN_00408ed0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        local_14._0_1_ = 0;
                        FUN_00408ad0();
                      }
                      local_230 = local_230 + 1;
                      piVar5 = local_23c;
                    }
                    iStack_228 = iStack_228 + 1;
                  } while (iStack_228 < *(int *)(iVar8 + 0x10) - *(int *)(iVar8 + 0xc) >> 2);
                }
                FUN_0040c830();
                goto LAB_007bd184;
              }
            }
            else {
              (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x58) + 0x4c))();
              cVar4 = FUN_009e0c90();
              iVar8 = DAT_01258a48;
              if (cVar4 != '\0') {
                iStack_228 = 0;
                iStack_224 = 1;
                if (4 < (int)(*(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) &
                             0xfffffffcU)) {
                  do {
                    uVar1 = *(uint *)(piVar5[0x29] + iStack_224 * 8);
                    iVar2 = *(int *)(piVar5[0x29] + iStack_224 * 8 + 4);
                    if ((DAT_00f0c6ec <= iVar2) &&
                       ((DAT_00f0c6ec < iVar2 || (DAT_00f0c6e8 < uVar1)))) {
                      piVar7 = *(int **)(*(int *)(iVar8 + 0x18) + iStack_224 * 4);
                      if (iStack_228 == iStack_10c) {
                        FUN_009885d0();
                        local_14._0_1_ = 0x1a;
                        FUN_00988bb0();
                        local_14._0_1_ = 0x1b;
                        FUN_009885d0();
                        local_14._0_1_ = 0x1c;
                        (**(code **)(*piVar7 + 0x2c))();
                        local_14._0_1_ = 0x1d;
                        FUN_00988f20();
                        local_14._0_1_ = 0x1e;
                        FUN_00988f20();
                        local_14._0_1_ = 0x1f;
                        FUN_00988f20();
                        local_14._0_1_ = 0x20;
                        FUN_00408ed0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        local_14._0_1_ = 0;
                        FUN_00408ad0();
                      }
                      iStack_228 = iStack_228 + 1;
                    }
                    if ((DAT_00f0c6f4 <= iVar2) &&
                       ((DAT_00f0c6f4 < iVar2 || (DAT_00f0c6f0 < uVar1)))) {
                      piVar7 = *(int **)(*(int *)(iVar8 + 0x18) + iStack_224 * 4);
                      FUN_009885d0();
                      local_14._0_1_ = 0x21;
                      FUN_00988bb0();
                      local_14._0_1_ = 0x22;
                      FUN_009885d0();
                      local_14._0_1_ = 0x23;
                      (**(code **)(*piVar7 + 0x2c))();
                      local_14._0_1_ = 0x24;
                      FUN_00988f20();
                      local_14._0_1_ = 0x25;
                      FUN_00988f20();
                      local_14._0_1_ = 0x26;
                      FUN_00988f20();
                      local_14._0_1_ = 0x27;
                      FUN_00448aa0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      local_14._0_1_ = 0;
                      FUN_00408ad0();
                      FUN_00448740();
                      piVar5 = local_23c;
                    }
                    iStack_224 = iStack_224 + 1;
                  } while (iStack_224 < *(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2);
                }
              }
            }
            FUN_0040c830();
            goto LAB_007bd184;
          }
          FUN_00960110();
          local_14 = (void *)CONCAT31(local_14._1_3_,0x19);
          FUN_00448aa0();
        }
        else {
          FUN_00961790();
          local_14 = (void *)CONCAT31(local_14._1_3_,0x18);
          FUN_00448aa0();
        }
      }
LAB_007bd144:
      local_14._0_1_ = 0;
      FUN_00408ad0();
      uVar3 = local_14._0_1_;
    }
  }
LAB_007bd150:
  local_14._0_1_ = uVar3;
  FUN_0040c830();
LAB_007bd184:
  FUN_00459820();
  ExceptionList = pvStack_1c;
  return param_2;
}

