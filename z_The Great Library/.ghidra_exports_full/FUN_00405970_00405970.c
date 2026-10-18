// FUN_00405970 @ 00405970 body=[[00405970, 00405a38]]


void FUN_00405970(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b630f6;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    puVar2 = (undefined4 *)FUN_00992740(iVar1,param_2,1);
  }
  local_8._0_1_ = 2;
  FUN_004037c0();
  local_8 = (uint)local_8._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)();
  }
  ExceptionList = local_10;
  return;
}

