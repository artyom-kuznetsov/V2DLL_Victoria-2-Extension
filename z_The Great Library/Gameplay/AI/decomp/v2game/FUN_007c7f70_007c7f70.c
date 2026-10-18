// FUN_007c7f70 @ 007c7f70 body=[[007c7f70, 007c7fe5]]


void FUN_007c7f70(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x44;
  if (0x3c3c3c2 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x44;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x3c3c3c3 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_007c7ff0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_007c7ff0(uVar1);
  }
  return;
}

