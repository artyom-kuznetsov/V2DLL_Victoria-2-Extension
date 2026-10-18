// FUN_00a76a50 @ 00a76a50 body=[[00a76a50, 00a76ad8]]


void FUN_00a76a50(int param_1)

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
      FUN_00a76ae0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a76ae0(uVar1);
  }
  return;
}

