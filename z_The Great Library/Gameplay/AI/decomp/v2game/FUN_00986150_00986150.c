// FUN_00986150 @ 00986150 body=[[00986150, 0098619d] [009861a1, 009861c7] [009861cb, 009861f5] [009861f9, 00986282]]


void FUN_00986150(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b3e660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e375e8;
  local_8 = 4;
  piVar1 = (int *)param_1[0x50];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x6c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x6c]);
  }
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  if (0xf < (uint)param_1[0x69]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[100]);
  }
  param_1[0x69] = 0xf;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  if (0xf < (uint)param_1[0x62]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x5d]);
  }
  param_1[0x62] = 0xf;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  local_8 = local_8 & 0xffffff00;
  piVar1 = (int *)param_1[0x52];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x53];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x54];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  FUN_007d9930();
  ExceptionList = local_10;
  return;
}

