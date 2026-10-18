// FUN_004361c0 @ 004361c0 body=[[004361c0, 004362a9] [004362ad, 00436369] [0043636d, 00436394] [00436398, 004363be] [004363c2, 00436500] [00436504, 00436513] [00436517, 004366d3] [004366d7, 00436734] [00436751, 00436761] [00436765, 0043677d]]


undefined4 FUN_004361c0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint unaff_ESI;
  uint unaff_EDI;
  int iVar5;
  uint uVar6;
  char *pcStack_1b4;
  undefined ***pppuStack_1b0;
  undefined4 ******ppppppuStack_1ac;
  undefined4 uStack_1a8;
  int *piStack_1a4;
  char *pcStack_1a0;
  char ******ppppppcStack_19c;
  undefined4 uStack_198;
  uint *puStack_194;
  char *pcStack_190;
  undefined4 uStack_18c;
  uint uStack_170;
  uint auStack_168 [2];
  undefined4 uStack_160;
  undefined4 ******ppppppuStack_15c;
  uint local_158;
  uint uStack_154;
  char ******ppppppcStack_14c;
  uint local_148;
  undefined4 local_144;
  uint uStack_138;
  int iStack_130;
  uint uStack_12c;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 *puStack_110;
  undefined4 *puStack_10c;
  undefined1 *puStack_108;
  uint uStack_104;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined **appuStack_84 [5];
  undefined **appuStack_70 [14];
  void *pvStack_38;
  undefined1 uStack_30;
  uint uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5c2d2;
  pvStack_14 = ExceptionList;
  uStack_18c = 0x15;
  pcStack_190 = "directorysettings.cpp";
  local_144 = 0xf;
  local_148 = 0;
  local_158 = local_158 & 0xffffff00;
  puStack_194 = (uint *)0x43620a;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  uStack_18c = 3;
  puStack_194 = &local_158;
  pcStack_190 = (char *)0x38;
  local_c = 0;
  uStack_198 = 0x436226;
  uVar1 = FUN_004015b0();
  uStack_18c = 0;
  pcStack_190 = (char *)0xc;
  puStack_194 = (uint *)0xdf7dc8;
  local_c = CONCAT31(local_c._1_3_,1);
  ppppppcStack_19c = (char ******)0x436241;
  uStack_198 = uVar1;
  FUN_00987d50();
  iVar5 = 0x10;
  ppppppcStack_19c = (char ******)param_2;
  if (0xf < (uint)param_2[5]) {
    ppppppcStack_19c = (char ******)*param_2;
  }
  piStack_1a4 = (int *)0x436257;
  pcStack_1a0 = (char *)uVar1;
  piStack_1a4 = (int *)FUN_00418e30();
  uStack_1a8 = 0x43625d;
  FUN_00401280();
  ppppppcStack_19c = (char ******)appuStack_70;
  uStack_1c = uStack_1c & 0xffffff00;
  pcStack_1a0 = (char *)0x436274;
  FUN_00987ac0();
  ppppppcStack_19c = (char ******)appuStack_70;
  appuStack_70[0] = std::ios_base::vftable;
  pcStack_1a0 = (char *)0x43628c;
  FUN_00aad52d();
  uStack_1c = 0xffffffff;
  if (0xf < uStack_154) {
    ppppppcStack_19c = (char ******)auStack_168[0];
                    /* WARNING: Subroutine does not return */
    pcStack_1a0 = &UNK_004362aa;
    FUN_00aae91b();
  }
  piVar2 = param_1 + 0x91;
  do {
    ppppppcStack_19c = (char ******)0xffffffff;
    pcStack_1a0 = (char *)0x0;
    piStack_1a4 = piVar2 + -0x70;
    uStack_1a8 = 0x4362c7;
    FUN_00408ed0();
    piVar2 = piVar2 + 7;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ppppppcStack_19c = (char ******)0x4;
  pcStack_1a0 = ".mod";
  uStack_154 = 0xf;
  local_158 = 0;
  auStack_168[0] = auStack_168[0] & 0xffffff00;
  piStack_1a4 = (int *)0x4362ee;
  FUN_00409350();
  uStack_1c = 2;
  ppppppcStack_19c = (char ******)0x4;
  pcStack_1a0 = "mod/";
  uStack_118 = 0xf;
  uStack_11c = 0;
  uStack_12c = uStack_12c & 0xffffff00;
  piStack_1a4 = (int *)0x43631b;
  FUN_00409350();
  ppppppcStack_19c = (char ******)param_2;
  uStack_1c._0_1_ = 3;
  pcStack_1a0 = (char *)0x436337;
  FUN_00988f20();
  ppppppcStack_19c = (char ******)auStack_168;
  uStack_1c._0_1_ = 4;
  pcStack_1a0 = (char *)0x43634f;
  FUN_00988f20();
  if (0xf < uStack_f0) {
    ppppppcStack_19c = (char ******)uStack_104;
                    /* WARNING: Subroutine does not return */
    pcStack_1a0 = &UNK_0043636a;
    FUN_00aae91b();
  }
  uStack_f0 = 0xf;
  uStack_f4 = 0;
  uStack_104 = uStack_104 & 0xffffff00;
  if (0xf < uStack_118) {
    ppppppcStack_19c = (char ******)uStack_12c;
                    /* WARNING: Subroutine does not return */
    pcStack_1a0 = &UNK_00436395;
    FUN_00aae91b();
  }
  uStack_118 = 0xf;
  uStack_11c = 0;
  uStack_12c = uStack_12c & 0xffffff00;
  uStack_1c._0_1_ = 8;
  if (0xf < uStack_154) {
    ppppppcStack_19c = (char ******)auStack_168[0];
                    /* WARNING: Subroutine does not return */
    pcStack_1a0 = &UNK_004363bf;
    FUN_00aae91b();
  }
  uStack_154 = 0xf;
  local_158 = 0;
  auStack_168[0] = auStack_168[0] & 0xffffff00;
  if (uStack_138 < 0x10) {
    ppppppcStack_19c = (char ******)&ppppppcStack_14c;
  }
  else {
    ppppppcStack_19c = ppppppcStack_14c;
    if ((char *******)ppppppcStack_14c == (char *******)0x0) goto LAB_004363f5;
  }
  if (*(char *)ppppppcStack_19c != '\0') {
    pcStack_1a0 = (char *)0x4363ea;
    iVar5 = PHYSFS_exists();
    if (iVar5 != 0) {
      ppppppcStack_19c = (char ******)0xffffffff;
      pcStack_1a0 = (char *)0x0;
      piStack_1a4 = param_2;
      uStack_1a8 = 0x43654b;
      FUN_00408ed0();
      ppppppcStack_19c = (char ******)0x360;
      pcStack_1a0 = (char *)0x436555;
      puVar3 = (undefined4 *)FUN_00aae9af();
      uStack_1c._0_1_ = 0xb;
      puStack_110 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
        ppppppcStack_19c = (char ******)unaff_ESI;
      }
      else {
        ppppppcStack_19c = (char ******)0xf;
        pcStack_1a0 = "UNNAMED_SESSION";
        uStack_170 = 0xf;
        piStack_1a4 = (int *)0x436591;
        FUN_00409350();
        uStack_1c = CONCAT31(uStack_1c._1_3_,0xc);
        ppppppcStack_19c = (char ******)0x114;
        unaff_EDI = 1;
        pcStack_1a0 = (char *)0x4365ab;
        puVar4 = (undefined4 *)FUN_00aae9af();
        uStack_1c = 0xd;
        puStack_10c = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          ppppppcStack_19c = (char ******)0x3c;
          pcStack_1a0 = (char *)0x4365d1;
          iStack_130 = FUN_00aae9af();
          uStack_1c._0_1_ = 0xe;
          if (iStack_130 == 0) {
            uVar1 = 0;
          }
          else {
            puStack_108 = (undefined1 *)&pcStack_1b4;
            pcStack_1a0 = (char *)0xf;
            piStack_1a4 = (int *)0x0;
            pcStack_1b4 = (char *)((uint)pcStack_1b4 & 0xffffff00);
            FUN_00409350(&DAT_00ded94d,0);
            uVar1 = FUN_00992740(iStack_130,&ppppppcStack_14c,0);
          }
          uStack_1c = CONCAT31(uStack_1c._1_3_,0xd);
          *puVar4 = &PTR_FUN_00e37c30;
          puVar4[1] = uVar1;
          *(undefined2 *)(puVar4 + 0x44) = 0x100;
          ppppppcStack_19c = (char ******)0x436642;
          FUN_00990100();
          *puVar4 = &PTR_FUN_00e37c3c;
        }
        *puVar3 = &PTR_FUN_00e38524;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 4) = 0;
        uStack_1c = 0xf;
        *(undefined1 *)(puVar3 + 5) = 0;
        puVar3[7] = puVar4;
        ppppppcStack_19c = (char ******)0xffffffff;
        puVar3[0xd0] = 0xf;
        pcStack_1a0 = (char *)0x0;
        piStack_1a4 = (int *)&stack0xfffffe7c;
        puVar3[0xcf] = 0;
        *(undefined1 *)(puVar3 + 0xcb) = 0;
        uStack_1a8 = 0x43668b;
        FUN_00408ed0();
        puVar3[0xd2] = 0;
        puVar3[0xd3] = 0;
        puVar3[0xd4] = 0;
        *(undefined1 *)(puVar3 + 0xd6) = 1;
        puVar3[0xd7] = 0;
        ppppppcStack_19c = (char ******)(unaff_ESI & 0xffffff00);
      }
      uStack_1c = 8;
      if (((unaff_EDI & 1) != 0) && (0xf < uStack_170)) {
                    /* WARNING: Subroutine does not return */
        pcStack_1a0 = &UNK_004366d4;
        FUN_00aae91b();
      }
      pcStack_1a0 = (char *)0x4366f1;
      ppppppcStack_19c = (char ******)puVar3;
      (**(code **)(*param_1 + 0xc))();
      if (puVar3 != (undefined4 *)0x0) {
        pppuStack_1b0 = (undefined ***)0x1;
        pcStack_1b4 = (char *)0x4366ff;
        (**(code **)*puVar3)();
      }
      if ((char)param_1[9] != '\0') {
        pppuStack_1b0 = (undefined ***)0x0;
        pcStack_1b4 = "";
        FUN_00409350();
        pppuStack_1b0 = (undefined ***)0x0;
        pcStack_1b4 = "";
        FUN_00409350();
        if (ppppppcStack_14c < (char *******)0x10) {
          ExceptionList = pvStack_38;
          return 0;
        }
        pppuStack_1b0 = (undefined ***)uStack_160;
                    /* WARNING: Subroutine does not return */
        pcStack_1b4 = &UNK_00436735;
        FUN_00aae91b();
      }
      if ((char *******)0xf < ppppppcStack_14c) {
        pppuStack_1b0 = (undefined ***)uStack_160;
                    /* WARNING: Subroutine does not return */
        pcStack_1b4 = &UNK_00436762;
        FUN_00aae91b();
      }
      ExceptionList = pvStack_38;
      return 1;
    }
  }
LAB_004363f5:
  ppppppcStack_19c = (char ******)0x15;
  pcStack_1a0 = "directorysettings.cpp";
  piStack_1a4 = (int *)0x436411;
  FUN_00409350();
  ppppppcStack_19c = (char ******)0x1000;
  piStack_1a4 = (int *)&stack0xfffffe7c;
  pcStack_1a0 = (char *)0x45;
  uStack_1c._0_1_ = 9;
  uStack_1a8 = 0x436431;
  uVar1 = FUN_004015b0();
  ppppppcStack_19c = (char ******)0x0;
  pcStack_1a0 = (char *)0x8;
  piStack_1a4 = (int *)0xdf7df8;
  uStack_1c = CONCAT31(uStack_1c._1_3_,10);
  ppppppuStack_1ac = (undefined4 ******)0x43644c;
  uStack_1a8 = uVar1;
  FUN_00987d50();
  if (local_148 < 0x10) {
    ppppppuStack_15c = &ppppppuStack_15c;
  }
  pcStack_1b4 = (char *)0x436462;
  pppuStack_1b0 = (undefined ***)uVar1;
  ppppppuStack_1ac = ppppppuStack_15c;
  uVar1 = FUN_00418e30();
  pcStack_1b4 = " couldn\'t be opened.";
  piVar2 = (int *)FUN_00418e30(uVar1);
  pppuStack_1b0 = (undefined ***)0x436478;
  ppppppuStack_1ac = (undefined4 ******)piVar2;
  FUN_00408be0();
  uVar6 = 0;
  if ((*(byte *)(*(int *)(*piVar2 + 4) + 0xc + (int)piVar2) & 6) == 0) {
    pppuStack_1b0 = (undefined ***)0x436493;
    iVar5 = (**(code **)(**(int **)(*(int *)(*piVar2 + 4) + 0x38 + (int)piVar2) + 0x34))();
    if (iVar5 == -1) {
      uVar6 = 4;
    }
  }
  if (uVar6 != 0) {
    pcStack_1b4 = (char *)(*(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0xc) | uVar6);
    if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x38) == 0) {
      pcStack_1b4 = (char *)((uint)pcStack_1b4 | 4);
    }
    pppuStack_1b0 = (undefined ***)0x0;
    FUN_00401120();
  }
  pppuStack_1b0 = appuStack_84;
  uStack_30 = 9;
  pcStack_1b4 = (char *)0x4364d1;
  FUN_00987ac0();
  pppuStack_1b0 = appuStack_84;
  appuStack_84[0] = std::ios_base::vftable;
  pcStack_1b4 = (char *)0x4364e9;
  FUN_00aad52d();
  if ((unaff_ESI & 0xffffff00) < 0x10) {
    if (ppppppcStack_14c < (char *******)0x10) {
      ExceptionList = pvStack_38;
      return 0;
    }
    pppuStack_1b0 = (undefined ***)uStack_160;
                    /* WARNING: Subroutine does not return */
    pcStack_1b4 = &UNK_00436514;
    FUN_00aae91b();
  }
  pppuStack_1b0 = (undefined ***)uStack_198;
                    /* WARNING: Subroutine does not return */
  pcStack_1b4 = &UNK_00436501;
  FUN_00aae91b();
}

