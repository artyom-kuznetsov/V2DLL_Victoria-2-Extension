// FUN_00aa90a0 @ 00aa90a0 body=[[00aa90a0, 00aa9117]]


void FUN_00aa90a0(int param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x14;
  if (0xcccccccU - param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (in_ECX[2] - *in_ECX) / 0x14;
  if (uVar1 < uVar2) {
    if (0xccccccc - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
    }
    else {
      uVar1 = uVar1 + (uVar1 >> 1);
    }
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00aa8f90(uVar1);
  }
  return;
}

