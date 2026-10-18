// FUN_006a6ca0 @ 006a6ca0 body=[[006a6ca0, 006a6d36]]


void FUN_006a6ca0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006a6d40(1);
  FUN_006a6d40(0);
  *(undefined1 *)(in_ECX + 0x11) = 1;
  if (DAT_01262ef4 == 0) {
    iVar1 = FUN_00aae9af(0x44);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006a4e30();
    }
    local_8 = 0xffffffff;
    FUN_006a59b0(uVar2);
  }
  FUN_006a52e0(DAT_01262ef4);
  FUN_006742d0(*(undefined4 *)(DAT_012588e8 + 0xb24));
  ExceptionList = local_10;
  return;
}

