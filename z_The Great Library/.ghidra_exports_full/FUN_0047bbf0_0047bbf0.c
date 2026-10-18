// FUN_0047bbf0 @ 0047bbf0 body=[[0047bbf0, 0047bc65]]


void FUN_0047bbf0(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x4c;
  if (0x35e50d6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x4c;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x35e50d7 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_0047bc70(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_0047bc70(uVar1);
  }
  return;
}

