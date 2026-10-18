// FUN_006f3e70 @ 006f3e70 body=[[006f3e70, 006f41dc] [006f41e0, 006f451c] [006f4520, 006f4547] [006f454b, 006f4628] [006f462c, 006f4653] [006f4657, 006f46da] [006f46de, 006f4705] [006f4709, 006f4796] [006f479a, 006f47c1] [006f47c5, 006f4848] [006f484c, 006f48d3] [006f48d7, 006f48fe] [006f4902, 006f4999] [006f499d, 006f49c5] [006f49c9, 006f49dc]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f3e70(void)

{
  undefined *puVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  undefined **ppuVar11;
  uint unaff_ESI;
  int unaff_EDI;
  float10 fVar12;
  undefined1 *puVar13;
  undefined **ppuStack_e4;
  undefined ***pppuStack_e0;
  undefined **ppuStack_d0;
  int iStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  char acStack_b4 [4];
  int *piStack_b0;
  undefined **local_ac;
  undefined **ppuStack_a8;
  undefined **local_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  int iStack_84;
  char *pcStack_80;
  undefined4 *local_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 local_70;
  char *apcStack_6c [3];
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  undefined1 uStack_58;
  undefined **ppuStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *pvStack_34;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b94f75;
  pvStack_14 = ExceptionList;
  local_7c = *(undefined4 **)(DAT_012588e8 + 0xb5c);
  local_a4 = *(undefined ***)
              (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xe44);
  ExceptionList = &pvStack_14;
  if ((_DAT_013f3254 & 1) == 0) {
    _DAT_013f3254 = _DAT_013f3254 | 1;
    DAT_013f3244 = (undefined **)0x0;
    DAT_013f3248 = (undefined **)0x0;
    _DAT_013f324c = 0;
    pppuStack_e0 = (undefined ***)0x6f3eec;
    ExceptionList = &pvStack_14;
    _atexit((_func_4879 *)&LAB_00c82040);
  }
  local_7c = *(undefined4 **)(DAT_012588e8 + 0xb5c);
  pppuStack_e0 = (undefined ***)0x6f3f21;
  FUN_0068ea30();
  if (local_a4 != (undefined **)0x0) {
    iVar10 = 0;
    ppuVar3 = local_a4;
    do {
      puVar1 = *ppuVar3;
      ppuVar3 = (undefined **)ppuVar3[2];
      *(undefined **)(iVar10 + (int)DAT_013f3244) = puVar1;
      iVar10 = iVar10 + 4;
    } while (ppuVar3 != (undefined **)0x0);
  }
  switch(*(undefined4 *)(unaff_EDI + 0x1d0)) {
  case 0:
    local_ac = (undefined **)((uint)local_ac & 0xffffff00);
    pppuStack_e0 = (undefined ***)((int)DAT_013f3248 - (int)DAT_013f3244 >> 2);
    ppuStack_e4 = DAT_013f3248;
    FUN_00705ac0(DAT_013f3244);
    break;
  case 1:
    local_ac = (undefined **)((uint)local_ac._1_3_ << 8);
    pppuStack_e0 = (undefined ***)((int)DAT_013f3248 - (int)DAT_013f3244 >> 2);
    ppuStack_e4 = DAT_013f3248;
    FUN_00705ba0(DAT_013f3244);
    break;
  case 2:
    FUN_00457110();
    pppuStack_e0 = *(undefined ****)(unaff_EDI + 0x1d8);
    ppuStack_e4 = (undefined **)((int)DAT_013f3248 - (int)DAT_013f3244 >> 2);
    FUN_00705c80(DAT_013f3244,DAT_013f3248);
    break;
  case 5:
    local_ac = (undefined **)((uint)local_ac._1_3_ << 8);
    pppuStack_e0 = (undefined ***)((int)DAT_013f3248 - (int)DAT_013f3244 >> 2);
    ppuStack_e4 = DAT_013f3248;
    FUN_00705d80(DAT_013f3244);
  }
  if ((*(char *)(unaff_EDI + 0x1d4) == '\0') &&
     (ppuVar3 = DAT_013f3244, ppuVar11 = DAT_013f3248, DAT_013f3244 != DAT_013f3248)) {
    do {
      ppuVar11 = ppuVar11 + -1;
      if (ppuVar3 == ppuVar11) break;
      puVar1 = *ppuVar3;
      *ppuVar3 = *ppuVar11;
      ppuVar3 = ppuVar3 + 1;
      *ppuVar11 = puVar1;
    } while (ppuVar3 != ppuVar11);
  }
  local_7c = *(undefined4 **)(DAT_012588e8 + 0xb5c);
  iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_ac = (undefined **)CONCAT31(local_ac._1_3_,*(undefined1 *)(iVar10 + 0xaf0));
  local_70 = CONCAT31(local_70._1_3_,*(undefined1 *)(iVar10 + 0xaf8));
  local_a4 = (undefined **)CONCAT31(local_a4._1_3_,*(undefined1 *)(iVar10 + 0xad8));
  puVar4 = (undefined4 *)(**(code **)(**(int **)(unaff_EDI + 0x7c) + 0x2c))();
  piStack_b0 = (int *)*puVar4;
  ppuStack_a8 = (undefined **)0x0;
  local_7c = (undefined4 *)((int)DAT_013f3248 - (int)DAT_013f3244 >> 2);
  piVar9 = piStack_b0;
  if (0 < (int)local_7c) {
    do {
      ppuVar3 = (undefined **)DAT_013f3244[(int)ppuStack_a8];
      if (piStack_b0 == (int *)0x0) {
        if (*(int *)(unaff_EDI + 0x15c) == 0) {
          pppuStack_e0 = (undefined ***)0x6f40d6;
          pcStack_80 = (char *)FUN_00aae9af();
          ppuVar11 = DAT_01258a80;
          uStack_c = 0;
          if (pcStack_80 == (char *)0x0) {
            pppuStack_e0 = (undefined ***)0x0;
          }
          else {
            pppuStack_e0 = (undefined ***)0x6f4102;
            pppuStack_e0 = (undefined ***)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
            ppuStack_e4 = ppuVar11;
            pppuStack_e0 = (undefined ***)FUN_006e6530(pcStack_80,*(undefined4 *)(unaff_EDI + 0x54))
            ;
          }
          uStack_c = 0xffffffff;
          ppuStack_e4 = (undefined **)0x6f4132;
          (**(code **)(**(int **)(unaff_EDI + 0x7c) + 0x10))();
        }
        else {
          FUN_00816010();
          piVar9 = (int *)FUN_00705450();
          if ((int *)*piVar9 == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)*piVar9;
          }
          uVar5 = (uint)piVar9[2] >> 2;
          if (*(uint *)(iVar10 + 8) <= uVar5) {
            uVar5 = uVar5 - *(uint *)(iVar10 + 8);
          }
          pppuStack_e0 = *(undefined ****)
                          (*(int *)(*(int *)(iVar10 + 4) + uVar5 * 4) + (piVar9[2] & 3U) * 4);
          ppuStack_e4 = (undefined **)0x6f418b;
          (**(code **)(**(int **)(unaff_EDI + 0x7c) + 0x10))();
          if ((*(int *)(unaff_EDI + 0x15c) != 0) &&
             (iVar10 = *(int *)(unaff_EDI + 0x15c) + -1, *(int *)(unaff_EDI + 0x15c) = iVar10,
             iVar10 == 0)) {
            *(undefined4 *)(unaff_EDI + 0x158) = 0;
          }
        }
        ppuStack_e4 = (undefined **)0x6f41b0;
        iVar10 = (**(code **)(**(int **)(unaff_EDI + 0x7c) + 0x2c))();
        piStack_b0 = *(int **)(iVar10 + 4);
      }
      pcStack_80 = ppuVar3[0x18];
      iStack_84 = *piStack_b0;
      ppuStack_d0 = (undefined **)0x0;
      if (pcStack_80 != (char *)0x0) {
        uStack_74 = iStack_84 + 0x30;
        do {
          apcStack_6c[0] = pcStack_80;
          pcStack_80 = *(char **)(pcStack_80 + 0x224);
          cVar2 = FUN_006f7f80();
          if (cVar2 != '\0') {
            if (((int)ppuStack_d0 < 8) &&
               (*(char **)(uStack_74 + 4) = apcStack_6c[0], *(char *)(iStack_84 + 0x24) != '\0')) {
              pppuStack_e0 = (undefined ***)local_a4;
              ppuStack_e4 = local_ac;
              FUN_006e3540(uStack_74);
            }
            ppuStack_d0 = (undefined **)((int)ppuStack_d0 + 1);
            uStack_74 = uStack_74 + 0x21c;
          }
        } while (pcStack_80 != (char *)0x0);
      }
      if ((((int)ppuVar3[0x21] < 1) || (ppuStack_d0 != (undefined **)0x0)) &&
         ((*(char *)(unaff_EDI + 0xc5) != '\0' || (0 < (int)ppuStack_d0)))) {
        pppuStack_e0 = (undefined ***)(unaff_EDI + 0x33c);
        ppuStack_e4 = ppuVar3;
        FUN_006e69d0(iStack_84);
        if ((int)ppuStack_d0 < 8) {
          iVar10 = (int)ppuStack_d0 * 0x21c + 0x30 + iStack_84;
          if (7 < (int)ppuStack_d0) goto LAB_006f42c3;
          do {
            *(undefined4 *)(iVar10 + 4) = 0;
            if (*(char *)(iStack_84 + 0x24) != '\0') {
              pppuStack_e0 = (undefined ***)local_a4;
              ppuStack_e4 = local_ac;
              FUN_006e3540(iVar10);
            }
LAB_006f42c3:
            ppuStack_d0 = (undefined **)((int)ppuStack_d0 + 1);
            iVar10 = iVar10 + 0x21c;
          } while ((int)ppuStack_d0 < 8);
        }
        piStack_b0 = (int *)piStack_b0[2];
        ppuVar3 = ppuStack_d0;
      }
      ppuStack_d0 = ppuVar3;
      ppuStack_a8 = (undefined **)((int)ppuStack_a8 + 1);
      piVar9 = piStack_b0;
    } while ((int)ppuStack_a8 < (int)local_7c);
  }
  while (piVar9 != (int *)0x0) {
    piStack_b0 = (int *)piVar9[2];
    ppuStack_d0 = (undefined **)*piVar9;
    if (((*(int *)(unaff_EDI + 0x158) + *(int *)(unaff_EDI + 0x15c) & 3U) == 0) &&
       (*(uint *)(unaff_EDI + 0x154) <= *(int *)(unaff_EDI + 0x15c) + 4U >> 2)) {
      pppuStack_e0 = (undefined ***)0x6f4330;
      FUN_00705300();
    }
    local_7c = (undefined4 *)(*(int *)(unaff_EDI + 0x15c) + *(int *)(unaff_EDI + 0x158));
    ppuStack_a8 = (undefined **)((uint)local_7c >> 2);
    if (*(undefined ***)(unaff_EDI + 0x154) <= ppuStack_a8) {
      ppuStack_a8 = (undefined **)((int)ppuStack_a8 - (int)*(undefined ***)(unaff_EDI + 0x154));
    }
    if (*(int *)(*(int *)(unaff_EDI + 0x150) + (int)ppuStack_a8 * 4) == 0) {
      pppuStack_e0 = (undefined ***)0x6f435f;
      iVar10 = FUN_00aae9af();
      if (iVar10 == 0) {
        apcStack_6c[0] = (char *)0x0;
        pppuStack_e0 = (undefined ***)0x6f4403;
        std::exception::exception((exception *)&ppuStack_4c,apcStack_6c);
        pppuStack_e0 = &ppuStack_4c;
        ppuStack_4c = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
        ppuStack_e4 = (undefined **)0x6f4420;
        __CxxThrowException_8();
      }
      *(int *)(*(int *)(unaff_EDI + 0x150) + (int)ppuStack_a8 * 4) = iVar10;
    }
    puVar4 = (undefined4 *)
             (*(int *)(*(int *)(unaff_EDI + 0x150) + (int)ppuStack_a8 * 4) +
             ((uint)local_7c & 3) * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = ppuStack_d0;
    }
    *(int *)(unaff_EDI + 0x15c) = *(int *)(unaff_EDI + 0x15c) + 1;
    (**(code **)(ppuStack_d0[7] + 0x30))();
    ppuStack_e4 = (undefined **)0x6f43b2;
    pppuStack_e0 = (undefined ***)ppuStack_d0;
    (**(code **)(**(int **)(unaff_EDI + 0x7c) + 0x20))();
    piVar9 = piStack_b0;
  }
  piStack_b0 = piVar9;
  (**(code **)(**(int **)(unaff_EDI + 0x7c) + 0x6c))();
  puVar4 = DAT_00f092dc;
  if (*(int *)(*(int *)(unaff_EDI + 0x7c) + 0x104) != 0) {
    fVar12 = (float10)(**(code **)(*(int *)(*(int *)(*(int *)(unaff_EDI + 0x7c) + 0x104) + 0x54) +
                                  0x10))();
    local_7c = (undefined4 *)(float)fVar12;
    puVar4 = local_7c;
  }
  iVar10 = *(int *)(*(int *)(unaff_EDI + 0x7c) + 0x104);
  if ((iVar10 != 0) && ((float)DAT_00f092dc < (float)puVar4)) {
    pppuStack_e0 = (undefined ***)0x1;
    local_7c = &ppuStack_e4;
    FUN_00401000(((float)puVar4 + 0.0005) * 1000.0);
    uVar6 = FUN_00b31c00();
    *local_7c = uVar6;
    (**(code **)(*(int *)(iVar10 + 0x54) + 0x1c))();
  }
  pppuStack_e0 = (undefined ***)0xe0f00c;
  uStack_90 = 0;
  uStack_a0 = uStack_a0 & 0xffffff00;
  uStack_8c = 0xf;
  ppuStack_e4 = (undefined **)0x6f44ab;
  FUN_00409350();
  if ((char)local_70 == '\0') {
    uStack_c = 5;
    pppuStack_e0 = (undefined ***)0xe0eec4;
    uStack_b8 = 0xf;
    uStack_bc = 0;
    iStack_cc = (uint)iStack_cc._1_3_ << 8;
    ppuStack_e4 = (undefined **)0x6f45e7;
    FUN_00409350();
    uStack_c = CONCAT31(uStack_c._1_3_,6);
    piVar9 = &iStack_cc;
    pppuStack_e0 = (undefined ***)0x6f45fe;
    piVar7 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))();
    pppuStack_e0 = &local_a4;
    ppuStack_e4 = (undefined **)0x6f460c;
    piVar7 = (int *)(**(code **)(*piVar7 + 0x34))();
    ppuStack_e4 = (undefined **)0x6f4618;
    (**(code **)(*piVar7 + 0xbc))();
    if (0xf < uStack_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    if (0xf < uStack_94) {
      ppuStack_e4 = ppuStack_a8;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppuStack_e4 = (undefined **)0x14;
    uStack_94 = 0xf;
    uStack_98 = 0;
    ppuStack_a8 = (undefined **)((uint)ppuStack_a8 & 0xffffff00);
    FUN_00409350("prod_unsubsidize_all");
    pvStack_14 = (void *)0x7;
    ppuStack_e4 = (undefined **)0xf;
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    FUN_00409350("factory_buttons");
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,8);
    ppuStack_e4 = (undefined **)&stack0xffffff2c;
    piVar7 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))();
    piVar7 = (int *)(**(code **)(*piVar7 + 0x34))(&local_ac);
    pcVar8 = *(code **)(*piVar7 + 0xbc);
  }
  else {
    uStack_c = 1;
    pppuStack_e0 = (undefined ***)0xe0eec4;
    uStack_b8 = 0xf;
    uStack_bc = 0;
    iStack_cc = (uint)iStack_cc._1_3_ << 8;
    ppuStack_e4 = (undefined **)0x6f44db;
    FUN_00409350();
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    piVar9 = &iStack_cc;
    pppuStack_e0 = (undefined ***)0x6f44f2;
    piVar7 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))();
    pppuStack_e0 = &local_a4;
    ppuStack_e4 = (undefined **)0x6f4500;
    piVar7 = (int *)(**(code **)(*piVar7 + 0x34))();
    ppuStack_e4 = (undefined **)0x6f450c;
    (**(code **)(*piVar7 + 0xb8))();
    if (0xf < uStack_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    if (0xf < uStack_94) {
      ppuStack_e4 = ppuStack_a8;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppuStack_e4 = (undefined **)0x14;
    uStack_94 = 0xf;
    uStack_98 = 0;
    ppuStack_a8 = (undefined **)((uint)ppuStack_a8 & 0xffffff00);
    FUN_00409350("prod_unsubsidize_all");
    pvStack_14 = (void *)0x3;
    ppuStack_e4 = (undefined **)0xf;
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    FUN_00409350("factory_buttons");
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,4);
    ppuStack_e4 = (undefined **)&stack0xffffff2c;
    piVar7 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))();
    piVar7 = (int *)(**(code **)(*piVar7 + 0x34))(&local_ac);
    pcVar8 = *(code **)(*piVar7 + 0xb8);
  }
  (*pcVar8)();
  if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar9);
  }
  uStack_1c = 0xffffffff;
  iStack_cc = 0;
  uStack_c8 = 0xf;
  if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piStack_b0);
  }
  uStack_9c = 0xf;
  uStack_a0 = 0;
  piStack_b0 = (int *)((uint)piStack_b0 & 0xffffff00);
  FUN_00409350("prod_open_all_factories",0x17);
  if (acStack_b4[0] == '\0') {
    uStack_1c = 0xd;
    uStack_c8 = 0xf;
    iStack_cc = 0;
    FUN_00409350("factory_buttons",0xf);
    uStack_1c = CONCAT31(uStack_1c._1_3_,0xe);
    piVar9 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))(&stack0xffffff24);
    piVar9 = (int *)(**(code **)(*piVar9 + 0x34))(acStack_b4);
    (**(code **)(*piVar9 + 0xbc))();
    if ((undefined **)0xf < ppuStack_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppuStack_e4);
    }
    uStack_24 = 0xffffffff;
    ppuStack_e4 = (undefined **)((uint)ppuStack_e4 & 0xffffff00);
    if ((undefined **)0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_b8);
    }
    uStack_44 = 0xf;
    uStack_48 = 0;
    uStack_58 = 0;
    FUN_00409350("prod_close_all_factories",0x18);
    uStack_24 = 0xf;
    apcStack_6c[0] = (char *)0xf;
    local_70 = 0;
    pcStack_80 = (char *)((uint)pcStack_80 & 0xffffff00);
    FUN_00409350("factory_buttons",0xf);
    uStack_24 = CONCAT31(uStack_24._1_3_,0x10);
    piVar9 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))(&pcStack_80);
    piVar9 = (int *)(**(code **)(*piVar9 + 0x34))(auStack_5c);
    (**(code **)(*piVar9 + 0xbc))();
    if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_88);
    }
    uStack_74 = 0xf;
    uStack_78 = 0;
    uStack_88 = uStack_88 & 0xffffff00;
  }
  else {
    uStack_1c = 9;
    uStack_c8 = 0xf;
    iStack_cc = 0;
    FUN_00409350("factory_buttons",0xf);
    uStack_1c = CONCAT31(uStack_1c._1_3_,10);
    puVar13 = &stack0xffffff24;
    piVar9 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))(puVar13);
    piVar9 = (int *)(**(code **)(*piVar9 + 0x34))(acStack_b4);
    (**(code **)(*piVar9 + 0xb8))();
    if ((undefined **)0xf < ppuStack_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppuStack_e4);
    }
    uStack_24 = 0xffffffff;
    ppuStack_e4 = (undefined **)((uint)ppuStack_e4 & 0xffffff00);
    if ((undefined **)0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_b8);
    }
    local_a4 = (undefined **)0xf;
    ppuStack_a8 = (undefined **)0x0;
    uStack_b8 = uStack_b8 & 0xffffff00;
    FUN_00409350("prod_close_all_factories",0x18);
    uStack_24 = 0xb;
    ppuStack_e4 = (undefined **)((uint)ppuStack_e4 & 0xffffff00);
    FUN_00409350("factory_buttons",0xf);
    uStack_24 = CONCAT31(uStack_24._1_3_,0xc);
    piVar9 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))(&ppuStack_e4);
    piVar9 = (int *)(**(code **)(*piVar9 + 0x34))(&uStack_bc);
    (**(code **)(*piVar9 + 0xb8))();
    uStack_60 = uStack_c0;
    ppuStack_4c = local_ac;
    if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar13);
    }
  }
  if (ppuStack_4c < (undefined **)0x10) {
    ExceptionList = pvStack_34;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_60);
}

