// FUN_0078e720 @ 0078e720 body=[[0078e720, 0078e77c] [0078e780, 0078e7c4]]


int * FUN_0078e720(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  
  cVar4 = (**(code **)(**(int **)(param_1 + 600) + 0x38))();
  if (cVar4 != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 600) + 0xdc);
    if ((((*(char *)(*(int *)(iVar1 + 0x5c) + 0x2a) != '\0') &&
         (*(int *)(*(int *)(param_1 + 600) + 0x74) == 0)) && (*(int *)(iVar1 + 300) != 0)) &&
       (*(int *)(iVar1 + 0x158) != 0)) {
      puVar2 = *(undefined4 **)(*(int *)(iVar1 + 0x158) + 8);
      do {
        do {
          if (puVar2 == (undefined4 *)0x0) {
            return (int *)0x0;
          }
          piVar3 = (int *)*puVar2;
          puVar2 = (undefined4 *)puVar2[2];
          cVar4 = (**(code **)(*piVar3 + 0x3c))();
        } while (cVar4 == '\0');
        (**(code **)(*piVar3 + 0x30))();
        cVar4 = FUN_005d77a0();
      } while (cVar4 == '\0');
      return piVar3;
    }
  }
  return (int *)0x0;
}

