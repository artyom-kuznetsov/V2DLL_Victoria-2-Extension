// FUN_006a1bf0 @ 006a1bf0 body=[[006a1bf0, 006a1c65]]


void FUN_006a1bf0(void)

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
      FUN_006a1cd0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_006a1cd0(uVar1);
  }
  return;
}

