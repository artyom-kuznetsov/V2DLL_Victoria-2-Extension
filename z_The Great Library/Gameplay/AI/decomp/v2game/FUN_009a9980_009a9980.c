// FUN_009a9980 @ 009a9980 body=[[009a9980, 009a99ec]]


void FUN_009a9980(undefined4 param_1)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x40);
  local_8 = 0;
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = FUN_009a9ce0(iVar1,in_ECX,param_1);
  }
  local_8 = 0xffffffff;
  FUN_009e6810(unaff_ESI,&param_1);
  ExceptionList = local_10;
  return;
}

