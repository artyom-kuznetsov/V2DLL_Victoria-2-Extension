// FUN_007da2f0 @ 007da2f0 body=[[007da2f0, 007da34d]]


undefined4 FUN_007da2f0(void)

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
  iVar1 = FUN_00aae9af(0x13c);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_007d9800(iVar1,in_ECX);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

