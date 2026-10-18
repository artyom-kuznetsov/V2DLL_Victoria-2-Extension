// FUN_009e79e0 @ 009e79e0 body=[[009e79e0, 009e7a7a] [009e7a7e, 009e7a8e]]


void FUN_009e79e0(undefined4 param_1,int param_2)

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
  if (param_2 == 0x18) {
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0x18,0);
    ExceptionList = local_10;
    return;
  }
  if (param_2 == 0x19) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
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

