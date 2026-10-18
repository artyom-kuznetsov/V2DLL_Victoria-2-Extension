// FUN_00a71a70 @ 00a71a70 body=[[00a71a70, 00a71acb]]


void FUN_00a71a70(int param_1)

{
  bool bVar1;
  int in_EAX;
  int *piVar2;
  
  bVar1 = false;
  for (piVar2 = *(int **)(param_1 + 0x3c);
      (*(int **)(param_1 + 0x3c) <= piVar2 && (piVar2 < *(int **)(param_1 + 0x40)));
      piVar2 = piVar2 + 2) {
    if (*piVar2 == *(int *)(in_EAX + 0x38)) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    FUN_0042ba80();
  }
  FUN_00a72710(param_1 + 0x4c);
  FUN_00a181c0(in_EAX);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

