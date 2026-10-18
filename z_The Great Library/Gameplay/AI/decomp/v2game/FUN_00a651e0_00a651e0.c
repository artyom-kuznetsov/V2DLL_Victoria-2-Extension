// FUN_00a651e0 @ 00a651e0 body=[[00a651e0, 00a652c5] [00a652d0, 00a65351] [00a65355, 00a653d9] [00a653e0, 00a654bd] [00a654c1, 00a65659] [00a6565d, 00a65752] [00a65756, 00a65803] [00a65807, 00a6583c] [00a65840, 00a6587b] [00a6587f, 00a6595b] [00a6595f, 00a659bd] [00a659c1, 00a65a0c] [00a65a80, 00a65ac0] [00a65ac4, 00a65aee] [00a65af2, 00a65b17] [00a65b1b, 00a65b4d] [00a65b51, 00a65b6f] [00a65b73, 00a65b88]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00a651e0(undefined4 *param_1)

{
  short *psVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  char *****cp;
  int iVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  undefined4 uVar11;
  DWORD DVar12;
  uint uVar13;
  uint *puVar14;
  undefined **ppuStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 uStack_214;
  undefined4 uStack_20c;
  undefined4 *puStack_208;
  undefined1 local_1cc [92];
  undefined **local_170;
  uint local_128;
  undefined4 local_118;
  uint local_114;
  undefined1 *local_10c;
  char ****local_108 [5];
  uint local_f4;
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_cc;
  undefined1 *local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  ulonglong local_80;
  undefined4 local_78;
  uint *local_74;
  uint *local_70;
  undefined4 local_6c;
  int local_64;
  int local_60;
  char local_5c;
  int local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  char local_40 [4];
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_20;
  undefined1 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b548d6;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe0c;
  local_74 = (uint *)0x0;
  local_70 = (uint *)0x0;
  local_6c = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_78 = 1;
  FUN_00a5fd70();
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  local_1c = 0x2e;
  FUN_0098a0d0();
  FUN_009895f0();
  local_8 = CONCAT31(local_8._1_3_,4);
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  FUN_00409350();
  local_80 = 0;
  local_50 = 0;
  local_48 = 1;
  do {
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    local_8._0_1_ = 6;
    pcVar6 = __itoa(local_48,local_40,10);
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    FUN_00409350();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,9);
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    cp = (char *****)local_108[0];
    if (local_f4 < 0x10) {
      cp = local_108;
    }
    local_c8 = (undefined1 *)inet_addr((char *)cp);
    local_20 = local_c8;
    FUN_00a6a490();
    local_c4 = (undefined2)local_18[5];
    FUN_00a8aaf0();
    puStack_208 = (undefined4 *)0xa653cd;
    iVar7 = FUN_00a89d00();
    iVar9 = local_54;
    uVar13 = local_3c[0];
    piVar8 = local_18;
    while (local_54 = iVar9, local_18 = piVar8, 0 < iVar7) {
      local_3c[0]._1_3_ = (uint3)(uVar13 >> 8);
      if (local_64 == 1) {
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = (uint)local_3c[0]._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 10;
        FUN_004015b0();
        local_8 = CONCAT31(local_8._1_3_,0xb);
        piVar8 = (int *)FUN_00987d20();
        FUN_00408be0();
        bVar4 = false;
        if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
           (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
           iVar9 == -1)) {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_00401120();
        }
        local_8._0_1_ = 10;
        FUN_00987ac0();
        local_170 = std::ios_base::vftable;
        FUN_00aad52d();
        local_8 = CONCAT31(local_8._1_3_,9);
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar9 = local_18[6];
        local_c0 = 0x18;
        local_bc = 0;
        uVar13 = *(uint *)(iVar9 + 0x20);
        local_20 = (undefined1 *)0x0;
        if (uVar13 < (uint)(*(int *)(iVar9 + 0x24) * 0xe8 + *(int *)(iVar9 + 0x20))) {
          local_44 = *(int *)(local_60 + 0xc);
          psVar10 = (short *)(uVar13 + 0x10);
          do {
            if ((*(int *)(psVar10 + -2) == local_44) && (*psVar10 == *(short *)(local_60 + 0x10)))
            break;
            local_20 = local_20 + 1;
            psVar1 = psVar10 + 0x6c;
            psVar10 = psVar10 + 0x74;
          } while (psVar1 < (short *)(*(int *)(iVar9 + 0x24) * 0xe8 + uVar13));
        }
        puStack_208 = &local_c0;
        uStack_20c = 0xa65542;
        (**(code **)(*local_18 + 0x14))();
        uVar13 = local_3c[0];
      }
      else if (local_64 == 3) {
        if (local_5c == '\x01') {
          iVar7 = **(int **)(iVar9 + 8);
          local_cc = (*(int **)(iVar9 + 8))[1];
          if (iVar7 == 0x11) {
            local_28 = 0xf;
            local_2c = 0;
            local_3c[0] = (uint)local_3c[0]._1_3_ << 8;
            FUN_00409350();
            local_8._0_1_ = 0xc;
            FUN_004015b0();
            local_8 = CONCAT31(local_8._1_3_,0xd);
            piVar8 = (int *)FUN_00987d20();
            FUN_00408be0();
            bVar4 = false;
            if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
               (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))
                                  (), iVar9 == -1)) {
              bVar4 = true;
            }
            if (bVar4) {
              FUN_00401120();
            }
            local_8._0_1_ = 0xc;
            FUN_00987ac0();
            local_170 = std::ios_base::vftable;
            FUN_00aad52d();
            local_8 = CONCAT31(local_8._1_3_,9);
            if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_80 = (ulonglong)local_cc;
            uVar13 = local_3c[0];
          }
          else if (iVar7 == 0x17) {
            local_28 = 0xf;
            local_2c = 0;
            local_3c[0] = (uint)local_3c[0]._1_3_ << 8;
            FUN_00409350();
            local_8._0_1_ = 0xe;
            FUN_004015b0();
            local_8 = CONCAT31(local_8._1_3_,0xf);
            piVar8 = (int *)FUN_00987d20();
            FUN_00408be0();
            bVar4 = false;
            if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
               (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))
                                  (), iVar9 == -1)) {
              bVar4 = true;
            }
            if (bVar4) {
              FUN_00401120();
            }
            local_8._0_1_ = 0xe;
            FUN_00987ac0();
            local_170 = std::ios_base::vftable;
            FUN_00aad52d();
            local_8 = CONCAT31(local_8._1_3_,9);
            if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_50 = (ulonglong)local_cc;
            uVar13 = local_3c[0];
          }
          else {
            local_50._4_4_ = (int)(local_50 >> 0x20);
            bVar4 = (int)local_50 != 0;
            bVar5 = local_50._4_4_ != 0;
            if (bVar4 || bVar5) {
              local_28 = 0xf;
              local_2c = 0;
              local_3c[0] = (uint)local_3c[0]._1_3_ << 8;
              FUN_00409350();
              local_8._0_1_ = 0x10;
              FUN_004015b0();
              local_8._0_1_ = 0x11;
              FUN_00987d20();
              FUN_00401280();
              local_8._0_1_ = 0x10;
              FUN_00987ac0();
              local_170 = std::ios_base::vftable;
              FUN_00aad52d();
              local_8._0_1_ = 9;
              if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              pcVar6 = (char *)FUN_00aad56b();
              puStack_208 = (undefined4 *)0xa65820;
              FID_conflict__memcpy(pcVar6,*(void **)(iVar9 + 8),*(size_t *)(iVar9 + 0xc));
              pcVar6[*(int *)(iVar9 + 0xc)] = '\0';
              local_28 = 0xf;
              local_2c = 0;
              local_3c[0] = local_3c[0] & 0xffffff00;
              do {
                cVar3 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar3 != '\0');
              FUN_00409350();
              local_8._0_1_ = 0x12;
              FUN_00408ed0();
              local_8._0_1_ = 9;
              if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_28 = 0xf;
              local_2c = 0;
              local_3c[0] = local_3c[0] & 0xffffff00;
              FUN_00409350();
              iVar9 = local_60;
              local_44 = *(int *)(local_60 + 0xc);
              local_20 = (undefined1 *)&ppuStack_228;
              local_10c = (undefined1 *)&ppuStack_228;
              uStack_224 = 0x18d;
              ppuStack_228 = CVersion::vftable;
              uStack_220 = 0;
              uStack_214 = 0;
              local_8._0_1_ = 0x14;
              FUN_00408ed0(local_3c,0,0xffffffff);
              uStack_218 = 0;
              uStack_21c = 0;
              uStack_220 = 0;
              local_8._0_1_ = 0x15;
              uVar11 = FUN_00a6a6a0();
              local_8._0_1_ = 0x13;
              FUN_009f8180(local_1cc,local_18[7] + 0xbc,uVar11,local_18[5],local_9c,
                           *(undefined4 *)(iVar9 + 0xc),(undefined4)local_80,0,(int)local_50);
              local_8._0_1_ = 0x16;
              FUN_009b19e0();
              FUN_00648a60();
              local_8 = CONCAT31(local_8._1_3_,9);
              if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_50 = 0;
              uVar13 = local_3c[0];
            }
          }
          local_3c[0] = uVar13;
          (*(code *)PTR__free_00f071fc)();
          (*(code *)PTR__free_00f071fc)();
          uVar13 = local_3c[0];
        }
      }
      else if (local_64 == 2) {
        *(undefined4 *)(local_60 + 0x14) = 0;
      }
      local_3c[0] = uVar13;
      iVar7 = FUN_00a89d00();
      iVar9 = local_54;
      uVar13 = local_3c[0];
      piVar8 = local_18;
    }
    local_3c[0] = uVar13;
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = local_48 + 1;
    if (0xfe < local_48) {
      local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
      local_8 = CONCAT31(local_8._1_3_,0x17);
      for (uVar13 = *(uint *)(piVar8[6] + 0x20);
          uVar13 < (uint)(*(int *)(piVar8[6] + 0x24) * 0xe8 + *(int *)(piVar8[6] + 0x20));
          uVar13 = uVar13 + 0xe8) {
        FUN_00a8a450();
        FUN_00a8a360();
      }
      local_8 = 5;
      DVar12 = timeGetTime();
      DAT_012586d0 = DVar12 - _DAT_01258b70;
      FUN_00a899f0();
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_114 = 0xf;
      local_118 = 0;
      local_128 = local_128 & 0xffffff00;
      if (local_a4 < 0x10) {
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8 = local_b8 & 0xffffff00;
        if (local_74 == (uint *)0x0) {
          ExceptionList = local_10;
          return param_1;
        }
        if (local_74 != local_70) {
          puVar14 = local_74 + 6;
          do {
            if (0xf < *puVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            *puVar14 = 0xf;
            puVar14[-1] = 0;
            *(undefined1 *)(puVar14 + -5) = 0;
            puVar2 = puVar14 + 2;
            puVar14 = puVar14 + 8;
          } while (puVar2 != local_70);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
}

