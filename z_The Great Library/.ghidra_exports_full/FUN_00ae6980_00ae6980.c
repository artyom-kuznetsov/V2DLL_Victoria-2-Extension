// FUN_00ae6980 @ 00ae6980 body=[[00ae6980, 00ae69ab]]


uint FUN_00ae6980(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 8) != 0) {
    piVar2 = (int *)(*(int *)(in_ECX + 4) + 0xc);
    do {
      if (*piVar2 == param_1) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar1 < *(uint *)(in_ECX + 8));
  }
  return uVar1 & 0xffffff00;
}

