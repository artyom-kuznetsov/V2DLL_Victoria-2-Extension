// FUN_0044ee80 @ 0044ee80 body=[[0044ee80, 0044eede]]


void FUN_0044ee80(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  if (0x3ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = uVar2 + 1;
  uVar1 = DAT_0125a5bc - DAT_0125a5b4 >> 2;
  if (uVar1 < uVar2) {
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_0044eee0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_0044eee0(uVar1);
  }
  return;
}

