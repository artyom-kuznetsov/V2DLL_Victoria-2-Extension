// FUN_007c68c0 @ 007c68c0 body=[[007c68c0, 007c6926] [007c692a, 007c6949] [007c694d, 007c6961]]


undefined4 FUN_007c68c0(int param_1,int param_2)

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
  FUN_00974c50(*(undefined4 *)(param_2 + 0x6c));
  local_8 = 0;
  FUN_00974c50(*(undefined4 *)(param_1 + 0x6c));
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

