// FUN_0081ad50 @ 0081ad50 body=[[0081ad50, 0081ad97]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081ad50(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EDI;
  
  uVar3 = *(uint *)(unaff_EDI + 0x30) % DAT_0131c95c;
  piVar2 = (int *)FUN_00aae9af(8);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(DAT_0131c960 + uVar3 * 4);
    *piVar2 = unaff_EDI;
    piVar2[1] = iVar1;
    *(int **)(DAT_0131c960 + uVar3 * 4) = piVar2;
    _DAT_0131c958 = _DAT_0131c958 + 1;
    return;
  }
  *(undefined4 *)(DAT_0131c960 + uVar3 * 4) = 0;
  _DAT_0131c958 = _DAT_0131c958 + 1;
  return;
}

