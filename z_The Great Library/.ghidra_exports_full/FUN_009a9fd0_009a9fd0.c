// FUN_009a9fd0 @ 009a9fd0 body=[[009a9fd0, 009aa021] [009aa027, 009aa044] [009aa048, 009aa068]]


void FUN_009a9fd0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41cb3;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_009adb70();
  if (param_1[10] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_00e38ecc;
  if (0xf < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_10;
  return;
}

