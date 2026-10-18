// FUN_00a7d7a0 @ 00a7d7a0 body=[[00a7d7a0, 00a7d81c]]


void FUN_00a7d7a0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x1c;
  if (0x9249248 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x1c;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x9249249 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_004456a0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_004456a0(uVar1);
  }
  return;
}

