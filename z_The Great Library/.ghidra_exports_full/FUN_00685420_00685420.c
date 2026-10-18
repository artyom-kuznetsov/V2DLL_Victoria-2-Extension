// FUN_00685420 @ 00685420 body=[[00685420, 00685462]]


void FUN_00685420(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cc48;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00427800(param_1 + 10);
  *param_1 = CDiplomaticAction::vftable;
  ExceptionList = local_10;
  return;
}

