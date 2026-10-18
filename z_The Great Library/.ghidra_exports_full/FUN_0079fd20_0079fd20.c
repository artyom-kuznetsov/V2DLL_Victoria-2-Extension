// FUN_0079fd20 @ 0079fd20 body=[[0079fd20, 0079feed]]


void FUN_0079fd20(undefined4 param_1,int param_2)

{
  char cVar1;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b437b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8 = 0;
  FUN_00408ed0(unaff_EDI + 0xc,0,0xffffffff);
  local_8 = 0xffffffff;
  cVar1 = FUN_0078b380();
  if (cVar1 != '\0') {
    FUN_0073aa80();
  }
  FUN_00408ed0();
  local_8 = 1;
  FUN_00408ed0(param_2 + 0xc,0,0xffffffff);
  local_8 = 0xffffffff;
  cVar1 = FUN_0078b380();
  if (cVar1 != '\0') {
    FUN_0073aa80();
  }
  FUN_00408ed0();
  local_8 = 2;
  FUN_00408ed0(unaff_EDI + 0xc,0,0xffffffff);
  local_8 = 0xffffffff;
  cVar1 = FUN_0078b380();
  if (cVar1 != '\0') {
    FUN_0073aa80();
  }
  ExceptionList = local_10;
  return;
}

