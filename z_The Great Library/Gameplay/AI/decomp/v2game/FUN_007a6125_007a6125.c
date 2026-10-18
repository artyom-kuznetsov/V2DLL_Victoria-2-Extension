// FUN_007a6125 @ 007a6125 body=[[007a6125, 007a61b9] [007a61bd, 007a61e2] [007a61e6, 007a64e0] [007a64e4, 007a6508] [007a650c, 007a6537] [007a653b, 007a655a] [007a655e, 007a65b9] [007a65bd, 007a65f2] [007a65fb, 007a6690] [007a6694, 007a66c1] [007a66c5, 007a66ea] [007a66ee, 007a67c6] [007a67ca, 007a6806] [007a680a, 007a6828] [007a682c, 007a6851] [007a6855, 007a68bf] [007a68c3, 007a68ed] [007a68f1, 007a6901]]


void FUN_007a6125(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_EDI;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined1 auStack_64 [16];
  undefined1 auStack_30 [28];
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x28) = unaff_EDI;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  uStack_10 = CONCAT44(0x7a6143,(undefined4)uStack_10);
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
LAB_007a619d:
    *(undefined1 *)(unaff_EBP + -0x11) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x44) = unaff_EDI;
    *(undefined1 *)(unaff_EBP + -0x54) = 0;
    uStack_10 = CONCAT44(0x7a6179,(undefined4)uStack_10);
    FUN_00409350();
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    *(undefined4 *)(unaff_EBP + -0x18) = 3;
    cVar1 = FUN_00416db0();
    *(undefined1 *)(unaff_EBP + -0x11) = 1;
    if (cVar1 == '\0') goto LAB_007a619d;
  }
  if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x44) = unaff_EDI;
    *(undefined1 *)(unaff_EBP + -0x54) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (((*(byte *)(unaff_EBP + -0x18) & 1) != 0) && (0xf < *(uint *)(unaff_EBP + -0x24))) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(char *)(unaff_EBP + -0x11) == '\0') {
    if (*(undefined4 **)(unaff_EBX + 0x3a0) != unaff_EDI) {
      iVar4 = (**(code **)(**(int **)(unaff_EBX + 0x10) + 0x100))();
      *(undefined4 **)(iVar4 + 0x130) = unaff_EDI;
      if (*(undefined4 **)(unaff_EBX + 0x3a0) != unaff_EDI) {
        (**(code **)**(undefined4 **)(unaff_EBX + 0x3a0))();
      }
      *(undefined4 **)(unaff_EBX + 0x3a0) = unaff_EDI;
    }
    puVar3 = (undefined4 *)FUN_00aae9af();
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (puVar3 == unaff_EDI) {
      uVar6 = 0;
    }
    else {
      piVar5 = (int *)(**(code **)(**(int **)(unaff_EBX + 0x10) + 0x100))();
      (**(code **)(*piVar5 + 0x20))();
      *(undefined1 **)(unaff_EBP + -0x18) = auStack_30;
      FUN_00648c30();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00475500();
      *(undefined1 **)(unaff_EBP + -0x118) = auStack_64;
      auStack_64[0] = 0;
      uStack_74 = 0x7a6308;
      FUN_00408ed0();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      *(undefined1 **)(unaff_EBP + -0x58) = auStack_80;
      auStack_80[0] = 0;
      FUN_00409350("METASERVER_CLIENTSESSION",0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uVar6 = FUN_009aeb90(*(undefined4 *)(unaff_EBP + -0x1c));
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    *(undefined4 *)(unaff_EBX + 0x3a0) = uVar6;
    iVar4 = (**(code **)(**(int **)(unaff_EBX + 0x10) + 0x100))();
    *(undefined4 *)(iVar4 + 0x130) = uVar6;
    if (*(undefined4 **)(unaff_EBX + 0x3d4) != unaff_EDI) {
      (**(code **)**(undefined4 **)(unaff_EBX + 0x3d4))();
    }
    puVar3 = (undefined4 *)FUN_00aae9af();
    *(undefined4 **)(unaff_EBP + -0x58) = puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (puVar3 == unaff_EDI) {
      uVar6 = 0;
    }
    else {
      uStack_10 = CONCAT44(0x7a6387,(undefined4)uStack_10);
      uVar6 = FUN_007a4e90();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    *(undefined4 *)(unaff_EBX + 0x3d4) = uVar6;
    *(undefined1 *)(*(int *)(unaff_EBX + 0x3a0) + 0x1bc) = 0;
    iVar4 = FUN_009af2d0();
    if (iVar4 == 4) {
      uStack_10 = CONCAT44(0x7a63d0,(undefined4)uStack_10);
      uVar2 = (**(code **)(**(int **)(*(int *)(unaff_EBX + 0x3a0) + 0x38) + 8))();
      iVar4 = **(int **)(unaff_EBX + 0x3a0);
      *(undefined1 *)(unaff_EBP + -0x11) = uVar2;
      uStack_10 = CONCAT44(unaff_EBX + 4,0x7a63e4);
      (**(code **)(iVar4 + 4))();
      if ((*(char *)(unaff_EBP + -0x11) != '\0') &&
         (*(int *)(*(int *)(unaff_EBX + 0x3a0) + 0x2c) != 0xe)) {
        if (*(undefined4 **)(unaff_EBX + 0x3a8) != unaff_EDI) {
          (**(code **)**(undefined4 **)(unaff_EBX + 0x3a8))();
        }
        puVar3 = (undefined4 *)FUN_00aae9af();
        *(undefined4 **)(unaff_EBP + -0x58) = puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        goto LAB_007a6212;
      }
      if (*(int *)(*(int *)(unaff_EBX + 0x3a0) + 0x2c) == 0xe) {
        FUN_009885d0();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        uVar6 = FUN_009885d0();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        uStack_10 = CONCAT44(0x7a6466,(undefined4)uStack_10);
        uVar6 = FUN_009a8ee0();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iVar4 = FUN_00475500();
        uStack_10 = *(undefined8 *)(iVar4 + 0x6c);
        uStack_14 = 0x7a6495;
        FUN_009a9880();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_00988f20();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_00988f20();
        if (0xf < *(uint *)(unaff_EBP + -200)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined4 *)(unaff_EBP + -200) = 0xf;
        *(undefined4 **)(unaff_EBP + -0xcc) = unaff_EDI;
        *(undefined1 *)(unaff_EBP + -0xdc) = 0;
        if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
        *(undefined4 **)(unaff_EBP + -0x44) = unaff_EDI;
        *(undefined1 *)(unaff_EBP + -0x54) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        FUN_009a9740();
        if (0xf < *(uint *)(unaff_EBP + -0x60)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
        *(undefined4 **)(unaff_EBP + -100) = unaff_EDI;
        *(undefined1 *)(unaff_EBP + -0x74) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (0xf < *(uint *)(unaff_EBP + -0x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
        *(undefined4 **)(unaff_EBP + -0x28) = unaff_EDI;
        *(undefined1 *)(unaff_EBP + -0x38) = 0;
        FUN_009885d0();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        (**(code **)(**(int **)(unaff_EBX + 0x394) + 0x38))();
        FUN_009e7500();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (0xf < *(uint *)(unaff_EBP + -0xac)) {
          uStack_10 = CONCAT44(&UNK_007a65ba,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar4 = (**(code **)(**(int **)(unaff_EBX + 0xc) + 0x100))();
        uStack_10 = CONCAT44(0x7a65db,(undefined4)uStack_10);
        (**(code **)(**(int **)(iVar4 + 0xe4) + 0x10))();
        if (0xf < *(uint *)(unaff_EBP + -0x90)) {
          uStack_10 = CONCAT44(&UNK_007a65f3,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        FUN_009885d0();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_009885d0();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        uStack_10 = CONCAT44(0x7a6633,(undefined4)uStack_10);
        FUN_009a8ee0();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        iVar4 = FUN_00475500();
        uStack_10 = *(undefined8 *)(iVar4 + 0x6c);
        uStack_14 = 0x7a6660;
        FUN_009a9880();
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        (**(code **)(**(int **)(unaff_EBX + 0x394) + 0x38))();
        FUN_009e7500();
        if (0xf < *(uint *)(unaff_EBP + -0x60)) {
          uStack_10 = CONCAT44(&UNK_007a6691,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
        *(undefined4 *)(unaff_EBP + -100) = 0;
        *(undefined1 *)(unaff_EBP + -0x74) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        uStack_10 = CONCAT44(0x7a66b4,(undefined4)uStack_10);
        FUN_009a9740();
        if (0xf < *(uint *)(unaff_EBP + -0x24)) {
          uStack_10 = CONCAT44(&UNK_007a66c2,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        *(undefined1 *)(unaff_EBP + -0x38) = 0;
        if (0xf < *(uint *)(unaff_EBP + -0x90)) {
          uStack_10 = CONCAT44(&UNK_007a66eb,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar4 = (**(code **)(**(int **)(unaff_EBX + 0xc) + 0x100))();
        uStack_10 = CONCAT44(0x7a670b,(undefined4)uStack_10);
        (**(code **)(**(int **)(iVar4 + 0xe4) + 0x10))();
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + -200) = 0xf;
      *(undefined4 **)(unaff_EBP + -0xcc) = unaff_EDI;
      *(undefined1 *)(unaff_EBP + -0xdc) = 0;
      uStack_10 = CONCAT44(0x7a673a,(undefined4)uStack_10);
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
      *(undefined4 **)(unaff_EBP + -0x28) = unaff_EDI;
      *(undefined1 *)(unaff_EBP + -0x38) = 0;
      uStack_10 = CONCAT44(0x7a6756,(undefined4)uStack_10);
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      uStack_10 = CONCAT44(0x7a676d,(undefined4)uStack_10);
      FUN_009a8ee0();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iVar4 = FUN_00475500();
      uStack_10 = *(undefined8 *)(iVar4 + 0x6c);
      uStack_14 = 0x7a679a;
      FUN_009a9880();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      (**(code **)(**(int **)(unaff_EBX + 0x394) + 0x38))();
      FUN_009e7500();
      if (0xf < *(uint *)(unaff_EBP + -0x60)) {
        uStack_10 = CONCAT44(&UNK_007a67c7,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
      *(undefined4 *)(unaff_EBP + -100) = 0;
      *(undefined1 *)(unaff_EBP + -0x74) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_009adb70();
      if (*(int *)(unaff_EBP + -0x84) != 0) {
        FUN_009e6a80();
        uStack_10 = CONCAT44(&UNK_007a6807,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x84) = 0;
      *(undefined4 *)(unaff_EBP + -0x80) = 0;
      *(undefined4 *)(unaff_EBP + -0x7c) = 0;
      if (0xf < *(uint *)(unaff_EBP + -0x24)) {
        uStack_10 = CONCAT44(&UNK_007a6829,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined1 *)(unaff_EBP + -0x38) = 0;
      if (0xf < *(uint *)(unaff_EBP + -200)) {
        uStack_10 = CONCAT44(&UNK_007a6852,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar4 = (**(code **)(**(int **)(unaff_EBX + 0xc) + 0x100))();
      uStack_10 = CONCAT44(0x7a6870,(undefined4)uStack_10);
      (**(code **)(**(int **)(iVar4 + 0xe4) + 0x10))();
      if (*(int *)(unaff_EBX + 0x3a0) != 0) {
        iVar4 = (**(code **)(**(int **)(unaff_EBX + 0x10) + 0x100))();
        *(undefined4 *)(iVar4 + 0x130) = 0;
        if (*(undefined4 **)(unaff_EBX + 0x3a0) != (undefined4 *)0x0) {
          uStack_10 = CONCAT44(0x7a689f,(undefined4)uStack_10);
          (**(code **)**(undefined4 **)(unaff_EBX + 0x3a0))();
        }
        *(undefined4 *)(unaff_EBX + 0x3a0) = 0;
      }
    }
    unaff_EDI = (undefined4 *)0x0;
  }
  else {
    if (*(undefined4 **)(unaff_EBX + 0x3a8) != unaff_EDI) {
      (**(code **)**(undefined4 **)(unaff_EBX + 0x3a8))();
    }
    puVar3 = (undefined4 *)FUN_00aae9af();
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
LAB_007a6212:
    if (puVar3 == unaff_EDI) {
      iVar4 = 0;
    }
    else {
      uStack_10 = CONCAT44(0x7a6223,(undefined4)uStack_10);
      iVar4 = FUN_007a4620();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    *(int *)(unaff_EBX + 0x3a8) = iVar4;
    (**(code **)(*(int *)(iVar4 + 0x30) + 4))();
    uStack_10 = CONCAT44(unaff_EBP + -0x114,*(undefined4 *)(unaff_EBX + 0x3a8));
    uStack_14 = 0x7a6256;
    FUN_007a4920();
  }
  if (0xf < *(uint *)(unaff_EBP + -0xe4)) {
    uStack_10 = CONCAT44(&UNK_007a68c0,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined4 **)(unaff_EBP + -0xe8) = unaff_EDI;
  *(undefined1 *)(unaff_EBP + -0xf8) = 0;
  if (0xf < *(uint *)(unaff_EBP + -0x100)) {
    uStack_10 = CONCAT44(&UNK_007a68ee,(undefined4)uStack_10);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

