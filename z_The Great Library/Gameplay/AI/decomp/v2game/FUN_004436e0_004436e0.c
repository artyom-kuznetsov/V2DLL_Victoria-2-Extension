// FUN_004436e0 @ 004436e0 body=[[004436e0, 00443746] [0044374a, 00443776]]


/* WARNING: Removing unreachable block (ram,0x0044373e) */

void FUN_004436e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d732;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMapIconManagerImpl::vftable;
  local_8 = 0;
  FUN_00409350("interface/mapicons.gui",0x16);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_009a4ca0(param_1);
  local_8 = 0xffffffff;
  FUN_004438e0(param_1);
  ExceptionList = local_10;
  return;
}

