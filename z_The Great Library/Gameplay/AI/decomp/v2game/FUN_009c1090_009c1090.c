// FUN_009c1090 @ 009c1090 body=[[009c1090, 009c1105]]


void FUN_009c1090(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x14;
  if (0xccccccb < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x14;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0xccccccc - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_009c1110(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_009c1110(uVar1);
  }
  return;
}

