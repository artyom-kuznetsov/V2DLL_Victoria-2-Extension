// FUN_00a6073a @ 00a6073a body=[[00a6073a, 00a60893] [00a609d5, 00a609da] [00a609de, 00a609f0]]


void FUN_00a6073a(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  int iVar4;
  
  piVar1 = (int *)FUN_00aae9af(0x3c);
  if (piVar1 == unaff_EBX) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)unaff_EBX;
    piVar1[1] = (int)unaff_EBX;
    piVar1[2] = (int)unaff_EBX;
    piVar1[4] = (int)unaff_EBX;
    piVar1[5] = (int)unaff_EBX;
    piVar1[6] = (int)unaff_EBX;
    piVar1[0xd] = 0xf;
    piVar1[0xc] = (int)unaff_EBX;
    *(char *)(piVar1 + 8) = (char)unaff_EBX;
  }
  FUN_009d7490(piVar1[1],unaff_EBP + -0x44,unaff_EBP + -0x3c,*(undefined4 *)(unaff_EBP + 8));
  iVar2 = *unaff_EDI;
  FUN_009d7490(piVar1[1],iVar2,(unaff_EDI[1] - iVar2) + iVar2,*(undefined4 *)(unaff_EBP + 8));
  FUN_00a89eb0(*piVar1,piVar1[1] - *piVar1,1);
  iVar4 = *(int *)(unaff_EBP + 8) * 0xe8;
  iVar2 = FUN_00a89f70(*(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x18) + 0x20) + iVar4,1);
  if (iVar2 == -1) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x3c) = (char)unaff_EBX;
    FUN_00409350("server.cpp",10);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_004015b0(unaff_EBP + -0x3c,0x113,0x301);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x18) + 0x20);
    uVar3 = FUN_00987d20(*(undefined4 *)(iVar2 + 0xc + iVar4),&DAT_00ded950,
                         *(undefined2 *)(iVar2 + 0x10 + iVar4));
    uVar3 = FUN_00447240(uVar3);
    uVar3 = FUN_00418e30(uVar3);
    uVar3 = FUN_009da180(uVar3);
    FUN_00401280(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00987ac0(unaff_EBP + -0xa8);
    *(undefined ***)(unaff_EBP + -0xa8) = std::ios_base::vftable;
    FUN_00aad52d(unaff_EBP + -0xa8);
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x3c));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

