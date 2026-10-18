// FUN_007e8eb0 @ 007e8eb0 body=[[007e8eb0, 007e8ef7] [007e8efb, 007e8f33] [007e8f37, 007e8f62] [007e8f66, 007e8f8c] [007e8f90, 007e8fc2]]


void FUN_007e8eb0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b43082;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMaskedSpriteType::vftable;
  local_8 = 3;
  iVar1 = param_1[0x88];
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 4) + 8))(*(int **)(iVar1 + 4));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (-1 < (int)param_1[0x84]) {
    FUN_009bcda0();
  }
  if (-1 < (int)param_1[0x85]) {
    FUN_009bcda0();
  }
  if (0xf < (uint)param_1[0x82]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x7d]);
  }
  param_1[0x82] = 0xf;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  if (0xf < (uint)param_1[0x75]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x70]);
  }
  param_1[0x75] = 0xf;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (0xf < (uint)param_1[0x6e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x69]);
  }
  param_1[0x6e] = 0xf;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  local_8 = 0xffffffff;
  FUN_00a29120();
  ExceptionList = local_10;
  return;
}

