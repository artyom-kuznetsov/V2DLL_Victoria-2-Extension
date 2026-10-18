// FUN_008601b0 @ 008601b0 body=[[008601b0, 008601d6] [008601e1, 008601ee]]


void FUN_008601b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

