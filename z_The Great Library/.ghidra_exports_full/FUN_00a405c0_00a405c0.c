// FUN_00a405c0 @ 00a405c0 body=[[00a405c0, 00a4063c]]


void FUN_00a405c0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x74;
  if (0x234f72b < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x74;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x234f72c - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00a40750(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a40750(uVar1);
  }
  return;
}

