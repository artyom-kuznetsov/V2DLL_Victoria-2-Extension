// FUN_006151d0 @ 006151d0 body=[[006151d0, 00615227]]


void FUN_006151d0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar1 = in_ECX[1] - *in_ECX >> 5;
  if (0x7fffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + 1;
  uVar2 = in_ECX[2] - *in_ECX >> 5;
  if (uVar2 < uVar1) {
    if (0x7ffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_00615230(uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_00615230(uVar2);
  }
  return;
}

