// FUN_00ad8ad0 @ 00ad8ad0 body=[[00ad8ad0, 00ad8b3f]]


void FUN_00ad8ad0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  if (param_1 == 0) {
    piVar2 = *(int **)(in_ECX + 4);
    *(undefined4 *)(in_ECX + 4) = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      return;
    }
  }
  else {
    piVar2 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[2] = param_1;
      piVar2[1] = 0;
      *piVar2 = (int)&PTR_FUN_00ddcbf0;
      (**(code **)(*piVar2 + 4))();
    }
    piVar1 = *(int **)(in_ECX + 4);
    *(int **)(in_ECX + 4) = piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  return;
}

