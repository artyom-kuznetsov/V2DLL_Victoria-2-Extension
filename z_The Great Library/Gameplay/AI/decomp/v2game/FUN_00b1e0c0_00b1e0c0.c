// FUN_00b1e0c0 @ 00b1e0c0 body=[[00b1e0c0, 00b1e107]]


int FUN_00b1e0c0(int param_1,int param_2)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 8) != 0) {
    piVar2 = *(int **)(in_ECX + 4);
    do {
      if ((*(int *)(*piVar2 + 4) == param_1) && (*(int *)(*piVar2 + 8) == param_2)) {
        return (*(int **)(in_ECX + 4))[uVar1];
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 8));
  }
  return 0;
}

