// FUN_00a5b4e0 @ 00a5b4e0 body=[[00a5b4e0, 00a5b55b]]


undefined4 FUN_00a5b4e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b524bb;
  local_10 = ExceptionList;
  if (param_2 == 0x89) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x1a8);
    local_8 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_00a56810(iVar1,*(undefined4 *)(in_ECX + 0x34),*(undefined4 *)(in_ECX + 0x38));
      ExceptionList = local_10;
      return uVar2;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_009a0f40();
  }
  ExceptionList = local_10;
  return 0;
}

