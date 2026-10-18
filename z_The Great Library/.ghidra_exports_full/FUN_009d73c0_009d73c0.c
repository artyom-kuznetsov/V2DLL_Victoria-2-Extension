// FUN_009d73c0 @ 009d73c0 body=[[009d73c0, 009d7415]]


void FUN_009d73c0(void)

{
  int *in_EAX;
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = in_EAX[1] - *in_EAX;
  if (-in_ECX - 1U < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + in_ECX;
  uVar2 = in_EAX[2] - *in_EAX;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_009d7290(uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_009d7290(uVar2);
  }
  return;
}

