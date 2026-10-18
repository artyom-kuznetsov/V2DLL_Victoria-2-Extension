// FUN_008fff30 @ 008fff30 body=[[008fff30, 008ffff9] [008ffffd, 00900010]]


undefined4 FUN_008fff30(undefined4 param_1,undefined4 param_2,char param_3)

{
  int in_ECX;
  undefined1 local_50 [20];
  uint local_3c;
  undefined1 local_34 [20];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
  if (param_3 == '\0') {
    FUN_00988bb0(local_34,2);
    local_c = 1;
    FUN_0042c180();
  }
  else {
    FUN_00988bb0(local_50,2);
    local_c = 0;
    FUN_0042c180();
    local_20 = local_3c;
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return param_1;
}

