// FUN_0045fc60 @ 0045fc60 body=[[0045fc60, 0045fcd9] [0045fcdd, 0045fcf5] [0045fcf9, 0045fd16] [0045fd1a, 0045fd36]]


void FUN_0045fc60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d2de;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  piVar2 = param_1 + 2;
  iVar1 = 3;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = param_1 + 5;
  if (piVar2 != local_24) {
    if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar2);
    }
    *piVar2 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (0xf < (uint)param_1[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[10]);
  }
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar2);
  }
  *piVar2 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  ExceptionList = local_10;
  return;
}

