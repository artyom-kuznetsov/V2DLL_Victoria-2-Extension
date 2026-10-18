// FUN_00474cd0 @ 00474cd0 body=[[00474cd0, 00474d2e]]


void FUN_00474cd0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_0125b5d4 - DAT_0125b5d0 >> 2;
  if (0x3ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = uVar2 + 1;
  uVar1 = DAT_0125b5d8 - DAT_0125b5d0 >> 2;
  if (uVar1 < uVar2) {
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00474d30(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00474d30(uVar1);
  }
  return;
}

