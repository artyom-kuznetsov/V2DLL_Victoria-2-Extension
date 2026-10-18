// FUN_00aa8f10 @ 00aa8f10 body=[[00aa8f10, 00aa8f30] [00aa8f34, 00aa8f4a]]


void FUN_00aa8f10(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    piVar2 = param_1 + 1;
    do {
      if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar2);
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar1 = piVar2 + 4;
      piVar2 = piVar2 + 5;
    } while (piVar1 != param_2);
  }
  return;
}

