// FUN_007a3fa0 @ 007a3fa0 body=[[007a3fa0, 007a400d] [007a4011, 007a4025]]


void FUN_007a3fa0(char param_1)

{
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_1 == '\0') {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("ChannelSelectionButton",0x16);
    local_8 = 0;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
    FUN_009a8b10();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  *(char *)(in_ECX + 0x18) = param_1;
  ExceptionList = local_10;
  return;
}

