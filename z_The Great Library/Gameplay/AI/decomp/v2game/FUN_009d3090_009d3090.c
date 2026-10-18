// FUN_009d3090 @ 009d3090 body=[[009d3090, 009d3197] [009d319b, 009d3219]]


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_009d3090(int param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_1f0 [8];
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined **local_1e0;
  undefined4 *******local_1dc;
  undefined4 *******pppppppuStack_1d8;
  int local_108 [12];
  undefined4 local_d8;
  undefined **local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_ac;
  uint uStack_a4;
  int local_9c;
  undefined4 local_98;
  uint auStack_90 [6];
  int local_78;
  uint local_74;
  undefined4 *******local_6c [4];
  int local_5c;
  uint local_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint local_34 [3];
  undefined1 **ppuStack_28;
  undefined1 **local_24;
  undefined1 **local_20;
  undefined1 *local_18 [4];
  undefined4 local_8;
  
  local_18[3] = &LAB_00b616ef;
  local_18[2] = ExceptionList;
  local_18[1] = &stack0xfffffe2c;
  if (*(int *)(param_1 + 0x98) == 0) {
    return 0;
  }
  local_74 = 0xf;
  local_78 = 0;
  auStack_90[2] = auStack_90[2] & 0xffffff00;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (undefined4 *******)((uint)local_6c[0] & 0xffffff00);
  pppppppuStack_1d8 = (undefined4 *******)0xe3b414;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1dc = (undefined4 *******)0x9d30f2;
  ExceptionList = local_18 + 2;
  iVar4 = PHYSFS_exists();
  if (iVar4 != 0) {
    local_cc = (undefined **)0x0;
    local_c8 = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_98 = 0xf;
    local_9c = 0;
    local_ac = 0;
    local_8._0_1_ = 3;
    pppppppuStack_1d8 = (undefined4 *******)0xd;
    local_1dc = (undefined4 *******)0xe3b414;
    local_20 = (undefined1 **)0xf;
    local_24 = (undefined1 **)0x0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_1e0 = (undefined **)0x9d3151;
    FUN_00409350();
    local_18[0] = local_1f0;
    local_8._0_1_ = 4;
    local_1dc = (undefined4 *******)0xf;
    local_1e0 = (undefined **)0x0;
    local_1f0[0] = 0;
    FUN_00409350(&DAT_00ded94d,0);
    FUN_00992740(local_108,local_34,0);
    local_8 = CONCAT31(local_8._1_3_,6);
    if (0xf < local_20) {
      pppppppuStack_1d8 = (undefined4 *******)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_1dc = (undefined4 *******)&UNK_009d3198;
      FUN_00aae91b();
    }
    local_20 = (undefined1 **)0xf;
    local_24 = (undefined1 **)0x0;
    local_34[0] = local_34[0] & 0xffffff00;
    pppppppuStack_1d8 = (undefined4 *******)0x9d31b6;
    iVar4 = (**(code **)(local_108[0] + 0x38))();
    pppppppuStack_1d8 = (undefined4 *******)0x9d31c3;
    FUN_009d7300();
    ppuVar1 = local_cc;
    if (iVar4 != 0) {
      local_1dc = (undefined4 *******)0x1;
      local_1e0 = local_cc;
      uStack_1e4 = local_d8;
      uStack_1e8 = 0x9d31dd;
      pppppppuStack_1d8 = (undefined4 *******)iVar4;
      PHYSFS_read();
    }
    ppuVar5 = ppuVar1;
    do {
      cVar3 = *(char *)ppuVar5;
      ppuVar5 = (undefined **)((int)ppuVar5 + 1);
    } while (cVar3 != '\0');
    pppppppuStack_1d8 = (undefined4 *******)((int)ppuVar5 - (int)((int)ppuVar1 + 1));
    local_1dc = (undefined4 *******)ppuVar1;
    local_1e0 = (undefined **)0x9d31fb;
    FUN_00409350();
    pppppppuStack_1d8 = (undefined4 *******)0x9d3206;
    FUN_00992d60();
    pppppppuStack_1d8 = (undefined4 *******)0x9d3211;
    FUN_009d6f00();
    local_8 = 1;
    uVar6 = FUN_009d323a();
    return uVar6;
  }
  if (local_78 != 0) {
    pppppppuStack_1d8 = (undefined4 *******)auStack_50;
    local_1dc = (undefined4 *******)param_1;
    local_1e0 = (undefined **)0x9d3250;
    local_1e0 = (undefined **)FUN_009d2910();
    pppppppuStack_1d8 = (undefined4 *******)0xffffffff;
    local_1dc = (undefined4 *******)0x0;
    local_8._0_1_ = 8;
    uStack_1e4 = 0x9d3260;
    FUN_00408ed0();
    local_8._0_1_ = 1;
    if (0xf < uStack_3c) {
      pppppppuStack_1d8 = (undefined4 *******)auStack_50[0];
                    /* WARNING: Subroutine does not return */
      local_1dc = (undefined4 *******)&UNK_009d3273;
      FUN_00aae91b();
    }
    if (local_78 != 0) {
      pppppppuStack_1d8 = (undefined4 *******)0x9d3289;
      cVar3 = FUN_00416db0();
      if (cVar3 != '\0') {
        local_18[0] = (undefined1 *)**(int **)(param_1 + 0x94);
        if ((int *)local_18[0] != *(int **)(param_1 + 0x94)) {
          do {
            local_18[0][0x124] = 1;
            pppppppuStack_1d8 = (undefined4 *******)0x9d32bf;
            FUN_009d3e90();
          } while (local_18[0] != *(undefined1 **)(param_1 + 0x94));
        }
        goto LAB_009d3577;
      }
    }
  }
  ppuVar8 = (undefined1 **)0x0;
  ppuStack_28 = (undefined1 **)0x0;
  local_24 = (undefined1 **)0x0;
  local_20 = (undefined1 **)0x0;
  local_8 = CONCAT31(local_8._1_3_,9);
  local_18[0] = (undefined1 *)**(int **)(param_1 + 0x94);
  if ((int *)local_18[0] != *(int **)(param_1 + 0x94)) {
    auStack_90[0] = 1;
    auStack_90[1] = 3;
    do {
      puVar2 = local_18[0];
      uVar10 = 0;
      do {
        pppppppuStack_1d8 = (undefined4 *******)auStack_90[uVar10];
        local_1dc = (undefined4 *******)0x9d331d;
        iVar4 = FUN_009d2f80();
        puVar2[0x124] = iVar4 == 0;
        if (iVar4 == 0) goto LAB_009d33fd;
        uVar10 = uVar10 + 1;
      } while (uVar10 < 2);
      if ((local_18 < ppuVar8) && (ppuStack_28 <= local_18)) {
        iVar4 = (int)local_18 - (int)ppuStack_28;
        if (ppuVar8 == local_20) {
          uVar10 = (int)ppuVar8 - (int)ppuStack_28 >> 2;
          if (0x3ffffffe < uVar10) {
LAB_009d3482:
            pppppppuStack_1d8 = (undefined4 *******)0xdeda30;
                    /* WARNING: Subroutine does not return */
            local_1dc = (undefined4 *******)0x9d348c;
            FUN_00aad3ad();
          }
          uVar10 = uVar10 + 1;
          uVar7 = (int)local_20 - (int)ppuStack_28 >> 2;
          if (uVar7 < uVar10) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              pppppppuStack_1d8 = (undefined4 *******)0x0;
            }
            else {
              pppppppuStack_1d8 = (undefined4 *******)(uVar7 + (uVar7 >> 1));
            }
            if (pppppppuStack_1d8 < uVar10) {
              pppppppuStack_1d8 = (undefined4 *******)uVar10;
            }
            local_1dc = (undefined4 *******)0x9d3394;
            FUN_00435b80();
            ppuVar8 = local_24;
          }
        }
        if (ppuVar8 != (undefined1 **)0x0) {
          *ppuVar8 = ppuStack_28[iVar4 >> 2];
        }
      }
      else {
        if (ppuVar8 == local_20) {
          uVar10 = (int)ppuVar8 - (int)ppuStack_28 >> 2;
          if (0x3ffffffe < uVar10) goto LAB_009d3482;
          uVar10 = uVar10 + 1;
          uVar7 = (int)local_20 - (int)ppuStack_28 >> 2;
          if (uVar7 < uVar10) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              pppppppuStack_1d8 = (undefined4 *******)0x0;
            }
            else {
              pppppppuStack_1d8 = (undefined4 *******)(uVar7 + (uVar7 >> 1));
            }
            if (pppppppuStack_1d8 < uVar10) {
              pppppppuStack_1d8 = (undefined4 *******)uVar10;
            }
            local_1dc = (undefined4 *******)0x9d33eb;
            FUN_00435b80();
            ppuVar8 = local_24;
          }
        }
        if (ppuVar8 != (undefined1 **)0x0) {
          *ppuVar8 = local_18[0];
        }
      }
      ppuVar8 = ppuVar8 + 1;
      local_24 = ppuVar8;
LAB_009d33fd:
      pppppppuStack_1d8 = (undefined4 *******)0x9d3405;
      FUN_009d3e90();
    } while (local_18[0] != *(undefined1 **)(param_1 + 0x94));
  }
  iVar9 = 0;
  iVar4 = (int)ppuVar8 - (int)ppuStack_28 >> 2;
  if (0 < iVar4) {
    do {
      pppppppuStack_1d8 = (undefined4 *******)ppuStack_28[iVar9];
      local_1dc = (undefined4 *******)local_18;
      uStack_1e4 = 0x9d3441;
      local_1e0 = (undefined **)(param_1 + 0x90);
      FUN_009d3a00();
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  if (local_5c == 0) {
    pppppppuStack_1d8 = (undefined4 *******)auStack_50;
    local_1dc = (undefined4 *******)param_1;
    local_1e0 = (undefined **)0x9d345a;
    local_1e0 = (undefined **)FUN_009d2910();
    pppppppuStack_1d8 = (undefined4 *******)0xffffffff;
    local_1dc = (undefined4 *******)0x0;
    local_8 = CONCAT31(local_8._1_3_,10);
    uStack_1e4 = 0x9d346a;
    FUN_00408ed0();
    if (0xf < uStack_3c) {
      pppppppuStack_1d8 = (undefined4 *******)auStack_50[0];
                    /* WARNING: Subroutine does not return */
      local_1dc = (undefined4 *******)&UNK_009d347d;
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0xb;
  pppppppuStack_1d8 = (undefined4 *******)0xd;
  local_1dc = (undefined4 *******)0xe3b414;
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  local_1e0 = (undefined **)0x9d34b3;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  local_1dc = (undefined4 *******)0xf;
  local_1e0 = (undefined **)0x0;
  local_1f0[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(&local_cc,auStack_50,1);
  local_8._0_1_ = 0xe;
  if (0xf < uStack_3c) {
    pppppppuStack_1d8 = (undefined4 *******)auStack_50[0];
                    /* WARNING: Subroutine does not return */
    local_1dc = (undefined4 *******)&UNK_009d34fa;
    FUN_00aae91b();
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  local_1dc = local_6c[0];
  if (local_58 < 0x10) {
    local_1dc = local_6c;
  }
  pppppppuStack_1d8 = (undefined4 *******)(local_5c + 1);
  local_1e0 = (undefined **)0x9d3523;
  FUN_00993720();
  local_cc = &PTR_FUN_00e37dc0;
  if (local_9c != 0) {
    pppppppuStack_1d8 = (undefined4 *******)local_9c;
    local_1dc = (undefined4 *******)0x9d353d;
    PHYSFS_close();
    local_9c = 0;
  }
  local_cc = &PTR_FUN_00e3b540;
  if (0xf < uStack_a4) {
    pppppppuStack_1d8 = (undefined4 *******)local_b8;
                    /* WARNING: Subroutine does not return */
    local_1dc = (undefined4 *******)&UNK_009d3564;
    FUN_00aae91b();
  }
  if (ppuStack_28 != (undefined1 **)0x0) {
    pppppppuStack_1d8 = (undefined4 *******)ppuStack_28;
                    /* WARNING: Subroutine does not return */
    local_1dc = (undefined4 *******)&UNK_009d3574;
    FUN_00aae91b();
  }
LAB_009d3577:
  if (0xf < local_58) {
    pppppppuStack_1d8 = local_6c[0];
                    /* WARNING: Subroutine does not return */
    local_1dc = (undefined4 *******)&UNK_009d358a;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (undefined4 *******)((uint)local_6c[0] & 0xffffff00);
  if (local_74 < 0x10) {
    ExceptionList = local_18[2];
    return 0;
  }
  pppppppuStack_1d8 = (undefined4 *******)auStack_90[2];
                    /* WARNING: Subroutine does not return */
  local_1dc = (undefined4 *******)&UNK_009d35b0;
  FUN_00aae91b();
}

