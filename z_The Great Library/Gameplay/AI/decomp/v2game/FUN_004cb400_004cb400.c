// FUN_004cb400 @ 004cb400 body=[[004cb400, 004cb41b]]


uint FUN_004cb400(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x98);
  do {
    if (*piVar2 != 0) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 7;
  } while ((int)uVar1 < 4);
  return uVar1 & 0xffffff00;
}

