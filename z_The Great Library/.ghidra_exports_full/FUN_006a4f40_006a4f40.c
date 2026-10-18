// FUN_006a4f40 @ 006a4f40 body=[[006a4f40, 006a4f9f]]


int FUN_006a4f40(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01262ef4 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x44);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006a4e30();
    }
    FUN_006a59b0(uVar2);
  }
  ExceptionList = local_10;
  return DAT_01262ef4;
}

