// FUN_004df350 @ 004df350 body=[[004df350, 004df3c5]]


void FUN_004df350(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x160;
  if (0xba2e8a < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x160;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0xba2e8b - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_004df3d0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_004df3d0(uVar1);
  }
  return;
}

