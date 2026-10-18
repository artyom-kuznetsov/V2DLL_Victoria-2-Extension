// FUN_00549190 @ 00549190 body=[[00549190, 00549218]]


void FUN_00549190(int param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = (in_ECX[1] - *in_ECX) / 0x18;
  if (0xaaaaaaaU - param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x18;
  uVar2 = uVar2 + param_1;
  if (uVar1 < uVar2) {
    if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      FUN_00549500(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_00549500(uVar1);
  }
  return;
}

