// FUN_009f7340 @ 009f7340 body=[[009f7340, 009f739d] [009f73a1, 009f73db] [009f73df, 009f73ec] [009f73f0, 009f7404]]


int FUN_009f7340(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009f74c0(param_2);
  local_8 = 0;
  iVar1 = FUN_009f7dd0(param_3);
  if (iVar1 != -1) {
    iVar1 = FUN_009f7dd0(param_3);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    ExceptionList = local_10;
    return iVar1 + 1;
  }
  iVar1 = FUN_009f74c0(*(undefined2 *)(param_1 + 0x3a));
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  ExceptionList = local_10;
  return *(int *)(iVar1 + 0x10);
}

