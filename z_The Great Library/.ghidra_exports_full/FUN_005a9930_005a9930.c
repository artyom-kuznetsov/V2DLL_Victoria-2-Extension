// FUN_005a9930 @ 005a9930 body=[[005a9930, 005a99ce]]


void FUN_005a9930(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(400);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00599640();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x10) = uVar2;
  iVar1 = FUN_00aae9af(400);
  local_8 = 1;
  if (iVar1 != 0) {
    uVar2 = FUN_00599640();
    *(undefined4 *)(in_ECX + 0x14) = uVar2;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  ExceptionList = local_10;
  return;
}

