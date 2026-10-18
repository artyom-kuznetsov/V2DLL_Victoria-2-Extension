// FUN_00a80250 @ 00a80250 body=[[00a80250, 00a802d6]]


void FUN_00a80250(int param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0xc;
  if (0x15555555U - param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0xc;
  uVar2 = uVar2 + param_1;
  if (uVar1 < uVar2) {
    if (0x15555555 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00a803c0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a803c0(uVar1);
  }
  return;
}

