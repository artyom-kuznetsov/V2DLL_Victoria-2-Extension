// FUN_009a2990 @ 009a2990 body=[[009a2990, 009a29b8] [009a29c2, 009a29ec]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a2990(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_0131c95c == 0) {
    _DAT_0131c958 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(DAT_0131c960 + uVar2 * 4);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *(undefined4 *)(DAT_0131c960 + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < DAT_0131c95c);
  _DAT_0131c958 = 0;
  return;
}

