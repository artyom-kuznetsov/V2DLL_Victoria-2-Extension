// FUN_004bede0 @ 004bede0 body=[[004bede0, 004bee55]]


void FUN_004bede0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x278;
  if (0x67b239 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x278;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x67b23a - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_004bf200(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_004bf200(uVar1);
  }
  return;
}

