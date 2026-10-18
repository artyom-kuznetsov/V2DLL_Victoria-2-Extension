// FUN_00b15540 @ 00b15540 body=[[00b15540, 00b155e7]]


undefined1 FUN_00b15540(void)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  undefined1 uVar3;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39d4c;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffdc;
  if (*in_ECX == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  FUN_00b14fa0(local_1c,0x2c);
  if (local_18 == 2) {
    cVar1 = FUN_00b13f60(uVar2);
    if ((cVar1 == '\0') || (cVar1 = FUN_00b13f60(uVar2), cVar1 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    local_4 = 0xffffffff;
    FUN_00b00960();
    ExceptionList = local_c;
    return uVar3;
  }
  local_4 = 0xffffffff;
  FUN_00b00960();
  ExceptionList = local_c;
  return 0;
}

