// FUN_007c6a20 @ 007c6a20 body=[[007c6a20, 007c6a89] [007c6a8d, 007c6aac] [007c6ab0, 007c6ac4]]


undefined4 FUN_007c6a20(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_EDX;
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
  piVar1 = *(int **)(in_EDX + 100);
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 100) + 0x1c))(local_48);
  local_8 = 0;
  (**(code **)(*piVar1 + 0x1c))(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar2 = FUN_0098ab20();
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
  return uVar2;
}

