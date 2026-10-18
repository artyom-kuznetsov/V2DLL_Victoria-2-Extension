// FUN_00a08e93 @ 00a08e93 body=[[00a08e93, 00a08f43] [00a08f47, 00a08f6c] [00a08f70, 00a08f8f] [00a08f93, 00a08faf] [00a08fb3, 00a08fd2] [00a08fd6, 00a0910e] [00a09112, 00a09137] [00a0913b, 00a0915a] [00a0915e, 00a0917a] [00a0917e, 00a0919d] [00a091a1, 00a091d6] [00a0923c, 00a09278] [00a0927c, 00a09362] [00a09366, 00a0938b] [00a0938f, 00a093b4] [00a093b8, 00a093dd] [00a093e1, 00a09400] [00a09404, 00a09420] [00a09424, 00a09449] [00a0944d, 00a09472] [00a09476, 00a0949b] [00a0949f, 00a094f4] [00a0968d, 00a096ee] [00a096f2, 00a0974b]]


void FUN_00a08e93(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int unaff_EBX;
  int unaff_EBP;
  char acStack_3c [12];
  undefined4 uStack_30;
  char local_1c [12];
  undefined4 uStack_10;
  
  cVar4 = (char)unaff_EBX;
  if (*(char *)(*(int *)(unaff_EBP + -0x5c) + 0x6c) != cVar4) {
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(int *)(unaff_EBP + -0x68) = unaff_EBX;
    *(char *)(unaff_EBP + -0x78) = cVar4;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
    FUN_009888f0();
    *(undefined1 *)(unaff_EBP + -4) = 0x88;
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(int *)(unaff_EBP + -0x44) = unaff_EBX;
    *(char *)(unaff_EBP + -0x54) = cVar4;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x8a;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    uStack_10 = 0xa08f2b;
    FUN_00408ed0();
    if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
    *(int *)(unaff_EBP + -0x88) = unaff_EBX;
    *(char *)(unaff_EBP + -0x98) = cVar4;
    if (0xf < *(uint *)(unaff_EBP + -0xdc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
    *(int *)(unaff_EBP + -0xe0) = unaff_EBX;
    *(char *)(unaff_EBP + -0xf0) = cVar4;
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(int *)(unaff_EBP + -0x44) = unaff_EBX;
    *(char *)(unaff_EBP + -0x54) = cVar4;
    if (0xf < *(uint *)(unaff_EBP + -0x134)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
    *(int *)(unaff_EBP + -0x138) = unaff_EBX;
    *(char *)(unaff_EBP + -0x148) = cVar4;
    if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xb0) = 0x18d;
    *(undefined ***)(unaff_EBP + -0xb4) = &PTR_FUN_00e3edcc;
    *(int *)(unaff_EBP + -0xac) = unaff_EBX;
    *(int *)(unaff_EBP + -0xa8) = unaff_EBX;
    *(int *)(unaff_EBP + -0xa4) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x8d;
    *(char **)(unaff_EBP + -0x14) = local_1c;
    local_1c[0] = cVar4;
    FUN_00408ed0();
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x58) + 0x10))();
    *(undefined1 *)(unaff_EBP + -4) = 0x8e;
    *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(iVar2 + 4);
    FUN_00a11e60();
    FUN_009fc110();
    *(undefined4 *)(unaff_EBP + -4) = 0x8c;
    acStack_3c[0] = cVar4;
    if ((*(int *)(unaff_EBP + -0xa8) - *(int *)(unaff_EBP + -0xac) & 0xfffffff0U) == 0) {
      *(undefined4 *)(unaff_EBP + -100) = 0xf;
      *(int *)(unaff_EBP + -0x68) = unaff_EBX;
      *(char *)(unaff_EBP + -0x78) = cVar4;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x94;
      FUN_009888f0();
      *(undefined1 *)(unaff_EBP + -4) = 0x95;
      *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
      *(int *)(unaff_EBP + -0x44) = unaff_EBX;
      *(char *)(unaff_EBP + -0x54) = cVar4;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x96;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0x97;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0x98;
      uStack_30 = 0xa090f6;
      FUN_00408ed0();
      if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
      *(int *)(unaff_EBP + -0x88) = unaff_EBX;
      *(char *)(unaff_EBP + -0x98) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0xdc)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
      *(int *)(unaff_EBP + -0xe0) = unaff_EBX;
      *(char *)(unaff_EBP + -0xf0) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
      *(int *)(unaff_EBP + -0x44) = unaff_EBX;
      *(char *)(unaff_EBP + -0x54) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0x134)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
      *(int *)(unaff_EBP + -0x138) = unaff_EBX;
      *(char *)(unaff_EBP + -0x148) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x99;
      *(char **)(unaff_EBP + -0x14) = acStack_3c;
      FUN_00408ed0(unaff_EBP + -0x1f0,unaff_EBX,0xffffffff);
      (**(code **)(**(int **)(unaff_EBP + -0x58) + 0x10))(unaff_EBP + -0x30);
    }
    else {
      FUN_00a714a0();
      FUN_00aaf0c5();
      if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_004471e0();
      *(undefined1 *)(unaff_EBP + -4) = 0x9d;
      uVar1 = FUN_009888f0();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x9e;
      FUN_004471e0();
      *(undefined1 *)(unaff_EBP + -4) = 0x9f;
      FUN_009888f0();
      *(undefined1 *)(unaff_EBP + -4) = 0xa0;
      FUN_004471e0();
      *(undefined1 *)(unaff_EBP + -4) = 0xa1;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0xa2;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0xa3;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0xa4;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0xa5;
      uStack_30 = 0xa0934a;
      FUN_00408ed0();
      if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
      *(int *)(unaff_EBP + -0x88) = unaff_EBX;
      *(char *)(unaff_EBP + -0x98) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0xdc)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
      *(int *)(unaff_EBP + -0xe0) = unaff_EBX;
      *(char *)(unaff_EBP + -0xf0) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0x134)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
      *(int *)(unaff_EBP + -0x138) = unaff_EBX;
      *(char *)(unaff_EBP + -0x148) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
      *(int *)(unaff_EBP + -0x1c4) = unaff_EBX;
      *(char *)(unaff_EBP + -0x1d4) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -100) = 0xf;
      *(int *)(unaff_EBP + -0x68) = unaff_EBX;
      *(char *)(unaff_EBP + -0x78) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0x1f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x1f8) = 0xf;
      *(int *)(unaff_EBP + -0x1fc) = unaff_EBX;
      *(char *)(unaff_EBP + -0x20c) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0x114)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x114) = 0xf;
      *(int *)(unaff_EBP + -0x118) = unaff_EBX;
      *(char *)(unaff_EBP + -0x128) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0xf8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0xf8) = 0xf;
      *(int *)(unaff_EBP + -0xfc) = unaff_EBX;
      *(char *)(unaff_EBP + -0x10c) = cVar4;
      if (0xf < *(uint *)(unaff_EBP + -0x150)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      *(char **)(unaff_EBP + -0x14) = acStack_3c;
      FUN_00408ed0(unaff_EBP + -0x1f0,unaff_EBX,0xffffffff);
      (**(code **)(**(int **)(unaff_EBP + -0x58) + 0x10))(unaff_EBP + -0x30);
    }
    FUN_009fc110();
    *(undefined4 *)(unaff_EBP + -4) = 0x79;
    FUN_009fc110();
  }
  *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
  if ((*(int *)(unaff_EBP + -0x18c) - *(int *)(unaff_EBP + -400)) / 0x1c <=
      *(int *)(unaff_EBP + -0x38)) {
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_0040b3c0();
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(int *)(unaff_EBP + -0x44) = unaff_EBX;
    *(char *)(unaff_EBP + -0x54) = cVar4;
    uStack_10 = 0xa096cd;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0xaa;
    iVar2 = FUN_009c1bd0();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(int *)(unaff_EBP + -0x44) = unaff_EBX;
    *(char *)(unaff_EBP + -0x54) = cVar4;
    iVar3 = FUN_00aae9af();
    *(int *)(unaff_EBP + -0x14) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xab;
    if (iVar3 != unaff_EBX) {
      uStack_10 = 0xa09722;
      FUN_00a09980();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))();
    if (0xf < *(uint *)(unaff_EBP + -0x1dc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  iVar2 = FUN_00a727a0();
  *(undefined4 *)(unaff_EBP + -300) = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(int *)(unaff_EBP + -0x68) = unaff_EBX;
  *(char *)(unaff_EBP + -0x78) = cVar4;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x7a;
  uVar1 = FUN_009888f0();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x7b;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  *(char *)(unaff_EBP + -0x34) = cVar4;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x7c;
  FUN_009888f0();
  *(undefined1 *)(unaff_EBP + -4) = 0x7d;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(int *)(unaff_EBP + -0x44) = unaff_EBX;
  *(char *)(unaff_EBP + -0x54) = cVar4;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x80;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x81;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  uStack_10 = 0xa08ca3;
  FUN_00408ed0();
  if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(int *)(unaff_EBP + -0x88) = unaff_EBX;
  *(char *)(unaff_EBP + -0x98) = cVar4;
  if (0xf < *(uint *)(unaff_EBP + -0xdc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
  *(int *)(unaff_EBP + -0xe0) = unaff_EBX;
  *(char *)(unaff_EBP + -0xf0) = cVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x134)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
  *(int *)(unaff_EBP + -0x138) = unaff_EBX;
  *(char *)(unaff_EBP + -0x148) = cVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(int *)(unaff_EBP + -0x1c4) = unaff_EBX;
  *(char *)(unaff_EBP + -0x1d4) = cVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(int *)(unaff_EBP + -0x44) = unaff_EBX;
  *(char *)(unaff_EBP + -0x54) = cVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x1f8) = 0xf;
  *(int *)(unaff_EBP + -0x1fc) = unaff_EBX;
  *(char *)(unaff_EBP + -0x20c) = cVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  *(char *)(unaff_EBP + -0x34) = cVar4;
  if (0xf < *(uint *)(unaff_EBP + -0xf8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0xf8) = 0xf;
  *(int *)(unaff_EBP + -0xfc) = unaff_EBX;
  *(char *)(unaff_EBP + -0x10c) = cVar4;
  if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  *(char **)(unaff_EBP + -0x14) = local_1c;
  local_1c[0] = cVar4;
  FUN_00408ed0();
  (**(code **)(**(int **)(unaff_EBP + -0x58) + 0x10))();
  FUN_009fc110();
  *(undefined4 *)(unaff_EBP + -4) = 0x79;
  FUN_00a08e93();
  return;
}

