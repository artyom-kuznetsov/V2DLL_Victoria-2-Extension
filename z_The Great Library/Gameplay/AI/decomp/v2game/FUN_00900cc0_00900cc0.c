// FUN_00900cc0 @ 00900cc0 body=[[00900cc0, 00900d68] [00900d6c, 00900d7f]]


undefined4 FUN_00900cc0(undefined4 param_1,undefined4 param_2,char param_3)

{
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
  if (param_3 == '\0') {
    ExceptionList = &local_14;
    FUN_00988970(local_34);
    local_c = 1;
    FUN_0042c180(param_1);
  }
  else {
    ExceptionList = &local_14;
    FUN_00988970(local_50);
    local_c = 0;
    FUN_0042c180(param_1);
    local_20 = local_3c;
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return param_1;
}

