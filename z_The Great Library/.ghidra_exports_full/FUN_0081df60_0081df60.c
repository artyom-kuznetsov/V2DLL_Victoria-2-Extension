// FUN_0081df60 @ 0081df60 body=[[0081df60, 0081e035]]


int FUN_0081df60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52d13;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0044bc60(param_1);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  FUN_00820da0();
  iVar1 = FUN_00aae9af(0x260);
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_0084a150(iVar1,param_1,param_2,param_3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(int **)(param_1 + 0x38) = piVar2;
  (**(code **)(*piVar2 + 0x1c))();
  FUN_005dcac0();
  (**(code **)(**(int **)(param_1 + 0x38) + 0xcc))();
  FUN_005dcb70();
  ExceptionList = local_10;
  return param_1;
}

