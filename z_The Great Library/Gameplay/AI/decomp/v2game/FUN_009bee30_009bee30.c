// FUN_009bee30 @ 009bee30 body=[[009bee30, 009bee55]]


void FUN_009bee30(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  for (piVar2 = *(int **)(unaff_EDI + 4);
      (*(int **)(unaff_EDI + 4) <= piVar2 && (piVar2 < *(int **)(unaff_EDI + 8)));
      piVar2 = piVar2 + 1) {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x118))(piVar1);
    }
  }
  return;
}

