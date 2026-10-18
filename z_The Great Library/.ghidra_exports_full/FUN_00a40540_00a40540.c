// FUN_00a40540 @ 00a40540 body=[[00a40540, 00a405b5]]


void FUN_00a40540(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x2c;
  if (0x5d1745c < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x2c;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x5d1745d - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00a40640(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a40640(uVar1);
  }
  return;
}

