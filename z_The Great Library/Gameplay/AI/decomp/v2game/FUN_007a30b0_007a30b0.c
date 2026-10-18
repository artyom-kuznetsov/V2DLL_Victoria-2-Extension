// FUN_007a30b0 @ 007a30b0 body=[[007a30b0, 007a3178]]


void FUN_007a30b0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7a753;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x5c))();
  if (*(char *)(in_ECX + 200) == '\0') {
    iVar1 = FUN_00aae9af();
    local_8 = 0;
    if (iVar1 != 0) {
      FUN_00408ed0();
      local_8._0_1_ = 1;
      FUN_00408ed0(*(undefined4 *)(in_ECX + 0x44),0,0xffffffff);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00a00510(1);
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + 0x38) + 0x18))();
  }
  ExceptionList = local_10;
  return;
}

