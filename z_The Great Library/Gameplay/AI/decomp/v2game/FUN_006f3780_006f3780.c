// FUN_006f3780 @ 006f3780 body=[[006f3780, 006f37e2] [006f37e6, 006f3805] [006f3809, 006f381b]]


undefined4 FUN_006f3780(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int *in_EDX;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x20))(local_48);
  local_8 = 0;
  (**(code **)(*in_EDX + 0x20))(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = FUN_0098ab20();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return uVar1;
}

