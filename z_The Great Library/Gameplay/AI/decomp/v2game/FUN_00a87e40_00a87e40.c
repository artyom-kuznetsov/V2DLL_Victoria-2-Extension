// FUN_00a87e40 @ 00a87e40 body=[[00a87e40, 00a87ed9] [00a87edd, 00a87f09] [00a87f0d, 00a87f37] [00a87f3b, 00a87f65] [00a87f69, 00a87fc3]]


void FUN_00a87e40(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b40b1d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e447e8;
  param_1[0x15] = &PTR_LAB_00e44900;
  local_8 = 5;
  for (iVar1 = *(int *)(param_1[0x25] + 0xe8);
      (iVar1 != 0 &&
      ((*(undefined4 **)(iVar1 + 4) != param_1 || (*(int *)(iVar1 + 8) != param_1[0x2c]))));
      iVar1 = *(int *)(iVar1 + 0x10)) {
  }
  FUN_0099e660(iVar1);
  FUN_009962f0(param_1[0x26]);
  if (0xf < (uint)param_1[0x4a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x45]);
  }
  param_1[0x4a] = 0xf;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (0xf < (uint)param_1[0x43]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3e]);
  }
  param_1[0x43] = 0xf;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if ((uint)param_1[0x3c] < 0x10) {
    param_1[0x3c] = 0xf;
    param_1[0x3b] = 0;
    *(undefined1 *)(param_1 + 0x37) = 0;
    if ((uint)param_1[0x35] < 0x10) {
      param_1[0x35] = 0xf;
      param_1[0x34] = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      local_8 = local_8 & 0xffffff00;
      if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x2e])(1);
      }
      local_8 = 0xffffffff;
      *param_1 = &PTR_FUN_00e3a6d8;
      param_1[0x15] = &PTR_LAB_00e3a7f0;
      FUN_009c2f40();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x30]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x37]);
}

