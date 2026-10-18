// FUN_009d95b0 @ 009d95b0 body=[[009d95b0, 009d960d]]


void FUN_009d95b0(void)

{
  uint uVar1;
  int *in_ECX;
  int in_EDX;
  uint uVar2;
  
  uVar1 = in_ECX[1] - *in_ECX >> 4;
  if (0xfffffffU - in_EDX < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + in_EDX;
  uVar2 = in_ECX[2] - *in_ECX >> 4;
  if (uVar2 < uVar1) {
    if (0xfffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_009d9610(uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_009d9610(uVar2);
  }
  return;
}

