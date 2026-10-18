// FUN_008953e0 @ 008953e0 body=[[008953e0, 00895442] [00895446, 00895461] [00895465, 00895478]]


undefined4 FUN_008953e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int in_ECX;
  uint in_stack_00000020;
  uint local_3c;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68e60;
  local_10 = ExceptionList;
  local_14 = (undefined1 *)&local_3c;
  local_8 = 0;
  local_3c = *(uint *)(in_ECX + 0x20);
  ExceptionList = &local_10;
  local_3c = FUN_00988970(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0042c180(param_1);
  if (0xf < local_1c) {
    local_3c = local_30[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < in_stack_00000020) {
    local_3c = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

