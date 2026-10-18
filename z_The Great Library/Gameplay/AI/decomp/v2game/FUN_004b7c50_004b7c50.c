// FUN_004b7c50 @ 004b7c50 body=[[004b7c50, 004b7d41]]


void FUN_004b7c50(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  int local_c;
  
  if ((*(int *)(unaff_EDI + 300) == 0) || (*(int *)(unaff_EDI + 0x158) == 0)) {
    *(undefined1 *)(unaff_EDI + 0x170) = 0;
  }
  else {
    piVar5 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                               *(int *)(*(int *)(unaff_EDI + 0x158) + 0x18) * 4) + 0xec);
    local_c = 0;
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        piVar5 = (int *)piVar5[2];
        cVar3 = FUN_004a8330();
        uVar2 = DAT_012588dc;
        if (cVar3 != '\0') {
          local_c = local_c + *(int *)(iVar1 + 0x40);
        }
      } while (piVar5 != (int *)0x0);
      if (0 < local_c) {
        if (*(char *)(unaff_EDI + 0x170) != '\0') {
          return;
        }
        iVar1 = *(int *)(unaff_EDI + 0x58);
        *(undefined1 *)(unaff_EDI + 0x170) = 1;
        iVar4 = (**(code **)(**(int **)(unaff_EDI + 0x54) + 0x38))();
        FUN_00643ce0(*(undefined4 *)(*(int *)(iVar4 + 0x20d8) + iVar1 * 4),unaff_EDI,uVar2);
        return;
      }
    }
    uVar2 = DAT_012588dc;
    if (*(char *)(unaff_EDI + 0x170) == '\x01') {
      iVar1 = *(int *)(unaff_EDI + 0x58);
      *(undefined1 *)(unaff_EDI + 0x170) = 0;
      iVar4 = (**(code **)(**(int **)(unaff_EDI + 0x54) + 0x38))();
      FUN_00643ce0(*(undefined4 *)(*(int *)(iVar4 + 0x20d8) + iVar1 * 4),unaff_EDI,uVar2);
      return;
    }
  }
  return;
}

