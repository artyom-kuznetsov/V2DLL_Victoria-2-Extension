// FUN_006ef7b0 @ 006ef7b0 body=[[006ef7b0, 006ef820]]


void FUN_006ef7b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x7c) + 0x2c))();
  piVar1 = (int *)*puVar3;
  while (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    piVar1 = (int *)piVar1[2];
    iVar4 = iVar4 + 0x30;
    iVar5 = 8;
    do {
      iVar2 = *(int *)(iVar4 + 4);
      if ((((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x20))) && (*(int *)(iVar2 + 0x184) < 0xb)) &&
         (*(char *)(iVar2 + 0x188) == '\0')) {
        FUN_006e41b0();
      }
      iVar4 = iVar4 + 0x21c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_006f3e70();
  return;
}

