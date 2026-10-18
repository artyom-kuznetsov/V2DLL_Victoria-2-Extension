// FUN_00874bc0 @ 00874bc0 body=[[00874bc0, 00874c3f] [00874c43, 00874c55]]


void FUN_00874bc0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_3c;
  undefined4 local_30 [5];
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  uStack_3c = 0;
  local_14 = local_58;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = 0;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  puVar1 = local_30;
  (**(code **)(*(int *)(param_1 + 0x5c) + 0x20))(puVar1,param_2,0);
  local_8 = 0;
  FUN_00989330(puVar1);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}

