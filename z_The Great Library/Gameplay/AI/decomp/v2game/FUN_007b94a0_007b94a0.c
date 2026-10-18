// FUN_007b94a0 @ 007b94a0 body=[[007b94a0, 007b94ff]]


void FUN_007b94a0(void)

{
  int *in_EAX;
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = in_EAX[1] - *in_EAX >> 2;
  if (0x3fffffffU - in_ECX < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + in_ECX;
  uVar2 = in_EAX[2] - *in_EAX >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_004bf300(uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_004bf300(uVar2);
  }
  return;
}

