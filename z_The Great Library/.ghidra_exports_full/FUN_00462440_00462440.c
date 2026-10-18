// FUN_00462440 @ 00462440 body=[[00462440, 0046248c] [00462490, 004624ac] [004624b0, 004624fa]]


void FUN_00462440(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  piVar2 = *(int **)(unaff_ESI + 4);
  if ((param_1 == (int *)*piVar2) && (param_2 == piVar2)) {
    FUN_00462290(piVar2[1]);
    *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)*(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_ESI + 4);
    *(int *)(*(int *)(unaff_ESI + 4) + 8) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *unaff_EDI = **(undefined4 **)(unaff_ESI + 4);
    return;
  }
  while (param_1 != param_2) {
    if (*(char *)((int)param_1 + 0x2d) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x2d);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2d);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0x2d);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0x2d);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
    FUN_00462830();
  }
  *unaff_EDI = param_1;
  return;
}

