// FUN_009bee00 @ 009bee00 body=[[009bee00, 009bee25]]


void FUN_009bee00(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  for (piVar2 = *(int **)(unaff_EDI + 4);
      (*(int **)(unaff_EDI + 4) <= piVar2 && (piVar2 < *(int **)(unaff_EDI + 8)));
      piVar2 = piVar2 + 1) {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x114))(piVar1);
    }
  }
  return;
}

