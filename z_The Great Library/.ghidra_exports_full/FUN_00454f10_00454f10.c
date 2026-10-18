// FUN_00454f10 @ 00454f10 body=[[00454f10, 00454f78] [00454f82, 00454f98] [00454f9c, 00454fb8]]


void FUN_00454f10(int *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b163;
  local_10 = ExceptionList;
  local_8 = 1;
  piVar4 = (int *)*param_1;
  iVar3 = param_1[1] - (int)piVar4 >> 2;
  ppvVar2 = &local_10;
  if (iVar3 != 0) {
    piVar1 = piVar4 + iVar3;
    ExceptionList = &local_10;
    for (; ppvVar2 = ExceptionList, piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  ExceptionList = ppvVar2;
  if (param_1[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_10;
  return;
}

