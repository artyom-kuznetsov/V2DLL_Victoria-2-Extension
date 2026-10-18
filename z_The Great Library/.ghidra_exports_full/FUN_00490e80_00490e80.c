// FUN_00490e80 @ 00490e80 body=[[00490e80, 00490ea8] [00490eb2, 00490edc]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490e80(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_0125bc5c == 0) {
    _DAT_0125bc58 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(DAT_0125bc60 + uVar2 * 4);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *(undefined4 *)(DAT_0125bc60 + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < DAT_0125bc5c);
  _DAT_0125bc58 = 0;
  return;
}

