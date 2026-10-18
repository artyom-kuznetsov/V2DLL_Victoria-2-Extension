// FUN_00a805a0 @ 00a805a0 body=[[00a805a0, 00a8061c]]


void FUN_00a805a0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x3c;
  if (0x4444443 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x3c;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x4444444 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00a80620(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a80620(uVar1);
  }
  return;
}

