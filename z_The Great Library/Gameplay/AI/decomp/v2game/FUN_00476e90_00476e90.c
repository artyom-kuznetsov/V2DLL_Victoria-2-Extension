// FUN_00476e90 @ 00476e90 body=[[00476e90, 00476ee0] [00476ee4, 00476f5b] [00476f5f, 00476fbd] [00476fc1, 00476fcc] [00476fd0, 00477053] [00477057, 004770b8] [004770bc, 00477193] [00477197, 004771d9] [004771dd, 004771f9] [004771fd, 0047722a] [0047722e, 00477304] [00477308, 0047734a] [0047734e, 0047736a] [0047736e, 0047739b] [0047739f, 00477472] [00477476, 004774b8] [004774bc, 004774d8] [004774dc, 00477509] [0047750d, 00477562] [00477566, 004775ba] [004775be, 00477613] [00477617, 0047766c] [00477670, 004776c5] [004776c9, 0047777d] [00477781, 004777be] [004777c2, 00477819] [0047781d, 00477874] [00477878, 00477930] [00477934, 00477971] [00477975, 004779d0] [004779d4, 00477a3c] [00477a40, 00477a7b]]


/* WARNING: Removing unreachable block (ram,0x00477392) */
/* WARNING: Removing unreachable block (ram,0x00477221) */

void FUN_00476e90(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint **ppuVar5;
  undefined4 ***pppuVar6;
  char ***pppcVar7;
  undefined4 ***pppuStack_e4;
  uint **ppuStack_e0;
  char **ppcStack_dc;
  uint **ppuStack_d8;
  char **ppcStack_d4;
  uint **ppuStack_d0;
  undefined4 **ppuStack_cc;
  char **ppcStack_c8;
  uint *puStack_c4;
  char *pcStack_c0;
  undefined4 **ppuStack_bc;
  char **ppcStack_b8;
  uint uStack_b4;
  char **ppcStack_a4;
  undefined4 **ppuStack_a0;
  undefined4 *puStack_9c;
  char *pcStack_98;
  uint uStack_94;
  char *pcStack_90;
  uint *puStack_8c;
  char **ppcStack_88;
  undefined4 **ppuStack_84;
  char **ppcStack_80;
  uint uStack_7c;
  char **ppcStack_78;
  undefined4 **ppuStack_74;
  char **ppcStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b772c9;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uStack_b4 = 0x476ec7;
    ExceptionList = &pvStack_14;
    (**(code **)(**(int **)(param_1 + 4) + 0x50))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  puVar1 = (uint *)(param_1 + 0x5c);
  if (puVar1 != &local_64) {
    uStack_b4 = *puVar1;
    if (uStack_b4 != 0) {
                    /* WARNING: Subroutine does not return */
      ppcStack_b8 = (char **)&UNK_00476ee1;
      FUN_00aae91b();
    }
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  uStack_b4 = param_1;
  uStack_c = 0xffffffff;
  ppcStack_b8 = (char **)0x476eff;
  FUN_0047aaa0();
  uStack_b4 = 10;
  ppcStack_b8 = (char **)0xdfb680;
  ppcStack_70 = (char **)0xf;
  ppuStack_74 = (uint **)0x0;
  ppuStack_84 = (undefined4 **)((uint)ppuStack_84 & 0xffffff00);
  ppuStack_bc = (undefined4 **)0x476f20;
  FUN_00409350();
  uStack_c = 1;
  uStack_b4 = *(undefined4 *)(param_1 + 0x14);
  ppcStack_b8 = (char **)&ppuStack_84;
  ppuStack_bc = (undefined4 **)0x476f41;
  uVar3 = (**(code **)(*DAT_01258a80 + 0x2c))();
  pvStack_14 = (void *)0xffffffff;
  *(undefined4 *)(param_1 + 4) = uVar3;
  if (0xf < ppcStack_78) {
    ppuStack_bc = (undefined4 **)puStack_8c;
                    /* WARNING: Subroutine does not return */
    pcStack_c0 = &UNK_00476f5c;
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 4) != 0) {
    ppuStack_bc = (undefined4 **)0xc;
    pcStack_c0 = "close_button";
    ppcStack_78 = (char **)0xf;
    uStack_7c = 0;
    puStack_8c = (uint *)((uint)puStack_8c & 0xffffff00);
    puStack_c4 = (uint *)0x476f89;
    FUN_00409350();
    pvStack_14 = (void *)0x2;
    ppuStack_bc = &puStack_8c;
    pcStack_c0 = (char *)0x476fa3;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x34))();
    uStack_18 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    if (0xf < uStack_7c) {
      pcStack_c0 = pcStack_90;
                    /* WARNING: Subroutine does not return */
      puStack_c4 = (uint *)&UNK_00476fbe;
      FUN_00aae91b();
    }
    iVar4 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(iVar4 + 0x58);
    while (puVar2 != (undefined4 *)0x0) {
      pcStack_c0 = (char *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      puStack_c4 = (uint *)0x476fe1;
      (**(code **)(*(int *)(iVar4 + 0x54) + 8))();
    }
    pcStack_c0 = (char *)(param_1 + 0x1c);
    puStack_c4 = (uint *)0x476ff7;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x18) + 0x54) + 4))();
    puStack_c4 = (uint *)0x11;
    ppcStack_c8 = (char **)0xdfb68c;
    ppcStack_80 = (char **)0xf;
    ppuStack_84 = (uint **)0x0;
    uStack_94 = uStack_94 & 0xffffff00;
    ppuStack_cc = (undefined4 **)0x47701b;
    FUN_00409350();
    pvStack_1c = (void *)0x3;
    puStack_c4 = &uStack_94;
    ppcStack_c8 = (char **)0x477035;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    uStack_20 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    if ((uint **)0xf < ppuStack_84) {
      ppcStack_c8 = (char **)pcStack_98;
                    /* WARNING: Subroutine does not return */
      ppuStack_cc = (undefined4 **)&UNK_00477054;
      FUN_00aae91b();
    }
    ppcStack_c8 = (char **)0x1;
    ppuStack_cc = (undefined4 **)0x477063;
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
    ppuStack_cc = (undefined4 **)0xd;
    ppuStack_d0 = (uint **)0xdfb6a0;
    ppcStack_88 = (char **)0xf;
    puStack_8c = (uint *)0x0;
    puStack_9c = (undefined4 *)((uint)puStack_9c & 0xffffff00);
    ppcStack_d4 = (char **)0x477080;
    FUN_00409350();
    uStack_24 = 4;
    ppuStack_cc = &puStack_9c;
    ppuStack_d0 = (uint **)0x47709a;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    uStack_28 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    if ((uint *)0xf < puStack_8c) {
      ppuStack_d0 = ppuStack_a0;
                    /* WARNING: Subroutine does not return */
      ppcStack_d4 = (char **)&UNK_004770b9;
      FUN_00aae91b();
    }
    ppuStack_d0 = (uint **)0x13;
    ppcStack_d4 = (char **)0xdfb6c4;
    ppuStack_bc = (undefined4 **)((uint)ppuStack_bc & 0xffffff00);
    ppuStack_d8 = (uint **)0x4770d9;
    FUN_00409350();
    uStack_28 = 5;
    ppuStack_d0 = (uint **)0x12;
    ppcStack_d4 = (char **)0xdfb6b0;
    puStack_8c = (uint *)0xf;
    pcStack_90 = (char *)0x0;
    ppuStack_a0 = (undefined4 **)((uint)ppuStack_a0 & 0xffffff00);
    ppuStack_d8 = (uint **)0x477101;
    FUN_00409350();
    ppuStack_d0 = (uint **)&ppuStack_bc;
    ppcStack_d4 = (char **)&ppcStack_80;
    uStack_28._0_1_ = 6;
    ppuStack_d8 = (uint **)0x477118;
    FUN_009a8ee0();
    uStack_28._0_1_ = 7;
    ppuStack_d0 = (uint **)0x477127;
    iVar4 = FUN_00475500();
    ppcStack_dc = (char **)*(undefined8 *)(iVar4 + 0x6c);
    ppuStack_d8 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
    ppcStack_d4 = (char **)*(undefined8 *)(iVar4 + 0x74);
    ppuStack_d0 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
    ppuStack_e0 = (uint **)0x47714a;
    ppuVar5 = (uint **)FUN_009a9880();
    uStack_28 = CONCAT31(uStack_28._1_3_,8);
    ppuStack_d0 = (uint **)&ppuStack_a0;
    ppcStack_d4 = (char **)0x477163;
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    ppcStack_d4 = (char **)0xffffffff;
    ppuStack_d8 = (uint **)0x0;
    ppuStack_e0 = (uint **)0x477175;
    ppcStack_dc = (char **)ppuVar5;
    FUN_00408ed0();
    ppcStack_d4 = (char **)0x0;
    ppcStack_dc = (char **)0x477183;
    ppuStack_d8 = ppuVar5;
    FUN_00a5ecc0();
    if (0xf < uStack_5c) {
      ppcStack_d4 = ppcStack_70;
                    /* WARNING: Subroutine does not return */
      ppuStack_d8 = (uint **)&UNK_00477194;
      FUN_00aae91b();
    }
    uStack_5c = 0xf;
    uStack_60 = 0;
    ppcStack_70 = (char **)((uint)ppcStack_70 & 0xffffff00);
    uStack_2c = CONCAT31(uStack_2c._1_3_,9);
    ppcStack_d4 = (char **)0x4771bd;
    FUN_009adb70();
    if (ppcStack_80 != (char **)0x0) {
      ppcStack_d4 = (char **)0x4771d0;
      FUN_009e6a80();
      ppcStack_d4 = ppcStack_80;
                    /* WARNING: Subroutine does not return */
      ppuStack_d8 = (uint **)&UNK_004771da;
      FUN_00aae91b();
    }
    ppcStack_80 = (char **)0x0;
    uStack_7c = 0;
    ppcStack_78 = (char **)0x0;
    if (0xf < pcStack_90) {
      ppcStack_d4 = ppcStack_a4;
                    /* WARNING: Subroutine does not return */
      ppuStack_d8 = (uint **)&UNK_004771fa;
      FUN_00aae91b();
    }
    uStack_2c = 0xffffffff;
    pcStack_90 = (char *)0xf;
    uStack_94 = 0;
    ppcStack_a4 = (char **)((uint)ppcStack_a4 & 0xffffff00);
    ppcStack_d4 = (char **)0xf;
    ppuStack_d8 = (uint **)0xdfb6e8;
    pcStack_c0 = (char *)((uint)pcStack_c0 & 0xffffff00);
    ppcStack_dc = (char **)0x47724a;
    FUN_00409350();
    uStack_2c = 10;
    ppcStack_d4 = (char **)0xe;
    ppuStack_d8 = (uint **)0xdfb6d8;
    pcStack_90 = (char *)0xf;
    uStack_94 = 0;
    ppcStack_a4 = (char **)((uint)ppcStack_a4 & 0xffffff00);
    ppcStack_dc = (char **)0x477272;
    FUN_00409350();
    ppcStack_d4 = &pcStack_c0;
    ppuStack_d8 = (uint **)&ppuStack_84;
    uStack_2c._0_1_ = 0xb;
    ppcStack_dc = (char **)0x477289;
    FUN_009a8ee0();
    uStack_2c._0_1_ = 0xc;
    ppcStack_d4 = (char **)0x477298;
    iVar4 = FUN_00475500();
    ppuStack_e0 = (uint **)*(undefined8 *)(iVar4 + 0x6c);
    ppcStack_dc = (char **)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
    ppuStack_d8 = (uint **)*(undefined8 *)(iVar4 + 0x74);
    ppcStack_d4 = (char **)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
    pppuStack_e4 = (undefined4 ***)0x4772bb;
    ppuVar5 = (uint **)FUN_009a9880();
    uStack_2c = CONCAT31(uStack_2c._1_3_,0xd);
    ppcStack_d4 = (char **)&ppcStack_a4;
    ppuStack_d8 = (uint **)0x4772d4;
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    ppuStack_d8 = (uint **)0xffffffff;
    ppcStack_dc = (char **)0x0;
    pppuStack_e4 = (undefined4 ***)0x4772e6;
    ppuStack_e0 = ppuVar5;
    FUN_00408ed0();
    ppuStack_d8 = (uint **)0x0;
    ppuStack_e0 = (uint **)0x4772f4;
    ppcStack_dc = (char **)ppuVar5;
    FUN_00a5ecc0();
    if (0xf < uStack_60) {
      ppuStack_d8 = ppuStack_74;
                    /* WARNING: Subroutine does not return */
      ppcStack_dc = (char **)&UNK_00477305;
      FUN_00aae91b();
    }
    uStack_60 = 0xf;
    local_64 = 0;
    ppuStack_74 = (undefined4 **)((uint)ppuStack_74 & 0xffffff00);
    uStack_30 = CONCAT31(uStack_30._1_3_,0xe);
    ppuStack_d8 = (uint **)0x47732e;
    FUN_009adb70();
    if (ppuStack_84 != (uint **)0x0) {
      ppuStack_d8 = (uint **)0x477341;
      FUN_009e6a80();
      ppuStack_d8 = ppuStack_84;
                    /* WARNING: Subroutine does not return */
      ppcStack_dc = (char **)&UNK_0047734b;
      FUN_00aae91b();
    }
    ppuStack_84 = (undefined4 **)0x0;
    ppcStack_80 = (char **)0x0;
    uStack_7c = 0;
    if (0xf < uStack_94) {
      ppuStack_d8 = (uint **)0xf;
                    /* WARNING: Subroutine does not return */
      ppcStack_dc = (char **)&UNK_0047736b;
      FUN_00aae91b();
    }
    uStack_30 = 0xffffffff;
    uStack_94 = 0xf;
    pcStack_98 = (char *)0x0;
    ppuStack_d8 = (uint **)0x16;
    ppcStack_dc = (char **)0xdfb710;
    uStack_b4 = 0;
    puStack_c4 = (uint *)((uint)puStack_c4 & 0xffffff00);
    ppuStack_e0 = (uint **)0x4773bc;
    FUN_00409350();
    uStack_30 = 0xf;
    ppuStack_d8 = (uint **)0x15;
    ppcStack_dc = (char **)0xdfb6f8;
    uStack_94 = 0xf;
    pcStack_98 = (char *)0x0;
    ppuStack_e0 = (uint **)0x4773e0;
    FUN_00409350();
    ppuStack_d8 = &puStack_c4;
    ppcStack_dc = (char **)&ppcStack_88;
    uStack_30._0_1_ = 0x10;
    ppuStack_e0 = (uint **)0x4773f7;
    FUN_009a8ee0();
    uStack_30._0_1_ = 0x11;
    ppuStack_d8 = (uint **)0x477406;
    iVar4 = FUN_00475500();
    pppuStack_e4 = (undefined4 ***)*(undefined8 *)(iVar4 + 0x6c);
    ppuStack_e0 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
    ppcStack_dc = (char **)*(undefined8 *)(iVar4 + 0x74);
    ppuStack_d8 = (uint **)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
    pppuVar6 = (undefined4 ***)FUN_009a9880();
    uStack_30 = CONCAT31(uStack_30._1_3_,0x12);
    ppuStack_d8 = (uint **)&stack0xffffff58;
    ppcStack_dc = (char **)0x477442;
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    ppcStack_dc = (char **)0xffffffff;
    ppuStack_e0 = (uint **)0x0;
    pppuStack_e4 = pppuVar6;
    FUN_00408ed0();
    ppcStack_dc = (char **)0x0;
    pppuStack_e4 = (undefined4 ***)0x477462;
    ppuStack_e0 = (uint **)pppuVar6;
    FUN_00a5ecc0();
    if (0xf < local_64) {
      ppcStack_dc = ppcStack_78;
                    /* WARNING: Subroutine does not return */
      ppuStack_e0 = (uint **)&UNK_00477473;
      FUN_00aae91b();
    }
    local_64 = 0xf;
    uStack_68 = 0;
    ppcStack_78 = (char **)((uint)ppcStack_78 & 0xffffff00);
    uStack_34 = CONCAT31(uStack_34._1_3_,0x13);
    ppcStack_dc = (char **)0x47749c;
    FUN_009adb70();
    if (ppcStack_88 != (char **)0x0) {
      ppcStack_dc = (char **)0x4774af;
      FUN_009e6a80();
      ppcStack_dc = ppcStack_88;
                    /* WARNING: Subroutine does not return */
      ppuStack_e0 = (uint **)&UNK_004774b9;
      FUN_00aae91b();
    }
    ppcStack_88 = (char **)0x0;
    ppuStack_84 = (undefined4 **)0x0;
    ppcStack_80 = (char **)0x0;
    if (0xf < pcStack_98) {
      ppcStack_dc = (char **)0xf;
                    /* WARNING: Subroutine does not return */
      ppuStack_e0 = (uint **)&UNK_004774d9;
      FUN_00aae91b();
    }
    uStack_34 = 0xffffffff;
    pcStack_98 = (char *)0xf;
    puStack_9c = (undefined4 *)0x0;
    if (0xf < uStack_b4) {
      ppcStack_dc = ppcStack_c8;
                    /* WARNING: Subroutine does not return */
      ppuStack_e0 = (uint **)&UNK_0047750a;
      FUN_00aae91b();
    }
    ppcStack_dc = (char **)0x13;
    ppuStack_e0 = (uint **)0xdfb728;
    uStack_b4 = 0xf;
    ppcStack_b8 = (char **)0x0;
    ppcStack_c8 = (char **)((uint)ppcStack_c8 & 0xffffff00);
    pppuStack_e4 = (undefined4 ***)0x47752a;
    FUN_00409350();
    uStack_34 = 0x14;
    ppcStack_dc = (char **)&ppcStack_c8;
    ppuStack_e0 = (uint **)0x477544;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x7c))();
    uStack_38 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    if (0xf < ppcStack_b8) {
      ppuStack_e0 = ppuStack_cc;
                    /* WARNING: Subroutine does not return */
      pppuStack_e4 = (undefined4 ***)&UNK_00477563;
      FUN_00aae91b();
    }
    ppuStack_e0 = (uint **)0xf;
    pppuStack_e4 = (undefined4 ***)0xdfb73c;
    ppcStack_b8 = (char **)0xf;
    ppuStack_bc = (undefined4 **)0x0;
    ppuStack_cc = (undefined4 **)((uint)ppuStack_cc & 0xffffff00);
    FUN_00409350();
    uStack_38 = 0x15;
    ppuStack_e0 = (uint **)&ppuStack_cc;
    pppuStack_e4 = (undefined4 ***)0x47759c;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x7c))();
    uStack_3c = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    if ((undefined4 **)0xf < ppuStack_bc) {
      pppuStack_e4 = (undefined4 ***)ppuStack_d0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppuStack_e4 = (undefined4 ***)0x16;
    ppuStack_bc = (undefined4 **)0xf;
    pcStack_c0 = (char *)0x0;
    ppuStack_d0 = (uint **)((uint)ppuStack_d0 & 0xffffff00);
    FUN_00409350("may_be_used_by_listbox");
    uStack_3c = 0x16;
    pppuStack_e4 = &ppuStack_d0;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x7c))();
    uStack_40 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if ((char *)0xf < pcStack_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppcStack_d4);
    }
    pcStack_c0 = (char *)0xf;
    puStack_c4 = (uint *)0x0;
    ppcStack_d4 = (char **)((uint)ppcStack_d4 & 0xffffff00);
    FUN_00409350("total_produced_text",0x13);
    uStack_40 = 0x17;
    pppcVar7 = &ppcStack_d4;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))(pppcVar7);
    uStack_44 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    if ((uint *)0xf < puStack_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppuStack_d8);
    }
    puStack_c4 = (uint *)0xf;
    ppcStack_c8 = (char **)0x0;
    ppuStack_d8 = (uint **)((uint)ppuStack_d8 & 0xffffff00);
    FUN_00409350();
    uStack_44 = 0x18;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))(&ppuStack_d8);
    uStack_48 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74) = uVar3;
    if ((char **)0xf < ppcStack_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppcStack_c8 = (char **)0xf;
    ppuStack_cc = (undefined4 **)0x0;
    ppcStack_dc = (char **)((uint)ppcStack_dc & 0xffffff00);
    FUN_00409350("TRADE_FLOW_TOTAL_PRODUCED",0x19);
    uStack_48 = 0x19;
    ppcStack_a4 = (char **)FUN_009a8ee0(&ppuStack_a0,&ppcStack_dc);
    uStack_48._0_1_ = 0x1a;
    iVar4 = FUN_00475500();
    uVar3 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    uStack_48._0_1_ = 0x1b;
    ppcStack_a4 = *(char ***)(param_1 + 0x70);
    FUN_00408ed0();
    FUN_00a5ecc0(uVar3,0);
    if (0xf < ppcStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppcStack_78 = (char **)0xf;
    uStack_7c = 0;
    puStack_8c = (uint *)((uint)puStack_8c & 0xffffff00);
    uStack_48 = CONCAT31(uStack_48._1_3_,0x19);
    FUN_009a9740();
    uStack_48 = 0xffffffff;
    if ((char **)0xf < ppcStack_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppcStack_c8 = (char **)0xf;
    ppuStack_cc = (undefined4 **)0x0;
    ppcStack_dc = (char **)((uint)ppcStack_dc & 0xffffff00);
    FUN_00409350("total_used_text",0xf);
    uStack_48 = 0x1c;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    uStack_4c = 0xffffffff;
    *(undefined4 *)(param_1 + 0x78) = uVar3;
    if ((undefined4 **)0xf < ppuStack_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppuStack_e0);
    }
    ppuStack_cc = (undefined4 **)0xf;
    ppuStack_d0 = (uint **)0x0;
    ppuStack_e0 = (uint **)((uint)ppuStack_e0 & 0xffffff00);
    FUN_00409350();
    uStack_4c = 0x1d;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))(&ppuStack_e0);
    uStack_50 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    if ((uint **)0xf < ppuStack_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppuStack_d0 = (uint **)0xf;
    ppcStack_d4 = (char **)0x0;
    pppuStack_e4 = (undefined4 ***)((uint)pppuStack_e4 & 0xffffff00);
    FUN_00409350("TRADE_FLOW_TOTAL_USED",0x15);
    uStack_50 = 0x1e;
    FUN_009a8ee0(&stack0xffffff58,&pppuStack_e4);
    uStack_50._0_1_ = 0x1f;
    iVar4 = FUN_00475500();
    uVar3 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    uStack_50._0_1_ = 0x20;
    FUN_00408ed0();
    FUN_00a5ecc0(uVar3,0);
    if ((char **)0xf < ppcStack_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppcStack_80 = (char **)0xf;
    ppuStack_84 = (undefined4 **)0x0;
    uStack_94 = uStack_94 & 0xffffff00;
    uStack_50 = CONCAT31(uStack_50._1_3_,0x1e);
    FUN_009a9740();
    uStack_50 = 0xffffffff;
    if ((uint **)0xf < ppuStack_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppuStack_d0 = (uint **)0xf;
    ppcStack_d4 = (char **)0x0;
    pppuStack_e4 = (undefined4 ***)((uint)pppuStack_e4 & 0xffffff00);
    FUN_00409350("part_of_world_production",0x18);
    uStack_50 = 0x21;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    uStack_54 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    if ((char **)0xf < ppcStack_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(pppcVar7);
    }
    uStack_68 = 0xf;
    uStack_6c = 0;
    uStack_7c = uStack_7c & 0xffffff00;
    FUN_00409350();
    uStack_54 = 0x22;
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x78))(&uStack_7c);
    uStack_58 = 0xffffffff;
    if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_6c = 0xf;
    ppcStack_70 = (char **)0x0;
    ppcStack_80 = (char **)((uint)ppcStack_80 & 0xffffff00);
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x38))();
  }
  ExceptionList = pvStack_1c;
  return;
}

