// FUN_0079ea70 @ 0079ea70 body=[[0079ea70, 0079eae5]]


void FUN_0079ea70(void)

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
      FUN_0079ebf0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_0079ebf0(uVar1);
  }
  return;
}

