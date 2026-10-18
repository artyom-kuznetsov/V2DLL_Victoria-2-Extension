// FUN_005067d0 @ 005067d0 body=[[005067d0, 00506809] [00506810, 005068aa]]


undefined4 FUN_005067d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  
  if ((*(char *)(DAT_012588e8 + 0xd11) != '\0') &&
     (*(char *)(*(int *)(DAT_012588e8 + 0xb24) + 0x70) == '\0')) {
    return 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    for (piVar1 = *(int **)(in_ECX + 0x7b4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      piVar2 = (int *)*piVar1;
      if (piVar2[0x37] == *(int *)(param_1 + 0x54)) {
        if (piVar2 == (int *)0x0) {
          return 1;
        }
        cVar3 = (**(code **)(*piVar2 + 8))();
        if (cVar3 == '\0') {
          return 1;
        }
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(0);
        if ((char)piVar2[1] != '\0') {
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa0))(piVar2,0);
        }
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))(piVar2);
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))(piVar2[0x37]);
        return 0;
      }
    }
  }
  return 1;
}

