// FUN_00a40100 @ 00a40100 body=[[00a40100, 00a401d2]]


void FUN_00a40100(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
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
  if (param_2 == 0xb) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_2c,0);
    uVar1 = FUN_00a400a0();
    *(undefined4 *)(in_ECX + 8) = uVar1;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    if (param_2 == 0xd9) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x10,0);
      uVar1 = FUN_00a6f980();
      *(undefined4 *)(in_ECX + 0xc) = uVar1;
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_009a0f40();
  }
  ExceptionList = local_10;
  return;
}

