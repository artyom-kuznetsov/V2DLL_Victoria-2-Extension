// FUN_005cb230 @ 005cb230  (requested 005CB230, first bytes: 55 8B EC 51 8B 47 38 53)


void FUN_005cb230(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  for (piVar2 = *(int **)(unaff_EDI + 0x38); (piVar2 != (int *)0x0 && (*piVar2 != param_1));
      piVar2 = (int *)piVar2[2]) {
  }
  FUN_005f2ae0(piVar2);
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (*(char *)(unaff_EDI + 0x48) == '\0') {
    iVar3 = FUN_005cabe0(unaff_EDI);
    iVar1 = *(int *)(unaff_EDI + 0x1a0);
    *(int *)(unaff_EDI + 0x1a0) = iVar3;
    if ((iVar3 != iVar1) || (*(char *)(unaff_EDI + 0xbc) != '\0')) {
      FUN_005cae80(unaff_EDI);
      *(undefined1 *)(unaff_EDI + 0xbc) = 0;
    }
    if ((*(int *)(unaff_EDI + 0x10c) != 0) && (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) {
      FUN_005cb2c0(*(undefined4 *)(unaff_EDI + 0xdc));
    }
  }
  return;
}

