// FUN_004dd290 @ 004dd290 body=[[004dd290, 004dd2d4] [004dd2d8, 004dd2eb] [004dd2ef, 004dd306] [004dd30a, 004dd33b] [004dd33f, 004dd35d] [004dd361, 004dd378] [004dd37c, 004dd39b]]


void FUN_004dd290(undefined4 *param_1)

{
  int *piVar1;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d0a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CProductionType::vftable;
  local_8 = 0;
  piVar1 = param_1 + 0x54;
  if (piVar1 != local_24) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
  }
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  if (param_1[0x46] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x46]);
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  local_8 = 2;
  FUN_004dee90(param_1 + 0x42);
  if (param_1[0x36] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x36]);
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if (param_1[0x1b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1b]);
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
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

