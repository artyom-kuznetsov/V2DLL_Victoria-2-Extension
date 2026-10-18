// FUN_0075cc5e @ 0075cc5e body=[[0075cc5e, 0075ccb7] [0075ccbb, 0075cd0c] [0075cd10, 0075cdad] [0075cdb1, 0075ce89] [0075ce8d, 0075cec1] [0075cec5, 0075cee0] [0075cee4, 0075cf02] [0075cf06, 0075cfd0] [0075cfd4, 0075cffc] [0075d000, 0075d00d] [0075d011, 0075d02c] [0075d030, 0075d04e] [0075d052, 0075d184] [0075d188, 0075d260] [0075d264, 0075d28c] [0075d290, 0075d29d] [0075d2a1, 0075d2bc] [0075d2c0, 0075d2de] [0075d2e2, 0075d35c] [0075d360, 0075d390] [0075d394, 0075d3b2] [0075d3b6, 0075d42d] [0075d431, 0075d494]]


void FUN_0075cc5e(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int *unaff_EBX;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(int **)(unaff_EBP + -0x34) = unaff_EBX;
  cVar6 = (char)unaff_EBX;
  *(char *)(unaff_EBP + -0x44) = cVar6;
  FUN_00409350("BackButton",10);
  *(undefined4 *)(unaff_EBP + -4) = 0x22;
  piVar2 = (int *)(**(code **)(*(int *)piVar3[0xd3] + 0x34))(unaff_EBP + -0x44);
  (**(code **)(*piVar2 + 0xbc))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(int **)(unaff_EBP + -0x34) = unaff_EBX;
  *(char *)(unaff_EBP + -0x44) = cVar6;
  FUN_00409350("ApplyButton",0xb);
  *(undefined4 *)(unaff_EBP + -4) = 0x23;
  piVar2 = (int *)(**(code **)(*(int *)piVar3[0xd3] + 0x34))(unaff_EBP + -0x44);
  (**(code **)(*piVar2 + 0xbc))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x44));
  }
  if (*(char *)(unaff_EBP + -0x25) == cVar6) {
    piVar3 = (int *)FUN_00aae9af(0x68);
    *(int **)(unaff_EBP + -0x18) = piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x33;
    if (piVar3 == unaff_EBX) {
      *(int **)(unaff_EBP + -0x24) = unaff_EBX;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
      *(int **)(unaff_EBP + -0x90) = unaff_EBX;
      *(char *)(unaff_EBP + -0xa0) = cVar6;
      FUN_00409350("DefaultInfoDialog",0x11);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      *(undefined4 *)(unaff_EBP + -0x5c) = 2;
      uVar4 = FUN_00640680(piVar3,unaff_EBP + -0xa0);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if ((*(byte *)(unaff_EBP + -0x5c) & 2) != 0) {
      if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xa0));
      }
      *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
      *(int **)(unaff_EBP + -0x90) = unaff_EBX;
      *(char *)(unaff_EBP + -0xa0) = cVar6;
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
    *(int **)(unaff_EBP + -0x34) = unaff_EBX;
    *(char *)(unaff_EBP + -0x44) = cVar6;
    FUN_00409350("SM_ALERT",8);
    *(undefined4 *)(unaff_EBP + -4) = 0x36;
    FUN_009a8ee0(unaff_EBP + -0x58,unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    piVar3 = DAT_0125b5e0;
    if (DAT_0125b5e0 == unaff_EBX) {
      piVar3 = (int *)FUN_00aae9af(0x180);
      *(int **)(unaff_EBP + -0x18) = piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      if (piVar3 == unaff_EBX) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_00475150(piVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      piVar2 = DAT_0125b5e0;
      *(int **)(unaff_EBP + -0x18) = unaff_EBX;
      if ((piVar3 != piVar2) && (piVar2 != unaff_EBX)) {
        (**(code **)*piVar2)(1);
      }
      DAT_0125b5e0 = piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
    }
    uVar4 = FUN_009a9880((int)*(undefined8 *)(piVar3 + 0x1b),
                         (int)((ulonglong)*(undefined8 *)(piVar3 + 0x1b) >> 0x20),
                         (int)*(undefined8 *)(piVar3 + 0x1d),
                         (int)((ulonglong)*(undefined8 *)(piVar3 + 0x1d) >> 0x20));
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x3c))(uVar4);
    if (0xf < *(uint *)(unaff_EBP + -0x6c)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x80));
    }
    *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
    *(int **)(unaff_EBP + -0x70) = unaff_EBX;
    *(char *)(unaff_EBP + -0x80) = cVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_009adb70();
    piVar3 = *(int **)(unaff_EBP + -0x54);
    if (piVar3 != unaff_EBX) {
      piVar2 = *(int **)(unaff_EBP + -0x50);
      if (piVar3 != piVar2) {
        do {
          if (0xf < (uint)piVar3[5]) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(*piVar3);
          }
          piVar3[5] = 0xf;
          piVar3[4] = (int)unaff_EBX;
          *(char *)piVar3 = cVar6;
          piVar3 = piVar3 + 8;
        } while (piVar3 != piVar2);
        piVar3 = *(int **)(unaff_EBP + -0x54);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(unaff_EBP + -0x54) = unaff_EBX;
    *(int **)(unaff_EBP + -0x50) = unaff_EBX;
    *(int **)(unaff_EBP + -0x4c) = unaff_EBX;
    if (0xf < *(uint *)(unaff_EBP + -0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
    *(int **)(unaff_EBP + -0x34) = unaff_EBX;
    *(char *)(unaff_EBP + -0x44) = cVar6;
    FUN_00409350("SM_WP",5);
    *(undefined4 *)(unaff_EBP + -4) = 0x3c;
    FUN_009a8ee0(unaff_EBP + -0x58,unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iVar5 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar5 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20));
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x40))(uVar4);
    if (0xf < *(uint *)(unaff_EBP + -0x6c)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x80));
    }
    *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
    *(int **)(unaff_EBP + -0x70) = unaff_EBX;
    *(char *)(unaff_EBP + -0x80) = cVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    FUN_009adb70();
    if (*(int **)(unaff_EBP + -0x54) != unaff_EBX) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x54));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(unaff_EBP + -0x54) = unaff_EBX;
    *(int **)(unaff_EBP + -0x50) = unaff_EBX;
    *(int **)(unaff_EBP + -0x4c) = unaff_EBX;
    if (0xf < *(uint *)(unaff_EBP + -0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
    *(int **)(unaff_EBP + -0x34) = unaff_EBX;
    *(char *)(unaff_EBP + -0x44) = cVar6;
    FUN_006480e0(*(undefined4 *)(unaff_EBP + -0x24));
    *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
    *(int **)(unaff_EBP + -0x34) = unaff_EBX;
    *(char *)(unaff_EBP + -0x44) = cVar6;
    FUN_00409350("BackButton",10);
    iVar5 = *(int *)(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0x40;
    piVar3 = (int *)(**(code **)(**(int **)(iVar5 + 0x34c) + 0x34))(unaff_EBP + -0x44);
    (**(code **)(*piVar3 + 0xb8))();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (0xf < *(uint *)(unaff_EBP + -0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0xa8) = 0xf;
    *(int **)(unaff_EBP + -0xac) = unaff_EBX;
    *(char *)(unaff_EBP + -0xbc) = cVar6;
    FUN_00409350("ApplyButton",0xb);
    *(undefined4 *)(unaff_EBP + -4) = 0x41;
    piVar3 = (int *)(**(code **)(**(int **)(iVar5 + 0x34c) + 0x34))(unaff_EBP + -0xbc);
    (**(code **)(*piVar3 + 0xb8))();
    if (0xf < *(uint *)(unaff_EBP + -0xa8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xbc));
    }
  }
  else {
    if (*(char *)(unaff_EBP + -0x11) == cVar6) {
      FUN_0075d7e0();
      (**(code **)(*piVar3 + 0x14))();
    }
    else {
      piVar3 = (int *)FUN_00aae9af(0x68);
      *(int **)(unaff_EBP + -0x18) = piVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0x24;
      if (piVar3 == unaff_EBX) {
        *(int **)(unaff_EBP + -0x24) = unaff_EBX;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
        *(int **)(unaff_EBP + -0x90) = unaff_EBX;
        *(char *)(unaff_EBP + -0xa0) = cVar6;
        FUN_00409350("DefaultInfoDialog",0x11);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        *(undefined4 *)(unaff_EBP + -0x5c) = 1;
        uVar4 = FUN_00640680(piVar3,unaff_EBP + -0xa0);
        *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if ((*(byte *)(unaff_EBP + -0x5c) & 1) != 0) {
        if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xa0));
        }
        *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
        *(int **)(unaff_EBP + -0x90) = unaff_EBX;
        *(char *)(unaff_EBP + -0xa0) = cVar6;
      }
      *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
      *(int **)(unaff_EBP + -0x34) = unaff_EBX;
      *(char *)(unaff_EBP + -0x44) = cVar6;
      FUN_00409350("RESTART_REQ",0xb);
      *(undefined4 *)(unaff_EBP + -4) = 0x27;
      FUN_009a8ee0(unaff_EBP + -0x58,unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      piVar3 = DAT_0125b5e0;
      if (DAT_0125b5e0 == unaff_EBX) {
        piVar3 = (int *)FUN_00aae9af(0x180);
        *(int **)(unaff_EBP + -0x18) = piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        if (piVar3 == unaff_EBX) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_00475150(piVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        piVar2 = DAT_0125b5e0;
        *(int **)(unaff_EBP + -0x18) = unaff_EBX;
        if ((piVar3 != piVar2) && (piVar2 != unaff_EBX)) {
          (**(code **)*piVar2)(1);
        }
        DAT_0125b5e0 = piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
      }
      uVar4 = FUN_009a9880((int)*(undefined8 *)(piVar3 + 0x1b),
                           (int)((ulonglong)*(undefined8 *)(piVar3 + 0x1b) >> 0x20),
                           (int)*(undefined8 *)(piVar3 + 0x1d),
                           (int)((ulonglong)*(undefined8 *)(piVar3 + 0x1d) >> 0x20));
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x3c))(uVar4);
      if (0xf < *(uint *)(unaff_EBP + -0x6c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x80));
      }
      *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
      *(int **)(unaff_EBP + -0x70) = unaff_EBX;
      *(char *)(unaff_EBP + -0x80) = cVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_009adb70();
      piVar3 = *(int **)(unaff_EBP + -0x54);
      if (piVar3 != unaff_EBX) {
        piVar2 = *(int **)(unaff_EBP + -0x50);
        if (piVar3 != piVar2) {
          do {
            if (0xf < (uint)piVar3[5]) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(*piVar3);
            }
            piVar3[5] = 0xf;
            piVar3[4] = (int)unaff_EBX;
            *(char *)piVar3 = cVar6;
            piVar3 = piVar3 + 8;
          } while (piVar3 != piVar2);
          piVar3 = *(int **)(unaff_EBP + -0x54);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar3);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int **)(unaff_EBP + -0x54) = unaff_EBX;
      *(int **)(unaff_EBP + -0x50) = unaff_EBX;
      *(int **)(unaff_EBP + -0x4c) = unaff_EBX;
      if (0xf < *(uint *)(unaff_EBP + -0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x44));
      }
      *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
      *(int **)(unaff_EBP + -0x34) = unaff_EBX;
      *(char *)(unaff_EBP + -0x44) = cVar6;
      FUN_00409350("RESTART_REQ_DESC",0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0x2d;
      FUN_009a8ee0(unaff_EBP + -0x58,unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      piVar3 = DAT_0125b5e0;
      if (DAT_0125b5e0 == unaff_EBX) {
        piVar3 = (int *)FUN_00aae9af(0x180);
        *(int **)(unaff_EBP + -0x18) = piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        if (piVar3 == unaff_EBX) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_00475150(piVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        piVar2 = DAT_0125b5e0;
        *(int **)(unaff_EBP + -0x18) = unaff_EBX;
        if ((piVar3 != piVar2) && (piVar2 != unaff_EBX)) {
          (**(code **)*piVar2)(1);
        }
        DAT_0125b5e0 = piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      }
      uVar4 = FUN_009a9880((int)*(undefined8 *)(piVar3 + 0x1b),
                           (int)((ulonglong)*(undefined8 *)(piVar3 + 0x1b) >> 0x20),
                           (int)*(undefined8 *)(piVar3 + 0x1d),
                           (int)((ulonglong)*(undefined8 *)(piVar3 + 0x1d) >> 0x20));
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x40))(uVar4);
      if (0xf < *(uint *)(unaff_EBP + -0x6c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x80));
      }
      *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
      *(int **)(unaff_EBP + -0x70) = unaff_EBX;
      *(char *)(unaff_EBP + -0x80) = cVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      FUN_009adb70();
      piVar3 = *(int **)(unaff_EBP + -0x54);
      if (piVar3 != unaff_EBX) {
        piVar2 = *(int **)(unaff_EBP + -0x50);
        if (piVar3 != piVar2) {
          do {
            if (0xf < (uint)piVar3[5]) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(*piVar3);
            }
            piVar3[5] = 0xf;
            piVar3[4] = (int)unaff_EBX;
            *(char *)piVar3 = cVar6;
            piVar3 = piVar3 + 8;
          } while (piVar3 != piVar2);
          piVar3 = *(int **)(unaff_EBP + -0x54);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar3);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int **)(unaff_EBP + -0x54) = unaff_EBX;
      *(int **)(unaff_EBP + -0x50) = unaff_EBX;
      *(int **)(unaff_EBP + -0x4c) = unaff_EBX;
      if (0xf < *(uint *)(unaff_EBP + -0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x44));
      }
      piVar3 = *(int **)(unaff_EBP + -0x24);
      (**(code **)(*piVar3 + 0x28))();
      iVar5 = *(int *)(DAT_012588e8 + 0xb24);
      for (piVar2 = *(int **)(iVar5 + 0x60); piVar2 != unaff_EBX; piVar2 = (int *)piVar2[2]) {
        if ((int *)*piVar2 == piVar3) goto LAB_0075d0bc;
      }
      *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(iVar5 + 100);
      piVar2 = (int *)FUN_00aae9af(0x10);
      if (piVar2 == unaff_EBX) {
        piVar2 = (int *)0x0;
      }
      else {
        iVar1 = *(int *)(unaff_EBP + -0x60);
        *piVar2 = (int)piVar3;
        piVar2[1] = iVar1;
        piVar2[2] = (int)unaff_EBX;
        *(char *)(piVar2 + 3) = cVar6;
      }
      piVar3 = *(int **)(iVar5 + 0x68);
      *(int **)(iVar5 + 100) = piVar2;
      *(int *)(iVar5 + 0x68) = (int)piVar3 + 1;
      if (piVar3 == unaff_EBX) {
        *(int **)(iVar5 + 0x60) = piVar2;
      }
      else {
        *(int **)(*(int *)(unaff_EBP + -0x60) + 8) = piVar2;
      }
LAB_0075d0bc:
      FUN_0075d7e0();
      piVar3 = *(int **)(unaff_EBP + -0x20);
    }
    FUN_0075d8d0(piVar3);
    (**(code **)(*piVar3 + 0x14))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

