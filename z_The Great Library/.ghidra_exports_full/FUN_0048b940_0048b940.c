// FUN_0048b940 @ 0048b940 body=[[0048b940, 0048b9c8]]


void FUN_0048b940(int param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x58;
  if (0x2e8ba2eU - param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x58;
  uVar2 = uVar2 + param_1;
  if (uVar1 < uVar2) {
    if (0x2e8ba2e - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_0048bd70(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_0048bd70(uVar1);
  }
  return;
}

