// FUN_00a2ca10 @ 00a2ca10 body=[[00a2ca10, 00a2ca5c] [00a2ca60, 00a2ca7c] [00a2ca80, 00a2caca]]


void FUN_00a2ca10(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  piVar2 = *(int **)(unaff_ESI + 4);
  if ((param_1 == (int *)*piVar2) && (param_2 == piVar2)) {
    FUN_00a2cdf0(piVar2[1]);
    *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)*(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_ESI + 4);
    *(int *)(*(int *)(unaff_ESI + 4) + 8) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *unaff_EDI = **(undefined4 **)(unaff_ESI + 4);
    return;
  }
  while (param_1 != param_2) {
    if (*(char *)((int)param_1 + 0x31) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0x31) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x31);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x31);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0x31);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0x31);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
    FUN_00a2cb60();
  }
  *unaff_EDI = param_1;
  return;
}

