// FUN_0042c4b0 @ 0042c4b0 body=[[0042c4b0, 0042c507]]


void FUN_0042c4b0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar1 = in_ECX[1] - *in_ECX >> 6;
  if (0x3fffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + 1;
  uVar2 = in_ECX[2] - *in_ECX >> 6;
  if (uVar2 < uVar1) {
    if (0x3ffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_0042c600(uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_0042c600(uVar2);
  }
  return;
}

