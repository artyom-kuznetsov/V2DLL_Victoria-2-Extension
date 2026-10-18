// FUN_00a0af91 @ 00a0af91 body=[[00a0af91, 00a0b054] [00a0b058, 00a0b079] [00a0b07d, 00a0b09c] [00a0b0a0, 00a0b0bc] [00a0b0c0, 00a0b0e5] [00a0b0e9, 00a0b14b] [00a0b14f, 00a0b15a]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0af91(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  int unaff_EBX;
  int unaff_EBP;
  char *pcVar10;
  bool bVar11;
  byte local_1c [8];
  undefined4 uStack_14;
  int iStack_10;
  
  iVar3 = *(int *)(unaff_EBP + -0x50);
  bVar9 = (byte)unaff_EBX;
  if (((iVar3 - *(int *)(unaff_EBP + -0x54) & 0xfffffff0U) == 0) &&
     (*(byte *)(unaff_EBP + -0x12) != bVar9)) {
    *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
    *(int *)(unaff_EBP + -0xa4) = unaff_EBX;
    *(byte *)(unaff_EBP + -0xb4) = bVar9;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_00989330();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
    *(int *)(unaff_EBP + -0x6c) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x7c) = bVar9;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_10 = 0xa0b046;
    FUN_00408ed0();
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    *(int *)(unaff_EBP + -0x2c) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x3c) = bVar9;
    if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
    *(int *)(unaff_EBP + -0x88) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x98) = bVar9;
    if (0xf < *(uint *)(unaff_EBP + -0x68)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
    *(int *)(unaff_EBP + -0x6c) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x7c) = bVar9;
    if (0xf < *(uint *)(unaff_EBP + -0xc4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
    *(int *)(unaff_EBP + -200) = unaff_EBX;
    *(byte *)(unaff_EBP + -0xd8) = bVar9;
    if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    *(byte **)(unaff_EBP + -0x20) = local_1c;
    local_1c[0] = bVar9;
    FUN_00408ed0(unaff_EBP + -0xf4,unaff_EBX,0xffffffff);
    iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x10))(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(iVar3 + 4);
    FUN_00a11e60();
    if (*(int *)(unaff_EBP + -0x70) != unaff_EBX) {
      FUN_00463b30(*(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x20));
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x70));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x14;
    FUN_00a0b1ea();
    return;
  }
  pbVar4 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar4 = &DAT_013f0670;
  }
  pcVar10 = "diplomacy";
  do {
    bVar1 = *pbVar4;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_00a0b228:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00a0b22d;
    }
    if (bVar1 == bVar9) break;
    bVar1 = pbVar4[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_00a0b228;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != bVar9);
  iVar5 = 0;
LAB_00a0b22d:
  if ((iVar5 == unaff_EBX) && ((iVar3 - *(int *)(unaff_EBP + -0x54) & 0xfffffff0U) != 0)) {
    FUN_00a714a0();
    uVar2 = FUN_0040b360();
    *(undefined1 *)(unaff_EBP + -0x11) = uVar2;
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(byte *)(unaff_EBP + -0x11) == bVar9) {
      FUN_00a714a0();
      uVar2 = FUN_0040b360();
      *(undefined1 *)(unaff_EBP + -0x11) = uVar2;
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(uint *)(unaff_EBP + -0x1c) = (uint)(*(byte *)(unaff_EBP + -0x11) != bVar9);
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 2;
    }
    FUN_00a714a0();
    uVar2 = FUN_0040b360();
    *(undefined1 *)(unaff_EBP + -0x11) = uVar2;
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(byte *)(unaff_EBP + -0x18) = bVar9;
    *(uint *)(unaff_EBP + -0x40) = (uint)(*(byte *)(unaff_EBP + -0x11) != bVar9);
    FUN_00a714a0();
    iVar3 = FUN_00aaf0c5();
    *(bool *)(unaff_EBP + -0x11) = iVar3 == 1;
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(byte *)(unaff_EBP + -0x11) != bVar9) {
      *(undefined1 *)(unaff_EBP + -0x18) = 1;
    }
    FUN_00a714a0();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00a714a0();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_10 = FUN_00aaf0c5();
    uStack_14 = 0xa0b38e;
    FUN_00a17b40();
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    *(int *)(unaff_EBP + -0x2c) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x3c) = bVar9;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
    *(int *)(unaff_EBP + -0x88) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x98) = bVar9;
    if (*(byte *)(unaff_EBP + -0x12) != bVar9) {
      FUN_00a714a0();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      uVar6 = FUN_00a714a0();
      *(undefined4 *)(unaff_EBP + -0x40) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      uVar6 = FUN_00a714a0();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      uVar6 = FUN_00a714a0();
      *(undefined4 *)(unaff_EBP + -0xbc) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      uVar6 = FUN_00a714a0();
      *(undefined4 *)(unaff_EBP + -0x114) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      uVar6 = FUN_00a714a0();
      *(undefined4 *)(unaff_EBP + -0x118) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      uVar6 = FUN_00a714a0();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar6;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(unaff_EBP + -0x138) = uVar6;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(unaff_EBP + -0x40) = uVar6;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(unaff_EBP + -0xbc) = uVar6;
      uVar6 = FUN_00aaf0c5();
      uVar7 = FUN_00aaf0c5();
      uVar8 = FUN_00aaf0c5();
      *(undefined4 *)(unaff_EBP + -0x164) = *(undefined4 *)(unaff_EBP + -0xbc);
      *(undefined4 *)(unaff_EBP + -0x170) = uVar8;
      *(int *)(unaff_EBP + -0x158) = *(int *)(unaff_EBP + -0x20) + 1;
      *(undefined4 *)(unaff_EBP + -0x16c) = uVar7;
      *(undefined4 *)(unaff_EBP + -0x168) = uVar6;
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
    iVar3 = FUN_00aae9af();
    *(int *)(unaff_EBP + -0x20) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    if (iVar3 != unaff_EBX) {
      uStack_14 = 0xa0b602;
      iStack_10 = iVar3;
      FUN_00a0bc20();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    (**(code **)(**(int **)(*(int *)(unaff_EBP + -0xb8) + 0x38) + 0x18))();
  }
  else {
    if ((iVar3 - *(int *)(unaff_EBP + -0x54) & 0xfffffff0U) != 0) {
      FUN_00a714a0();
      uVar2 = FUN_0040b360();
      *(undefined1 *)(unaff_EBP + -0x11) = uVar2;
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (*(byte *)(unaff_EBP + -0x11) == bVar9) {
        FUN_00a714a0();
        uVar2 = FUN_0040b360();
        *(undefined1 *)(unaff_EBP + -0x11) = uVar2;
        FUN_00408ad0();
        *(uint *)(unaff_EBP + -0x18) = (uint)(*(byte *)(unaff_EBP + -0x11) != bVar9);
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x18) = 2;
      }
      FUN_00a714a0();
      uVar2 = FUN_0040b360();
      *(undefined1 *)(unaff_EBP + -0x11) = uVar2;
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(byte *)(unaff_EBP + -0x1c) = bVar9;
      *(uint *)(unaff_EBP + -0x20) = (uint)(*(byte *)(unaff_EBP + -0x11) != bVar9);
      FUN_00a714a0();
      iVar3 = FUN_00aaf0c5();
      *(bool *)(unaff_EBP + -0x11) = iVar3 == 1;
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (*(byte *)(unaff_EBP + -0x11) != bVar9) {
        *(undefined1 *)(unaff_EBP + -0x1c) = 1;
      }
      FUN_00a714a0();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_00a714a0();
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      iStack_10 = FUN_00aaf0c5();
      uStack_14 = 0xa0b770;
      FUN_00a17b40();
      if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
      *(int *)(unaff_EBP + -0x2c) = unaff_EBX;
      *(byte *)(unaff_EBP + -0x3c) = bVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
      *(int *)(unaff_EBP + -0x88) = unaff_EBX;
      *(byte *)(unaff_EBP + -0x98) = bVar9;
      iVar3 = FUN_00aae9af();
      *(int *)(unaff_EBP + -0x20) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (iVar3 != unaff_EBX) {
        uStack_14 = 0xa0b7f5;
        iStack_10 = iVar3;
        FUN_00a0bc20();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      (**(code **)(**(int **)(*(int *)(unaff_EBP + -0xb8) + 0x38) + 0x18))();
      *(undefined ***)(unaff_EBP + -0x1a4) = &PTR_FUN_00e3e544;
      if (0xf < *(uint *)(unaff_EBP + -0x188)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_00a0b8ae;
    }
    iVar3 = FUN_00aae9af();
    *(int *)(unaff_EBP + -0x20) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (iVar3 != unaff_EBX) {
      FUN_00a17af0();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      uStack_14 = 0xa0b881;
      iStack_10 = iVar3;
      FUN_00a0bc20();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x38;
    (**(code **)(**(int **)(*(int *)(unaff_EBP + -0xb8) + 0x38) + 0x18))();
    if ((*(byte *)(unaff_EBP + -0x1c) & 1) == 0) goto LAB_00a0b8ae;
  }
  FUN_00a17ba0();
LAB_00a0b8ae:
  FUN_009fc110();
  if (0xf < *(uint *)(unaff_EBP + -0xe0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

