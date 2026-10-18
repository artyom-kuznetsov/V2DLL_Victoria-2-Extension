// FUN_0073ef10 @ 0073ef10 body=[[0073ef10, 0073f055]]


void FUN_0073ef10(void)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(*(int *)(unaff_EDI + 0x240) + 0x130) + 0x67) != '\0') {
    ExceptionList = &local_10;
    FUN_0074a6a0();
  }
  if (*(char *)(*(int *)(*(int *)(unaff_EDI + 0x244) + 0xd8) + 0x67) != '\0') {
    FUN_007504e0();
  }
  FUN_00409350();
  local_8 = 0;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00409350("province_buildings",0x12);
  local_8 = 0xffffffff;
  FUN_0073c930(0);
  FUN_00409350();
  local_8 = 2;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00409350("province_buildings",0x12);
  local_8 = 0xffffffff;
  FUN_0073c930(1);
  ExceptionList = local_10;
  return;
}

