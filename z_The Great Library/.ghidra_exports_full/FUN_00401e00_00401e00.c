// FUN_00401e00 @ 00401e00 body=[[00401e00, 00401e7e]]


void FUN_00401e00(int param_1)

{
  int *piVar1;
  int *unaff_EDI;
  
  for (piVar1 = *(int **)(param_1 + 0x40);
      (piVar1 != *(int **)(param_1 + 0x44) && ((int *)*piVar1 != unaff_EDI)); piVar1 = piVar1 + 1) {
  }
  if ((*(int **)(param_1 + 0x40) <= piVar1) && (piVar1 < *(int **)(param_1 + 0x44))) {
    (**(code **)(*(int *)(param_1 + 0x50) + 0x14))();
    for (piVar1 = *(int **)(param_1 + 0x40);
        (piVar1 != *(int **)(param_1 + 0x44) && ((int *)*piVar1 != unaff_EDI)); piVar1 = piVar1 + 1)
    {
    }
    FUN_0068f020();
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 0x24))(1);
    }
    *(undefined1 *)(param_1 + 0x21c) = 1;
  }
  return;
}

