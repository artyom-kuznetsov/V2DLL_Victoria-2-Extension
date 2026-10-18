// FUN_0098ea20 @ 0098ea20 body=[[0098ea20, 0098ea81]]


void FUN_0098ea20(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = DAT_0131c8c0 - DAT_0131c8bc >> 4;
  if (0xfffffffU - in_ECX < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = DAT_0131c8c4 - DAT_0131c8bc >> 4;
  if (uVar2 < uVar1 + in_ECX) {
    if (0xfffffff - (uVar2 >> 1) < uVar2) {
      FUN_0098ea90();
      return;
    }
    FUN_0098ea90();
    return;
  }
  return;
}

