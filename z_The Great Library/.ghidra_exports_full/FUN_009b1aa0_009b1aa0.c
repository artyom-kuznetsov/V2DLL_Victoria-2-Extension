// FUN_009b1aa0 @ 009b1aa0 body=[[009b1aa0, 009b1b15]]


void FUN_009b1aa0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0xa4;
  if (0x18f9c17 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0xa4;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x18f9c18 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_009b1b20(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_009b1b20(uVar1);
  }
  return;
}

