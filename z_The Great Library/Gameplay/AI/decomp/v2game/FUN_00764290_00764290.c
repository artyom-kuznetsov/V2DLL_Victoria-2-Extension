// FUN_00764290 @ 00764290 body=[[00764290, 0076431f] [00764323, 00764396] [007643a0, 007643b4] [007643c0, 00764596] [0076459a, 007645eb] [007645f5, 00764805] [00764809, 00764850] [00764854, 00764870] [00764874, 0076489a] [0076489e, 007648cd] [007648d1, 007648fb] [007648ff, 0076492b] [0076492f, 007649f5] [007649f9, 00764b0c] [00764b10, 00764b24]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00764290(void)

{
  int *piVar1;
  int ****ppppiVar2;
  uint uVar3;
  int ****ppppiVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int *in_ECX;
  int ****ppppiVar12;
  int *unaff_EBX;
  int unaff_ESI;
  bool bVar13;
  undefined **ppuStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined4 uStack_1d0;
  undefined1 *puStack_1cc;
  int ***pppiStack_1c8;
  int ***pppiStack_1c4;
  int ****ppppiStack_1c0;
  undefined1 *puStack_1bc;
  int ***pppiStack_1a4;
  int ****ppppiStack_1a0;
  int ****ppppiStack_19c;
  int ****ppppiStack_198;
  uint uStack_194;
  undefined4 uStack_190;
  int *piStack_18c;
  int ****appppiStack_188 [3];
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  int *piStack_170;
  undefined1 auStack_16c [12];
  uint uStack_160;
  uint uStack_15c;
  undefined4 uStack_158;
  int ****ppppiStack_150;
  undefined1 local_14c [12];
  undefined4 uStack_140;
  uint local_13c;
  undefined4 local_138;
  int ****appppiStack_134 [4];
  undefined4 uStack_124;
  uint uStack_120;
  int ****appppiStack_118 [4];
  undefined4 uStack_108;
  uint uStack_104;
  int ****appppiStack_fc [4];
  undefined4 uStack_ec;
  uint uStack_e8;
  int ****ppppiStack_e0;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined1 auStack_c4 [168];
  void *pvStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6d415;
  pvStack_14 = ExceptionList;
  puStack_1bc = (undefined1 *)0x5;
  ppppiStack_1c0 = (int ****)0xe09e30;
  local_138 = 0xf;
  local_13c = 0;
  local_14c[0] = 0;
  pppiStack_1c4 = (int ***)0x7642e2;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  puStack_1bc = local_14c;
  ppppiStack_1c0 = (int ****)0x7642fb;
  piVar6 = (int *)(**(code **)(*(int *)in_ECX[0xda] + 0x7c))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_13c) {
    ppppiStack_1c0 = ppppiStack_150;
                    /* WARNING: Subroutine does not return */
    pppiStack_1c4 = (int ***)&UNK_00764320;
    FUN_00aae91b();
  }
  local_13c = 0xf;
  uStack_140 = 0;
  ppppiStack_150 = (int ****)((uint)ppppiStack_150 & 0xffffff00);
  ppppiStack_1c0 = (int ****)0x764340;
  iVar7 = (**(code **)(*(int *)in_ECX[1] + 0x44))();
  ppppiStack_1c0 = (int ****)0x76434a;
  cVar5 = (**(code **)(**(int **)(iVar7 + 0x38) + 0x38))();
  if (cVar5 != '\0') {
    ppppiStack_1c0 = (int ****)&ppppiStack_1a0;
    pppiStack_1c4 = (int ***)0x764361;
    pppiStack_1c4 = (int ***)(**(code **)(*(int *)in_ECX[1] + 0x44))();
    pppiStack_1c8 = (int ***)0x764367;
    ppppiStack_1c0 = (int ****)FUN_009af2f0();
    piStack_18c = in_ECX + 0xdd;
    puStack_10 = (undefined1 *)0x1;
    pppiStack_1c4 = (int ***)0x764382;
    FUN_007688f0();
    puStack_10 = (undefined1 *)0xffffffff;
    if (ppppiStack_1a0 != (int ****)0x0) {
      pppiStack_1a4 = ppppiStack_1a0[0x2a];
      ppppiStack_1c0 = (int ****)0x7643af;
      FUN_00648a60();
      ppppiStack_1c0 = ppppiStack_1a0;
                    /* WARNING: Subroutine does not return */
      pppiStack_1c4 = (int ***)&UNK_007643b5;
      FUN_00aae91b();
    }
    ppppiStack_1c0 = (int ****)0x7643c9;
    puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
    ppppiStack_1a0 = (int ****)0x0;
    ppppiStack_19c = (int ****)0x0;
    ppppiStack_198 = (int ****)0x0;
    uStack_194 = uStack_194 & 0xffffff00;
    puStack_10 = (undefined1 *)0x2;
    ppppiVar2 = ppppiStack_19c;
    for (piVar1 = (int *)*puVar8; ppppiVar4 = ppppiStack_1a0, ppppiStack_19c = ppppiVar2,
        piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      ppppiStack_1c0 = (int ****)(*piVar1 + 0x98);
      pppiStack_1c4 = (int ***)*piStack_18c;
      pppiStack_1c8 = (int ***)&pppiStack_1a4;
      puStack_1cc = (undefined1 *)0x764413;
      FUN_007689f0();
      if (pppiStack_1a4 == (int ***)0x0) {
        ppppiStack_1c0 = (int ****)0x10;
        pppiStack_1c4 = (int ***)0x764432;
        ppppiStack_19c = (int ****)FUN_00aae9af();
        if (ppppiStack_19c == (int ****)0x0) {
          ppppiStack_19c = (int ****)0x0;
        }
        else {
          *ppppiStack_19c = (int ***)*piVar1;
          ppppiStack_19c[1] = (int ***)ppppiVar2;
          ppppiStack_19c[2] = (int ***)0x0;
          *(undefined1 *)(ppppiStack_19c + 3) = 0;
        }
        ppppiVar12 = (int ****)((int)ppppiStack_198 + 1);
        bVar13 = ppppiStack_198 != (int ****)0x0;
        ppppiVar4 = ppppiStack_19c;
        ppppiStack_198 = ppppiVar12;
        if (bVar13) {
          ppppiVar2[2] = (int ***)ppppiStack_19c;
          ppppiVar4 = ppppiStack_1a0;
        }
      }
      else {
        puStack_1cc = (undefined1 *)&ppppiStack_1c0;
        pppiStack_1c4 = (int ***)(*piVar1 + 0x98);
        pppiStack_1c8 = (int ***)*piStack_18c;
        uStack_1d0 = 0x764486;
        FUN_007689f0();
        pppiStack_1c4 = (int ***)0x76448b;
        FUN_00768980();
        ppppiVar4 = ppppiStack_1a0;
      }
      ppppiStack_1a0 = ppppiVar4;
      ppppiVar2 = ppppiStack_19c;
    }
    for (; ppppiVar4 != (int ****)0x0; ppppiVar4 = (int ****)ppppiVar4[2]) {
      ppppiStack_1c0 = (int ****)0x7644ad;
      (*(code *)(*ppppiVar4)[7][0xc])();
      pppiStack_1c4 = *ppppiVar4;
      ppppiStack_1c0 = (int ****)0x1;
      pppiStack_1c8 = (int ***)0x7644bd;
      (**(code **)(*piVar6 + 0x20))();
      if (*ppppiVar4 != (int ***)0x0) {
        ppppiStack_1c0 = (int ****)0x1;
        pppiStack_1c4 = (int ***)0x7644cb;
        (*(code *)***ppppiVar4)();
      }
    }
    for (iVar7 = *piStack_18c; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xa8)) {
      ppppiStack_1c0 = (int ****)0x140;
      pppiStack_1c4 = (int ***)0x7644ee;
      iVar9 = FUN_00aae9af();
      puStack_10._0_1_ = 3;
      if (iVar9 == 0) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        piVar1 = (int *)unaff_EBX[1];
        ppppiStack_1c0 = (int ****)0x76450d;
        ppppiStack_1c0 = (int ****)(**(code **)(*piVar1 + 0x3c))();
        pppiStack_1c4 = (int ***)0x764517;
        (**(code **)(*piVar1 + 0x34))();
        puStack_1cc = (undefined1 *)0x764524;
        pppiStack_1c8 = (int ***)iVar9;
        pppiStack_1c4 = (int ***)iVar7;
        puVar10 = (undefined1 *)FUN_007630e0();
      }
      puStack_10._0_1_ = 2;
      ppppiStack_1c0 = (int ****)0x4;
      pppiStack_1c4 = (int ***)&DAT_00e09e48;
      uStack_174 = 0xf;
      uStack_178 = 0;
      appppiStack_188[0] = (int ****)((uint)appppiStack_188[0] & 0xffffff00);
      pppiStack_1c8 = (int ***)0x764552;
      FUN_00409350();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
      ppppiStack_1c0 = (int ****)appppiStack_188;
      pppiStack_1c4 = (int ***)0x764569;
      iVar9 = (**(code **)(**(int **)(puVar10 + 0x20) + 0x48))();
      pppiStack_1c4 = (int ***)(unaff_ESI + 0x330);
      pppiStack_1c8 = (int ***)0x76457e;
      (**(code **)(*(int *)(iVar9 + 0x54) + 4))();
      uStack_18 = 2;
      if (0xf < uStack_17c) {
        pppiStack_1c8 = (int ***)uStack_190;
                    /* WARNING: Subroutine does not return */
        puStack_1cc = &UNK_00764597;
        FUN_00aae91b();
      }
      pppiStack_1c8 = (int ***)0x1;
      uStack_1d0 = 0x7645a8;
      puStack_1cc = puVar10;
      (**(code **)(*unaff_EBX + 0x10))();
    }
    if (*(char *)(unaff_EBX[0xda] + 0x67) != '\0') {
      ppppiStack_1c0 = (int ****)0x7645d0;
      (**(code **)(*piVar6 + 0x50))();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    in_ECX = unaff_EBX;
    if (ppppiStack_1a0 != (int ****)0x0) {
      ppppiStack_1c0 = ppppiStack_1a0;
                    /* WARNING: Subroutine does not return */
      pppiStack_1c4 = (int ***)&UNK_007645ec;
      FUN_00aae91b();
    }
  }
  if (in_ECX[0xdf] == 0) {
    ppppiStack_1c0 = (int ****)0x764612;
    iVar7 = (**(code **)(*piVar6 + 0x2c))();
    if (*(int *)(iVar7 + 8) == 0) {
      ppppiStack_1c0 = (int ****)0x0;
      pppiStack_1c4 = (int ***)&DAT_00ded94d;
      uStack_174 = 0xf;
      uStack_178 = 0;
      appppiStack_188[0] = (int ****)((uint)appppiStack_188[0] & 0xffffff00);
      pppiStack_1c8 = (int ***)0x76463b;
      FUN_00409350();
      puStack_10 = (undefined1 *)0x5;
      ppppiStack_1c0 = (int ****)0xd;
      pppiStack_1c4 = (int ***)0xe14614;
      uStack_104 = 0xf;
      uStack_108 = 0;
      appppiStack_118[0] = (int ****)((uint)appppiStack_118[0] & 0xffffff00);
      pppiStack_1c8 = (int ***)0x76466e;
      FUN_00409350();
      puStack_10._0_1_ = 6;
      ppppiStack_1c0 = (int ****)0x0;
      pppiStack_1c4 = (int ***)&DAT_00ded94d;
      uStack_120 = 0xf;
      uStack_124 = 0;
      appppiStack_134[0] = (int ****)((uint)appppiStack_134[0] & 0xffffff00);
      pppiStack_1c8 = (int ***)0x76469d;
      FUN_00409350();
      puStack_10._0_1_ = 7;
      ppppiStack_1c0 = (int ****)0x0;
      pppiStack_1c4 = (int ***)&DAT_00ded94d;
      uStack_e8 = 0xf;
      uStack_ec = 0;
      appppiStack_fc[0] = (int ****)((uint)appppiStack_fc[0] & 0xffffff00);
      pppiStack_1c8 = (int ***)0x7646cc;
      FUN_00409350();
      ppppiStack_1c0 = (int ****)0x0;
      pppiStack_1a4 = (int ***)&ppuStack_1f0;
      uStack_1ec = 0x18d;
      ppuStack_1f0 = CVersion::vftable;
      uStack_1e8 = 0;
      pppiStack_1c8 = (int ***)0xf;
      puStack_1cc = (undefined1 *)0x0;
      uStack_1dc = 0;
      puStack_10._0_1_ = 9;
      FUN_00408ed0();
      uStack_1e0 = 0;
      uStack_1e4 = 0;
      uStack_1e8 = 0;
      puStack_10._0_1_ = 10;
      FUN_009a8ee0(&ppppiStack_1a0,appppiStack_118);
      puStack_10._0_1_ = 0xb;
      puVar8 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        pppiStack_1a4 = (int ***)FUN_00aae9af();
        puStack_10._0_1_ = 0xc;
        if (pppiStack_1a4 == (int ***)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = (undefined4 *)FUN_00475150();
        }
        puStack_10._0_1_ = 0xd;
        pppiStack_1a4 = (int ***)0x0;
        if ((puVar8 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar8;
      puStack_10._0_1_ = 0xb;
      uVar11 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),
                            *(undefined8 *)(DAT_0125b5e0 + 0x1d));
      puStack_10._0_1_ = 0x10;
      FUN_009f8290(auStack_c4,appppiStack_fc,appppiStack_134,uVar11,0);
      if (0xf < uStack_cc) {
        ppppiStack_1c0 = ppppiStack_e0;
                    /* WARNING: Subroutine does not return */
        pppiStack_1c4 = (int ***)&UNK_00764806;
        FUN_00aae91b();
      }
      uStack_cc = 0xf;
      uStack_d0 = 0;
      ppppiStack_e0 = (int ****)((uint)ppppiStack_e0 & 0xffffff00);
      puStack_10._0_1_ = 0x14;
      ppppiStack_1c0 = (int ****)0x764833;
      FUN_009adb70();
      ppppiVar2 = ppppiStack_19c;
      if (ppppiStack_19c != (int ****)0x0) {
        while( true ) {
          if (ppppiVar2 == ppppiStack_198) {
            ppppiStack_1c0 = ppppiStack_19c;
                    /* WARNING: Subroutine does not return */
            pppiStack_1c4 = (int ***)&UNK_00764871;
            FUN_00aae91b();
          }
          if ((int ***)0xf < ppppiVar2[5]) break;
          ppppiVar2[5] = (int ***)0xf;
          ppppiVar2[4] = (int ***)0x0;
          *(undefined1 *)ppppiVar2 = 0;
          ppppiVar2 = ppppiVar2 + 8;
        }
        ppppiStack_1c0 = (int ****)*ppppiVar2;
                    /* WARNING: Subroutine does not return */
        pppiStack_1c4 = (int ***)&UNK_00764851;
        FUN_00aae91b();
      }
      ppppiStack_19c = (int ****)0x0;
      ppppiStack_198 = (int ****)0x0;
      uStack_194 = 0;
      if (0xf < uStack_e8) {
        ppppiStack_1c0 = appppiStack_fc[0];
                    /* WARNING: Subroutine does not return */
        pppiStack_1c4 = (int ***)&UNK_0076489b;
        FUN_00aae91b();
      }
      uStack_e8 = 0xf;
      uStack_ec = 0;
      appppiStack_fc[0] = (int ****)((uint)appppiStack_fc[0] & 0xffffff00);
      if (0xf < uStack_120) {
        ppppiStack_1c0 = appppiStack_134[0];
                    /* WARNING: Subroutine does not return */
        pppiStack_1c4 = (int ***)&UNK_007648ce;
        FUN_00aae91b();
      }
      uStack_120 = 0xf;
      uStack_124 = 0;
      appppiStack_134[0] = (int ****)((uint)appppiStack_134[0] & 0xffffff00);
      if (0xf < uStack_104) {
        ppppiStack_1c0 = appppiStack_118[0];
                    /* WARNING: Subroutine does not return */
        pppiStack_1c4 = (int ***)&UNK_007648fc;
        FUN_00aae91b();
      }
      uStack_104 = 0xf;
      uStack_108 = 0;
      appppiStack_118[0] = (int ****)((uint)appppiStack_118[0] & 0xffffff00);
      puStack_10._0_1_ = 0x18;
      if (0xf < uStack_174) {
        ppppiStack_1c0 = appppiStack_188[0];
                    /* WARNING: Subroutine does not return */
        pppiStack_1c4 = (int ***)&UNK_0076492c;
        FUN_00aae91b();
      }
      ppppiStack_1c0 = (int ****)0x140;
      uStack_174 = 0xf;
      uStack_178 = 0;
      appppiStack_188[0] = (int ****)((uint)appppiStack_188[0] & 0xffffff00);
      pppiStack_1c4 = (int ***)0x764945;
      iVar7 = FUN_00aae9af();
      puStack_10._0_1_ = 0x19;
      if (iVar7 == 0) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        piVar1 = (int *)unaff_EBX[1];
        ppppiStack_1c0 = (int ****)0x764968;
        ppppiStack_1c0 = (int ****)(**(code **)(*piVar1 + 0x3c))();
        pppiStack_1c4 = (int ***)0x764972;
        (**(code **)(*piVar1 + 0x34))();
        pppiStack_1c4 = (int ***)auStack_c4;
        puStack_1cc = (undefined1 *)0x764986;
        pppiStack_1c8 = (int ***)iVar7;
        puVar10 = (undefined1 *)FUN_007630e0();
      }
      puStack_10._0_1_ = 0x18;
      ppppiStack_1c0 = (int ****)0x4;
      pppiStack_1c4 = (int ***)&DAT_00e09e48;
      uStack_158 = 0xf;
      uStack_15c = 0;
      auStack_16c[0] = 0;
      pppiStack_1c8 = (int ***)0x7649b4;
      FUN_00409350();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x1a);
      ppppiStack_1c0 = (int ****)auStack_16c;
      pppiStack_1c4 = (int ***)0x7649cb;
      iVar7 = (**(code **)(**(int **)(puVar10 + 0x20) + 0x48))();
      pppiStack_1c4 = (int ***)(unaff_EBX + 0xcc);
      pppiStack_1c8 = (int ***)0x7649dd;
      (**(code **)(*(int *)(iVar7 + 0x54) + 4))();
      uStack_18 = 0x18;
      if (0xf < uStack_160) {
        pppiStack_1c8 = (int ***)uStack_174;
                    /* WARNING: Subroutine does not return */
        puStack_1cc = &UNK_007649f6;
        FUN_00aae91b();
      }
      pppiStack_1c8 = (int ***)0x1;
      uStack_1d0 = 0x764a07;
      puStack_1cc = puVar10;
      (**(code **)(*unaff_EBX + 0x10))();
      puStack_10 = (undefined1 *)0xffffffff;
      ppppiStack_1c0 = (int ****)0x764a1e;
      FUN_00648a60();
      in_ECX = unaff_EBX;
    }
  }
  if (*(char *)(in_ECX[0xda] + 0x67) != '\0') {
    ppppiStack_1c0 = (int ****)0x764a3a;
    (**(code **)(*piVar6 + 0x50))();
  }
  ppppiStack_1c0 = (int ****)0x764a43;
  iVar7 = (**(code **)(*piVar6 + 0x34))();
  if (*(int *)(iVar7 + 8) != 0) {
    ppppiStack_1c0 = (int ****)0x764a51;
    puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x34))();
    if (*(int *)(*(int *)*puVar8 + 0xfc) != 0) {
      ppppiStack_1c0 = (int ****)0x4;
      pppiStack_1c4 = (int ***)&DAT_00e0739c;
      uStack_158 = 0xf;
      uStack_15c = 0;
      auStack_16c[0] = 0;
      pppiStack_1c8 = (int ***)0x764a7d;
      FUN_00409350();
      puStack_10 = (undefined1 *)0x1c;
      ppppiStack_1c0 = (int ****)auStack_16c;
      pppiStack_1c4 = (int ***)0x764a9a;
      piVar6 = (int *)(**(code **)(*(int *)in_ECX[0xda] + 0x34))();
      pppiStack_1c4 = (int ***)0x764aa6;
      (**(code **)(*piVar6 + 0xb8))();
      pppiStack_1c4 = (int ***)piStack_170;
      uVar3 = uStack_15c;
      goto joined_r0x00764aab;
    }
  }
  ppppiStack_1c0 = (int ****)0x4;
  pppiStack_1c4 = (int ***)&DAT_00e0739c;
  uStack_174 = 0xf;
  uStack_178 = 0;
  appppiStack_188[0] = (int ****)((uint)appppiStack_188[0] & 0xffffff00);
  pppiStack_1c8 = (int ***)0x764ad3;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x1b;
  ppppiStack_1c0 = (int ****)appppiStack_188;
  pppiStack_1c4 = (int ***)0x764af0;
  piVar6 = (int *)(**(code **)(*(int *)in_ECX[0xda] + 0x34))();
  pppiStack_1c4 = (int ***)0x764afc;
  (**(code **)(*piVar6 + 0xbc))();
  pppiStack_1c4 = (int ***)piStack_18c;
  uVar3 = uStack_178;
joined_r0x00764aab:
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    pppiStack_1c8 = (int ***)&UNK_00764b0d;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_1c;
  return;
}

