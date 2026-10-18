// FUN_0073f300 @ 0073f300 body=[[0073f300, 0073f3f9] [0073f3fd, 0073f424] [0073f428, 0073f4c2] [0073f4c6, 0073f4ed] [0073f4f1, 0073f588] [0073f58c, 0073f5b3] [0073f5b7, 0073f79e] [0073f7a2, 0073f7c9] [0073f7cd, 0073f8b9] [0073f8bd, 0073f8e4] [0073f8e8, 0073f93b] [0073f93f, 0073f9bb] [0073f9bf, 0073fa18] [0073fa1c, 0073fa74] [0073fa78, 0073fb1c] [0073fb20, 0073fba0] [0073fba4, 0073fc66] [0073fc6a, 0073fcc9] [0073fcd2, 0073fd12] [0073fd16, 0073fd69] [0073fd6d, 0073fdb6] [0073fdba, 0073fe03] [0073fe07, 0073fe64] [0073fe68, 0073ff0e] [0073ff12, 0073ffda] [0073ffde, 00740008] [0074000c, 00740040]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073f300(int param_1)

{
  int **ppiVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  code *pcVar9;
  uint unaff_EBX;
  uint unaff_EDI;
  undefined8 uVar10;
  char in_stack_ffffff0c;
  int ****ppppiStack_f0;
  undefined1 **ppuStack_ec;
  int ****ppppiStack_e8;
  int ****ppppiStack_e4;
  char ****ppppcStack_e0;
  int ****ppppiStack_dc;
  undefined1 *puStack_d8;
  int ***pppiStack_d4;
  int ***pppiStack_d0;
  char ***pppcStack_cc;
  int ***pppiStack_c8;
  undefined1 *puStack_c4;
  int **ppiStack_c0;
  int ***pppiStack_bc;
  char **ppcStack_b8;
  int ***pppiStack_b4;
  char *pcStack_a4;
  int ***pppiStack_a0;
  undefined4 uStack_9c;
  int ***pppiStack_98;
  int ***pppiStack_94;
  char *pcStack_90;
  uint uStack_8c;
  char *pcStack_88;
  int **appiStack_84 [2];
  int iStack_7c;
  int ***pppiStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  void *pvStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba5969;
  pvStack_14 = ExceptionList;
  piVar5 = *(int **)(param_1 + 0x2c);
  if ((char)piVar5[0x17] == '\0') {
    pcVar9 = *(code **)(*piVar5 + 4);
  }
  else {
    pcVar9 = *(code **)(*(int *)piVar5[0x18] + 0x24);
  }
  pppiStack_b4 = (int ***)0x73f346;
  ExceptionList = &pvStack_14;
  (*pcVar9)();
  pppiStack_b4 = *(int ****)(param_1 + 0x28);
  if (*(char *)((int)*pppiStack_b4 + 0x67) != '\0') {
    ppcStack_b8 = (char **)0x73f356;
    FUN_00748d90();
  }
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x188) + 0x84) < 1) ||
     (*(int *)(*(int *)(param_1 + 0x24) + 400) < 1)) {
    pppiStack_b4 = (int ***)0xd;
    ppcStack_b8 = (char **)0xe12c90;
    uStack_8c = 0xf;
    pcStack_90 = (char *)0x0;
    pppiStack_a0 = (int ***)((uint)pppiStack_a0 & 0xffffff00);
    pppiStack_bc = (int ***)0x73f523;
    FUN_00409350();
    uStack_c = 4;
    pppiStack_b4 = (int ***)0x14;
    ppcStack_b8 = (char **)0xe12c78;
    uStack_70 = 0xf;
    uStack_74 = 0;
    appiStack_84[0] = (int **)((uint)appiStack_84[0] & 0xffffff00);
    pppiStack_bc = (int ***)0x73f54a;
    FUN_00409350();
    uStack_c = CONCAT31(uStack_c._1_3_,5);
    pppiStack_b4 = appiStack_84;
    ppcStack_b8 = (char **)0x73f561;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    ppcStack_b8 = &pcStack_a4;
    pppiStack_bc = (int ***)0x73f56f;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x34))();
    pppiStack_bc = (int ***)0x73f578;
    (**(code **)(*piVar5 + 0x38))();
    if ((int **)0xf < appiStack_84[0]) {
      pppiStack_c8 = pppiStack_98;
                    /* WARNING: Subroutine does not return */
      pppcStack_cc = (char ***)&UNK_0073f589;
      FUN_00aae91b();
    }
    uStack_20 = 0xffffffff;
    appiStack_84[0] = (int **)0xf;
    pcStack_88 = (char *)0x0;
    pppiStack_98 = (int ***)((uint)pppiStack_98 & 0xffffff00);
    if ((int ***)0xf < pppiStack_a0) {
      pppiStack_c8 = pppiStack_b4;
                    /* WARNING: Subroutine does not return */
      pppcStack_cc = (char ***)&UNK_0073f5b4;
      FUN_00aae91b();
    }
    pppiStack_b4 = (int ***)((uint)pppiStack_b4 & 0xffffff00);
  }
  else {
    pppiStack_b4 = (int ***)0xd;
    ppcStack_b8 = (char **)0xe12c90;
    uStack_70 = 0xf;
    uStack_74 = 0;
    appiStack_84[0] = (int **)((uint)appiStack_84[0] & 0xffffff00);
    pppiStack_bc = (int ***)0x73f398;
    FUN_00409350();
    uStack_c = 0;
    pppiStack_b4 = (int ***)0x14;
    ppcStack_b8 = (char **)0xe12c78;
    uStack_8c = 0xf;
    pcStack_90 = (char *)0x0;
    pppiStack_a0 = (int ***)((uint)pppiStack_a0 & 0xffffff00);
    pppiStack_bc = (int ***)0x73f3bb;
    FUN_00409350();
    uStack_c = CONCAT31(uStack_c._1_3_,1);
    pppiStack_b4 = (int ***)&pppiStack_a0;
    ppcStack_b8 = (char **)0x73f3d2;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    ppcStack_b8 = &pcStack_88;
    pppiStack_bc = (int ***)0x73f3e0;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x34))();
    pppiStack_bc = (int ***)0x73f3e9;
    (**(code **)(*piVar5 + 0x34))();
    if ((int ****)0xf < pppiStack_94) {
                    /* WARNING: Subroutine does not return */
      ppiStack_c0 = (int **)&UNK_0073f3fa;
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
    pppiStack_94 = (int ***)0xf;
    pppiStack_98 = (int ***)0x0;
    if ((int ***)0xf < pppiStack_78) {
      pppiStack_bc = (int ***)uStack_8c;
                    /* WARNING: Subroutine does not return */
      ppiStack_c0 = (int **)&UNK_0073f425;
      FUN_00aae91b();
    }
    pppiStack_bc = (int ***)0xd;
    ppiStack_c0 = (int **)0xe12c90;
    pppiStack_78 = (int ***)0xf;
    iStack_7c = 0;
    uStack_8c = uStack_8c & 0xffffff00;
    puStack_c4 = (undefined1 *)0x73f444;
    FUN_00409350();
    pvStack_14 = (void *)0x2;
    pppiStack_bc = (int ***)0x14;
    ppiStack_c0 = (int **)0xe12c78;
    pppiStack_94 = (int ***)0xf;
    pppiStack_98 = (int ***)0x0;
    unaff_EBX = unaff_EBX & 0xffffff00;
    puStack_c4 = (undefined1 *)0x73f46b;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,3);
    pppiStack_bc = (int ***)&stack0xffffff58;
    ppiStack_c0 = (int **)0x73f482;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    ppiStack_c0 = (int **)&pcStack_90;
    puStack_c4 = (undefined1 *)0x73f490;
    pppiStack_78 = (int ***)(**(code **)(*piVar5 + 0x34))();
    puStack_c4 = (undefined1 *)((*(int *)(*(int *)(param_1 + 0x24) + 400) != 1) + 1);
    pppiStack_c8 = (int ***)0x73f4b2;
    (*(code *)(*pppiStack_78)[0x12])();
    if ((int ***)0xf < pppiStack_a0) {
      pppiStack_c8 = pppiStack_b4;
                    /* WARNING: Subroutine does not return */
      pppcStack_cc = (char ***)&UNK_0073f4c3;
      FUN_00aae91b();
    }
    uStack_20 = 0xffffffff;
    pppiStack_a0 = (int ***)0xf;
    pcStack_a4 = (char *)0x0;
    pppiStack_b4 = (int ***)((uint)pppiStack_b4 & 0xffffff00);
    if ((int **)0xf < appiStack_84[0]) {
      pppiStack_c8 = pppiStack_98;
                    /* WARNING: Subroutine does not return */
      pppcStack_cc = (char ***)&UNK_0073f4ee;
      FUN_00aae91b();
    }
    pppiStack_98 = (int ***)((uint)pppiStack_98 & 0xffffff00);
  }
  uStack_20 = 0xffffffff;
  appiStack_84[0] = (int **)0xf;
  pcStack_88 = (char *)0x0;
  pppiStack_a0 = (int ***)0xf;
  pcStack_a4 = (char *)0x0;
  iVar6 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar6 + 300) == *(int *)(DAT_012588e8 + 0xb60)) {
    ppcStack_b8 = (char **)CONCAT31(ppcStack_b8._1_3_,0 < *(int *)(iVar6 + 400));
    if (0 < *(int *)(iVar6 + 400)) {
      pppiStack_78 = *(int ****)(iVar6 + 0x188);
      pppiStack_c8 = (int ***)0x73f606;
      cVar3 = FUN_004d1e40();
      if (cVar3 == '\0') {
        pppiStack_c8 = pppiStack_78;
        pppcStack_cc = (char ***)0x73f657;
        cVar3 = FUN_004d1ed0();
        if (cVar3 == '\0') {
          ppcStack_b8 = (char **)((uint)ppcStack_b8 & 0xffffff00);
        }
        else {
          uStack_74 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x128);
          iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 0x24) + 300) * 4
                          );
          iStack_7c = *(int *)(iVar6 + 0x15c4) - *(int *)(iVar6 + 0x15c0);
          pppiStack_c8 = (int ***)0x73f691;
          iVar6 = FUN_004d5e90();
          ppcStack_b8 = (char **)CONCAT31(ppcStack_b8._1_3_,iVar6 <= iStack_7c);
        }
      }
      else {
        uStack_74 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x128);
        iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 0x24) + 300) * 4);
        iStack_7c = *(int *)(iVar6 + 0x15c4) - *(int *)(iVar6 + 0x15c0);
        pppiStack_c8 = (int ***)0x73f642;
        iVar6 = FUN_004d5d10();
        ppcStack_b8 = (char **)CONCAT31(ppcStack_b8._1_3_,iVar6 <= iStack_7c);
      }
    }
    pppiStack_c8 = (int ***)0xd;
    pppcStack_cc = (char ***)0xe12c90;
    pppiStack_a0 = (int ***)0xf;
    pcStack_a4 = (char *)0x0;
    pppiStack_b4 = (int ***)((uint)pppiStack_b4 & 0xffffff00);
    pppiStack_d0 = (int ***)0x73f6bc;
    FUN_00409350();
    uStack_20 = 6;
    pppiStack_c8 = (int ***)0x14;
    pppcStack_cc = (char ***)0xe12c78;
    appiStack_84[0] = (int **)0xf;
    pcStack_88 = (char *)0x0;
    pppiStack_98 = (int ***)((uint)pppiStack_98 & 0xffffff00);
    pppiStack_d0 = (int ***)0x73f6e3;
    FUN_00409350();
    uStack_20 = CONCAT31(uStack_20._1_3_,7);
    pppiStack_c8 = (int ***)&pppiStack_98;
    pppcStack_cc = (char ***)0x73f6fa;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    pppcStack_cc = &ppcStack_b8;
    pppiStack_d0 = (int ***)0x73f708;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x34))();
    iVar6 = *piVar5;
    if ((char)ppiStack_c0 != '\0') {
      pcVar9 = *(code **)(iVar6 + 0xb8);
      goto LAB_0073f78c;
    }
  }
  else {
    pppiStack_c8 = (int ***)0xd;
    pppcStack_cc = (char ***)0xe12c90;
    pppiStack_a0 = (int ***)0xf;
    pcStack_a4 = (char *)0x0;
    pppiStack_d0 = (int ***)0x73f736;
    FUN_00409350();
    uStack_20 = 8;
    pppiStack_c8 = (int ***)0x14;
    pppcStack_cc = (char ***)0xe12c78;
    appiStack_84[0] = (int **)0xf;
    pcStack_88 = (char *)0x0;
    pppiStack_98 = (int ***)((uint)pppiStack_98 & 0xffffff00);
    pppiStack_d0 = (int ***)0x73f75d;
    FUN_00409350();
    uStack_20 = CONCAT31(uStack_20._1_3_,9);
    pppiStack_c8 = (int ***)&pppiStack_98;
    pppcStack_cc = (char ***)0x73f774;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    pppcStack_cc = &ppcStack_b8;
    pppiStack_d0 = (int ***)0x73f782;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x34))();
    iVar6 = *piVar5;
  }
  pcVar9 = *(code **)(iVar6 + 0xbc);
LAB_0073f78c:
  pppiStack_d0 = (int ***)0x73f78e;
  (*pcVar9)();
  if (0xf < uStack_8c) {
    pppiStack_d0 = pppiStack_a0;
                    /* WARNING: Subroutine does not return */
    pppiStack_d4 = (int ***)&UNK_0073f79f;
    FUN_00aae91b();
  }
  uStack_28 = 0xffffffff;
  pppiStack_a0 = (int ***)((uint)pppiStack_a0 & 0xffffff00);
  pcStack_90 = (char *)0x0;
  uStack_8c = 0xf;
  if (0xf < unaff_EBX) {
    pppiStack_d0 = pppiStack_bc;
                    /* WARNING: Subroutine does not return */
    pppiStack_d4 = (int ***)&UNK_0073f7ca;
    FUN_00aae91b();
  }
  pppiStack_d0 = (int ***)0x10;
  pppiStack_bc = (int ***)((uint)pppiStack_bc & 0xffffff00);
  pppiStack_d4 = (int ***)0xe12dd0;
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x24) + 0x188) + 0x80) == '\0') {
    puStack_d8 = (undefined1 *)0x73f854;
    FUN_00409350();
    uStack_28 = 0xc;
    pppiStack_d0 = (int ***)0x14;
    pppiStack_d4 = (int ***)0xe12c78;
    uStack_8c = 0xf;
    pcStack_90 = (char *)0x0;
    pppiStack_a0 = (int ***)((uint)pppiStack_a0 & 0xffffff00);
    puStack_d8 = (undefined1 *)0x73f87b;
    FUN_00409350();
    uStack_28 = CONCAT31(uStack_28._1_3_,0xd);
    pppiStack_d0 = (int ***)&pppiStack_a0;
    pppiStack_d4 = (int ***)0x73f892;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    pppiStack_d4 = &ppiStack_c0;
    puStack_d8 = (undefined1 *)0x73f8a0;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x44))();
    pcVar9 = *(code **)(*piVar5 + 0x38);
  }
  else {
    puStack_d8 = (undefined1 *)0x73f7fa;
    FUN_00409350();
    uStack_28 = 10;
    pppiStack_d0 = (int ***)0x14;
    pppiStack_d4 = (int ***)0xe12c78;
    uStack_8c = 0xf;
    pcStack_90 = (char *)0x0;
    pppiStack_a0 = (int ***)((uint)pppiStack_a0 & 0xffffff00);
    puStack_d8 = (undefined1 *)0x73f821;
    FUN_00409350();
    uStack_28 = CONCAT31(uStack_28._1_3_,0xb);
    pppiStack_d0 = (int ***)&pppiStack_a0;
    pppiStack_d4 = (int ***)0x73f838;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    pppiStack_d4 = &ppiStack_c0;
    puStack_d8 = (undefined1 *)0x73f846;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x44))();
    pcVar9 = *(code **)(*piVar5 + 0x34);
  }
  puStack_d8 = (undefined1 *)0x73f8a9;
  (*pcVar9)();
  if ((int ****)0xf < pppiStack_94) {
    puStack_d8 = (undefined1 *)0xf;
                    /* WARNING: Subroutine does not return */
    ppppiStack_dc = (int ****)&UNK_0073f8ba;
    FUN_00aae91b();
  }
  uStack_30 = 0xffffffff;
  pppiStack_98 = (int ***)0x0;
  pppiStack_94 = (int ***)0xf;
  if (0xf < unaff_EDI) {
    puStack_d8 = puStack_c4;
                    /* WARNING: Subroutine does not return */
    ppppiStack_dc = (int ****)&UNK_0073f8e5;
    FUN_00aae91b();
  }
  puStack_d8 = (undefined1 *)0x14;
  ppppiStack_dc = (int ****)0xe12c78;
  pppiStack_94 = (int ***)0xf;
  pppiStack_98 = (int ***)0x0;
  ppppcStack_e0 = (char ****)0x73f904;
  FUN_00409350();
  uStack_30 = 0xe;
  puStack_d8 = &stack0xffffff58;
  ppppiStack_dc = (int ****)0x73f91e;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  uStack_34 = 0xffffffff;
  if ((int ***)0xf < pppiStack_98) {
    ppppiStack_dc = (int ****)0x0;
                    /* WARNING: Subroutine does not return */
    ppppcStack_e0 = (char ****)&UNK_0073f93c;
    FUN_00aae91b();
  }
  ppppiStack_dc = (int ****)0xf;
  pppiStack_98 = (int ***)0xf;
  uStack_9c = 0;
  pppiStack_b4 = (int ***)0xf;
  ppcStack_b8 = (char **)0x0;
  pppiStack_c8 = (int ***)((uint)pppiStack_c8 & 0xffffff00);
  ppppcStack_e0 = (char ****)0xe12de4;
  if (*(int *)(*(int *)(param_1 + 0x24) + 0x110) == 0) {
    ppppiStack_e4 = (int ****)0x73fcd7;
    FUN_00409350();
    uStack_34 = 0x16;
    ppppiStack_dc = &pppiStack_c8;
    ppppcStack_e0 = (char ****)0x73fcf0;
    iVar6 = (**(code **)(*piVar5 + 0x44))();
    uStack_54 = 0xffffffff;
    ppuStack_ec = (undefined1 **)CONCAT31(ppuStack_ec._1_3_,*(char *)(iVar6 + 0x4f));
    if ((int ****)0xf < pppiStack_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppppiStack_e8);
    }
    if (*(char *)(iVar6 + 0x4f) != '\0') {
      FUN_009885d0();
      uStack_54 = 0x17;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(&ppppiStack_e8);
      (**(code **)(*piVar7 + 0x38))();
      uStack_58 = 0xffffffff;
      if ((undefined1 *)0xf < puStack_d8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppuStack_ec);
      }
      FUN_009885d0();
      uStack_58 = 0x18;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(&ppuStack_ec);
      (**(code **)(*piVar7 + 0x38))();
      uStack_5c = 0xffffffff;
      if ((int ****)0xf < ppppiStack_dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppppiStack_f0);
      }
      FUN_009885d0();
      uStack_5c = 0x19;
      piVar5 = (int *)(**(code **)(*piVar5 + 0x44))(&ppppiStack_f0);
      (**(code **)(*piVar5 + 0x38))();
      uStack_54 = 0xffffffff;
      if ((int ****)0xf < pppiStack_d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppppiStack_e8);
      }
    }
  }
  else {
    uStack_8c = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x110);
    ppppiStack_e4 = (int ****)0x73f982;
    FUN_00409350();
    uStack_34 = 0xf;
    ppppiStack_dc = &pppiStack_c8;
    ppppcStack_e0 = (char ****)0x73f997;
    piVar7 = (int *)(**(code **)(*piVar5 + 0x44))();
    ppppcStack_e0 = (char ****)0x73f9a0;
    (**(code **)(*piVar7 + 0x34))();
    uStack_38 = 0xffffffff;
    if ((char **)0xf < ppcStack_b8) {
      ppppcStack_e0 = (char ****)pppcStack_cc;
                    /* WARNING: Subroutine does not return */
      ppppiStack_e4 = (int ****)&UNK_0073f9bc;
      FUN_00aae91b();
    }
    ppppcStack_e0 = (char ****)0x13;
    ppppiStack_e4 = (int ****)0xe12df4;
    ppcStack_b8 = (char **)0xf;
    pppiStack_bc = (int ***)0x0;
    pppcStack_cc = (char ***)((uint)pppcStack_cc & 0xffffff00);
    ppppiStack_e8 = (int ****)0x73f9db;
    FUN_00409350();
    uStack_38 = 0x10;
    ppppcStack_e0 = &pppcStack_cc;
    ppppiStack_e4 = (int ****)0x73f9f4;
    piVar7 = (int *)(**(code **)(*piVar5 + 0x44))();
    ppppiStack_e4 = (int ****)0x73f9fd;
    (**(code **)(*piVar7 + 0x34))();
    uStack_3c = 0xffffffff;
    if (0xf < pppiStack_bc) {
      ppppiStack_e4 = (int ****)pppiStack_d0;
                    /* WARNING: Subroutine does not return */
      ppppiStack_e8 = (int ****)&UNK_0073fa19;
      FUN_00aae91b();
    }
    ppppiStack_e4 = (int ****)0xf;
    ppppiStack_e8 = (int ****)0xe12e08;
    pppiStack_bc = (int ***)0xf;
    ppiStack_c0 = (int **)0x0;
    pppiStack_d0 = (int ***)((uint)pppiStack_d0 & 0xffffff00);
    ppuStack_ec = (undefined1 **)0x73fa37;
    FUN_00409350();
    uStack_3c = 0x11;
    ppppiStack_e4 = &pppiStack_d0;
    ppppiStack_e8 = (int ****)0x73fa50;
    piVar7 = (int *)(**(code **)(*piVar5 + 0x44))();
    ppppiStack_e8 = (int ****)0x73fa59;
    (**(code **)(*piVar7 + 0x34))();
    uStack_40 = 0xffffffff;
    if ((int **)0xf < ppiStack_c0) {
      ppppiStack_e8 = (int ****)pppiStack_d4;
                    /* WARNING: Subroutine does not return */
      ppuStack_ec = (undefined1 **)&UNK_0073fa75;
      FUN_00aae91b();
    }
    ppiVar1 = pppiStack_98[4];
    ppiStack_c0 = (int **)0xf;
    puStack_c4 = (undefined1 *)0x0;
    uVar2 = (uint)pppiStack_d4 >> 8;
    pppiStack_d4 = (int ***)(uVar2 << 8);
    if (((int)ppiVar1[0xe] - (int)ppiVar1[0xd] & 0xfffffff8U) != 0) {
      pppiStack_94 = (int ***)*ppiVar1[0xd];
      uStack_9c = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + ppiVar1[0xd][1] * 4);
      ppppiStack_e8 = (int ****)0xf;
      ppuStack_ec = (undefined1 **)0xe12e08;
      ppiStack_c0 = (int **)0xf;
      puStack_c4 = (undefined1 *)0x0;
      pppiStack_d4 = (int ***)(uVar2 << 8);
      ppppiStack_f0 = (int ****)0x73fad4;
      FUN_00409350();
      uStack_40 = 0x12;
      ppppiStack_e8 = &pppiStack_d4;
      ppuStack_ec = (undefined1 **)0x73faed;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))();
      ppuStack_ec = (undefined1 **)pppiStack_a0[8];
      ppppiStack_f0 = (int ****)0x73fb01;
      (**(code **)(*piVar7 + 0xd4))();
      uStack_48 = 0xffffffff;
      if ((int ***)0xf < pppiStack_c8) {
        ppppiStack_f0 = ppppiStack_dc;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ppppiStack_f0 = (int ****)0xf;
      pppiStack_c8 = (int ***)0xf;
      pppcStack_cc = (char ***)0x0;
      ppppiStack_dc = (int ****)((uint)ppppiStack_dc & 0xffffff00);
      FUN_00409350("occupation_flag");
      uStack_48 = 0x13;
      ppppiStack_f0 = (int ****)&ppppiStack_dc;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))();
      pppiStack_98 = (int ***)(**(code **)(*piVar7 + 0xec))();
      pppiStack_a0 = (int ***)(*pppiStack_98 + 0x54);
      uVar8 = FUN_0052fc10();
      (*(code *)*pppiStack_a0)(uVar8);
      uStack_40 = 0xffffffff;
      if ((int **)0xf < ppiStack_c0) {
        ppppiStack_e8 = (int ****)pppiStack_d4;
                    /* WARNING: Subroutine does not return */
        ppuStack_ec = (undefined1 **)&UNK_0073fba1;
        FUN_00aae91b();
      }
    }
    uStack_40 = 0xffffffff;
    ppppiStack_e8 = &pppiStack_94;
    ppuStack_ec = (undefined1 **)0x73fbb4;
    (*(code *)(*pppiStack_98)[7])();
    ppuStack_ec = (undefined1 **)0x13;
    ppppiStack_f0 = (int ****)0xe12df4;
    puStack_c4 = (undefined1 *)0xf;
    pppiStack_c8 = (int ***)0x0;
    puStack_d8 = (undefined1 *)((uint)puStack_d8 & 0xffffff00);
    FUN_00409350();
    uStack_44 = 0x14;
    ppuStack_ec = &puStack_d8;
    ppppiStack_f0 = (int ****)0x73fbe9;
    iVar6 = (**(code **)(*piVar5 + 0x44))();
    pcStack_a4 = *(char **)(iVar6 + 0x94);
    ppppiStack_f0 = &pppiStack_94;
    piVar7 = (int *)(*(code *)(*pppiStack_a0)[7])();
    uVar10 = __allmul(*piVar7,*piVar7 >> 0x1f,100000,0);
    iVar6 = __alldiv(uVar10,1000,0);
    pppiStack_a0 = _DAT_00000000;
    in_stack_ffffff0c = (char)(iVar6 / 1000);
    (*(code *)_DAT_00000000[0x18])();
    uStack_50 = 0xffffffff;
    if ((int ***)0xf < pppiStack_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppppiStack_e4);
    }
    pppiStack_d0 = (int ***)0xf;
    pppiStack_d4 = (int ***)0x0;
    ppppiStack_e4 = (int ****)((uint)ppppiStack_e4 & 0xffffff00);
    FUN_00409350("occupation_flag",0xf);
    uStack_50 = 0x15;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x44))(&ppppiStack_e4);
    (**(code **)(*piVar5 + 0x124))();
    uStack_54 = 0xffffffff;
    if ((int ****)0xf < pppiStack_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppppiStack_e8);
    }
  }
  uStack_54 = 0xffffffff;
  ppcStack_b8 = (char **)0xf;
  pppiStack_bc = (int ***)0x0;
  pppcStack_cc = (char ***)((uint)pppcStack_cc & 0xffffff00);
  FUN_00409350("province_statistics",0x13);
  uStack_54 = 0x1a;
  cVar3 = (char)&pppcStack_cc;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  uStack_58 = 0xffffffff;
  if (0xf < pppiStack_bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pppiStack_d0);
  }
  pppiStack_bc = (int ***)0xf;
  ppiStack_c0 = (int **)0x0;
  pppiStack_d0 = (int ***)((uint)pppiStack_d0 & 0xffffff00);
  puStack_d8 = (undefined1 *)0xf;
  ppppiStack_dc = (int ****)0x0;
  ppuStack_ec = (undefined1 **)((uint)ppuStack_ec & 0xffffff00);
  FUN_00409350("build_factory_button",0x14);
  uStack_58 = 0x1b;
  pcStack_a4 = *(char **)(*(int *)(param_1 + 0x24) + 0x128);
  uVar4 = FUN_0052e960();
  ppppiStack_f0 = (int ****)CONCAT31(ppppiStack_f0._1_3_,uVar4);
  piVar5 = (int *)(**(code **)(*piVar5 + 0x34))(&ppuStack_ec);
  if (in_stack_ffffff0c == '\0') {
    pcVar9 = *(code **)(*piVar5 + 0xbc);
  }
  else {
    pcVar9 = *(code **)(*piVar5 + 0xb8);
  }
  (*pcVar9)();
  uStack_5c = 0xffffffff;
  if (ppppiStack_dc < (int ****)0x10) {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x244) + 0xd8) + 0x67) != '\0') {
      FUN_00751210(*(int *)(param_1 + 0x244));
    }
    FUN_007489e0();
    uStack_70 = 0xf;
    uStack_74 = 0;
    appiStack_84[0] = (int **)((uint)appiStack_84[0] & 0xffffff00);
    FUN_00409350("national_focus",0xe);
    uStack_5c = 0x1c;
    uStack_8c = 0xf;
    pcStack_90 = (char *)0x0;
    pppiStack_a0 = (int ***)((uint)pppiStack_a0 & 0xffffff00);
    FUN_00409350("province_view_header",0x14);
    uStack_5c = CONCAT31(uStack_5c._1_3_,0x1d);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(&pppiStack_a0);
    piVar5 = (int *)(**(code **)(*piVar5 + 0x34))(&pcStack_88);
    if (cVar3 == '\0') {
      pcVar9 = *(code **)(*piVar5 + 0xbc);
    }
    else {
      pcVar9 = *(code **)(*piVar5 + 0xb8);
    }
    (*pcVar9)();
    if (pppiStack_94 < (int ****)0x10) {
      uStack_64 = 0xffffffff;
      pppiStack_94 = (int ***)0xf;
      pppiStack_98 = (int ***)0x0;
      if (pppiStack_78 < (int ***)0x10) {
        pppiStack_78 = (int ***)0xf;
        iStack_7c = 0;
        uStack_8c = uStack_8c & 0xffffff00;
        if (*(int *)(param_1 + 0x24) == 0) {
          FUN_0073d5a0();
        }
        ExceptionList = pvStack_6c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_8c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(ppppiStack_f0);
}

