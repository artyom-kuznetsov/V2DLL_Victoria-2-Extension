// FUN_008045b0 @ 008045b0 body=[[008045b0, 00804638]]


void FUN_008045b0(int param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x24;
  if (0x71c71c7U - param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x24;
  uVar2 = uVar2 + param_1;
  if (uVar1 < uVar2) {
    if (0x71c71c7 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_008049b0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_008049b0(uVar1);
  }
  return;
}

