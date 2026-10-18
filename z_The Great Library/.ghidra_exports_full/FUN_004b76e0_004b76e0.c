// FUN_004b76e0 @ 004b76e0 body=[[004b76e0, 004b780e]]


void FUN_004b76e0(char param_1)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(in_EAX + 0x110) == 0) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(0);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))();
    if (*(char *)(in_EAX + 0xc) != '\0') {
      return;
    }
  }
  else {
    if (param_1 != '\0') {
      piVar2 = *(int **)(*(int *)(*(int *)(in_EAX + 0x110) + 0x10) + 0x20);
      if (piVar2 == (int *)0x0) {
        return;
      }
      while (piVar3 = (int *)*piVar2, piVar3[0x31] != *(int *)(DAT_012588e8 + 0xb60)) {
        piVar2 = (int *)piVar2[2];
        if (piVar2 == (int *)0x0) {
          return;
        }
      }
      if (piVar3 == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(*piVar3 + 8))();
      if (cVar1 == '\0') {
        return;
      }
      if ((char)piVar3[1] != '\0') {
        return;
      }
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(0);
      goto LAB_004b77f4;
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(0);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))();
    if (*(char *)(in_EAX + 0xc) != '\0') {
      return;
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(0);
  }
  piVar3 = (int *)(in_EAX + 8);
LAB_004b77f4:
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))(piVar3);
  return;
}

