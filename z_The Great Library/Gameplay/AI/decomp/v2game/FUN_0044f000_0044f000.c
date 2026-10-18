// FUN_0044f000 @ 0044f000 body=[[0044f000, 0044f05d] [0044f061, 0044f080] [0044f084, 0044f097]]


undefined4 FUN_0044f000(void)

{
  undefined4 uVar1;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f97a0();
  local_8 = 0;
  FUN_004f97a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = FUN_0098ab20();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  ExceptionList = local_10;
  return uVar1;
}

