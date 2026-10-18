// FUN_00a7d820 @ 00a7d820 body=[[00a7d820, 00a7d895]]


void FUN_00a7d820(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x60;
  if (0x2aaaaa9 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x60;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x2aaaaaa - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00a7d8a0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a7d8a0(uVar1);
  }
  return;
}

