// FUN_00808de0 @ 00808de0 body=[[00808de0, 00808e3f]]


void FUN_00808de0(void)

{
  int *in_EAX;
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = in_EAX[1] - *in_EAX >> 3;
  if (0x1fffffffU - in_ECX < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + in_ECX;
  uVar2 = in_EAX[2] - *in_EAX >> 3;
  if (uVar2 < uVar1) {
    if (0x1fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_00808f20(uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_00808f20(uVar2);
  }
  return;
}

