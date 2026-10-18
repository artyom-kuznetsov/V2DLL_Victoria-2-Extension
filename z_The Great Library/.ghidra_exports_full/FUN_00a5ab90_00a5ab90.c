// FUN_00a5ab90 @ 00a5ab90 body=[[00a5ab90, 00a5ac07]]


undefined4 FUN_00a5ab90(undefined4 param_1,int param_2)

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
  if (param_2 == 0x7c) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x29c);
    local_8 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_009f1d30(iVar1,*(undefined4 *)(in_ECX + 0x34));
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

