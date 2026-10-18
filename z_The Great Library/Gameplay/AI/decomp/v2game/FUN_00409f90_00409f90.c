// FUN_00409f90 @ 00409f90 body=[[00409f90, 0040a008]]


void FUN_00409f90(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x58;
  if (0x2e8ba2d < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x58;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x2e8ba2e - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00409040(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00409040(uVar1);
  }
  return;
}

