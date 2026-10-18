// FUN_00a0cb84 @ 00a0cb84 body=[[00a0cb84, 00a0ce00] [00a0ce04, 00a0ce3f] [00a0ce43, 00a0ceb4] [00a0ceb8, 00a0cf02] [00a0cf06, 00a0d02c] [00a0d030, 00a0d040]]


void FUN_00a0cb84(void)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  int unaff_EBX;
  uint uVar7;
  int unaff_EBP;
  int iVar8;
  
  iVar8 = *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x2c) >> 4;
  cVar6 = (char)unaff_EBX;
  if (iVar8 == unaff_EBX) goto LAB_00a0cdd9;
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    if (iVar8 == unaff_EBX) {
LAB_00a0cdd9:
      *(char *)(unaff_EBP + -0x11) = cVar6;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
      *(int *)(unaff_EBP + -0x88) = unaff_EBX;
      *(char *)(unaff_EBP + -0x98) = cVar6;
      FUN_00409350("diplomacy",9);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      *(undefined4 *)(unaff_EBP + -0x18) = 8;
      cVar2 = FUN_00416db0();
      *(undefined1 *)(unaff_EBP + -0x11) = 1;
      if (cVar2 != '\0') goto LAB_00a0cdd9;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x29;
    if (((*(byte *)(unaff_EBP + -0x18) & 8) != 0) &&
       (*(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffff7,
       0xf < *(uint *)(unaff_EBP + -0x84))) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x98));
    }
    if (*(char *)(unaff_EBP + -0x11) == cVar6) goto LAB_00a0d011;
    FUN_00a714a0(7);
    uVar3 = FUN_0040b360();
    *(undefined1 *)(unaff_EBP + -0x11) = uVar3;
    if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xb4));
    }
    if (*(char *)(unaff_EBP + -0x11) == cVar6) {
      FUN_00a714a0(7);
      uVar3 = FUN_0040b360();
      *(undefined1 *)(unaff_EBP + -0x11) = uVar3;
      FUN_00408ad0();
      *(uint *)(unaff_EBP + -0x3c) = (uint)(*(char *)(unaff_EBP + -0x11) != cVar6);
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x3c) = 2;
    }
    FUN_00a714a0(8);
    uVar3 = FUN_0040b360();
    *(undefined1 *)(unaff_EBP + -0x11) = uVar3;
    if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xb4));
    }
    *(char *)(unaff_EBP + -0x7c) = cVar6;
    *(uint *)(unaff_EBP + -0x5c) = (uint)(*(char *)(unaff_EBP + -0x11) != cVar6);
    puVar4 = (undefined4 *)FUN_00a714a0(9);
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    iVar8 = FUN_00aaf0c5(puVar4);
    *(bool *)(unaff_EBP + -0x11) = iVar8 == 1;
    if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xb4));
    }
    if (*(char *)(unaff_EBP + -0x11) != cVar6) {
      *(undefined1 *)(unaff_EBP + -0x7c) = 1;
    }
    iVar8 = FUN_00aae9af(0x90);
    *(int *)(unaff_EBP + -0xb8) = iVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    if (iVar8 == unaff_EBX) {
      uVar5 = 0;
    }
    else {
      FUN_00a714a0(5);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 0x10;
      puVar4 = (undefined4 *)FUN_00a714a0(unaff_EBX);
      *(undefined4 *)(unaff_EBP + -4) = 0x39;
      *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 0x20;
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      uVar5 = FUN_00aaf0c5(puVar4);
      FUN_00a17b40(uVar5,*(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x7c),
                   *(undefined4 *)(unaff_EBP + -0x5c));
      *(undefined4 *)(unaff_EBP + -4) = 0x3a;
      uVar1 = *(undefined2 *)(*(int *)(unaff_EBP + -0x1c) + 0x28);
      uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x24);
      *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 0x40;
      uVar5 = FUN_00a0bc20(*(undefined4 *)(unaff_EBP + -0xb8),uVar5,uVar1,unaff_EBX);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x3d;
    (**(code **)(**(int **)(*(int *)(unaff_EBP + -0xf4) + 0x38) + 0x18))(uVar5);
    uVar7 = *(uint *)(unaff_EBP + -0x18);
    if ((uVar7 & 0x40) != 0) {
      uVar7 = uVar7 & 0xffffffbf;
      FUN_00a17ba0();
    }
    if ((uVar7 & 0x20) != 0) {
      uVar7 = uVar7 & 0xffffffdf;
      FUN_00408ad0();
    }
    uVar7 = uVar7 & 0x10;
  }
  else {
    FUN_00a714a0(4);
    uVar3 = FUN_0040b360();
    *(undefined1 *)(unaff_EBP + -0x11) = uVar3;
    FUN_00408ad0();
    if (*(char *)(unaff_EBP + -0x11) == cVar6) {
      FUN_00a714a0(4);
      uVar3 = FUN_0040b360();
      *(undefined1 *)(unaff_EBP + -0x11) = uVar3;
      FUN_00408ad0();
      *(uint *)(unaff_EBP + -0x7c) = (uint)(*(char *)(unaff_EBP + -0x11) != cVar6);
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x7c) = 2;
    }
    FUN_00a714a0(5);
    uVar3 = FUN_0040b360();
    *(undefined1 *)(unaff_EBP + -0x11) = uVar3;
    FUN_00408ad0();
    *(char *)(unaff_EBP + -0x3c) = cVar6;
    *(uint *)(unaff_EBP + -0xb8) = (uint)(*(char *)(unaff_EBP + -0x11) != cVar6);
    puVar4 = (undefined4 *)FUN_00a714a0(3);
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    iVar8 = FUN_00aaf0c5(puVar4);
    *(bool *)(unaff_EBP + -0x11) = iVar8 == 1;
    FUN_00408ad0();
    if (*(char *)(unaff_EBP + -0x11) != cVar6) {
      *(undefined1 *)(unaff_EBP + -0x3c) = 1;
    }
    iVar8 = FUN_00aae9af(0x90);
    *(int *)(unaff_EBP + -0x5c) = iVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    if (iVar8 == unaff_EBX) {
      uVar5 = 0;
    }
    else {
      FUN_00a714a0(1);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      puVar4 = (undefined4 *)FUN_00a714a0(unaff_EBX);
      *(undefined4 *)(unaff_EBP + -4) = 0x31;
      uVar7 = puVar4[5];
      *(undefined4 *)(unaff_EBP + -0x18) = 3;
      if (0xf < uVar7) {
        puVar4 = (undefined4 *)*puVar4;
      }
      uVar5 = FUN_00aaf0c5(puVar4);
      FUN_00a17b40(uVar5,*(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x3c),
                   *(undefined4 *)(unaff_EBP + -0xb8));
      *(undefined4 *)(unaff_EBP + -4) = 0x32;
      uVar1 = *(undefined2 *)(*(int *)(unaff_EBP + -0x1c) + 0x28);
      uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x24);
      *(undefined4 *)(unaff_EBP + -0x18) = 7;
      uVar5 = FUN_00a0bc20(*(undefined4 *)(unaff_EBP + -0x5c),uVar5,uVar1,unaff_EBX);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x35;
    (**(code **)(**(int **)(*(int *)(unaff_EBP + -0xf4) + 0x38) + 0x18))(uVar5);
    uVar7 = *(uint *)(unaff_EBP + -0x18);
    if ((uVar7 & 4) != 0) {
      uVar7 = uVar7 & 0xfffffffb;
      FUN_00a17ba0();
    }
    if ((uVar7 & 2) != 0) {
      uVar7 = uVar7 & 0xfffffffd;
      FUN_00408ad0();
    }
    uVar7 = uVar7 & 1;
  }
  if (uVar7 != 0) {
    FUN_00408ad0();
  }
LAB_00a0d011:
  FUN_009fc110();
  if (0xf < *(uint *)(unaff_EBP + -0x118)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -300));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

