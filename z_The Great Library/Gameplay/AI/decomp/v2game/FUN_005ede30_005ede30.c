// FUN_005ede30 @ 005ede30 body=[[005ede30, 005ede8d] [005ede97, 005edeaf] [005edeb9, 005edece] [005eded2, 005edee6] [005edeea, 005edf04]]


void FUN_005ede30(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cd74;
  local_10 = ExceptionList;
  local_8 = 4;
  ExceptionList = &local_10;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
  }
  FUN_005f2b40(param_1 + 0x12);
  if (param_1[0xe] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xe]);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (param_1[10] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
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

