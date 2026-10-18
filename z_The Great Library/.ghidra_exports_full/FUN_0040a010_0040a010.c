// FUN_0040a010 @ 0040a010 body=[[0040a010, 0040a085]]


void FUN_0040a010(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x34;
  if (0x4ec4ec3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x34;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x4ec4ec4 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00409130(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00409130(uVar1);
  }
  return;
}

