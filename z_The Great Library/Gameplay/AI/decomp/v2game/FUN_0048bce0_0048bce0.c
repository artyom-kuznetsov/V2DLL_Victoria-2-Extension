// FUN_0048bce0 @ 0048bce0 body=[[0048bce0, 0048bd62]]


void FUN_0048bce0(void)

{
  int in_EAX;
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x78;
  if (0x2222222U - in_EAX < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = uVar2 + in_EAX;
  uVar1 = (in_ECX[2] - *in_ECX) / 0x78;
  if (uVar1 < uVar2) {
    if (0x2222222 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_0048bec0(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_0048bec0(uVar1);
  }
  return;
}

