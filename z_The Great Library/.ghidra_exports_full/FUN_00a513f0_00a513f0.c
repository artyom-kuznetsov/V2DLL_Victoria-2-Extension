// FUN_00a513f0 @ 00a513f0 body=[[00a513f0, 00a51449]]


void FUN_00a513f0(void)

{
  int *in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = in_EAX[1] - *in_EAX >> 2;
  if (0x3ffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + 1;
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

