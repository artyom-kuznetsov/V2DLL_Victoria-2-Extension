// FUN_0066edf0 @ 0066edf0 body=[[0066edf0, 0066ee5b]]


void FUN_0066edf0(void)

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
  if (*(char *)(DAT_012588e8 + 0xd11) == '\0') {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x7c);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00647990(iVar1,in_ECX);
    }
    local_8 = 0xffffffff;
    FUN_006480e0(uVar2);
  }
  ExceptionList = local_10;
  return;
}

