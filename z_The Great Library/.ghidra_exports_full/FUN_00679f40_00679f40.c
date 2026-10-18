// FUN_00679f40 @ 00679f40 body=[[00679f40, 00679f8c] [00679f90, 00679fac] [00679fb0, 00679ffa]]


void FUN_00679f40(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  piVar2 = *(int **)(unaff_ESI + 4);
  if ((param_1 == (int *)*piVar2) && (param_2 == piVar2)) {
    FUN_0067a290(piVar2[1]);
    *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)*(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_ESI + 4);
    *(int *)(*(int *)(unaff_ESI + 4) + 8) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *unaff_EDI = **(undefined4 **)(unaff_ESI + 4);
    return;
  }
  while (param_1 != param_2) {
    if (*(char *)((int)param_1 + 0x21) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0x21);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0x21);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
    FUN_0067a000();
  }
  *unaff_EDI = param_1;
  return;
}

