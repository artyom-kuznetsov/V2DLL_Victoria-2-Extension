// FUN_009877d0 @ 009877d0 body=[[009877d0, 00987831]]


void FUN_009877d0(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = DAT_0131c530 - DAT_0131c52c >> 4;
  if (0xfffffffU - in_ECX < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = DAT_0131c534 - DAT_0131c52c >> 4;
  if (uVar2 < uVar1 + in_ECX) {
    if (0xfffffff - (uVar2 >> 1) < uVar2) {
      FUN_00987840();
      return;
    }
    FUN_00987840();
    return;
  }
  return;
}

