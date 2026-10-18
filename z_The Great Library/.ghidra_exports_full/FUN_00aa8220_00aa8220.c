// FUN_00aa8220 @ 00aa8220 body=[[00aa8220, 00aa827b]]


void FUN_00aa8220(int param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar1 = in_ECX[1] - *in_ECX >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = in_ECX[2] - *in_ECX >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 + (uVar2 >> 1);
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_00aa7ec0(uVar2);
  }
  return;
}

