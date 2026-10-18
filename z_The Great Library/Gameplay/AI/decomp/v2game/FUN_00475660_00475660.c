// FUN_00475660 @ 00475660 body=[[00475660, 00475749]]


undefined1 * FUN_00475660(undefined1 *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40559;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  if (param_2 == 0) {
    FUN_00409350("NEVER",5);
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 == 1) {
    FUN_00409350("MONTHLY",7);
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 == 2) {
    FUN_00409350("HALFYEAR",8);
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 == 3) {
    FUN_00409350("YEARLY",6);
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 == 4) {
    FUN_004012f0(param_1);
  }
  ExceptionList = local_10;
  return param_1;
}

