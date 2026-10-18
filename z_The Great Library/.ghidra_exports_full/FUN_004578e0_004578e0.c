// FUN_004578e0 @ 004578e0 body=[[004578e0, 0045792b] [0045792f, 00457944] [00457948, 0045795d] [00457961, 0045797c]]


void FUN_004578e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40721;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsCollector::vftable;
  local_8 = 2;
  FUN_00457980();
  if (param_1[10] != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (param_1[6] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[6]);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_10;
  return;
}

