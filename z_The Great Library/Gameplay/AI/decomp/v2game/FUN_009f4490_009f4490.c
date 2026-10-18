// FUN_009f4490 @ 009f4490 body=[[009f4490, 009f44d9] [009f44dd, 009f44fe] [009f4502, 009f4520]]


void FUN_009f4490(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45af3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3d100;
  local_8 = 1;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if (0xf < (uint)param_1[0x17]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x12]);
  }
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *param_1 = CCommand::vftable;
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

