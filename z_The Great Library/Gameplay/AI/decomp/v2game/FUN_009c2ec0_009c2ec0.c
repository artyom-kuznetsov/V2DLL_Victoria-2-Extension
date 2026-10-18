// FUN_009c2ec0 @ 009c2ec0  (requested 009C2EC0, first bytes: 8B 4E 04 85 C9 75 03 32)


undefined4 FUN_009c2ec0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(unaff_ESI + 3) != '\0') {
    *(undefined1 *)(iVar1 + 0xc) = 1;
    return 1;
  }
  iVar2 = *(int *)(iVar1 + 4);
  unaff_ESI[1] = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *unaff_ESI = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

