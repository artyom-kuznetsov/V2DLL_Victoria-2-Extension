// FUN_00a0b1ea @ 00a0b1ea body=[[00a0b1ea, 00a0b274] [00a0b278, 00a0b2af] [00a0b2b3, 00a0b2e7] [00a0b2eb, 00a0b32c] [00a0b330, 00a0b39c] [00a0b3a0, 00a0b3c6] [00a0b3ca, 00a0b65d] [00a0b661, 00a0b6c9] [00a0b6cd, 00a0b70e] [00a0b712, 00a0b77e] [00a0b782, 00a0b7a8] [00a0b7ac, 00a0b830] [00a0b836, 00a0b8ca] [00a0b8ce, 00a0b8de]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0b1ea(void)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  byte bVar13;
  int unaff_EBX;
  int unaff_EBP;
  char *pcVar14;
  bool bVar15;
  
  bVar13 = (byte)unaff_EBX;
  *(byte *)(unaff_EBP + -0x12) = bVar13;
  pbVar6 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar6 = &DAT_013f0670;
  }
  pcVar14 = "diplomacy";
  do {
    bVar1 = *pbVar6;
    bVar15 = bVar1 < (byte)*pcVar14;
    if (bVar1 != *pcVar14) {
LAB_00a0b228:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_00a0b22d;
    }
    if (bVar1 == bVar13) break;
    bVar1 = pbVar6[1];
    bVar15 = bVar1 < (byte)pcVar14[1];
    if (bVar1 != pcVar14[1]) goto LAB_00a0b228;
    pbVar6 = pbVar6 + 2;
    pcVar14 = pcVar14 + 2;
  } while (bVar1 != bVar13);
  iVar7 = 0;
LAB_00a0b22d:
  if ((iVar7 == unaff_EBX) &&
     ((*(int *)(unaff_EBP + -0x50) - *(int *)(unaff_EBP + -0x54) & 0xfffffff0U) != 0)) {
    FUN_00a714a0(4);
    uVar5 = FUN_0040b360();
    *(undefined1 *)(unaff_EBP + -0x11) = uVar5;
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
    }
    if (*(byte *)(unaff_EBP + -0x11) == bVar13) {
      FUN_00a714a0(4);
      uVar5 = FUN_0040b360();
      *(undefined1 *)(unaff_EBP + -0x11) = uVar5;
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
      }
      *(uint *)(unaff_EBP + -0x1c) = (uint)(*(byte *)(unaff_EBP + -0x11) != bVar13);
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 2;
    }
    FUN_00a714a0(5);
    uVar5 = FUN_0040b360();
    *(undefined1 *)(unaff_EBP + -0x11) = uVar5;
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
    }
    *(byte *)(unaff_EBP + -0x18) = bVar13;
    *(uint *)(unaff_EBP + -0x40) = (uint)(*(byte *)(unaff_EBP + -0x11) != bVar13);
    puVar8 = (undefined4 *)FUN_00a714a0(3);
    if (0xf < (uint)puVar8[5]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    iVar7 = FUN_00aaf0c5(puVar8);
    *(bool *)(unaff_EBP + -0x11) = iVar7 == 1;
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
    }
    if (*(byte *)(unaff_EBP + -0x11) != bVar13) {
      *(undefined1 *)(unaff_EBP + -0x18) = 1;
    }
    FUN_00a714a0(1);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    puVar8 = (undefined4 *)FUN_00a714a0(unaff_EBX);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    if (0xf < (uint)puVar8[5]) {
      puVar8 = (undefined4 *)*puVar8;
    }
    uVar9 = FUN_00aaf0c5(puVar8);
    FUN_00a17b40(uVar9,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                 *(undefined4 *)(unaff_EBP + -0x40));
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    *(int *)(unaff_EBP + -0x2c) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x3c) = bVar13;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x98));
    }
    *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
    *(int *)(unaff_EBP + -0x88) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x98) = bVar13;
    if (*(byte *)(unaff_EBP + -0x12) != bVar13) {
      puVar8 = (undefined4 *)FUN_00a714a0(0xd);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      uVar9 = FUN_00a714a0(0xc);
      *(undefined4 *)(unaff_EBP + -0x40) = uVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      uVar9 = FUN_00a714a0(0xb);
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      uVar9 = FUN_00a714a0(9);
      *(undefined4 *)(unaff_EBP + -0xbc) = uVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      uVar9 = FUN_00a714a0(10);
      *(undefined4 *)(unaff_EBP + -0x114) = uVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      uVar9 = FUN_00a714a0(8);
      *(undefined4 *)(unaff_EBP + -0x118) = uVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      uVar9 = FUN_00a714a0(7);
      uVar3 = puVar8[5];
      *(undefined4 *)(unaff_EBP + -0x18) = uVar9;
      if (0xf < uVar3) {
        puVar8 = (undefined4 *)*puVar8;
      }
      uVar9 = FUN_00aaf0c5(puVar8);
      *(undefined4 *)(unaff_EBP + -0x20) = uVar9;
      piVar11 = *(int **)(unaff_EBP + -0x40);
      if (0xf < (uint)piVar11[5]) {
        piVar11 = (int *)*piVar11;
      }
      uVar9 = FUN_00aaf0c5(piVar11);
      *(undefined4 *)(unaff_EBP + -0x138) = uVar9;
      piVar11 = *(int **)(unaff_EBP + -0x1c);
      if (0xf < (uint)piVar11[5]) {
        piVar11 = (int *)*piVar11;
      }
      uVar9 = FUN_00aaf0c5(piVar11);
      *(undefined4 *)(unaff_EBP + -0x40) = uVar9;
      piVar11 = *(int **)(unaff_EBP + -0xbc);
      if (0xf < (uint)piVar11[5]) {
        piVar11 = (int *)*piVar11;
      }
      uVar9 = FUN_00aaf0c5(piVar11);
      *(undefined4 *)(unaff_EBP + -0xbc) = uVar9;
      piVar11 = *(int **)(unaff_EBP + -0x114);
      if (0xf < (uint)piVar11[5]) {
        piVar11 = (int *)*piVar11;
      }
      uVar9 = FUN_00aaf0c5(piVar11);
      piVar11 = *(int **)(unaff_EBP + -0x118);
      if (0xf < (uint)piVar11[5]) {
        piVar11 = (int *)*piVar11;
      }
      uVar10 = FUN_00aaf0c5(piVar11);
      piVar11 = *(int **)(unaff_EBP + -0x18);
      if (0xf < (uint)piVar11[5]) {
        piVar11 = (int *)*piVar11;
      }
      uVar12 = FUN_00aaf0c5(piVar11);
      *(undefined4 *)(unaff_EBP + -0x164) = *(undefined4 *)(unaff_EBP + -0xbc);
      *(undefined4 *)(unaff_EBP + -0x170) = uVar12;
      *(int *)(unaff_EBP + -0x158) = *(int *)(unaff_EBP + -0x20) + 1;
      *(undefined4 *)(unaff_EBP + -0x16c) = uVar10;
      *(undefined4 *)(unaff_EBP + -0x168) = uVar9;
      *(undefined4 *)(unaff_EBP + -0x160) = *(undefined4 *)(unaff_EBP + -0x40);
      *(undefined4 *)(unaff_EBP + -0x15c) = *(undefined4 *)(unaff_EBP + -0x138);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00408ad0();
    }
    iVar7 = FUN_00aae9af(0x90);
    *(int *)(unaff_EBP + -0x20) = iVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    if (iVar7 == unaff_EBX) {
      uVar9 = 0;
    }
    else {
      iVar4 = *(int *)(unaff_EBP + -0x44);
      uVar9 = FUN_00a0bc20(iVar7,*(undefined4 *)(iVar4 + 0x24),*(undefined2 *)(iVar4 + 0x28),
                           *(undefined4 *)(iVar4 + 0x90));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    (**(code **)(**(int **)(*(int *)(unaff_EBP + -0xb8) + 0x38) + 0x18))(uVar9);
  }
  else {
    if ((*(int *)(unaff_EBP + -0x50) - *(int *)(unaff_EBP + -0x54) & 0xfffffff0U) != 0) {
      FUN_00a714a0(7);
      uVar5 = FUN_0040b360();
      *(undefined1 *)(unaff_EBP + -0x11) = uVar5;
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
      }
      if (*(byte *)(unaff_EBP + -0x11) == bVar13) {
        FUN_00a714a0(7);
        uVar5 = FUN_0040b360();
        *(undefined1 *)(unaff_EBP + -0x11) = uVar5;
        FUN_00408ad0();
        *(uint *)(unaff_EBP + -0x18) = (uint)(*(byte *)(unaff_EBP + -0x11) != bVar13);
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x18) = 2;
      }
      FUN_00a714a0(8);
      uVar5 = FUN_0040b360();
      *(undefined1 *)(unaff_EBP + -0x11) = uVar5;
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
      }
      *(byte *)(unaff_EBP + -0x1c) = bVar13;
      *(uint *)(unaff_EBP + -0x20) = (uint)(*(byte *)(unaff_EBP + -0x11) != bVar13);
      puVar8 = (undefined4 *)FUN_00a714a0(9);
      if (0xf < (uint)puVar8[5]) {
        puVar8 = (undefined4 *)*puVar8;
      }
      iVar7 = FUN_00aaf0c5(puVar8);
      *(bool *)(unaff_EBP + -0x11) = iVar7 == 1;
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
      }
      if (*(byte *)(unaff_EBP + -0x11) != bVar13) {
        *(undefined1 *)(unaff_EBP + -0x1c) = 1;
      }
      FUN_00a714a0(5);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puVar8 = (undefined4 *)FUN_00a714a0(unaff_EBX);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      if (0xf < (uint)puVar8[5]) {
        puVar8 = (undefined4 *)*puVar8;
      }
      uVar9 = FUN_00aaf0c5(puVar8);
      FUN_00a17b40(uVar9,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x1c),
                   *(undefined4 *)(unaff_EBP + -0x20));
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
      }
      *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
      *(int *)(unaff_EBP + -0x2c) = unaff_EBX;
      *(byte *)(unaff_EBP + -0x3c) = bVar13;
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x98));
      }
      *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
      *(int *)(unaff_EBP + -0x88) = unaff_EBX;
      *(byte *)(unaff_EBP + -0x98) = bVar13;
      iVar7 = FUN_00aae9af(0x90);
      *(int *)(unaff_EBP + -0x20) = iVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (iVar7 == unaff_EBX) {
        uVar9 = 0;
      }
      else {
        iVar4 = *(int *)(unaff_EBP + -0x44);
        uVar9 = FUN_00a0bc20(iVar7,*(undefined4 *)(iVar4 + 0x24),*(undefined2 *)(iVar4 + 0x28),
                             *(undefined4 *)(iVar4 + 0x90));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      (**(code **)(**(int **)(*(int *)(unaff_EBP + -0xb8) + 0x38) + 0x18))(uVar9);
      *(undefined ***)(unaff_EBP + -0x1a4) = &PTR_FUN_00e3e544;
      if (0xf < *(uint *)(unaff_EBP + -0x188)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x19c));
      }
      goto LAB_00a0b8ae;
    }
    iVar7 = FUN_00aae9af(0x90);
    *(int *)(unaff_EBP + -0x20) = iVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (iVar7 == unaff_EBX) {
      uVar9 = 0;
    }
    else {
      FUN_00a17af0();
      iVar4 = *(int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      uVar9 = *(undefined4 *)(iVar4 + 0x90);
      uVar2 = *(undefined2 *)(iVar4 + 0x28);
      uVar10 = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      uVar9 = FUN_00a0bc20(iVar7,uVar10,uVar2,uVar9);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x38;
    (**(code **)(**(int **)(*(int *)(unaff_EBP + -0xb8) + 0x38) + 0x18))(uVar9);
    if ((*(byte *)(unaff_EBP + -0x1c) & 1) == 0) goto LAB_00a0b8ae;
  }
  FUN_00a17ba0();
LAB_00a0b8ae:
  FUN_009fc110();
  if (0xf < *(uint *)(unaff_EBP + -0xe0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xf4));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

