// FUN_009242a0 @ 009242a0 body=[[009242a0, 00924308]]


undefined4 FUN_009242a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0xa8);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00616d30(iVar1,in_ECX,param_2);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

