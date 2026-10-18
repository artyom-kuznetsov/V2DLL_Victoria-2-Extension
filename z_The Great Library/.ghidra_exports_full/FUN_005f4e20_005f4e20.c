// FUN_005f4e20 @ 005f4e20 body=[[005f4e20, 005f4ee5]]


void FUN_005f4e20(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 *puVar2;
  undefined1 local_58 [28];
  undefined **local_3c;
  undefined4 local_34;
  undefined1 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a710();
  local_3c = CStateBuildingData::vftable;
  local_34 = 1;
  FUN_00988530();
  local_14 = 1;
  local_8 = 0;
  puVar2 = local_58;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x18))(puVar2);
  local_8._0_1_ = 1;
  FUN_004012e0(puVar2,uVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00408ad0();
  local_34 = *(undefined4 *)(in_ECX + 0x14);
  local_14 = *(undefined1 *)(in_ECX + 0x18);
  FUN_0099f010();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  FUN_004010c0();
  ExceptionList = local_10;
  return;
}

