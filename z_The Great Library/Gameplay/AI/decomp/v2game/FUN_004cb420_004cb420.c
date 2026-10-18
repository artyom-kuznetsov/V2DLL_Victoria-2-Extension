// FUN_004cb420 @ 004cb420 body=[[004cb420, 004cb441]]


uint FUN_004cb420(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  int unaff_ESI;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x98);
  while ((*piVar2 == 0 || (*piVar2 != *(int *)(unaff_ESI + 4)))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 7;
    if (3 < (int)uVar1) {
      return uVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

