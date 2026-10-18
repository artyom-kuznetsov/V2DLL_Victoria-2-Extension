// FUN_007e7540 @ 007e7540 body=[[007e7540, 007e759f]]


int FUN_007e7540(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01268284 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x1c);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008b0060();
    }
    FUN_007e7840(uVar2);
  }
  ExceptionList = local_10;
  return DAT_01268284;
}

