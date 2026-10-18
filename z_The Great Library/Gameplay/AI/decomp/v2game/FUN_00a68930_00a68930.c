// FUN_00a68930 @ 00a68930 body=[[00a68930, 00a68968] [00a68972, 00a68988]]


void FUN_00a68930(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_00a60080();
  for (piVar1 = (int *)**(undefined4 **)(in_ECX + 0x54); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[2]) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  piVar1 = *(int **)(in_ECX + 0x54);
  if (*piVar1 == 0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*piVar1);
}

