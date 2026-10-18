// FUN_00642340 @ 00642340 body=[[00642340, 0064236c] [00642370, 00642489]]


void FUN_00642340(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(*(int *)(param_1 + 8) + 0x2a) != '\0') {
    FUN_00414d70(param_1 + 0xac);
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0xfc);
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if ((*(int **)(iVar3 + 0x10c) != (int *)0x0) &&
       (cVar2 = (**(code **)(**(int **)(iVar3 + 0x10c) + 0x3c))(), cVar2 != '\0')) {
      (**(code **)(**(int **)(iVar3 + 0x10c) + 0x38))();
    }
    if ((*(int *)(iVar3 + 0x110) != 0) &&
       (cVar2 = (**(code **)(**(int **)(iVar3 + 0x110) + 0x3c))(), cVar2 != '\0')) {
      (**(code **)(**(int **)(iVar3 + 0x110) + 0x38))();
    }
  }
  if ((*(int **)(param_1 + 0x84) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0x3c))(), cVar2 != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x84) + 0x38))();
  }
  if ((*(int **)(param_1 + 0x80) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(param_1 + 0x80) + 0x3c))(), cVar2 != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x80) + 0x38))();
  }
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 0x38))();
  }
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x38))();
  }
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x38))();
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x38))();
  }
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2;
  if (0 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x54) + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 0x38))();
  }
  FUN_004c7600(*(undefined4 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}

