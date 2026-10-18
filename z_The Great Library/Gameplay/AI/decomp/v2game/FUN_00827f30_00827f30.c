// FUN_00827f30 @ 00827f30 body=[[00827f30, 00828014] [0082801e, 0082802a]]


void FUN_00827f30(void)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  int local_1c;
  
  puVar1 = (uint *)unaff_ESI[0x33];
  do {
    if (puVar1 == (uint *)0x0) {
      return;
    }
    uVar2 = *puVar1;
    puVar1 = (uint *)puVar1[3];
    iVar5 = DAT_01258a94;
    if (uVar2 < 0x1269) {
      iVar5 = DAT_01258a98;
    }
    if (((iVar5 != 0) && (iVar5 = FUN_009c1d40(), iVar5 != 0)) && (iVar5 = iVar5 + -8, iVar5 != 0))
    {
      for (piVar3 = (int *)unaff_ESI[0x2b]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (*piVar3 == iVar5) goto LAB_00827fb0;
      }
      (**(code **)(*unaff_ESI + 0x1a8))(iVar5);
    }
LAB_00827fb0:
    FUN_004e9470(unaff_ESI[0x33]);
    if (local_1c != 0) {
      if ((char)unaff_ESI[0x36] == '\0') {
        iVar5 = *(int *)(local_1c + 8);
        iVar4 = *(int *)(local_1c + 0xc);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0xc) = iVar4;
        }
        if (iVar4 != 0) {
          *(int *)(iVar4 + 8) = iVar5;
        }
        if (local_1c == unaff_ESI[0x33]) {
          unaff_ESI[0x33] = iVar4;
        }
        if (local_1c == unaff_ESI[0x34]) {
          unaff_ESI[0x34] = iVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_1c);
      }
      *(undefined1 *)(local_1c + 0x10) = 1;
    }
  } while( true );
}

