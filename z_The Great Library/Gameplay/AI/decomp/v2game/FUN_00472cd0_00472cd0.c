// FUN_00472cd0 @ 00472cd0 body=[[00472cd0, 00472de0] [00472de4, 00472df4]]


void FUN_00472cd0(void)

{
  char cVar1;
  int in_ECX;
  undefined4 local_50;
  uint local_3c;
  undefined4 local_34 [5];
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b828b8;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0xc) == 0) ||
     (ExceptionList = &local_10, cVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x34))(),
     cVar1 == '\0')) {
    local_18 = *(undefined4 *)(in_ECX + 0x10);
    if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4
                                           ) + 0xe64) + 0x50) + 0x20) == *(int *)(in_ECX + 0x14)) {
      FUN_004f97a0();
      local_8 = 1;
      FUN_0042c180();
      local_50 = local_34[0];
      local_3c = local_20;
    }
    else {
      FUN_004f97a0();
      local_8 = 2;
      FUN_0042c180();
    }
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x2c))(local_34);
    local_8 = 0;
    FUN_0042c180();
    local_50 = local_34[0];
    local_3c = local_20;
  }
  if (local_3c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50);
}

