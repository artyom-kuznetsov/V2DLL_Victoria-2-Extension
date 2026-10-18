// FUN_00aab770 @ 00aab770 body=[[00aab770, 00aab7f2]]


void FUN_00aab770(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3690b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00aab140();
  }
  *(undefined4 *)(in_ECX + 4) = uVar2;
  local_8 = 1;
  FUN_00aa9e20();
  ExceptionList = local_10;
  return;
}

