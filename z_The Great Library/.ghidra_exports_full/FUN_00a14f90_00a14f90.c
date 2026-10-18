// FUN_00a14f90 @ 00a14f90 body=[[00a14f90, 00a14fe5]]


void FUN_00a14f90(void)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b54edc;
  pvStack_10 = ExceptionList;
  if (DAT_01258b30 != (int *)0x0) {
    local_8 = 0;
    ExceptionList = &pvStack_10;
    (**(code **)(*DAT_01258b30 + 0x10))();
    local_8 = 0xffffffff;
    FUN_00a150e4();
    return;
  }
  return;
}

