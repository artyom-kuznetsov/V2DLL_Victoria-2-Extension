// FUN_008e2aa0 @ 008e2aa0 body=[[008e2aa0, 008e2b43] [008e2b47, 008e2b5a]]


undefined4 FUN_008e2aa0(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_50;
  uint local_3c;
  undefined4 local_34;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  local_14 = ExceptionList;
  if (param_3 == '\0') {
    ExceptionList = &local_14;
    uVar1 = FUN_00974c50(*(undefined4 *)(in_ECX + 0x1c));
    local_c = 1;
    FUN_0042c180(param_1,uVar1);
  }
  else {
    ExceptionList = &local_14;
    uVar1 = FUN_00974c50(*(undefined4 *)(in_ECX + 0x1c));
    local_c = 0;
    FUN_0042c180(param_1,uVar1);
    local_34 = local_50;
    local_20 = local_3c;
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  ExceptionList = local_14;
  return param_1;
}

