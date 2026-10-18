// FUN_007df2c0 @ 007df2c0 body=[[007df2c0, 007df321]]


void FUN_007df2c0(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = DAT_01267a38 - DAT_01267a34 >> 4;
  if (0xfffffffU - in_ECX < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = DAT_01267a3c - DAT_01267a34 >> 4;
  if (uVar2 < uVar1 + in_ECX) {
    if (0xfffffff - (uVar2 >> 1) < uVar2) {
      FUN_007df480();
      return;
    }
    FUN_007df480();
    return;
  }
  return;
}

