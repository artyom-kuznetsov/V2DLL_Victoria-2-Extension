// FUN_00a0c71f @ 00a0c71f body=[[00a0c71f, 00a0c812] [00a0c816, 00a0c840] [00a0c844, 00a0c863] [00a0c867, 00a0c87d] [00a0c881, 00a0c990] [00a0c994, 00a0c9be] [00a0c9c2, 00a0c9e7] [00a0c9eb, 00a0ca10] [00a0ca14, 00a0ca33] [00a0ca37, 00a0ca4d] [00a0ca51, 00a0ca67] [00a0ca6b, 00a0ca87] [00a0ca8b, 00a0cafb]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0c71f(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  int unaff_EBX;
  int unaff_EBP;
  char *pcVar6;
  bool bVar7;
  byte local_1c [12];
  undefined4 uStack_10;
  
  pbVar3 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar3 = &DAT_013f0670;
  }
  pcVar6 = "diplomacy";
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    bVar5 = (byte)unaff_EBX;
    if (bVar1 != *pcVar6) {
LAB_00a0c760:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00a0c765;
    }
    if (bVar1 == bVar5) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00a0c760;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != bVar5);
  iVar4 = 0;
LAB_00a0c765:
  if (iVar4 == unaff_EBX) {
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(int *)(unaff_EBP + -0x68) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x78) = bVar5;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(int *)(unaff_EBP + -0x28) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x38) = bVar5;
    uStack_10 = 0xa0c7a4;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(int *)(unaff_EBP + -0x48) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x58) = bVar5;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    uStack_10 = 0xa0c7fe;
    FUN_00408ed0();
    if (0xf < *(uint *)(unaff_EBP + -0xc0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xc0) = 0xf;
    *(int *)(unaff_EBP + -0xc4) = unaff_EBX;
    *(byte *)(unaff_EBP + -0xd4) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -0xdc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
    *(int *)(unaff_EBP + -0xe0) = unaff_EBX;
    *(byte *)(unaff_EBP + -0xf0) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -0x44)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(int *)(unaff_EBP + -0x48) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x58) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(int *)(unaff_EBP + -0x28) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x38) = bVar5;
    uVar2 = *(uint *)(unaff_EBP + -100);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
    *(int *)(unaff_EBP + -0x88) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x98) = bVar5;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(int *)(unaff_EBP + -0x68) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x78) = bVar5;
    uStack_10 = 0xa0c8d8;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(int *)(unaff_EBP + -0x28) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x38) = bVar5;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(int *)(unaff_EBP + -0x48) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x58) = bVar5;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    uStack_10 = 0xa0c97c;
    FUN_00408ed0();
    if (0xf < *(uint *)(unaff_EBP + -0xc0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xc0) = 0xf;
    *(int *)(unaff_EBP + -0xc4) = unaff_EBX;
    *(byte *)(unaff_EBP + -0xd4) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -0xdc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
    *(int *)(unaff_EBP + -0xe0) = unaff_EBX;
    *(byte *)(unaff_EBP + -0xf0) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -0xfc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xfc) = 0xf;
    *(int *)(unaff_EBP + -0x100) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x110) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
    *(int *)(unaff_EBP + -0xa4) = unaff_EBX;
    *(byte *)(unaff_EBP + -0xb4) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -0x44)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(int *)(unaff_EBP + -0x48) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x58) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(int *)(unaff_EBP + -0x28) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x38) = bVar5;
    if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(int *)(unaff_EBP + -0x68) = unaff_EBX;
    *(byte *)(unaff_EBP + -0x78) = bVar5;
    uVar2 = *(uint *)(unaff_EBP + -0x84);
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0x18d;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_00e3edcc;
  *(int *)(unaff_EBP + -0x2c) = unaff_EBX;
  *(int *)(unaff_EBP + -0x28) = unaff_EBX;
  *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  *(byte **)(unaff_EBP + -0x5c) = local_1c;
  local_1c[0] = bVar5;
  FUN_00408ed0(unaff_EBP + -300,unaff_EBX,0xffffffff);
  iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x3c) + 0x10))(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar4 + 4);
  FUN_00a11e60();
  FUN_009fc110();
  *(undefined4 *)(unaff_EBP + -4) = 0x29;
  FUN_00a0cb84();
  return;
}

