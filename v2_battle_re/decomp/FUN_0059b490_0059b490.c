// FUN_0059b490 @ 0059b490

uint FUN_0059b490(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = 0;
  while( true ) {
    uVar2 = uVar1 & 0x80000001;
    uVar1 = uVar1 + 1;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    if (*(int *)(in_ECX + 0xac + ((-(uint)(uVar2 != 0) & 0xfffffffe) + 1) * ((int)uVar1 / 2) * 4) !=
        0) break;
    if (0x1d < (int)uVar1) {
      return uVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)((int)uVar1 / 2) >> 8),1);
}


