// FUN_008bc280 @ 008bc280 body=[[008bc280, 008bc2fb]]


void FUN_008bc280(void)

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
  if (DAT_0125eadc == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x9c);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00576fe0(iVar1);
    }
    local_8 = 0xffffffff;
    FUN_0057ab10(uVar2);
  }
  uVar2 = FUN_005661b0(in_ECX + 0x20);
  *(undefined4 *)(in_ECX + 0x1c) = uVar2;
  ExceptionList = local_10;
  return;
}

