// FUN_0079eb70 @ 0079eb70 body=[[0079eb70, 0079ebe5]]


void FUN_0079eb70(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x6c;
  if (0x25ed096 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x6c;
  uVar2 = uVar2 + 1;
  if (uVar1 < uVar2) {
    if (0x25ed097 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_0079edd0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_0079edd0(uVar1);
  }
  return;
}

