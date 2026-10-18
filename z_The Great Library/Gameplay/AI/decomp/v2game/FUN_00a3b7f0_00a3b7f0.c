// FUN_00a3b7f0 @ 00a3b7f0 body=[[00a3b7f0, 00a3b86f] [00a3b873, 00a3b885]]


int FUN_00a3b7f0(void)

{
  int iVar1;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("allies_country",0xe);
  local_8 = 0;
  iVar1 = FUN_00973bd0(local_2c);
  if (iVar1 == 0) {
    iVar1 = FUN_00973bd0(local_2c);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return iVar1;
}

