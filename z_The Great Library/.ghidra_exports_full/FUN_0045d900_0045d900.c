// FUN_0045d900 @ 0045d900 body=[[0045d900, 0045d969] [0045d97e, 0045d99d]]


void FUN_0045d900(undefined4 param_1,int param_2)

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
  if (param_2 == 0x3b6) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)(in_ECX + 8) + 0xc))(param_1);
  }
  else if (param_2 == 0x7df) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_2c,0);
    FUN_00a840b0();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

