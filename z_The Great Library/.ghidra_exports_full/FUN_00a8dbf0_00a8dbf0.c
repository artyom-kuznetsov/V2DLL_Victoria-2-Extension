// FUN_00a8dbf0 @ 00a8dbf0 body=[[00a8dbf0, 00a8dc65]]


void FUN_00a8dbf0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x18;
  if (0xaaaaaa9 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x18;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00a8dc70(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a8dc70(uVar1);
  }
  return;
}

