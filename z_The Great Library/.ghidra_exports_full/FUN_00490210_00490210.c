// FUN_00490210 @ 00490210 body=[[00490210, 004902d3] [004902d7, 0049035a] [0049035e, 004903f2] [004903f6, 0049041d] [00490421, 0049048f] [00490493, 004904ba] [004904be, 004905d9] [004905dd, 00490901] [00490905, 00490929] [0049092d, 00490b08] [00490b0c, 00490ba0] [00490ba4, 00490bbe] [00490bc2, 00490bf1] [00490bf5, 00490c1f] [00490c23, 00490c37]]


void FUN_00490210(void)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  int *local_1f4;
  char local_1ed;
  undefined4 *local_1ec;
  undefined4 *local_1e8;
  uint local_1e4 [4];
  undefined4 local_1d4;
  uint local_1d0;
  int iStack_1cc;
  uint local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  uint local_1ac [4];
  undefined4 local_19c;
  uint local_198;
  uint uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint uStack_178;
  undefined1 local_174 [12];
  undefined4 uStack_168;
  uint uStack_164;
  uint uStack_15c;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined4 uStack_140;
  uint uStack_12c;
  int aiStack_120 [30];
  undefined **appuStack_a8 [36];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b604c5;
  pvStack_14 = ExceptionList;
  local_1f4 = (int *)0x0;
  ExceptionList = &pvStack_14;
  FUN_004367c0();
  local_c = 0;
  FUN_00436780();
  local_c._0_1_ = 1;
  iVar7 = *(int *)(DAT_012586e0 + 0x5c);
  local_198 = 0xf;
  local_19c = 0;
  local_1ac[0] = local_1ac[0] & 0xffffff00;
  FUN_00409350("/climate.txt",0xc);
  local_c._0_1_ = 2;
  FUN_00988f20(local_1ac);
  local_c._0_1_ = 4;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (0xf < local_198) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1ac[0]);
  }
  local_198 = 0xf;
  local_19c = 0;
  local_1ac[0] = local_1ac[0] & 0xffffff00;
  if (iVar7 == 1) {
    local_1d0 = 0xf;
    local_1d4 = 0;
    local_1e4[0] = (uint)local_1e4[0]._1_3_ << 8;
    FUN_00409350("/climate.txt",0xc);
    local_c._0_1_ = 5;
    uVar4 = FUN_00988f20(local_1e4);
    local_c._0_1_ = 6;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1c8);
    }
  }
  else {
    if (iVar7 != 2) goto LAB_004904be;
    local_1d0 = 0xf;
    local_1d4 = 0;
    local_1e4[0] = (uint)local_1e4[0]._1_3_ << 8;
    local_c._0_1_ = uVar2;
    FUN_00409350("/climate.txt",0xc);
    local_c = CONCAT31(local_c._1_3_,7);
    pcVar8 = (char *)FUN_00988f20(local_1e4);
    if (0xf < *(uint *)(pcVar8 + 0x14)) {
      pcVar8 = *(char **)pcVar8;
    }
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
LAB_004903df:
      local_1ed = '\0';
    }
    else {
      iVar7 = PHYSFS_exists(pcVar8);
      local_1ed = '\x01';
      if (iVar7 == 0) goto LAB_004903df;
    }
    if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1c8);
    }
    local_c._0_1_ = 4;
    local_1b4 = 0xf;
    local_1b8 = 0;
    local_1c8 = local_1c8 & 0xffffff00;
    if (0xf < local_1d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1e4[0]);
    }
    if (local_1ed == '\0') goto LAB_004904be;
    local_1d0 = 0xf;
    local_1d4 = 0;
    local_1e4[0] = local_1e4[0] & 0xffffff00;
    FUN_00409350("/climate.txt",0xc);
    local_c._0_1_ = 8;
    uVar4 = FUN_00988f20(local_1e4);
    local_c._0_1_ = 9;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1c8);
    }
  }
  local_c._0_1_ = 4;
  local_1b4 = 0xf;
  local_1c8 = local_1c8 & 0xffffff00;
  local_1b8 = 0;
  if (0xf < local_1d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1e4[0]);
  }
LAB_004904be:
  local_c._0_1_ = 4;
  puVar5 = (undefined4 *)FUN_00aae9af(0x360);
  local_c._0_1_ = 10;
  local_1ec = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    local_1e8 = (undefined4 *)0x0;
  }
  else {
    local_1d0 = 0xf;
    local_1d4 = 0;
    local_1e4[0] = local_1e4[0] & 0xffffff00;
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_c = CONCAT31(local_c._1_3_,0xb);
    local_1f4 = (int *)0x1;
    puVar6 = (undefined4 *)FUN_00aae9af(0x114);
    local_c = 0xc;
    if (puVar6 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
      local_1e8 = puVar6;
    }
    else {
      local_1e8 = puVar6;
      FUN_0098ffc0(local_174);
      *puVar6 = &PTR_FUN_00e37c3c;
      puVar13 = puVar6;
    }
    *puVar5 = &PTR_FUN_00e38524;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    local_c = 0xd;
    *(undefined1 *)(puVar5 + 5) = 0;
    puVar5[7] = puVar13;
    puVar5[0xd0] = 0xf;
    puVar5[0xcf] = 0;
    *(undefined1 *)(puVar5 + 0xcb) = 0;
    FUN_00408ed0(local_1e4,0,0xffffffff);
    puVar5[0xd2] = 0;
    puVar5[0xd3] = 0;
    puVar5[0xd4] = 0;
    *(undefined1 *)(puVar5 + 0xd6) = 1;
    puVar5[0xd7] = 0;
    local_1e8 = puVar5;
  }
  local_c._0_1_ = 4;
  local_c._1_3_ = 0;
  if (((uint)local_1f4 & 1) != 0) {
    if (0xf < local_1d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1e4[0]);
    }
    local_1d0 = 0xf;
    local_1d4 = 0;
    local_1e4[0] = local_1e4[0] & 0xffffff00;
  }
  if (DAT_01258704 == (int *)0x0) {
    local_1ec = (undefined4 *)FUN_00aae9af(0x54);
    local_c._0_1_ = 0xf;
    if (local_1ec == (undefined4 *)0x0) {
      DAT_01258704 = (int *)0x0;
    }
    else {
      DAT_01258704 = (int *)FUN_00490c40(local_1ec);
    }
  }
  local_c._0_1_ = 4;
  local_1f4 = DAT_01258704;
  FUN_0068f390();
  FUN_00490d40();
  local_1ec = (undefined4 *)0x1;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_c._0_1_ = 0x10;
  iVar7 = (**(code **)(*DAT_0125870c + 0x24))();
  local_1f4 = (int *)0xffffffff;
  if (iVar7 != 0) {
    FUN_0043cb20(&local_1c8,0,&local_1f4);
  }
  while( true ) {
    piVar9 = (int *)local_1e8[7];
    if ((char)piVar9[0x44] == '\0') {
      iVar7 = (**(code **)(*piVar9 + 4))();
      piVar9[2] = iVar7;
      if (iVar7 == 0) {
        piVar9[3] = 0x13;
      }
      *(undefined1 *)(piVar9 + 0x44) = 1;
    }
    puVar5 = local_1e8;
    piVar9 = piVar9 + 3;
    piVar12 = aiStack_120;
    for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar12 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar12 = piVar12 + 1;
    }
    if (aiStack_120[0] == 0x13) break;
    FUN_009a1440(local_1e8);
    local_198 = 0xf;
    local_19c = 0;
    local_1ac[0] = local_1ac[0] & 0xffffff00;
    pcVar8 = (char *)(puVar5 + 9);
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    FUN_00409350(puVar5 + 9,(int)pcVar8 - ((int)puVar5 + 0x25));
    local_c._0_1_ = 0x11;
    piVar9 = (int *)FUN_00490dc0(local_1ac);
    if ((piVar9 == (int *)0x0) && (piVar9 = DAT_01258704, DAT_01258704 == (int *)0x0)) {
      local_1f4 = (int *)FUN_00aae9af(0x54);
      local_c._0_1_ = 0x12;
      if (local_1f4 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_00490c40(local_1f4);
      }
      local_c._0_1_ = 0x11;
      DAT_01258704 = piVar9;
    }
    cVar3 = (**(code **)(*piVar9 + 0x2c))();
    if (cVar3 == '\0') {
      piVar9 = (int *)FUN_00aae9af(0x54);
      local_c._0_1_ = 0x13;
      local_1f4 = piVar9;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        FUN_0044bc60(piVar9);
        local_c._0_1_ = 0x14;
        *piVar9 = (int)CClimate::vftable;
        piVar9[0x11] = 0xf;
        piVar9[0x10] = 0;
        *(undefined1 *)(piVar9 + 0xc) = 0;
        FUN_00408ed0(local_1ac,0,0xffffffff);
        piVar9[0x13] = (int)local_1ec;
        local_1ec = (undefined4 *)((int)local_1ec + 1);
        piVar9[0x14] = 0;
      }
      local_c = CONCAT31(local_c._1_3_,0x11);
      (**(code **)(*piVar9 + 0xc))(puVar5);
      local_1f4 = piVar9;
      if ((&local_1f4 < DAT_0125bc68) && (DAT_0125bc64 <= &local_1f4)) {
        iVar7 = (int)&local_1f4 - (int)DAT_0125bc64;
        if (DAT_0125bc68 == DAT_0125bc6c) {
          FUN_00a513f0();
        }
        if (DAT_0125bc68 != (int **)0x0) {
          *DAT_0125bc68 = DAT_0125bc64[iVar7 >> 2];
        }
      }
      else {
        if (DAT_0125bc68 == DAT_0125bc6c) {
          FUN_00a513f0();
        }
        if (DAT_0125bc68 != (int **)0x0) {
          *DAT_0125bc68 = piVar9;
        }
      }
      DAT_0125bc68 = DAT_0125bc68 + 1;
      FUN_00490d40();
    }
    else {
      piVar9 = (int *)FUN_00490dc0(local_1ac);
      if ((piVar9 == (int *)0x0) && (piVar9 = DAT_01258704, DAT_01258704 == (int *)0x0)) {
        local_1f4 = (int *)FUN_00aae9af(0x54);
        local_c._0_1_ = 0x15;
        if (local_1f4 == (int *)0x0) {
          piVar9 = (int *)0x0;
          DAT_01258704 = piVar9;
        }
        else {
          piVar9 = (int *)FUN_00490c40(local_1f4);
          DAT_01258704 = piVar9;
        }
      }
      uStack_190 = 0;
      iStack_18c = 0;
      uStack_188 = 0;
      local_c = CONCAT31(local_c._1_3_,0x16);
      local_1f4 = piVar9;
      FUN_005e5a20(puVar5,&uStack_190);
      iVar11 = (int)(iStack_18c - uStack_190) >> 2;
      iVar7 = 0;
      if (0 < iVar11) {
        do {
          iVar1 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          *(int *)(local_1c8 + *(int *)(uStack_190 + iVar1) * 4) = local_1f4[0x13];
        } while (iVar7 < iVar11);
      }
      if (uStack_190 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_190);
      }
      uStack_190 = 0;
      iStack_18c = 0;
      uStack_188 = 0;
    }
    local_c._0_1_ = 0x10;
    if (0xf < local_198) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1ac[0]);
    }
    local_198 = 0xf;
    local_19c = 0;
    local_1ac[0] = local_1ac[0] & 0xffffff00;
  }
  local_1ec = (undefined4 *)((int)(local_1c4 - local_1c8) >> 2);
  local_1f4 = (int *)0x0;
  piVar9 = DAT_01258704;
  if (0 < (int)local_1ec) {
    do {
      piVar12 = local_1f4;
      iVar7 = *(int *)(local_1c8 + (int)local_1f4 * 4);
      if (iVar7 < 0) {
        if ((*(char *)(*(int *)(*(int *)(DAT_0125870c[0x88e] + (int)local_1f4 * 4) + 0x5c) + 0x2a)
             != '\0') && (0 < (int)local_1f4)) {
          uStack_17c = 0xf;
          uStack_180 = 0;
          uStack_190 = uStack_190 & 0xffffff00;
          FUN_00409350("climate.cpp",0xb);
          local_c._0_1_ = 0x18;
          uVar4 = FUN_004015b0(&uStack_190,0x69,0x10004);
          uVar15 = 0;
          local_c = CONCAT31(local_c._1_3_,0x19);
          FUN_00987d50(uVar4,"no climate scripted for province ",0x21,0);
          piVar9 = (int *)FUN_00455470(uVar4,uVar15);
          FUN_00408be0(piVar9);
          uVar14 = 0;
          if (((*(byte *)(*(int *)(*piVar9 + 4) + 0xc + (int)piVar9) & 6) == 0) &&
             (iVar7 = (**(code **)(**(int **)(*(int *)(*piVar9 + 4) + 0x38 + (int)piVar9) + 0x34))()
             , iVar7 == -1)) {
            uVar14 = 4;
          }
          if (uVar14 != 0) {
            uVar14 = *(uint *)((int)piVar9 + *(int *)(*piVar9 + 4) + 0xc) | uVar14;
            if (*(int *)((int)piVar9 + *(int *)(*piVar9 + 4) + 0x38) == 0) {
              uVar14 = uVar14 | 4;
            }
            FUN_00401120(uVar14,0);
          }
          local_c._0_1_ = 0x18;
          FUN_00987ac0(appuStack_a8);
          appuStack_a8[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_a8);
          local_c._0_1_ = 0x10;
          if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_190);
          }
          uStack_17c = 0xf;
          uStack_180 = 0;
          uStack_190 = uStack_190 & 0xffffff00;
          piVar9 = DAT_01258704;
        }
        piVar12 = local_1f4;
        if (piVar9 == (int *)0x0) {
          local_1f4 = (int *)FUN_00aae9af(0x54);
          local_c._0_1_ = 0x1a;
          if (local_1f4 == (int *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)FUN_00490c40(local_1f4);
          }
          local_c._0_1_ = 0x10;
          DAT_01258704 = piVar9;
        }
        *(int **)(*(int *)(*(int *)(DAT_0125870c[0x88e] + (int)piVar12 * 4) + 0x5c) + 0xc) = piVar9;
      }
      else {
        if ((iVar7 < 1) || ((int)DAT_0125bc68 - (int)DAT_0125bc64 >> 2 <= iVar7)) {
          piVar10 = piVar9;
          if (piVar9 == (int *)0x0) {
            local_1f4 = (int *)FUN_00aae9af(0x54);
            local_c._0_1_ = 0x17;
            if (local_1f4 == (int *)0x0) {
              piVar10 = (int *)0x0;
            }
            else {
              piVar10 = (int *)FUN_00490c40(local_1f4);
            }
            local_c._0_1_ = 0x10;
            piVar9 = piVar10;
            DAT_01258704 = piVar10;
          }
        }
        else {
          piVar10 = DAT_0125bc64[iVar7];
        }
        *(int **)(*(int *)(*(int *)(DAT_0125870c[0x88e] + (int)piVar12 * 4) + 0x5c) + 0xc) = piVar10
        ;
      }
      local_1f4 = (int *)((int)piVar12 + 1);
    } while ((int)local_1f4 < (int)local_1ec);
  }
  (**(code **)*local_1e8)(1);
  if (iStack_1cc != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_1cc);
  }
  if (uStack_164 < 0x10) {
    uStack_164 = 0xf;
    uStack_168 = 0;
    uStack_178 = uStack_178 & 0xffffff00;
    if (0xf < uStack_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_15c);
    }
    uStack_148 = 0xf;
    uStack_14c = 0;
    uStack_15c = uStack_15c & 0xffffff00;
    if (uStack_12c < 0x10) {
      ExceptionList = pvStack_18;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_140);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_178);
}

