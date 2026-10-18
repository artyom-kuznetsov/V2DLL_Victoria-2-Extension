// FUN_0079eaf0 @ 0079eaf0 body=[[0079eaf0, 0079eb65]]


void FUN_0079eaf0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x28;
  if (0x6666665 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x28;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x6666666 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_0079ece0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_0079ece0(uVar1);
  }
  return;
}

