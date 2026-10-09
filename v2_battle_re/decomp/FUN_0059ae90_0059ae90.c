// FUN_0059ae90 @ 0059ae90

int FUN_0059ae90(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(in_EAX + 0x16c);
  if (piVar3 != (int *)0x0) {
    FUN_00401000(0x42c90000);
    iVar2 = FUN_00b31c00();
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      if (((iVar2 <= *(int *)(iVar1 + 0x3c)) && (999 < *(int *)(iVar1 + 0x40))) &&
         (*(int *)(*(int *)(iVar1 + 0x38) + 0x23c) < 1)) {
        return iVar1;
      }
    } while (piVar3 != (int *)0x0);
  }
  return 0;
}


