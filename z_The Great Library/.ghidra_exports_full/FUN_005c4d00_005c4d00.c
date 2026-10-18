// FUN_005c4d00 @ 005c4d00 body=[[005c4d00, 005c4d5e]]


void FUN_005c4d00(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_0125fe14 - DAT_0125fe10 >> 2;
  if (0x3ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = uVar2 + 1;
  uVar1 = DAT_0125fe18 - DAT_0125fe10 >> 2;
  if (uVar1 < uVar2) {
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_005c4d60(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_005c4d60(uVar1);
  }
  return;
}

