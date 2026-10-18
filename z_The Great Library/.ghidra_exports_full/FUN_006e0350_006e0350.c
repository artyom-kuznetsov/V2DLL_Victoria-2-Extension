// FUN_006e0350 @ 006e0350 body=[[006e0350, 006e03c5]]


void FUN_006e0350(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x30;
  if (0x5555554 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x30;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x5555555 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_006dffc0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_006dffc0(uVar1);
  }
  return;
}

