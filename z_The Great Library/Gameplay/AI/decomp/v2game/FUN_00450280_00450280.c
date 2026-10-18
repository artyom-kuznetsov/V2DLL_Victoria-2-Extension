// FUN_00450280 @ 00450280 body=[[00450280, 0045031c] [00450320, 0045056a] [0045056e, 004505cd] [004505d1, 00450665] [00450669, 0045078e] [00450792, 004507c1] [004507c5, 004507ef] [004507f3, 00450817] [0045081b, 0045083c] [00450840, 00450872] [00450876, 00450920] [00450924, 0045093a]]


void FUN_00450280(int param_1)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint *puVar9;
  int iVar10;
  float10 fVar11;
  undefined1 *puVar12;
  uint uStack_12c;
  uint uStack_124;
  int *local_120;
  uint uStack_11c;
  float fStack_118;
  undefined4 *puStack_114;
  uint local_110;
  undefined4 uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  uint auStack_e4 [3];
  uint uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  uint uStack_c8;
  undefined1 local_c4 [12];
  undefined4 uStack_b8;
  uint local_b4;
  undefined4 local_b0;
  uint auStack_ac [4];
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 *puStack_90;
  uint uStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_70;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 uStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b939f4;
  pvStack_14 = ExceptionList;
  local_120 = (int *)0x0;
  local_110 = DAT_012588e8 + 0xb5c;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("countries_listbox",0x11);
  local_c = 0;
  puVar12 = local_c4;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x7c))();
  puStack_10 = (undefined1 *)0xffffffff;
  local_120 = piVar2;
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_c8);
  }
  local_b4 = 0xf;
  uStack_b8 = 0;
  uStack_c8 = uStack_c8 & 0xffffff00;
  if (piVar2[0x41] == 0) {
    fStack_118 = DAT_00f092dc;
  }
  else {
    fVar11 = (float10)(**(code **)(*(int *)(piVar2[0x41] + 0x54) + 0x10))();
    fStack_118 = (float)fVar11;
  }
  (**(code **)(*piVar2 + 0x5c))();
  iVar10 = DAT_012587e4;
  iStack_f4 = 0;
  iStack_f0 = 0;
  uStack_ec = 0;
  puStack_10._0_1_ = 1;
  puStack_10._1_3_ = 0;
  puVar9 = *(uint **)(DAT_012587e4 + 4);
  puVar3 = (uint *)(DAT_012587e4 + 4);
  while (((uint *)*puVar3 <= puVar9 && (puVar9 < *(uint **)(iVar10 + 8)))) {
    uStack_12c = *puVar9;
    puVar9 = puVar9 + 1;
    if (((((0 < (int)(*(int *)(uStack_12c + 0x9dc) - *(int *)(uStack_12c + 0x9d8) & 0xfffffffcU)) &&
          (*(int *)(uStack_12c + 0x20) != 0)) &&
         ((*(char *)(uStack_12c + 0x1c) != 'R' ||
          ((*(char *)(uStack_12c + 0x1d) != 'E' || (*(char *)(uStack_12c + 0x1e) != 'B')))))) &&
        (*(int *)(uStack_12c + 0x20) != puStack_114[1])) &&
       ((cVar1 = FUN_004500a0(), cVar1 == '\0' ||
        (cVar1 = FUN_00450220(extraout_EDX), cVar1 != '\0')))) {
      FUN_004e9b90();
      piVar2 = local_120;
    }
  }
  uStack_12c = uStack_12c & 0xffffff00;
  if (*(char *)(param_1 + 0x3bc) == '\0') {
    iVar10 = iStack_f0 - iStack_f4 >> 2;
    FUN_00452db0(iStack_f4,iStack_f0,iVar10,uStack_12c);
  }
  else {
    iVar10 = iStack_f0 - iStack_f4 >> 2;
    FUN_00452cd0(iStack_f4,iStack_f0,iVar10,uStack_12c);
  }
  uStack_11c = 0;
  if (0 < iVar10) {
    do {
      uStack_12c = *(uint *)(iStack_f4 + uStack_11c * 4);
      puVar4 = (undefined4 *)FUN_00aae9af(0x28);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
      puStack_90 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uStack_d0 = 0xf;
        uStack_d4 = 0;
        auStack_e4[0] = auStack_e4[0] & 0xffffff00;
        FUN_00409350("message_filters_entry",0x15);
        uVar5 = *(undefined4 *)(param_1 + 4);
        uStack_124 = uStack_124 | 1;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined1 *)(puVar4 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(puVar4 + 5) = 0;
        *(undefined1 *)(puVar4 + 6) = 0;
        puVar4[7] = &PTR_FUN_00e39158;
        piVar7 = DAT_01258a80;
        puStack_10 = (undefined1 *)0x7;
        *puVar4 = &PTR_FUN_00e392f0;
        puVar4[7] = &PTR_FUN_00e39320;
        *(undefined1 *)(puVar4 + 9) = 0;
        uVar5 = (**(code **)(*piVar7 + 0x2c))(auStack_e4,uVar5);
        puVar4[8] = uVar5;
      }
      puStack_10 = (undefined1 *)0x8;
      (**(code **)(*piVar2 + 0x10))(puVar4,0);
      pvStack_18 = (void *)0x1;
      if (((uStack_12c & 1) != 0) && (uStack_12c = uStack_12c & 0xfffffffe, 0xf < uStack_d8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_ec);
      }
      uStack_104 = 0xf;
      uStack_108 = 0;
      fStack_118 = (float)((uint)fStack_118 & 0xffffff00);
      FUN_00409350("entry_bg",8);
      pvStack_18 = (void *)CONCAT31(pvStack_18._1_3_,9);
      iVar6 = (**(code **)(*piVar2 + 0x2c))();
      piVar7 = (int *)(**(code **)(**(int **)(**(int **)(iVar6 + 4) + 0x20) + 0x34))(&fStack_118);
      uStack_1c = 1;
      if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_11c);
      }
      uStack_108 = 0xf;
      uStack_10c = 0;
      uStack_11c = uStack_11c & 0xffffff00;
      (**(code **)(piVar7[0x15] + 4))(param_1 + 0xc);
      (**(code **)(*piVar7 + 0xd4))(*(undefined4 *)(puVar12 + 0x20));
      local_110 = 0xf;
      puStack_114 = (undefined4 *)0x0;
      uStack_124 = uStack_124 & 0xffffff00;
      FUN_00409350("country_name",0xc);
      uStack_24 = CONCAT31(uStack_24._1_3_,10);
      iVar6 = (**(code **)(*piVar2 + 0x2c))();
      (**(code **)(**(int **)(**(int **)(iVar6 + 4) + 0x20) + 0x3c))(&uStack_124);
      puStack_10._0_1_ = 1;
      if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_110);
      }
      uStack_fc = 0xf;
      uStack_100 = 0;
      local_110 = local_110 & 0xffffff00;
      uStack_98 = 0xf;
      uStack_9c = 0;
      auStack_ac[0] = auStack_ac[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded950,1);
      puStack_10._0_1_ = 0xb;
      uVar5 = FUN_004f97a0();
      puStack_10._0_1_ = 0xc;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      pcVar8 = (char *)(uStack_12c + 0x1c);
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)(uStack_12c + 0x1c),(int)pcVar8 - (uStack_12c + 0x1d));
      puStack_10._0_1_ = 0xd;
      FUN_00988fa0(auStack_e4);
      puStack_10._0_1_ = 0xe;
      FUN_00988f20(auStack_ac);
      puStack_10._0_1_ = 0xf;
      uVar5 = FUN_00988f20(uVar5);
      puStack_10._0_1_ = 0x10;
      FUN_00408ed0(uVar5,0,0xffffffff);
      FUN_00a5ecc0(uVar5,0);
      if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_54);
      }
      uStack_40 = 0xf;
      uStack_44 = 0;
      uStack_54 = uStack_54 & 0xffffff00;
      if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_8c);
      }
      uStack_78 = 0xf;
      uStack_7c = 0;
      uStack_8c = uStack_8c & 0xffffff00;
      if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_70);
      }
      uStack_5c = 0xf;
      uStack_60 = 0;
      uStack_70 = uStack_70 & 0xffffff00;
      if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_e4[0]);
      }
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_38);
      }
      puStack_10._0_1_ = 1;
      uStack_24 = 0xf;
      uStack_28 = 0;
      uStack_38 = uStack_38 & 0xffffff00;
      if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_ac[0]);
      }
      uStack_11c = uStack_11c + 1;
      piVar2 = local_120;
    } while ((int)uStack_11c < iVar10);
  }
  (**(code **)(*piVar2 + 0x6c))();
  iVar10 = piVar2[0x41];
  if ((iVar10 != 0) && (DAT_00f092dc < fStack_118)) {
    FUN_00401000((fStack_118 + 0.0005) * 1000.0,extraout_ECX,1,1);
    uVar5 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar10 + 0x54) + 0x1c))(uVar5);
  }
  *(undefined4 *)(param_1 + 0x2cc) = *puStack_114;
  *(undefined4 *)(param_1 + 0x2d0) = puStack_114[1];
  *(undefined1 *)(param_1 + 0x3bb) = 0;
  if (iStack_f4 == 0) {
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iStack_f4);
}

