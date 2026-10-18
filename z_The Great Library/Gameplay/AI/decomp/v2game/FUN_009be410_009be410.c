// FUN_009be410 @ 009be410 body=[[009be410, 009be473]]


void FUN_009be410(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = DAT_0131ca08 - DAT_0131ca04 >> 2;
  if (0x3fffffffU - in_ECX < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = uVar1 + in_ECX;
  uVar2 = DAT_0131ca0c - DAT_0131ca04 >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_009be480(uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_009be480(uVar2);
  }
  return;
}

