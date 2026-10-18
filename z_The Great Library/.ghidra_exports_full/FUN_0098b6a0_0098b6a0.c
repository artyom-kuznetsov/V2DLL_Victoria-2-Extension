// FUN_0098b6a0 @ 0098b6a0 body=[[0098b6a0, 0098b6fc] [0098b700, 0098b742] [0098b751, 0098b777]]


void FUN_0098b6a0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  
  piVar5 = (int *)**(int **)(in_ECX + 8);
  if (piVar5 != *(int **)(in_ECX + 8)) {
    do {
      piVar2 = (int *)piVar5[4];
      (**(code **)(*piVar2 + 0x80))();
      (**(code **)(*piVar2 + 0x24))(1);
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(in_ECX + 8));
  }
  iVar3 = *(int *)(*(int *)(in_ECX + 8) + 4);
  if (*(char *)(iVar3 + 0x15) == '\0') {
    FUN_00aa9f30(*(undefined4 *)(iVar3 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
  *(int *)(*(int *)(in_ECX + 8) + 4) = *(int *)(in_ECX + 8);
  *(undefined4 *)*(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 8);
  *(int *)(*(int *)(in_ECX + 8) + 8) = *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  FUN_0098bf40();
  return;
}

