// FUN_004cb1d0 @ 004cb1d0 body=[[004cb1d0, 004cb1dc] [004cb1e0, 004cb200]]


undefined4 FUN_004cb1d0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int unaff_ESI;
  
  iVar1 = 0;
  piVar2 = (int *)(unaff_ESI + 0x98);
  do {
    if (*piVar2 == *(int *)(in_ECX + 4)) {
      return *(undefined4 *)(unaff_ESI + 0x9c + iVar1 * 0x1c);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 7;
  } while (iVar1 < 4);
  return 0;
}

