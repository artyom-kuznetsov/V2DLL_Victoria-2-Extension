// FUN_007be150 @ 007be150 body=[[007be150, 007be1c7] [007be1cb, 007be22d] [007be231, 007be2c4] [007be2c8, 007be2f8] [007be2fc, 007be3e5] [007be3e9, 007be413] [007be417, 007be56e] [007be577, 007be5cd] [007be5d1, 007be61c] [007be620, 007be6ad] [007be6b1, 007be6dd] [007be6e3, 007be751] [007be755, 007be86a] [007be86e, 007be91c] [007be920, 007be94a] [007be94e, 007be9f0] [007be9fd, 007bead8] [007beadc, 007bed36]]


/* WARNING: Type propagation algorithm not settling */

void FUN_007be150(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  undefined4 ****unaff_EBX;
  undefined3 unaff_ESI;
  undefined4 ****ppppuVar5;
  undefined4 *unaff_EDI;
  undefined **ppuStack_110;
  undefined4 uStack_10c;
  undefined4 *puStack_108;
  undefined4 *puStack_104;
  undefined4 *puStack_100;
  undefined4 *puStack_fc;
  uint ****ppppuStack_f8;
  undefined4 ****ppppuStack_f4;
  uint ****ppppuStack_f0;
  int **ppiStack_ec;
  char *pcStack_e8;
  uint **ppuStack_e4;
  undefined4 ****ppppuStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  uint uStack_c4;
  undefined1 *puStack_c0;
  uint uStack_bc;
  undefined4 ****ppppuStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  int *local_ac [2];
  undefined4 ***local_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_94;
  uint local_90;
  uint local_88 [3];
  undefined1 auStack_7c [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  uint local_50;
  uint local_40;
  uint local_3c;
  undefined1 uStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b88d58;
  pvStack_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x38) == 0) {
    ppuStack_e4 = (uint **)0x7be581;
    ExceptionList = &pvStack_14;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x24))();
    if (cVar1 != '\0') {
      ppiStack_ec = local_ac;
      ppppuStack_f0 = (uint ****)0x7be598;
      (**(code **)(**(int **)(in_ECX + 0x30) + 0x20))();
      uStack_18 = 9;
      ppppuStack_f0 = (uint ****)0x7be5ab;
      cVar1 = FUN_00416db0();
      uStack_18 = 0xffffffff;
      if (0xf < uStack_9c) {
        ppppuStack_f0 = (uint ****)uStack_b0;
                    /* WARNING: Subroutine does not return */
        ppppuStack_f4 = (undefined4 ****)&UNK_007be5ce;
        FUN_00aae91b();
      }
      if (cVar1 == '\0') {
        ppppuStack_f0 = (uint ****)&uStack_b0;
        ppppuStack_f4 = (undefined4 ****)0x7be5ea;
        puStack_fc = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x30) + 0x20))();
        ppppuStack_f4 = (undefined4 ****)0xffffffff;
        ppppuStack_f8 = (undefined4 ****)0x0;
        pvStack_1c = (void *)0xa;
        puStack_100 = (undefined4 *)0x7be601;
        FUN_00408ed0();
        pvStack_1c = (void *)0xffffffff;
        if (0xf < uStack_a0) {
          ppppuStack_f4 = (undefined4 ****)uStack_b4;
                    /* WARNING: Subroutine does not return */
          ppppuStack_f8 = (uint ****)&UNK_007be61d;
          FUN_00aae91b();
        }
        ppppuStack_f4 = (undefined4 ****)0xc;
        ppppuStack_f8 = (uint ****)0xe18c20;
        uStack_c4 = 0xf;
        local_c8 = 0;
        unaff_EBX = (undefined4 ****)((uint)unaff_EBX & 0xffffff00);
        puStack_fc = (undefined4 *)0x7be640;
        FUN_00409350();
        pvStack_1c = (void *)0xb;
        piVar3 = *(int **)(in_ECX + 0x20);
        ppppuStack_f4 = (undefined4 ****)&uStack_b4;
        ppppuStack_f8 = (undefined4 ****)0x7be65d;
        unaff_EDI = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x30) + 0x20))();
        uStack_20 = 0xc;
        ppppuStack_f8 = (uint ****)&stack0xffffff24;
        puStack_fc = (undefined4 *)0x7be677;
        (**(code **)(*piVar3 + 0x3c))();
        ppppuStack_f0 = (uint ****)0xffffffff;
        ppppuStack_f4 = (undefined4 ****)0x0;
        puStack_fc = (undefined4 *)0x7be68c;
        ppppuStack_f8 = unaff_EBX;
        FUN_00408ed0();
        ppppuStack_f0 = (uint ****)0x0;
        ppppuStack_f8 = (undefined4 ****)0x7be69d;
        ppppuStack_f4 = unaff_EBX;
        FUN_00a5ecc0();
        if (0xf < uStack_9c) {
          ppppuStack_f0 = (uint ****)uStack_b0;
                    /* WARNING: Subroutine does not return */
          ppppuStack_f4 = (undefined4 ****)&UNK_007be6ae;
          FUN_00aae91b();
        }
        uStack_18 = 0xffffffff;
        uStack_9c = 0xf;
        uStack_a0 = 0;
        uStack_b0 = uStack_b0 & 0xffffff00;
        if ((undefined1 *)0xf < puStack_c0) {
          ppppuStack_f0 = ppppuStack_d4;
                    /* WARNING: Subroutine does not return */
          ppppuStack_f4 = (undefined4 ****)&UNK_007be6de;
          FUN_00aae91b();
        }
      }
      uStack_18 = 0xffffffff;
      ppppuStack_f0 = (uint ****)0x13;
      puStack_c0 = (undefined1 *)0xf;
      uStack_c4 = 0;
      ppppuStack_d4 = (undefined4 ****)((uint)ppppuStack_d4 & 0xffffff00);
      ppppuStack_f4 = (undefined4 ****)0xe18bf4;
      if (*(int *)(*(int *)(in_ECX + 0x30) + 0x84) < 1) {
        ppppuStack_f8 = (undefined4 ****)0x7be82d;
        FUN_00409350();
        uStack_18 = 0xf;
        ppppuStack_f0 = (uint ****)&ppppuStack_d4;
        ppppuStack_f4 = (undefined4 ****)0x7be843;
        piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
        ppppuStack_f4 = (undefined4 ****)0x7be84f;
        (**(code **)(*piVar3 + 0x104))();
      }
      else {
        ppppuStack_f8 = (undefined4 ****)0x7be713;
        FUN_00409350();
        uStack_18 = 0xd;
        ppppuStack_f0 = (uint ****)&ppppuStack_d4;
        ppppuStack_f4 = (undefined4 ****)0x7be72d;
        piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
        ppppuStack_f4 = (undefined4 ****)0x7be736;
        (**(code **)(*piVar3 + 0x34))();
        pvStack_1c = (void *)0xffffffff;
        if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
          ppppuStack_f8 = (uint ****)&UNK_007be752;
          ppppuStack_f4 = unaff_EBX;
          FUN_00aae91b();
        }
        ppppuStack_f4 = (undefined4 ****)0x7be75d;
        FUN_004d1e40();
        ppppuStack_f4 = (undefined4 ****)0x13;
        ppppuStack_f8 = (uint ****)0xe18bf4;
        uStack_c4 = 0xf;
        local_c8 = 0;
        puStack_fc = (undefined4 *)0x7be795;
        FUN_00409350();
        pvStack_1c = (void *)0xe;
        ppppuStack_f4 = (undefined4 ****)&stack0xffffff28;
        ppppuStack_f8 = (undefined4 ****)0x7be7af;
        piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
        puStack_c0 = (undefined1 *)&ppuStack_110;
        uStack_10c = 0x18d;
        ppuStack_110 = CColor::vftable;
        puStack_108 = unaff_EDI;
        puStack_104 = unaff_EDI;
        puStack_100 = unaff_EDI;
        puStack_fc = unaff_EDI;
        if (((((float)unaff_EDI <= 0.999) || ((float)unaff_EDI <= 0.999)) ||
            ((float)unaff_EDI <= 0.999)) || ((float)unaff_EDI <= 0.999)) {
          ppppuStack_f8 = (uint ****)((uint)ppppuStack_f8._1_3_ << 8);
          (**(code **)(*piVar3 + 0x68))();
        }
        else {
          ppppuStack_f8 = (uint ****)CONCAT31(ppppuStack_f8._1_3_,1);
          puStack_c0 = (undefined1 *)&ppuStack_110;
          (**(code **)(*piVar3 + 0x68))();
        }
      }
      local_3c = 0xffffffff;
      if ((uint *)0xf < ppuStack_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppppuStack_f8);
      }
      iVar4 = *(int *)(*(int *)(in_ECX + 0x30) + 200);
      if (iVar4 != *(int *)(in_ECX + 0x44)) {
        *(int *)(in_ECX + 0x44) = iVar4;
        ppuStack_e4 = (uint **)0xf;
        pcStack_e8 = (char *)0x0;
        ppppuStack_f8 = (uint ****)((uint)ppppuStack_f8 & 0xffffff00);
        FUN_00409350("poplist_numpops",0xf);
        local_3c = 0x10;
        piVar3 = *(int **)(in_ECX + 0x20);
        puStack_fc = (undefined4 *)
                     FUN_009c99e0(&ppppuStack_d4,*(undefined4 *)(in_ECX + 0x44),&DAT_00e05104,
                                  &DAT_00df8514,0);
        local_3c = CONCAT31(local_3c._1_3_,0x11);
        (**(code **)(*piVar3 + 0x3c))(&ppppuStack_f8);
        FUN_00408ed0(puStack_fc,0,0xffffffff);
        FUN_00a5ecc0(puStack_fc,0);
        if ((undefined1 *)0xf < puStack_c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(ppppuStack_d4);
        }
        local_3c = 0xffffffff;
        puStack_c0 = (undefined1 *)0xf;
        uStack_c4 = 0;
        ppppuStack_d4 = (undefined4 ****)((uint)ppppuStack_d4 & 0xffffff00);
        if ((uint *)0xf < ppuStack_e4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(ppppuStack_f8);
        }
      }
      local_3c = 0xffffffff;
      iVar4 = *(int *)(in_ECX + 0x30);
      if (*(int *)(iVar4 + 0x180) + *(int *)(iVar4 + 0x17c) + *(int *)(iVar4 + 0x178) +
          *(int *)(iVar4 + 0x174) + *(int *)(iVar4 + 0x170) + *(int *)(iVar4 + 0x16c) +
          *(int *)(iVar4 + 0x168) + *(int *)(iVar4 + 0x164) + *(int *)(iVar4 + 0x160) < 1) {
        iVar4 = FUN_004d1be0();
        if (iVar4 < 0) {
          FUN_009885d0();
          local_3c = 0x13;
          piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(&ppppuStack_d4);
          uVar2 = 3;
        }
        else {
          FUN_009885d0();
          local_3c = 0x14;
          piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(&ppppuStack_d4);
          uVar2 = 2;
        }
        (**(code **)(*piVar3 + 0x48))(uVar2);
        pvStack_14 = (void *)0xffffffff;
        ppiStack_ec = (int **)0x7bea6e;
        FUN_00408ad0();
      }
      else {
        ppuStack_e4 = (uint **)0xf;
        pcStack_e8 = (char *)0x0;
        ppppuStack_f8 = (uint ****)((uint)ppppuStack_f8 & 0xffffff00);
        FUN_00409350("growth_indicator",0x10);
        local_3c = 0x12;
        piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(&ppppuStack_f8);
        (**(code **)(*piVar3 + 0x48))(1);
        pvStack_14 = (void *)0xffffffff;
        if (0xf < uStack_bc) {
          ppiStack_ec = (int **)uStack_d0;
                    /* WARNING: Subroutine does not return */
          ppppuStack_f0 = (uint ****)&UNK_007be9f1;
          FUN_00aae91b();
        }
      }
      ppiStack_ec = *(int ***)(in_ECX + 0x30);
      goto LAB_007bed1c;
    }
    if (*(int *)(in_ECX + 0x2c) < 1) {
      ExceptionList = pvStack_1c;
      return;
    }
    ppppuVar5 = *(undefined4 *****)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x2c) * 4);
    ppiStack_ec = local_ac;
    ppppuStack_f0 = (uint ****)0x7beaa3;
    ppppuStack_d4 = ppppuVar5;
    (*(code *)(*ppppuVar5)[7])();
    uStack_18 = 0x15;
    ppppuStack_f0 = (uint ****)0x7beab6;
    cVar1 = FUN_00416db0();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_9c) {
      ppppuStack_f0 = (uint ****)uStack_b0;
                    /* WARNING: Subroutine does not return */
      ppppuStack_f4 = (undefined4 ****)&UNK_007bead9;
      FUN_00aae91b();
    }
    if (cVar1 == '\0') {
      ppppuStack_f0 = (uint ****)&uStack_b0;
      ppppuStack_f4 = (undefined4 ****)0x7beaf4;
      puStack_fc = (undefined4 *)(*(code *)(*ppppuVar5)[7])();
      ppppuStack_f4 = (undefined4 ****)0xffffffff;
      ppppuStack_f8 = (undefined4 ****)0x0;
      pvStack_1c = (void *)0x16;
      puStack_100 = (undefined4 *)0x7beb0b;
      FUN_00408ed0();
      pvStack_1c = (void *)0xffffffff;
      ppppuStack_f4 = (undefined4 ****)0x7beb1f;
      FUN_00408ad0();
      ppppuStack_f4 = (undefined4 ****)0x7beb2d;
      FUN_009885d0();
      pvStack_1c = (void *)0x17;
      piVar3 = *(int **)(in_ECX + 0x20);
      ppppuStack_f4 = (undefined4 ****)auStack_7c;
      ppppuStack_f8 = (undefined4 ****)0x7beb4b;
      puStack_c0 = (undefined1 *)(**(code **)(*(int *)CONCAT13(cVar1 == '\0',unaff_ESI) + 0x1c))();
      uStack_20 = 0x18;
      ppppuStack_f8 = (uint ****)&ppppuStack_b8;
      puStack_fc = (undefined4 *)0x7beb65;
      (**(code **)(*piVar3 + 0x3c))();
      ppppuStack_f0 = (uint ****)0xffffffff;
      ppppuStack_f4 = (undefined4 ****)0x0;
      ppppuStack_f8 = ppppuStack_b8;
      puStack_fc = (undefined4 *)0x7beb7a;
      FUN_00408ed0();
      ppppuStack_f0 = (uint ****)0x0;
      ppppuStack_f4 = ppppuStack_b8;
      ppppuStack_f8 = (undefined4 ****)0x7beb8b;
      FUN_00a5ecc0();
      ppppuStack_f0 = (uint ****)0x7beb94;
      FUN_00408ad0();
      uStack_18 = 0xffffffff;
      ppppuStack_f0 = (uint ****)0x7beba8;
      FUN_00408ad0();
      ppppuVar5 = unaff_EBX;
    }
    if (ppppuVar5[0x6a] != *(undefined4 ****)(in_ECX + 0x44)) {
      *(undefined4 ****)(in_ECX + 0x44) = ppppuVar5[0x6a];
      ppppuStack_f0 = (uint ****)0x7bebcc;
      FUN_009885d0();
      ppppuStack_f0 = (uint ****)0x0;
      ppppuStack_f4 = (undefined4 ****)&DAT_00df8514;
      uStack_18 = 0x19;
      puStack_fc = *(undefined4 **)(in_ECX + 0x44);
      piVar3 = *(int **)(in_ECX + 0x20);
      ppppuStack_f8 = (uint ****)&DAT_00e05104;
      puStack_100 = &local_78;
      puStack_104 = (undefined4 *)0x7bebf6;
      ppppuStack_b8 = (undefined4 ****)FUN_009c99e0();
      uStack_18 = CONCAT31(uStack_18._1_3_,0x1a);
      ppppuStack_f0 = (uint ****)&uStack_b0;
      ppppuStack_f4 = (undefined4 ****)0x7bec13;
      (**(code **)(*piVar3 + 0x3c))();
      ppppuStack_f0 = (uint ****)0xffffffff;
      ppppuStack_f4 = (undefined4 ****)0x0;
      ppppuStack_f8 = ppppuStack_b8;
      puStack_fc = (undefined4 *)0x7bec28;
      FUN_00408ed0();
      ppppuStack_f0 = (uint ****)0x0;
      ppppuStack_f4 = ppppuStack_b8;
      ppppuStack_f8 = (undefined4 ****)0x7bec39;
      FUN_00a5ecc0();
      ppppuStack_f0 = (uint ****)0x7bec42;
      FUN_00408ad0();
      uStack_18 = 0xffffffff;
      ppppuStack_f0 = (uint ****)0x7bec56;
      FUN_00408ad0();
    }
    ppppuStack_f0 = (uint ****)0x7bec61;
    iVar4 = FUN_004b9b90();
    if (iVar4 < 1) {
      ppppuStack_f0 = (uint ****)0x7beca1;
      iVar4 = FUN_004b9b90();
      if (iVar4 < 0) {
        ppppuStack_f0 = (uint ****)0x7becb3;
        FUN_009885d0();
        uStack_18 = 0x1c;
        ppppuStack_f4 = (undefined4 ****)0x7beccb;
        ppppuStack_f0 = (uint ****)&uStack_b0;
        piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
        ppppuStack_f4 = (undefined4 ****)0x3;
        ppppuStack_f8 = (undefined4 ****)0x7becd6;
        (**(code **)(*piVar3 + 0x48))();
      }
      else {
        ppppuStack_f0 = (uint ****)0x7bece6;
        FUN_009885d0();
        uStack_18 = 0x1d;
        ppppuStack_f4 = (undefined4 ****)0x7becfe;
        ppppuStack_f0 = (uint ****)&local_40;
        piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
        ppppuStack_f4 = (undefined4 ****)0x2;
        ppppuStack_f8 = (undefined4 ****)0x7bed09;
        (**(code **)(*piVar3 + 0x48))();
      }
    }
    else {
      ppppuStack_f0 = (uint ****)0x7bec73;
      FUN_009885d0();
      uStack_18 = 0x1b;
      ppppuStack_f4 = (undefined4 ****)0x7bec8b;
      ppppuStack_f0 = (uint ****)&uStack_b0;
      piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
      ppppuStack_f4 = (undefined4 ****)0x1;
      ppppuStack_f8 = (undefined4 ****)0x7bec96;
      (**(code **)(*piVar3 + 0x48))();
    }
    pvStack_14 = (void *)0xffffffff;
    ppiStack_ec = (int **)0x7bed1b;
    FUN_00408ad0();
  }
  else {
    ppuStack_e4 = (uint **)0x7be190;
    ExceptionList = &pvStack_14;
    FUN_0055dd40();
    local_c = 0;
    ppuStack_e4 = (uint **)0x7be19f;
    cVar1 = FUN_00416db0();
    uStack_d0 = CONCAT13(cVar1 == '\0',(undefined3)uStack_d0);
    local_c = 0xffffffff;
    if (0xf < local_3c) {
      ppuStack_e4 = (uint **)local_50;
                    /* WARNING: Subroutine does not return */
      pcStack_e8 = &UNK_007be1c8;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (cVar1 == '\0') {
      ppuStack_e4 = (uint **)0x7be1fb;
      ppiStack_ec = (int **)FUN_0055dd40();
      ppuStack_e4 = (uint **)0xffffffff;
      pcStack_e8 = (char *)0x0;
      local_c = 1;
      ppppuStack_f0 = (uint ****)0x7be212;
      FUN_00408ed0();
      local_c = 0xffffffff;
      if (0xf < local_90) {
        ppuStack_e4 = (uint **)local_a4;
                    /* WARNING: Subroutine does not return */
        pcStack_e8 = &UNK_007be22e;
        FUN_00aae91b();
      }
      ppuStack_e4 = (uint **)0xc;
      pcStack_e8 = "poplist_name";
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      ppiStack_ec = (int **)0x7be251;
      FUN_00409350();
      local_c = 2;
      local_ac[0] = *(int **)(in_ECX + 0x20);
      ppuStack_e4 = (uint **)0x7be26f;
      uVar2 = FUN_0055dd40();
      local_c = CONCAT31(local_c._1_3_,3);
      ppuStack_e4 = (uint **)local_88;
      pcStack_e8 = (char *)0x7be289;
      local_ac[0] = (int *)(**(code **)(*local_ac[0] + 0x3c))();
      ppuStack_e4 = (uint **)0xffffffff;
      pcStack_e8 = (char *)0x0;
      ppppuStack_f0 = (uint ****)0x7be29c;
      ppiStack_ec = (int **)uVar2;
      FUN_00408ed0();
      ppuStack_e4 = (uint **)0x0;
      ppiStack_ec = (int **)0x7be2ad;
      pcStack_e8 = (char *)uVar2;
      FUN_00a5ecc0();
      if (0xf < uStack_58) {
        ppuStack_e4 = (uint **)local_6c;
                    /* WARNING: Subroutine does not return */
        pcStack_e8 = &UNK_007be2c5;
        FUN_00aae91b();
      }
      local_c = 0xffffffff;
      uStack_58 = 0xf;
      uStack_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_74) {
        ppuStack_e4 = (uint **)local_88[0];
                    /* WARNING: Subroutine does not return */
        pcStack_e8 = &UNK_007be2f9;
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
    }
    local_c = 0xffffffff;
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x12e8) !=
        *(int *)(in_ECX + 0x44)) {
      local_ac[0] = *(int **)(in_ECX + 0x34);
      ppuStack_e4 = (uint **)0xf;
      pcStack_e8 = "poplist_numpops";
      *(undefined4 *)(in_ECX + 0x44) =
           *(undefined4 *)
            (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x12e8);
      uStack_b4 = 0xf;
      ppppuStack_b8 = (undefined4 ****)0x0;
      local_c8 = local_c8 & 0xffffff00;
      ppiStack_ec = (int **)0x7be367;
      FUN_00409350();
      ppuStack_e4 = (uint **)0x0;
      pcStack_e8 = &DAT_00df8514;
      local_c = 4;
      ppppuStack_f0 = *(uint *****)(in_ECX + 0x44);
      piVar3 = *(int **)(in_ECX + 0x20);
      ppiStack_ec = (int **)&DAT_00df8514;
      ppppuStack_f4 = &local_a4;
      ppppuStack_f8 = (undefined4 ****)0x7be38e;
      uStack_cc = FUN_009c99e0();
      local_c = CONCAT31(local_c._1_3_,5);
      ppuStack_e4 = (uint **)&local_c8;
      pcStack_e8 = (char *)0x7be3ab;
      (**(code **)(*piVar3 + 0x3c))();
      ppuStack_e4 = (uint **)0xffffffff;
      pcStack_e8 = (char *)0x0;
      ppiStack_ec = (int **)uStack_cc;
      ppppuStack_f0 = (uint ****)0x7be3c0;
      FUN_00408ed0();
      ppuStack_e4 = (uint **)0x0;
      pcStack_e8 = (char *)uStack_cc;
      ppiStack_ec = (int **)0x7be3d1;
      FUN_00a5ecc0();
      if (0xf < local_90) {
        ppuStack_e4 = (uint **)local_a4;
                    /* WARNING: Subroutine does not return */
        pcStack_e8 = &UNK_007be3e6;
        FUN_00aae91b();
      }
      local_c = 0xffffffff;
      local_90 = 0xf;
      uStack_94 = 0;
      local_a4 = (undefined4 ***)((uint)local_a4 & 0xffffff00);
      if (0xf < uStack_b4) {
        ppuStack_e4 = (uint **)local_c8;
                    /* WARNING: Subroutine does not return */
        pcStack_e8 = &UNK_007be414;
        FUN_00aae91b();
      }
      local_c8 = local_c8 & 0xffffff00;
    }
    local_c = 0xffffffff;
    local_ac[0] = *(int **)(in_ECX + 0x34);
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4);
    ppuStack_e4 = (uint **)0x10;
    uStack_b4 = 0xf;
    ppppuStack_b8 = (undefined4 ****)0x0;
    local_c8 = local_c8 & 0xffffff00;
    pcStack_e8 = "growth_indicator";
    if (*(int *)(iVar4 + 0x13a0) + *(int *)(iVar4 + 0x139c) + *(int *)(iVar4 + 0x1398) +
        *(int *)(iVar4 + 0x1394) + *(int *)(iVar4 + 0x1390) + *(int *)(iVar4 + 0x138c) +
        *(int *)(iVar4 + 5000) + *(int *)(iVar4 + 0x1384) + *(int *)(iVar4 + 0x1380) < 1) {
      local_ac[0] = *(int **)(in_ECX + 0x34);
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4);
      if (*(int *)(iVar4 + 0x13a0) + *(int *)(iVar4 + 0x139c) + *(int *)(iVar4 + 0x1398) +
          *(int *)(iVar4 + 0x1394) + *(int *)(iVar4 + 0x1390) + *(int *)(iVar4 + 0x138c) +
          *(int *)(iVar4 + 5000) + *(int *)(iVar4 + 0x1384) + *(int *)(iVar4 + 0x1380) < 0) {
        ppiStack_ec = (int **)0x7be507;
        FUN_00409350();
        local_c = 7;
        ppuStack_e4 = (uint **)&local_c8;
        pcStack_e8 = (char *)0x7be521;
        piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
        pcStack_e8 = (char *)0x3;
      }
      else {
        ppiStack_ec = (int **)0x7be52a;
        FUN_00409350();
        local_c = 8;
        ppuStack_e4 = (uint **)&local_c8;
        pcStack_e8 = (char *)0x7be544;
        piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
        pcStack_e8 = (char *)0x2;
      }
    }
    else {
      ppiStack_ec = (int **)0x7be498;
      FUN_00409350();
      local_c = 6;
      ppuStack_e4 = (uint **)&local_c8;
      pcStack_e8 = (char *)0x7be4b2;
      piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
      pcStack_e8 = (char *)0x1;
    }
    ppiStack_ec = (int **)0x7be54f;
    (**(code **)(*piVar3 + 0x48))();
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_bc) {
      ppiStack_ec = (int **)uStack_d0;
                    /* WARNING: Subroutine does not return */
      ppppuStack_f0 = (uint ****)&UNK_007be56f;
      FUN_00aae91b();
    }
  }
  ppiStack_ec = (int **)0x0;
LAB_007bed1c:
  ppppuStack_f4 = (undefined4 ****)0x7bed22;
  FUN_007bde20();
  ExceptionList = pvStack_1c;
  return;
}

