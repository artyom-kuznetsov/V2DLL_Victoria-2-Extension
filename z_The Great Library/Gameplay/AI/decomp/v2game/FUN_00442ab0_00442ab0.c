// FUN_00442ab0 @ 00442ab0 body=[[00442ab0, 00442b6d] [00442b71, 00442ba5] [00442bbb, 00442bed]]


void FUN_00442ab0(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_50 [20];
  uint local_3c;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  local_14 = ExceptionList;
  if ((*(int *)(in_ECX + 0x28) == 0) || (*(int *)(in_ECX + 0x2c) == 0)) {
    ExceptionList = &local_14;
    FUN_00409350(&DAT_00ded94d);
    FUN_00409350(&DAT_00ded94d);
  }
  else {
    ExceptionList = &local_14;
    FUN_004cb1d0();
    FUN_00442bf0();
    FUN_0052fc10();
    FUN_00442a60();
    uVar1 = FUN_004cb4d0(*(undefined4 *)(in_ECX + 0x2c),local_50);
    local_c = 0;
    FUN_00408ed0(uVar1,0);
    local_c = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uVar1 = FUN_004cbb60();
    local_c = 1;
    FUN_00408ed0(uVar1,0);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

