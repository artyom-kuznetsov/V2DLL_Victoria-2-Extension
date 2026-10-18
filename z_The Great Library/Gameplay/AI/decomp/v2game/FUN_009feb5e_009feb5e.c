// FUN_009feb5e @ 009feb5e body=[[009feb5e, 009fec57] [009fec5b, 009fec85] [009fec89, 009fecae] [009fecb2, 009fecd1] [009fecd5, 009feceb] [009fecef, 009fed09] [009fed0d, 009feec4] [009feec8, 009feef2] [009feef6, 009fef1b] [009fef1f, 009fef44] [009fef48, 009fef6d] [009fef71, 009fef96] [009fef9a, 009fefbf] [009fefc3, 009fefe8] [009fefec, 009ff00b] [009ff00f, 009ff025] [009ff029, 009ff043] [009ff047, 009ff0b1] [009ff0b5, 009ff0ed] [009ff0f1, 009ff1e8]]


void FUN_009feb5e(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  int iStack_28;
  char local_1c [4];
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  if (*(int *)(unaff_EBP + -0x58) == 1) {
    *(undefined4 *)(unaff_EBP + -0x1c) = DAT_01258b64;
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(int *)(unaff_EBP + -0x68) = unaff_EBX;
    cVar6 = (char)unaff_EBX;
    *(char *)(unaff_EBP + -0x78) = cVar6;
    FUN_00409350();
    *(undefined4 *)(unaff_EBP + -4) = 0x19;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(int *)(unaff_EBP + -0x28) = unaff_EBX;
    *(char *)(unaff_EBP + -0x38) = cVar6;
    FUN_00409350();
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(int *)(unaff_EBP + -0x44) = unaff_EBX;
    *(char *)(unaff_EBP + -0x54) = cVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_10 = 0x9febcb;
    pcVar2 = __itoa(*(int *)(unaff_EBP + -0x18),(char *)(unaff_EBP + -0x1d4),10);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != cVar6);
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00988fa0();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00988f20();
    if (0xf < *(uint *)(unaff_EBP + -0xc4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
    *(int *)(unaff_EBP + -200) = unaff_EBX;
    *(char *)(unaff_EBP + -0xd8) = cVar6;
    if (0xf < *(uint *)(unaff_EBP + -0xa8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xa8) = 0xf;
    *(int *)(unaff_EBP + -0xac) = unaff_EBX;
    *(char *)(unaff_EBP + -0xbc) = cVar6;
    if (0xf < *(uint *)(unaff_EBP + -0x150)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x150) = 0xf;
    *(int *)(unaff_EBP + -0x154) = unaff_EBX;
    *(char *)(unaff_EBP + -0x164) = cVar6;
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(int *)(unaff_EBP + -0x44) = unaff_EBX;
    *(char *)(unaff_EBP + -0x54) = cVar6;
    if (0xf < *(uint *)(unaff_EBP + -0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(int *)(unaff_EBP + -0x28) = unaff_EBX;
    *(char *)(unaff_EBP + -0x38) = cVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(char **)(unaff_EBP + -0x14) = local_1c;
    iStack_28 = unaff_EBP + -0xf4;
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(int *)(unaff_EBP + -0x68) = unaff_EBX;
    *(char *)(unaff_EBP + -0x78) = cVar6;
    uStack_2c = 0x9fed35;
    local_1c[0] = cVar6;
    FUN_00408ed0();
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0x10))();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if ((*(int *)(unaff_EBP + -0x138) - *(int *)(unaff_EBP + -0x13c) & 0xfffffff0U) != 0) {
      FUN_00a714a0();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00aaf0c5();
      *(undefined4 *)(unaff_EBP + -100) = 0xf;
      *(int *)(unaff_EBP + -0x68) = unaff_EBX;
      *(char *)(unaff_EBP + -0x78) = cVar6;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
      *(int *)(unaff_EBP + -0x28) = unaff_EBX;
      *(char *)(unaff_EBP + -0x38) = cVar6;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
      *(int *)(unaff_EBP + -0x44) = unaff_EBX;
      *(char *)(unaff_EBP + -0x54) = cVar6;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      uVar3 = FUN_009888f0();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      uVar3 = FUN_009888f0();
      *(undefined4 *)(unaff_EBP + -0x84) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00988fa0();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      FUN_00988f20();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_10 = 0x9feeb0;
      FUN_00408ed0();
      if (0xf < *(uint *)(unaff_EBP + -0x150)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x150) = 0xf;
      *(int *)(unaff_EBP + -0x154) = unaff_EBX;
      *(char *)(unaff_EBP + -0x164) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0xc4)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
      *(int *)(unaff_EBP + -200) = unaff_EBX;
      *(char *)(unaff_EBP + -0xd8) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0xa8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0xa8) = 0xf;
      *(int *)(unaff_EBP + -0xac) = unaff_EBX;
      *(char *)(unaff_EBP + -0xbc) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
      *(int *)(unaff_EBP + -0x90) = unaff_EBX;
      *(char *)(unaff_EBP + -0xa0) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0x1f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x1f8) = 0xf;
      *(int *)(unaff_EBP + -0x1fc) = unaff_EBX;
      *(char *)(unaff_EBP + -0x20c) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0x1dc)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x1dc) = 0xf;
      *(int *)(unaff_EBP + -0x1e0) = unaff_EBX;
      *(char *)(unaff_EBP + -0x1f0) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0x214)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x214) = 0xf;
      *(int *)(unaff_EBP + -0x218) = unaff_EBX;
      *(char *)(unaff_EBP + -0x228) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0x1bc)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x1bc) = 0xf;
      *(int *)(unaff_EBP + -0x1c0) = unaff_EBX;
      *(char *)(unaff_EBP + -0x1d0) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
      *(int *)(unaff_EBP + -0x44) = unaff_EBX;
      *(char *)(unaff_EBP + -0x54) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -0x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
      *(int *)(unaff_EBP + -0x28) = unaff_EBX;
      *(char *)(unaff_EBP + -0x38) = cVar6;
      if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(char **)(unaff_EBP + -0x14) = local_1c;
      iStack_28 = unaff_EBP + -0xf4;
      uStack_2c = 0x9ff066;
      local_1c[0] = cVar6;
      FUN_00408ed0();
      iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0x10))();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      *(undefined4 *)(unaff_EBP + -0x140) = *(undefined4 *)(iVar4 + 4);
      FUN_00a11e60();
      FUN_009fc110();
      if (0xf < *(uint *)(unaff_EBP + -0x118)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x118) = 0xf;
      *(int *)(unaff_EBP + -0x11c) = unaff_EBX;
      *(char *)(unaff_EBP + -300) = cVar6;
    }
    FUN_009fc110();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (0xf < *(uint *)(unaff_EBP + -0xe0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xe0) = 0xf;
    *(int *)(unaff_EBP + -0xe4) = unaff_EBX;
    *(char *)(unaff_EBP + -0xf4) = cVar6;
  }
  iVar4 = FUN_00aae9af();
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0x35;
  if (iVar4 != unaff_EBX) {
    iStack_10 = *(undefined4 *)(*(int *)(unaff_EBP + -0x80) + 0x24);
    *(undefined1 **)(unaff_EBP + -0x84) = auStack_38;
    FUN_009fb110();
    FUN_009ff7e0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x7c) + 0x38) + 0x18))();
  if (*(int *)(unaff_EBP + -0x58) == 1) {
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffff4;
    iStack_10 = 0x9ff18f;
    iVar4 = FUN_009c16d0();
    iStack_10 = 0x58;
    iStack_14 = 0x9ff198;
    iVar5 = FUN_00aae9af();
    *(int *)(unaff_EBP + -0x14) = iVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0x36;
    if (iVar5 != unaff_EBX) {
      iStack_10 = iVar4 + 0x8c;
      uStack_18 = 0x9ff1bf;
      iStack_14 = iVar5;
      FUN_00a0d4a0();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x7c) + 0x38) + 0x18))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

