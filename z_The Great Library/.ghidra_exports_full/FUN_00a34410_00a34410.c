// FUN_00a34410 @ 00a34410 body=[[00a34410, 00a34486] [00a3448a, 00a3449b]]


void FUN_00a34410(void)

{
  undefined4 uVar1;
  undefined4 ***pppuVar2;
  undefined4 **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00a32ba0();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffffff00);
  FUN_00408ed0(uVar1,0,0xffffffff);
  local_8 = 0;
  pppuVar2 = (undefined4 ***)local_2c[0];
  if (local_18 < 0x10) {
    pppuVar2 = local_2c;
  }
  FUN_00a32c20(pppuVar2);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

