// FUN_009911a0 @ 009911a0 body=[[009911a0, 009911fe]]


void FUN_009911a0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_0131c8e0 - DAT_0131c8dc >> 2;
  if (0x3ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = uVar2 + 1;
  uVar1 = DAT_0131c8e4 - DAT_0131c8dc >> 2;
  if (uVar1 < uVar2) {
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00991200(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00991200(uVar1);
  }
  return;
}

