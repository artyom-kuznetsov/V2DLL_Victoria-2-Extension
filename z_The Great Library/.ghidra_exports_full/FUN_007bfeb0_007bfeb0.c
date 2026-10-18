// FUN_007bfeb0 @ 007bfeb0 body=[[007bfeb0, 007c018a] [007c018e, 007c0202] [007c0206, 007c026f] [007c0273, 007c036e] [007c0372, 007c0399] [007c039d, 007c03d0] [007c03d4, 007c04ab] [007c04af, 007c04d9] [007c04dd, 007c0513] [007c0517, 007c0583] [007c0587, 007c05d7] [007c05db, 007c064b] [007c064f, 007c067c] [007c0680, 007c0733] [007c0737, 007c0764] [007c0768, 007c0792] [007c0796, 007c07c2] [007c07c6, 007c07e7] [007c07eb, 007c08fd] [007c0901, 007c093c] [007c0940, 007c1308] [007c1310, 007c136c] [007c1370, 007c1448] [007c144c, 007c148a] [007c148e, 007c14f0] [007c14f4, 007c1528]]


undefined4 FUN_007bfeb0(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *in_ECX;
  undefined4 *puVar12;
  int iVar13;
  char *pcVar14;
  int _Value;
  bool bVar15;
  bool bVar16;
  int iStack_1f8;
  int *piStack_1f0;
  undefined4 *local_1ec;
  uint auStack_1e8 [4];
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint auStack_1c8 [4];
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint uStack_1a8;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint uStack_194;
  uint auStack_18c [4];
  undefined4 uStack_17c;
  uint uStack_178;
  uint uStack_170;
  undefined4 uStack_160;
  uint uStack_15c;
  uint auStack_154 [4];
  undefined4 uStack_144;
  uint uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_114;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_dc;
  undefined1 local_d8;
  uint uStack_cc;
  undefined4 uStack_bc;
  uint uStack_b8;
  uint uStack_b0;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint auStack_94 [4];
  undefined4 uStack_84;
  uint uStack_80;
  undefined1 auStack_78 [100];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb0206;
  local_14 = ExceptionList;
  bVar16 = false;
  local_11c = 0xf;
  local_100 = 0xf;
  local_e4 = 0xf;
  local_120 = 0;
  local_130 = 0;
  local_104 = 0;
  local_114 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_dc = 0;
  local_d8 = 1;
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  if (((int *)in_ECX[0x67] != (int *)0x0) && (*(char *)(*(int *)in_ECX[0x67] + 0x67) != '\0')) {
    ExceptionList = &local_14;
    FUN_00749750();
    FUN_00459820();
    ExceptionList = local_14;
    return param_1;
  }
  ExceptionList = &local_14;
  local_1ec = in_ECX;
  if ((((in_ECX[0x7b] != 0) &&
       (iVar13 = *(int *)(in_ECX[0x7b] + 0x20), ExceptionList = &local_14, iVar13 != 0)) &&
      (ExceptionList = &local_14, *(char *)(iVar13 + 0x67) != '\0')) &&
     (ExceptionList = &local_14, cVar4 = (**(code **)(*(int *)(iVar13 + 0x18) + 0x94))(),
     cVar4 != '\0')) {
    FUN_00982aa0();
    goto LAB_007c1504;
  }
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  pcVar14 = "pop_filter_button";
  iVar13 = 0;
  do {
    bVar1 = *pbVar5;
    bVar15 = bVar1 < (byte)*pcVar14;
    if (bVar1 != *pcVar14) {
LAB_007c0000:
      iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_007c0005;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar15 = bVar1 < (byte)pcVar14[1];
    if (bVar1 != pcVar14[1]) goto LAB_007c0000;
    pbVar5 = pbVar5 + 2;
    pcVar14 = pcVar14 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_007c0005:
  if (iVar6 == 0) {
    iVar13 = 1;
    if (DAT_0131bb34 == 0) {
      iVar6 = FUN_00aae9af();
      local_c._0_1_ = 1;
      if (iVar6 != 0) {
        FUN_0041a160();
      }
      local_c._0_1_ = 0;
      FUN_00423700();
    }
    iVar6 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (1 < iVar6) {
      puVar12 = (undefined4 *)local_1ec[0x2e];
      do {
        puVar12 = puVar12 + 2;
        if ((int *)*puVar12 == param_2) {
          if (DAT_0131bb34 == 0) {
            iVar6 = FUN_00aae9af();
            local_c._0_1_ = 2;
            if (iVar6 != 0) {
              FUN_0041a160();
            }
            local_c._0_1_ = 0;
            FUN_00423700();
          }
          if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar13) {
            iStack_1f8 = FUN_0096bb70();
          }
          else {
            iStack_1f8 = *(int *)(*(int *)(DAT_0131bb34 + 0xc) + iVar13 * 4);
          }
          uStack_138 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
          iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
          piStack_1f0 = (int *)0x0;
          _Value = 0;
          uStack_194 = 0xf;
          uStack_198 = 0;
          uStack_1a8 = uStack_1a8 & 0xffffff00;
          local_c._0_1_ = 3;
          iVar2 = local_1ec[0x27];
          if (iVar2 == 1) {
            (**(code **)(**(int **)local_1ec[0x25] + 0x1c))();
            local_c._0_1_ = 4;
            FUN_00408ed0();
            local_c._0_1_ = 3;
            if (0xf < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            piStack_1f0 = *(int **)(*(int *)(*(int *)local_1ec[0x25] + 0x1f8) +
                                   *(int *)(iStack_1f8 + 0x28) * 4);
            iVar6 = *(int *)(*(int *)local_1ec[0x25] + 0x290);
          }
          else if (iVar2 == *(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) >> 2) {
            FUN_004f97a0();
            local_c._0_1_ = 5;
            FUN_00408ed0();
            local_c._0_1_ = 3;
            if (0xf < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            piStack_1f0 = *(int **)(*(int *)(iVar6 + 0x1338) + *(int *)(iStack_1f8 + 0x28) * 4);
            iVar6 = *(int *)(iVar6 + 0x13d0);
          }
          else {
            if (iVar2 < 1) goto LAB_007c0294;
            piVar10 = *(int **)(*(int *)local_1ec[0x25] + 0x188);
            (**(code **)(*piVar10 + 0x20))();
            local_c._0_1_ = 6;
            FUN_00408ed0();
            local_c._0_1_ = 3;
            if (0xf < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            piStack_1f0 = *(int **)(piVar10[0x46] + *(int *)(iStack_1f8 + 0x28) * 4);
            iVar6 = piVar10[0x6c];
          }
          _Value = *(int *)(iVar6 + iVar13 * 4);
LAB_007c0294:
          local_c._0_1_ = 3;
          bVar16 = _Value < 0;
          if (bVar16) {
            _Value = -_Value;
          }
          uStack_140 = 0xf;
          uStack_144 = 0;
          auStack_154[0] = auStack_154[0] & 0xffffff00;
          FUN_00409350(&DAT_00df8514,2);
          uStack_b8 = 0xf;
          uStack_bc = 0;
          uStack_cc = uStack_cc & 0xffffff00;
          local_c._0_1_ = 8;
          pcVar7 = __itoa((int)piStack_1f0,(char *)auStack_1e8,10);
          pcVar14 = pcVar7;
          do {
            cVar4 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar4 != '\0');
          FUN_00409350(pcVar7,(int)pcVar14 - (int)(pcVar7 + 1));
          local_c._0_1_ = 9;
          FUN_00988fa0();
          local_c._0_1_ = 10;
          FUN_00988f20();
          if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1b4 = 0xf;
          uStack_1b8 = 0;
          auStack_1c8[0] = auStack_1c8[0] & 0xffffff00;
          if (0xf < uStack_b8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_b8 = 0xf;
          uStack_bc = 0;
          uStack_cc = uStack_cc & 0xffffff00;
          local_c._0_1_ = 0xe;
          if (0xf < uStack_140) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_140 = 0xf;
          uStack_144 = 0;
          auStack_154[0] = auStack_154[0] & 0xffffff00;
          uStack_15c = 0xf;
          uStack_160 = 0;
          uStack_170 = uStack_170 & 0xffffff00;
          FUN_00409350(&DAT_00df8514,2);
          uStack_9c = 0xf;
          uStack_a0 = 0;
          uStack_b0 = uStack_b0 & 0xffffff00;
          local_c._0_1_ = 0x10;
          pcVar7 = __itoa(_Value,(char *)auStack_1c8,10);
          pcVar14 = pcVar7;
          do {
            cVar4 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar4 != '\0');
          FUN_00409350(pcVar7,(int)pcVar14 - (int)(pcVar7 + 1));
          local_c._0_1_ = 0x11;
          FUN_00988fa0();
          local_c._0_1_ = 0x12;
          FUN_00988f20();
          if (0xf < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1d4 = 0xf;
          uStack_1d8 = 0;
          auStack_1e8[0] = auStack_1e8[0] & 0xffffff00;
          if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_9c = 0xf;
          uStack_a0 = 0;
          uStack_b0 = uStack_b0 & 0xffffff00;
          local_c._0_1_ = 0x16;
          if (0xf < uStack_15c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_15c = 0xf;
          uStack_160 = 0;
          uStack_170 = uStack_170 & 0xffffff00;
          if (99999 < (int)piStack_1f0) {
            FUN_009c99e0(auStack_1c8,piStack_1f0,&DAT_00df963c,&DAT_00df8514,0);
            local_c._0_1_ = 0x17;
            FUN_00408ed0();
            local_c._0_1_ = 0x16;
            if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          local_c._0_1_ = 0x16;
          if (99999 < _Value) {
            FUN_009c99e0(auStack_1c8,_Value,&DAT_00df963c,&DAT_00df8514,0);
            local_c._0_1_ = 0x18;
            FUN_00408ed0();
            local_c._0_1_ = 0x16;
            if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          local_c._0_1_ = 0x16;
          uVar8 = FUN_0096d650(iStack_1f8,auStack_154);
          local_c._0_1_ = 0x19;
          FUN_0043e9a0(auStack_1c8,&DAT_00df7e90,auStack_18c,"WHERE",&uStack_1a8,&DAT_00e156c4,uVar8
                      );
          local_c._0_1_ = 0x1a;
          FUN_00448aa0();
          if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c._0_1_ = 0x16;
          uStack_1b4 = 0xf;
          uStack_1b8 = 0;
          auStack_1c8[0] = auStack_1c8[0] & 0xffffff00;
          if (0xf < uStack_140) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uVar8 = FUN_0096d650(iStack_1f8,auStack_154);
          if (bVar16) {
            local_c._0_1_ = 0x1d;
            FUN_0043e9a0(auStack_1c8,&DAT_00df7e90,auStack_94,"WHERE",&uStack_1a8,&DAT_00e156c4,
                         uVar8);
            local_c._0_1_ = 0x1e;
          }
          else {
            local_c._0_1_ = 0x1b;
            FUN_0043e9a0(auStack_1c8,&DAT_00df7e90,auStack_94,"WHERE",&uStack_1a8,&DAT_00e156c4,
                         uVar8);
            local_c._0_1_ = 0x1c;
          }
          FUN_00448aa0();
          if (uStack_1b4 < 0x10) {
            local_c = CONCAT31(local_c._1_3_,0x16);
            auStack_1c8[0] = auStack_1c8[0] & 0xffffff00;
            uStack_1b8 = 0;
            uStack_1b4 = 0xf;
            if (0xf < uStack_140) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            FUN_0040c830();
            if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_80 = 0xf;
            uStack_84 = 0;
            auStack_94[0] = auStack_94[0] & 0xffffff00;
            if (0xf < uStack_178) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_178 = 0xf;
            uStack_17c = 0;
            auStack_18c[0] = auStack_18c[0] & 0xffffff00;
            if (uStack_194 < 0x10) {
              uStack_194 = 0xf;
              uStack_198 = 0;
              uStack_1a8 = uStack_1a8 & 0xffffff00;
              FUN_00459820();
              ExceptionList = local_14;
              return param_1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar6);
    }
  }
  else {
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x44))();
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    pcVar14 = "sortby_mil_button";
    do {
      bVar1 = *pbVar5;
      bVar15 = bVar1 < (byte)*pcVar14;
      if (bVar1 != *pcVar14) {
LAB_007c0853:
        iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_007c0858;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar15 = bVar1 < (byte)pcVar14[1];
      if (bVar1 != pcVar14[1]) goto LAB_007c0853;
      pbVar5 = pbVar5 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_007c0858:
    if (iVar6 == 0) {
      uStack_178 = 0xf;
      uStack_17c = 0;
      auStack_18c[0] = auStack_18c[0] & 0xffffff00;
      FUN_00409350("POPV_SORT_BY_MIL",0x10);
      local_c._0_1_ = 0x1f;
      FUN_009a8ee0(&uStack_1a8,auStack_18c);
      local_c._0_1_ = 0x20;
      iVar13 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
      local_c._0_1_ = 0x21;
      FUN_00408ed0();
      if (0xf < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1d4 = 0xf;
      uStack_1d8 = 0;
      auStack_1e8[0] = auStack_1e8[0] & 0xffffff00;
      local_c._0_1_ = 0x22;
      FUN_009adb70();
      if (iStack_1a4 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iStack_1a4 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uVar3 = uStack_178;
joined_r0x007c14e5:
      local_c._0_1_ = 0;
      if (0xf < uVar3) {
        local_c._0_1_ = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      (**(code **)(*param_2 + 0x44))();
      cVar4 = FUN_0040b360();
      if (cVar4 == '\0') {
        (**(code **)(*param_2 + 0x44))();
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          (**(code **)(*param_2 + 0x44))();
          cVar4 = FUN_0040b360();
          if (cVar4 == '\0') {
            (**(code **)(*param_2 + 0x44))();
            cVar4 = FUN_0040b360();
            if (cVar4 == '\0') {
              (**(code **)(*param_2 + 0x44))();
              cVar4 = FUN_0040b360();
              if (cVar4 == '\0') {
                (**(code **)(*param_2 + 0x44))();
                cVar4 = FUN_0040b360();
                if (cVar4 == '\0') {
                  (**(code **)(*param_2 + 0x44))();
                  cVar4 = FUN_0040b360();
                  if (cVar4 == '\0') {
                    (**(code **)(*param_2 + 0x44))();
                    cVar4 = FUN_0040b360();
                    if (cVar4 == '\0') {
                      (**(code **)(*param_2 + 0x44))();
                      cVar4 = FUN_0040b360();
                      if (cVar4 == '\0') {
                        (**(code **)(*param_2 + 0x44))();
                        cVar4 = FUN_0040b360();
                        if (cVar4 == '\0') {
                          (**(code **)(*param_2 + 0x44))();
                          cVar4 = FUN_0040b360();
                          if (cVar4 == '\0') {
                            (**(code **)(*param_2 + 0x44))();
                            cVar4 = FUN_0040b360();
                            if (cVar4 == '\0') {
                              (**(code **)(*param_2 + 0x44))();
                              cVar4 = FUN_0040b360();
                              if (cVar4 == '\0') {
                                (**(code **)(*param_2 + 0x44))();
                                cVar4 = FUN_0040b360();
                                if (cVar4 == '\0') {
                                  FUN_009885d0();
                                  local_c._0_1_ = 0x4b;
                                  iVar6 = (**(code **)(*(int *)local_1ec[0x13] + 0x7c))();
                                  local_c._0_1_ = 0;
                                  FUN_00408ad0();
                                  FUN_007c7d20();
                                  iVar6 = *(int *)(iVar6 + 0x150);
                                  piVar10 = piStack_1f0;
                                  puVar12 = local_1ec;
                                  do {
                                    local_1ec = puVar12;
                                    if ((piVar10 == (int *)0x0) || (iVar6 < 1)) {
                                      if (0 < (int)(puVar12[0x18] - puVar12[0x17] & 0xfffffffc)) {
                                        do {
                                          cVar4 = (**(code **)(*(int *)(*(int *)(puVar12[0x17] +
                                                                                iVar13 * 4) + 0x1c)
                                                              + 0x58))();
                                          if (cVar4 != '\0') {
                                            FUN_007bb740();
                                            FUN_00459820();
                                            ExceptionList = local_14;
                                            return param_1;
                                          }
                                          iVar13 = iVar13 + 1;
                                        } while (iVar13 < (int)(puVar12[0x18] - puVar12[0x17]) >> 2)
                                        ;
                                      }
                                      goto LAB_007c14f4;
                                    }
                                    iVar2 = *piVar10;
                                    piVar10 = (int *)piVar10[2];
                                    iVar6 = iVar6 + -1;
                                    cVar4 = (**(code **)(*(int *)(iVar2 + 0x1c) + 0x58))();
                                    puVar12 = local_1ec;
                                  } while (cVar4 == '\0');
                                  FUN_007bed80();
                                  local_c._0_1_ = 0x4c;
                                  FUN_004115d0();
                                  local_c._0_1_ = 0;
                                  FUN_00459820();
                                  goto LAB_007c14f4;
                                }
                              }
                              for (puVar12 = (undefined4 *)local_1ec[0x29];
                                  puVar12 != (undefined4 *)0x0; puVar12 = (undefined4 *)puVar12[2])
                              {
                                local_1ec = (undefined4 *)*puVar12;
                                piVar10 = (int *)*local_1ec;
                                FUN_009885d0();
                                local_c._0_1_ = 0x47;
                                piVar10 = (int *)(**(code **)(*piVar10 + 0x7c))();
                                puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
                                FUN_00408ad0();
                                puVar11 = (undefined4 *)(**(code **)(*piVar10 + 0x2c))();
                                piVar10 = (int *)*puVar11;
                                piStack_1f0 = (int *)0xffffffff;
                                while (piVar10 != (int *)0x0) {
                                  iVar13 = *piVar10;
                                  piStack_1f0 = (int *)((int)piStack_1f0 + 1);
                                  piVar10 = (int *)piVar10[2];
                                  uStack_178 = 0xf;
                                  uStack_17c = 0;
                                  auStack_18c[0] = auStack_18c[0] & 0xffffff00;
                                  FUN_00409350("legend_item",0xb);
                                  local_c = CONCAT31(local_c._1_3_,0x48);
                                  piVar9 = (int *)(**(code **)(**(int **)(iVar13 + 0x20) + 0x3c))();
                                  if (piVar9 == param_2) {
LAB_007c141e:
                                    bVar15 = false;
                                  }
                                  else {
                                    uStack_15c = 0xf;
                                    uStack_160 = 0;
                                    uStack_170 = uStack_170 & 0xffffff00;
                                    FUN_00409350("legend_color",0xc);
                                    local_c = 0x49;
                                    bVar16 = true;
                                    piVar9 = (int *)(**(code **)(**(int **)(iVar13 + 0x20) + 0x44))
                                                              ();
                                    bVar15 = true;
                                    if (piVar9 == param_2) goto LAB_007c141e;
                                  }
                                  if (bVar16) {
                                    bVar16 = false;
                                    if (0xf < uStack_15c) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00aae91b();
                                    }
                                    uStack_15c = 0xf;
                                    uStack_160 = 0;
                                    uStack_170 = uStack_170 & 0xffffff00;
                                  }
                                  local_c._0_1_ = 0;
                                  local_c._1_3_ = 0;
                                  if (0xf < uStack_178) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00aae91b();
                                  }
                                  if (!bVar15) {
                                    FUN_007ba030();
                                    local_c._0_1_ = 0x4a;
                                    FUN_00408ed0();
                                    uVar3 = uStack_1d4;
                                    goto joined_r0x007c14e5;
                                  }
                                }
                              }
                            }
                            else {
                              for (puVar12 = (undefined4 *)local_1ec[0x29];
                                  puVar12 != (undefined4 *)0x0; puVar12 = (undefined4 *)puVar12[2])
                              {
                                piVar10 = *(int **)*puVar12;
                                FUN_009885d0();
                                local_c._0_1_ = 0x44;
                                piVar9 = (int *)(**(code **)(*piVar10 + 0x44))();
                                local_c._0_1_ = 0;
                                FUN_00408ad0();
                                if (piVar9 == param_2) {
                                  (**(code **)(**(int **)(local_1ec[0x15] + 0x58) + 0x4c))();
                                  FUN_009885d0();
                                  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x45);
                                  (**(code **)(*piVar10 + 0x44))(&local_1ec);
                                  local_c._0_1_ = 0;
                                  FUN_00408ad0();
                                  cVar4 = FUN_009e0c90(uStack_138,uStack_134,&piStack_1f0,auStack_78
                                                      );
                                  if (cVar4 != '\0') {
                                    FUN_007ba080();
                                    local_c._0_1_ = 0x46;
                                    FUN_00408ed0();
                                    local_c._0_1_ = 0;
                                    FUN_00408ad0();
                                    break;
                                  }
                                }
                              }
                            }
                            goto LAB_007c14f4;
                          }
                          FUN_009885d0();
                          local_c._0_1_ = 0x41;
                          FUN_009a8ee0(&uStack_1a8,auStack_1e8);
                          local_c._0_1_ = 0x42;
                          iVar13 = FUN_00475500();
                          FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74)
                                      );
                          local_c._0_1_ = 0x43;
                          FUN_00408ed0();
                          FUN_00408ad0();
                          local_c._0_1_ = 0x41;
                        }
                        else {
                          FUN_009885d0();
                          local_c._0_1_ = 0x3e;
                          FUN_009a8ee0(&uStack_1a8,auStack_1e8);
                          local_c._0_1_ = 0x3f;
                          iVar13 = FUN_00475500();
                          FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74)
                                      );
                          local_c._0_1_ = 0x40;
                          FUN_00408ed0();
                          FUN_00408ad0();
                          local_c._0_1_ = 0x3e;
                        }
                      }
                      else {
                        FUN_009885d0();
                        local_c._0_1_ = 0x3b;
                        FUN_009a8ee0(&uStack_1a8,auStack_1e8);
                        local_c._0_1_ = 0x3c;
                        iVar13 = FUN_00475500();
                        FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
                        local_c._0_1_ = 0x3d;
                        FUN_00408ed0();
                        FUN_00408ad0();
                        local_c._0_1_ = 0x3b;
                      }
                    }
                    else {
                      FUN_009885d0();
                      local_c._0_1_ = 0x38;
                      FUN_009a8ee0(&uStack_1a8,auStack_1e8);
                      local_c._0_1_ = 0x39;
                      iVar13 = FUN_00475500();
                      FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
                      local_c._0_1_ = 0x3a;
                      FUN_00408ed0();
                      FUN_00408ad0();
                      local_c._0_1_ = 0x38;
                    }
                  }
                  else {
                    FUN_009885d0();
                    local_c._0_1_ = 0x35;
                    FUN_009a8ee0(&uStack_1a8,auStack_1e8);
                    local_c._0_1_ = 0x36;
                    iVar13 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
                    local_c._0_1_ = 0x37;
                    FUN_00408ed0();
                    FUN_00408ad0();
                    local_c._0_1_ = 0x35;
                  }
                }
                else {
                  FUN_009885d0();
                  local_c._0_1_ = 0x32;
                  FUN_009a8ee0(&uStack_1a8,auStack_1e8);
                  local_c._0_1_ = 0x33;
                  iVar13 = FUN_00475500();
                  FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
                  local_c._0_1_ = 0x34;
                  FUN_00408ed0();
                  FUN_00408ad0();
                  local_c._0_1_ = 0x32;
                }
              }
              else {
                FUN_009885d0();
                local_c._0_1_ = 0x2f;
                FUN_009a8ee0(&uStack_1a8,auStack_1e8);
                local_c._0_1_ = 0x30;
                iVar13 = FUN_00475500();
                FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
                local_c._0_1_ = 0x31;
                FUN_00408ed0();
                FUN_00408ad0();
                local_c._0_1_ = 0x2f;
              }
            }
            else {
              FUN_009885d0();
              local_c._0_1_ = 0x2c;
              FUN_009a8ee0(&uStack_1a8,auStack_1e8);
              local_c._0_1_ = 0x2d;
              iVar13 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
              local_c._0_1_ = 0x2e;
              FUN_00408ed0();
              FUN_00408ad0();
              local_c._0_1_ = 0x2c;
            }
          }
          else {
            FUN_009885d0();
            local_c._0_1_ = 0x29;
            FUN_009a8ee0(&uStack_1a8,auStack_1e8);
            local_c._0_1_ = 0x2a;
            iVar13 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
            local_c._0_1_ = 0x2b;
            FUN_00408ed0();
            FUN_00408ad0();
            local_c._0_1_ = 0x29;
          }
        }
        else {
          FUN_009885d0();
          local_c._0_1_ = 0x26;
          FUN_009a8ee0(&uStack_1a8,auStack_1e8);
          local_c._0_1_ = 0x27;
          iVar13 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
          local_c._0_1_ = 0x28;
          FUN_00408ed0();
          FUN_00408ad0();
          local_c._0_1_ = 0x26;
        }
      }
      else {
        FUN_009885d0();
        local_c._0_1_ = 0x23;
        FUN_009a8ee0(&uStack_1a8,auStack_1e8);
        local_c._0_1_ = 0x24;
        iVar13 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar13 + 0x6c),*(undefined8 *)(iVar13 + 0x74));
        local_c._0_1_ = 0x25;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c._0_1_ = 0x23;
      }
      FUN_009a9740();
      local_c._0_1_ = 0;
      FUN_00408ad0();
    }
  }
LAB_007c14f4:
  FUN_0040c830();
LAB_007c1504:
  FUN_00459820();
  ExceptionList = local_14;
  return param_1;
}

