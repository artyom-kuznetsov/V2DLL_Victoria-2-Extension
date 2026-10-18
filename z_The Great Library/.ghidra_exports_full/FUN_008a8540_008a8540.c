// FUN_008a8540 @ 008a8540 body=[[008a8540, 008a85c1] [008a85c5, 008a85d7]]


void FUN_008a8540(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_30 [5];
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  puVar1 = local_30;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x20))(puVar1,param_2,0);
  local_8 = 0;
  FUN_00989330(puVar1);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}

