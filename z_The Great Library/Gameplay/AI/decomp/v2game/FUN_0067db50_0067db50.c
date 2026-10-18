// FUN_0067db50 @ 0067db50 body=[[0067db50, 0067dc50] [0067dc54, 0067dd6d] [0067dd71, 0067de92] [0067de96, 0067dec4] [0067dec8, 0067def6] [0067defa, 0067df22] [0067df26, 0067df4d] [0067df51, 0067e10b] [0067e10f, 0067e147] [0067e14b, 0067e17d] [0067e185, 0067e19d] [0067e1a1, 0067e1b7]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0067db50(int *param_1)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_114 [12];
  undefined4 uStack_108;
  uint *puStack_104;
  int *piStack_100;
  char *******pppppppcStack_fc;
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c4;
  char *******apppppppcStack_c0 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 *puStack_a4;
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  uint uStack_94;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 *puStack_78;
  undefined1 *puStack_74;
  undefined4 *puStack_70;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb7bc2;
  pvStack_14 = ExceptionList;
  local_c4 = 0;
  ExceptionList = &pvStack_14;
  if (DAT_00f20c18 == (int *)0x0) {
    pppppppcStack_fc = (char *******)0x4;
    piStack_100 = (int *)0x67db8b;
    ExceptionList = &pvStack_14;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  pppppppcStack_fc = (char *******)0x67dbab;
  piVar2 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  param_1[0x24] = (int)piVar2;
  pppppppcStack_fc = (char *******)0x67dbbd;
  (**(code **)(*piVar2 + 4))();
  iVar6 = DAT_012588e8;
  puStack_a4 = (undefined4 *)0x0;
  puStack_a0 = (undefined4 *)0x0;
  uStack_9c = 0;
  uStack_c._1_3_ = 0;
  puVar3 = (uint *)(DAT_012588e8 + 0xadc);
  for (piVar2 = *(int **)(DAT_012588e8 + 0xadc);
      (uStack_c._0_1_ = 0, (int *)*puVar3 <= piVar2 && (piVar2 < *(int **)(iVar6 + 0xae0)));
      piVar2 = piVar2 + 1) {
    piStack_100 = (int *)(*piVar2 + 0x1c);
    uStack_cc = 0xf;
    uStack_d0 = 0;
    auStack_e0[0] = auStack_e0[0] & 0xffffff00;
    pcVar4 = (char *)piStack_100;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pppppppcStack_fc = (char *******)((int)pcVar4 - (*piVar2 + 0x1d));
    puStack_104 = (uint *)0x67dc24;
    FUN_00409350();
    uStack_c._0_1_ = 1;
    pppppppcStack_fc = (char *******)0x67dc39;
    FUN_00a840b0();
    uStack_c._0_1_ = 0;
    if (0xf < uStack_cc) {
      pppppppcStack_fc = (char *******)auStack_e0[0];
                    /* WARNING: Subroutine does not return */
      piStack_100 = (int *)&UNK_0067dc51;
      FUN_00aae91b();
    }
    uStack_cc = 0xf;
    uStack_d0 = 0;
    auStack_e0[0] = auStack_e0[0] & 0xffffff00;
  }
  pppppppcStack_fc = (char *******)(DAT_0125870c + 0x2238);
  param_1[0x2c9] = 0;
  *(undefined1 *)(param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x347) = 0;
  param_1[0x345] = 0;
  piStack_100 = (int *)0x67dc9f;
  FUN_00680350();
  pppppppcStack_fc = (char *******)(DAT_012587e4 + 4);
  piStack_100 = param_1;
  puStack_104 = (uint *)0x67dcae;
  FUN_00680450();
  pppppppcStack_fc = (char *******)param_1;
  piStack_100 = (int *)0x67dcb4;
  FUN_0067e1c0();
  pppppppcStack_fc = (char *******)DAT_0125870c;
  piStack_100 = (int *)0x67dcc0;
  FUN_004a22d0();
  pppppppcStack_fc = (char *******)0x14;
  piStack_100 = (int *)0xe0a974;
  uStack_ac = 0xf;
  uStack_b0 = 0;
  apppppppcStack_c0[0] = (char *******)((uint)apppppppcStack_c0[0] & 0xffffff00);
  puStack_104 = (uint *)0x67dce0;
  FUN_00409350();
  uStack_c._0_1_ = 2;
  puVar5 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    pppppppcStack_fc = (char *******)0x180;
    piStack_100 = (int *)0x67dcfb;
    pppppppcStack_fc = (char *******)FUN_00aae9af();
    uStack_c._0_1_ = 3;
    if (pppppppcStack_fc == (char *******)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      piStack_100 = (int *)0x67dd14;
      puVar5 = (undefined4 *)FUN_00475150();
    }
    uStack_c._0_1_ = 4;
    if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      pppppppcStack_fc = (char *******)0x1;
      piStack_100 = (int *)0x67dd3c;
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar5;
  uStack_c._0_1_ = 2;
  piStack_100 = (int *)0x67dd55;
  pppppppcStack_fc = (char *******)DAT_0125b5e0;
  iVar6 = FUN_0040b410();
  if (0xf < uStack_80) {
    pppppppcStack_fc = (char *******)uStack_94;
                    /* WARNING: Subroutine does not return */
    piStack_100 = (int *)&UNK_0067dd6e;
    FUN_00aae91b();
  }
  if (*(int *)(iVar6 + 0x10) != 0) {
    pppppppcStack_fc = (char *******)0x1;
    piStack_100 = (int *)&DAT_00dedc68;
    uStack_cc = 0xf;
    uStack_d0 = 0;
    auStack_e0[0] = auStack_e0[0] & 0xffffff00;
    puStack_104 = (uint *)0x67dd9b;
    FUN_00409350();
    uStack_c._0_1_ = 5;
    puVar5 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      pppppppcStack_fc = (char *******)0x180;
      piStack_100 = (int *)0x67ddb6;
      pppppppcStack_fc = (char *******)FUN_00aae9af();
      uStack_c._0_1_ = 6;
      if (pppppppcStack_fc == (char *******)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        piStack_100 = (int *)0x67ddcf;
        puVar5 = (undefined4 *)FUN_00475150();
      }
      uStack_c._0_1_ = 7;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        pppppppcStack_fc = (char *******)0x1;
        piStack_100 = (int *)0x67ddf7;
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar5;
    uStack_c._0_1_ = 5;
    piStack_100 = (int *)0x67de10;
    pppppppcStack_fc = (char *******)DAT_0125b5e0;
    pppppppcStack_fc = (char *******)FUN_0040b410();
    uStack_c._0_1_ = 8;
    piStack_100 = (int *)0x67de2a;
    FUN_00988fa0();
    pppppppcStack_fc = (char *******)auStack_e0;
    uStack_c._0_1_ = 9;
    piStack_100 = (int *)0x67de48;
    FUN_00988f20();
    pppppppcStack_fc = (char *******)apppppppcStack_c0;
    uStack_c._0_1_ = 10;
    piStack_100 = (int *)0x67de63;
    puStack_104 = (uint *)FUN_00988f20();
    pppppppcStack_fc = (char *******)0xffffffff;
    piStack_100 = (int *)0x0;
    uStack_c._0_1_ = 0xb;
    uStack_108 = 0x67de78;
    FUN_00408ed0();
    if (0xf < uStack_58) {
      pppppppcStack_fc = (char *******)uStack_6c;
                    /* WARNING: Subroutine does not return */
      piStack_100 = (int *)&UNK_0067de93;
      FUN_00aae91b();
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    uStack_6c = uStack_6c & 0xffffff00;
    if (0xf < uStack_20) {
      pppppppcStack_fc = (char *******)uStack_34;
                    /* WARNING: Subroutine does not return */
      piStack_100 = (int *)&UNK_0067dec5;
      FUN_00aae91b();
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    uStack_34 = uStack_34 & 0xffffff00;
    if (0xf < uStack_3c) {
      pppppppcStack_fc = (char *******)uStack_50;
                    /* WARNING: Subroutine does not return */
      piStack_100 = (int *)&UNK_0067def7;
      FUN_00aae91b();
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    uStack_50 = uStack_50 & 0xffffff00;
    if (0xf < uStack_80) {
      pppppppcStack_fc = (char *******)uStack_94;
                    /* WARNING: Subroutine does not return */
      piStack_100 = (int *)&UNK_0067df23;
      FUN_00aae91b();
    }
    uStack_c._0_1_ = 2;
    uStack_80 = 0xf;
    uStack_84 = 0;
    uStack_94 = uStack_94 & 0xffffff00;
    if (0xf < uStack_cc) {
      pppppppcStack_fc = (char *******)auStack_e0[0];
                    /* WARNING: Subroutine does not return */
      piStack_100 = (int *)&UNK_0067df4e;
      FUN_00aae91b();
    }
  }
  if (uStack_ac < 0x10) {
    pppppppcStack_fc = (char *******)apppppppcStack_c0;
  }
  else {
    pppppppcStack_fc = apppppppcStack_c0[0];
    if (apppppppcStack_c0[0] == (char *******)0x0) goto LAB_0067e137;
  }
  if (*(char *)pppppppcStack_fc != '\0') {
    piStack_100 = (int *)0x67df78;
    iVar6 = PHYSFS_exists();
    if (iVar6 != 0) {
      pppppppcStack_fc = (char *******)0x360;
      piStack_100 = (int *)0x67df8d;
      puVar5 = (undefined4 *)FUN_00aae9af();
      uStack_c._0_1_ = 0xc;
      puStack_70 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        pppppppcStack_fc = (char *******)0xf;
        piStack_100 = (int *)0xded978;
        uStack_cc = 0xf;
        uStack_d0 = 0;
        auStack_e0[0] = auStack_e0[0] & 0xffffff00;
        puStack_104 = (uint *)0x67dfc9;
        FUN_00409350();
        uStack_c = CONCAT31(uStack_c._1_3_,0xd);
        pppppppcStack_fc = (char *******)0x114;
        local_c4 = 1;
        piStack_100 = (int *)0x67dfe3;
        puVar7 = (undefined4 *)FUN_00aae9af();
        uStack_c = 0xe;
        puStack_78 = puVar7;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          pppppppcStack_fc = (char *******)0x3c;
          piStack_100 = (int *)0x67e009;
          iVar6 = FUN_00aae9af();
          uStack_c._0_1_ = 0xf;
          if (iVar6 == 0) {
            uVar8 = 0;
          }
          else {
            puStack_74 = auStack_114;
            piStack_100 = (int *)0xf;
            puStack_104 = (uint *)0x0;
            auStack_114[0] = 0;
            FUN_00409350(&DAT_00ded94d,0);
            uVar8 = FUN_00992740(iVar6,apppppppcStack_c0,0);
          }
          uStack_c = CONCAT31(uStack_c._1_3_,0xe);
          *puVar7 = &PTR_FUN_00e37c30;
          puVar7[1] = uVar8;
          *(undefined2 *)(puVar7 + 0x44) = 0x100;
          pppppppcStack_fc = (char *******)0x67e077;
          FUN_00990100();
          *puVar7 = &PTR_FUN_00e37c3c;
        }
        *puVar5 = &PTR_FUN_00e38524;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *(undefined1 *)(puVar5 + 4) = 0;
        uStack_c = 0x10;
        pppppppcStack_fc = (char *******)0xffffffff;
        *(undefined1 *)(puVar5 + 5) = 0;
        puVar5[7] = puVar7;
        piStack_100 = (int *)0x0;
        puStack_104 = auStack_e0;
        puVar5[0xd0] = 0xf;
        puVar5[0xcf] = 0;
        *(undefined1 *)(puVar5 + 0xcb) = 0;
        uStack_108 = 0x67e0c3;
        FUN_00408ed0();
        puVar5[0xd2] = 0;
        puVar5[0xd3] = 0;
        puVar5[0xd4] = 0;
        *(undefined1 *)(puVar5 + 0xd6) = 1;
        puVar5[0xd7] = 0;
      }
      uStack_c._0_1_ = 2;
      uStack_c._1_3_ = 0;
      if ((local_c4 & 1) != 0) {
        if (0xf < uStack_cc) {
          pppppppcStack_fc = (char *******)auStack_e0[0];
                    /* WARNING: Subroutine does not return */
          piStack_100 = (int *)&UNK_0067e10c;
          FUN_00aae91b();
        }
        uStack_cc = 0xf;
        uStack_d0 = 0;
        auStack_e0[0] = auStack_e0[0] & 0xffffff00;
      }
      piStack_100 = (int *)0x67e129;
      pppppppcStack_fc = (char *******)puVar5;
      (**(code **)(*param_1 + 0xc))();
      if (puVar5 != (undefined4 *)0x0) {
        pppppppcStack_fc = (char *******)0x1;
        piStack_100 = (int *)0x67e137;
        (**(code **)*puVar5)();
      }
    }
  }
LAB_0067e137:
  if (0xf < uStack_ac) {
    pppppppcStack_fc = apppppppcStack_c0[0];
                    /* WARNING: Subroutine does not return */
    piStack_100 = (int *)&UNK_0067e148;
    FUN_00aae91b();
  }
  uStack_ac = 0xf;
  uStack_b0 = 0;
  apppppppcStack_c0[0] = (char *******)((uint)apppppppcStack_c0[0] & 0xffffff00);
  puVar5 = puStack_a4;
  if (puStack_a4 == (undefined4 *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
  while( true ) {
    if (puVar5 == puStack_a0) {
      pppppppcStack_fc = (char *******)puStack_a4;
                    /* WARNING: Subroutine does not return */
      piStack_100 = (int *)&UNK_0067e19e;
      FUN_00aae91b();
    }
    if (0xf < (uint)puVar5[5]) break;
    puVar5[5] = 0xf;
    puVar5[4] = 0;
    *(undefined1 *)puVar5 = 0;
    puVar5 = puVar5 + 7;
  }
  pppppppcStack_fc = (char *******)*puVar5;
                    /* WARNING: Subroutine does not return */
  piStack_100 = (int *)&UNK_0067e17e;
  FUN_00aae91b();
}

