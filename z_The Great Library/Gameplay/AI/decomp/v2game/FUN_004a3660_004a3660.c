// FUN_004a3660 @ 004a3660 body=[[004a3660, 004a36d5]]


void FUN_004a3660(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x48;
  if (0x38e38e2 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x48;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x38e38e3 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_004a3920(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_004a3920(uVar1);
  }
  return;
}

