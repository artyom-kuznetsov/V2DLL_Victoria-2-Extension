// FUN_008a1a70 @ 008a1a70 body=[[008a1a70, 008a1ae0] [008a1ae4, 008a1b27] [008a1b2b, 008a1b3e]]


undefined1 * FUN_008a1a70(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint in_stack_00000020;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68e60;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int **)(in_ECX + 0x20) == (int *)0x0) ||
     (ExceptionList = &local_10, cVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x38))(),
     cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x18))(local_30);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042c180(param_1,uVar2);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

