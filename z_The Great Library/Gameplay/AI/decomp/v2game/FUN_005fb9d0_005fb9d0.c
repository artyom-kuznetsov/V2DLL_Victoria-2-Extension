// FUN_005fb9d0 @ 005fb9d0 body=[[005fb9d0, 005fbaaf] [005fbab3, 005fbadc] [005fbae0, 005fbb5e] [005fbb66, 005fbc05] [005fbc0d, 005fbd1c] [005fbd25, 005fbdd5] [005fbdd9, 005fbe15] [005fbe1e, 005fc345]]


undefined4 FUN_005fb9d0(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  int iStack_11c;
  int local_118;
  int iStack_114;
  uint local_110;
  undefined1 local_10c [12];
  undefined4 uStack_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint auStack_ec [4];
  undefined4 uStack_dc;
  uint uStack_d8;
  uint auStack_d0 [4];
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_94;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 auStack_38 [32];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b9306e;
  pvStack_14 = ExceptionList;
  local_110 = 0;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = 0;
  local_80 = 0xf;
  local_84 = 0;
  local_94 = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = 0;
  local_5c = 0;
  local_58 = 1;
  local_c = 0;
  local_f8 = 0xf;
  local_fc = 0;
  local_10c[0] = 0;
  ExceptionList = &pvStack_14;
  local_118 = in_ECX;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,1);
  iVar4 = (**(code **)(**(int **)(in_ECX + 0xa8) + 0x9c))(local_10c);
  puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0xf;
  uStack_100 = 0;
  local_110 = local_110 & 0xffffff00;
  if (iVar4 == 0) {
LAB_005fbb06:
    local_fc = 0xf;
    uStack_100 = 0;
    local_110 = local_110 & 0xffffff00;
    FUN_00409350("great_powers_list2",0x12);
    puStack_10._0_1_ = 2;
    iVar4 = (**(code **)(**(int **)(iStack_11c + 0xa8) + 0x9c))();
    puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = 0xf;
    uStack_100 = 0;
    local_110 = local_110 & 0xffffff00;
    if (iVar4 == 0) {
LAB_005fbbad:
      local_fc = 0xf;
      uStack_100 = 0;
      local_110 = local_110 & 0xffffff00;
      FUN_00409350("second_rank_list",0x10);
      puStack_10._0_1_ = 3;
      iVar4 = (**(code **)(**(int **)(iStack_11c + 0xa8) + 0x9c))();
      puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      uStack_100 = 0;
      local_110 = local_110 & 0xffffff00;
      if (iVar4 == 0) {
LAB_005fbc4d:
        pbVar6 = (byte *)(**(code **)(*param_2 + 0x44))();
        if (0xf < *(uint *)(pbVar6 + 0x14)) {
          pbVar6 = *(byte **)pbVar6;
        }
        pcVar9 = "total_score";
        do {
          bVar1 = *pbVar6;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_005fbcb4:
            iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_005fbcb9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_005fbcb4;
          pbVar6 = pbVar6 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_005fbcb9:
        if (iVar4 == 0) {
          uStack_f4 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
          FUN_00530980(*(undefined4 *)
                        (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),auStack_ec
                      );
          puStack_10._0_1_ = 4;
          FUN_00408ed0();
          puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
          if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        else {
          (**(code **)(*param_2 + 0x44))();
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            (**(code **)(*param_2 + 0x44))();
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              (**(code **)(*param_2 + 0x44))();
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                (**(code **)(*param_2 + 0x44))();
                cVar3 = FUN_0040b360();
                if (cVar3 == '\0') {
                  (**(code **)(*param_2 + 0x44))();
                  cVar3 = FUN_0040b360();
                  if (cVar3 != '\0') {
                    uStack_f4 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4
                                    );
                    iStack_114 = iVar4;
                    (**(code **)(**(int **)(iStack_11c + 0x58) + 0x4c))();
                    cVar3 = FUN_009e0c90(uStack_f4,uStack_f0,&stack0xfffffee0,&local_118);
                    if (cVar3 != '\0') {
                      iVar10 = 0;
                      iVar8 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
                      if (0 < iVar8) {
                        do {
                          local_118 = *(int *)(*(int *)(iVar4 + 0x130c) + iVar10 * 4);
                          if (iVar10 == 0) {
                            piVar2 = (int *)**(undefined4 **)(DAT_01258a3c + 0xc);
                            FUN_009885d0();
                            puStack_10._0_1_ = 0x15;
                            (**(code **)(*piVar2 + 0x18))();
                            puStack_10._0_1_ = 0x16;
                            FUN_009888f0();
                            puStack_10._0_1_ = 0x17;
                            FUN_00988f20();
                            puStack_10._0_1_ = 0x18;
                            FUN_00988f20();
                            puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x19);
                            FUN_00408ed0();
                            FUN_00408ad0();
                            FUN_00408ad0();
                            FUN_00408ad0();
                            goto LAB_005fc304;
                          }
                          iVar10 = iVar10 + 1;
                        } while (iVar10 < iVar8);
                      }
                    }
                  }
                }
                else {
                  uStack_f4 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
                  (**(code **)(**(int **)(iStack_11c + 0x58) + 0x4c))();
                  iStack_11c = 0;
                  local_118 = 0;
                  cVar3 = FUN_009e0c90(uStack_f4,uStack_f0,&local_118,&iStack_114);
                  if (cVar3 != '\0') {
                    iVar10 = 0;
                    if (DAT_0131bb34 == 0) {
                      iStack_114 = FUN_00aae9af();
                      puStack_10._0_1_ = 0xe;
                      if (iStack_114 != 0) {
                        FUN_0041a160();
                      }
                      puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
                      FUN_00423700();
                    }
                    iVar8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
                    if (0 < iVar8) {
LAB_005fc050:
                      iStack_114 = *(int *)(*(int *)(iVar4 + 0x1338) + iVar10 * 4);
                      if (iStack_114 == 0) goto LAB_005fc069;
                      if (iStack_11c != local_118) {
                        iStack_11c = iStack_11c + 1;
                        goto LAB_005fc069;
                      }
                      if (DAT_0131bb34 == 0) {
                        local_118 = FUN_00aae9af();
                        puStack_10._0_1_ = 0xf;
                        if (local_118 != 0) {
                          FUN_0041a160();
                        }
                        puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
                        FUN_00423700();
                      }
                      if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar10
                         ) {
                        uVar7 = FUN_0096bb70();
                      }
                      else {
                        uVar7 = *(undefined4 *)(*(int *)(DAT_0131bb34 + 0xc) + iVar10 * 4);
                      }
                      FUN_009885d0();
                      puStack_10._0_1_ = 0x10;
                      FUN_0096d650(uVar7,auStack_38);
                      puStack_10._0_1_ = 0x11;
                      FUN_009888f0();
                      puStack_10._0_1_ = 0x12;
                      FUN_00988f20();
                      puStack_10._0_1_ = 0x13;
                      FUN_00988f20();
                      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x14);
                      FUN_00408ed0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
LAB_005fc304:
                      FUN_00408ad0();
                      goto LAB_005fc309;
                    }
                  }
                }
                goto LAB_005fc319;
              }
              FUN_009885d0();
              puStack_10._0_1_ = 0xb;
              FUN_009a8ee0(&local_110,auStack_ec);
              puStack_10._0_1_ = 0xc;
              iVar4 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
              puStack_10._0_1_ = 0xd;
              FUN_00408ed0();
              FUN_00408ad0();
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xb);
              FUN_009a9740();
            }
            else {
              FUN_009885d0();
              puStack_10._0_1_ = 8;
              FUN_009a8ee0(&local_110,auStack_ec);
              puStack_10._0_1_ = 9;
              iVar4 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
              puStack_10._0_1_ = 10;
              FUN_00408ed0();
              FUN_00408ad0();
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,8);
              FUN_009a9740();
            }
LAB_005fc309:
            puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
            FUN_00408ad0();
          }
          else {
            uStack_bc = 0xf;
            uStack_c0 = 0;
            auStack_d0[0] = auStack_d0[0] & 0xffffff00;
            FUN_00409350("BE_PRESTIGE",0xb);
            puStack_10._0_1_ = 5;
            FUN_009a8ee0(&local_110,auStack_d0);
            puStack_10._0_1_ = 6;
            iVar4 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
            puStack_10._0_1_ = 7;
            FUN_00408ed0();
            if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_d8 = 0xf;
            uStack_dc = 0;
            auStack_ec[0] = auStack_ec[0] & 0xffffff00;
            puStack_10._0_1_ = 5;
            FUN_009a9740();
            puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
            if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
        }
LAB_005fc319:
        FUN_0040c830();
        FUN_00459820();
        ExceptionList = pvStack_18;
        return param_1;
      }
      puVar5 = (undefined4 *)(**(code **)(*(int *)(iVar4 + 0x74) + 0x2c))();
      piVar2 = (int *)*puVar5;
      do {
        if (piVar2 == (int *)0x0) goto LAB_005fbc4d;
        iVar4 = *piVar2;
        piVar2 = (int *)piVar2[2];
        cVar3 = (**(code **)(*(int *)(iVar4 + 0x1c) + 0x58))();
      } while (cVar3 == '\0');
    }
    else {
      puVar5 = (undefined4 *)(**(code **)(*(int *)(iVar4 + 0x74) + 0x2c))();
      piVar2 = (int *)*puVar5;
      do {
        if (piVar2 == (int *)0x0) goto LAB_005fbbad;
        iVar4 = *piVar2;
        piVar2 = (int *)piVar2[2];
        cVar3 = (**(code **)(*(int *)(iVar4 + 0x1c) + 0x58))();
      } while (cVar3 == '\0');
    }
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*(int *)(iVar4 + 0x74) + 0x2c))();
    piVar2 = (int *)*puVar5;
    do {
      if (piVar2 == (int *)0x0) goto LAB_005fbb06;
      iVar4 = *piVar2;
      piVar2 = (int *)piVar2[2];
      cVar3 = (**(code **)(*(int *)(iVar4 + 0x1c) + 0x58))();
    } while (cVar3 == '\0');
  }
  FUN_005f90f0();
  FUN_00459820();
  ExceptionList = pvStack_18;
  return param_1;
LAB_005fc069:
  iVar10 = iVar10 + 1;
  if (iVar8 <= iVar10) goto LAB_005fc319;
  goto LAB_005fc050;
}

