// FUN_0046d9c0 @ 0046d9c0 body=[[0046d9c0, 0046da96] [0046da9a, 0046db29] [0046db2d, 0046dccb] [0046dccf, 0046dcec] [0046dcf0, 0046de3a] [0046de3e, 0046de6a] [0046de6e, 0046df25] [0046df29, 0046dfa0] [0046dfa4, 0046e00a] [0046e00e, 0046e045] [0046e049, 0046e05f]]


void FUN_0046d9c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *******pppppppcVar5;
  undefined4 *puVar6;
  undefined4 unaff_EBX;
  uint unaff_EDI;
  uint uVar7;
  uint uStack_17c;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  undefined4 uStack_160;
  int *piStack_15c;
  int iStack_158;
  int *piStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  char ******appppppcStack_148 [4];
  int local_138;
  uint uStack_134;
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 auStack_124 [12];
  uint local_118;
  undefined1 auStack_108 [12];
  undefined4 uStack_fc;
  int iStack_f8;
  uint uStack_e8;
  undefined **appuStack_74 [19];
  undefined1 uStack_28;
  undefined1 uStack_24;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b829de;
  pvStack_14 = ExceptionList;
  local_168 = 0;
  ExceptionList = &pvStack_14;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uStack_17c = 0x46d9fb;
    ExceptionList = &pvStack_14;
    (**(code **)(**(int **)(param_1 + 4) + 0x50))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  local_138 = *(int *)(*(int *)(param_1 + 0x3c) + 0x88) * 0xac + *(int *)(DAT_012586f4 + 0x164);
  uStack_17c = *(uint *)(param_1 + 8);
  uVar1 = local_138 + 0x1c;
  local_118 = uVar1;
  iVar2 = (**(code **)(*DAT_01258a80 + 0x2c))(uVar1);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    ExceptionList = pvStack_1c;
    return;
  }
  iStack_158 = 0xf;
  piStack_15c = (int *)0x0;
  uStack_16c = uStack_16c & 0xffffff00;
  FUN_00409350("close_button",0xc);
  pvStack_14 = (void *)0x0;
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(&uStack_16c);
  uStack_18 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  if (0xf < piStack_15c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EBX);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  puVar6 = *(undefined4 **)(iVar2 + 0x58);
  while (puVar6 != (undefined4 *)0x0) {
    uVar3 = *puVar6;
    puVar6 = (undefined4 *)puVar6[2];
    (**(code **)(*(int *)(iVar2 + 0x54) + 8))(uVar3);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x54) + 4))(param_1 + 0x10);
  uStack_160 = 0xf;
  uStack_164 = 0;
  FUN_00409350("title",5);
  pvStack_1c = (void *)0x1;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x44))(&stack0xfffffe8c);
  uStack_20 = 0xffffffff;
  piStack_15c = piVar4;
  if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI);
  }
  local_168 = 0;
  uStack_164 = 0xf;
  FUN_0045bd90(*(undefined4 *)(param_1 + 0x3c));
  uStack_20 = 2;
  if ((piVar4 == (int *)0x0) || (iStack_f8 == 0)) goto LAB_0046dccf;
  FUN_00988fa0(auStack_108);
  uStack_20._0_1_ = 3;
  if (uStack_134 < 0x10) {
    pppppppcVar5 = appppppcStack_148;
LAB_0046dba4:
    if ((*(char *)pppppppcVar5 != '\0') && (iVar2 = PHYSFS_exists(pppppppcVar5), iVar2 != 0)) {
      iStack_128 = piVar4[0x31];
      iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
      iStack_158 = FUN_00aae9af(0x1ac);
      uStack_20._0_1_ = 4;
      if (iStack_158 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_009885d0();
        uStack_20 = CONCAT31(uStack_20._1_3_,5);
        uStack_17c = 1;
        uVar3 = FUN_005c2ad0(auStack_124);
        uStack_150 = *(undefined4 *)(iVar2 + 0x6b9c0);
        piStack_154 = (int *)CONCAT22((short)uStack_150,(short)*(undefined4 *)(iVar2 + 0x6b9bc));
        uVar3 = FUN_009c4b50(iStack_158,piStack_154,appppppcStack_148,uVar3,iVar2);
      }
      uStack_20._0_1_ = 3;
      uStack_20._1_3_ = 0;
      if ((uStack_17c & 1) != 0) {
        FUN_00408ad0();
      }
      piVar4 = piStack_15c;
      (**(code **)(*piStack_15c + 0xe0))(uVar3);
      (**(code **)(*piVar4 + 0xfc))(uStack_12c);
      (**(code **)(*piVar4 + 0x34))();
    }
  }
  else {
    pppppppcVar5 = (char *******)appppppcStack_148[0];
    if ((char *******)appppppcStack_148[0] != (char *******)0x0) goto LAB_0046dba4;
  }
  uStack_20 = CONCAT31(uStack_20._1_3_,2);
  if (0xf < uStack_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(appppppcStack_148[0]);
  }
LAB_0046dccf:
  piStack_154 = (int *)(iStack_14c + 0x54);
  iStack_14c = -0x54 - iStack_14c;
  iStack_158 = 0;
  do {
    piStack_15c = (int *)((int)piStack_154 + *(int *)(param_1 + 0x3c) + iStack_14c + 0xc);
    uStack_17c = piStack_154[1] - *piStack_154 >> 5;
    if (uStack_17c != piStack_15c[1] - *piStack_15c >> 2) {
      uStack_134 = 0xf;
      local_138 = 0;
      appppppcStack_148[0] = (char ******)((uint)appppppcStack_148[0] & 0xffffff00);
      FUN_00409350("news_interface.cpp",0x12);
      uStack_20._0_1_ = 7;
      puVar6 = (undefined4 *)FUN_004577c0();
      uStack_20._0_1_ = 8;
      uVar3 = FUN_004015b0(appppppcStack_148,0x91,0x10004);
      uStack_20 = CONCAT31(uStack_20._1_3_,9);
      FUN_00987d50(uVar3,
                   "CNewsInterface::RebuildInternal() - Amount of articles does not match the amount of slots for size "
                   ,99,0);
      if (0xf < (uint)puVar6[5]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      piVar4 = (int *)FUN_00418e30(uVar3,puVar6);
      FUN_00408be0(piVar4);
      uVar7 = 0;
      if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
         (iVar2 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
         iVar2 == -1)) {
        uVar7 = 4;
      }
      if (uVar7 != 0) {
        uVar7 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar7;
        if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
          uVar7 = uVar7 | 4;
        }
        FUN_00401120(uVar7,0);
      }
      uStack_20._0_1_ = 8;
      FUN_00987ac0(appuStack_74);
      appuStack_74[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_74);
      if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_EDI & 0xffffff00);
      }
      uStack_20 = CONCAT31(uStack_20._1_3_,2);
      uStack_164 = 0xf;
      local_168 = 0;
      if (0xf < uStack_134) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(appppppcStack_148[0]);
      }
      uVar7 = piStack_15c[1] - *piStack_15c >> 2;
      if ((int)uVar7 <= (int)uStack_17c) {
        uStack_17c = uVar7;
      }
    }
    iVar2 = 0;
    if (0 < (int)uStack_17c) {
      do {
        FUN_0046d510(param_1,*(undefined4 *)(*piStack_15c + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uStack_17c);
    }
    iStack_158 = iStack_158 + 1;
    piStack_154 = piStack_154 + 4;
  } while (iStack_158 < 3);
  uStack_164 = 0xf;
  local_168 = 0;
  FUN_00409350(&DAT_00dfad24,4);
  uStack_20 = CONCAT31(uStack_20._1_3_,10);
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x3c))(&stack0xfffffe88);
  uStack_24 = 2;
  if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_17c);
  }
  local_168 = 0xf;
  uStack_16c = 0;
  uStack_17c = uStack_17c & 0xffffff00;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x38))();
    *(undefined1 *)(piVar4 + 0x40) = 1;
  }
  local_168 = 0xf;
  uStack_16c = 0;
  uStack_17c = uStack_17c & 0xffffff00;
  FUN_00409350(&DAT_00df0308,4);
  uStack_24 = 0xb;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))(&uStack_17c);
  uStack_28 = 2;
  if (uStack_16c < 0x10) {
    uStack_16c = 0xf;
    uVar1 = uVar1 & 0xffffff00;
    if (iVar2 != 0) {
      uVar3 = FUN_0043b700(*(int *)(param_1 + 0x3c) + 8,&uStack_12c);
      uStack_28 = 0xc;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00a5ecc0(uVar3,0);
      uStack_28 = 2;
      if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_12c);
      }
    }
    uStack_28 = 2;
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x78))(uStack_134);
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x38))();
    if (uStack_e8 < 0x10) {
      ExceptionList = pvStack_1c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_fc,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uVar1);
}

