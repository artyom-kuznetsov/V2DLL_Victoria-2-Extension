// FUN_007384e0 @ 007384e0 body=[[007384e0, 00738537]]


void FUN_007384e0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar1 = in_ECX[1] - *in_ECX >> 4;
  if (0xffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + 1;
  uVar2 = in_ECX[2] - *in_ECX >> 4;
  if (uVar2 < uVar1) {
    if (0xfffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_007386a0(uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_007386a0(uVar2);
  }
  return;
}

