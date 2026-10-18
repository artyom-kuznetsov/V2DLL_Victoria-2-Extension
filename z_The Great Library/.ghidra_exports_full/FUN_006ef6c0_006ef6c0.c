// FUN_006ef6c0 @ 006ef6c0 body=[[006ef6c0, 006ef721]]


void FUN_006ef6c0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x7c) + 0x2c))();
  piVar1 = (int *)*puVar2;
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
    iVar3 = iVar3 + 0x30;
    iVar4 = 8;
    do {
      if ((*(int *)(iVar3 + 4) != 0) && (*(char *)(*(int *)(iVar3 + 4) + 0x180) != '\0')) {
        FUN_006e42b0();
      }
      iVar3 = iVar3 + 0x21c;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_006f3e70();
  return;
}

