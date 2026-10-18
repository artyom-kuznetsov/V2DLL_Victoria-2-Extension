// FUN_0072fd90 @ 0072fd90 body=[[0072fd90, 0072fe41] [0072fe45, 0072fe60] [0072fe64, 0072fe7a] [0072fe7e, 0072fe94] [0072fe98, 0072fec0] [0072fec4, 0072fede] [0072fee2, 0072fef6]]


uint FUN_0072fd90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint in_stack_00000024;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  uint in_stack_0000004c;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cb50;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  iVar2 = FUN_009c16d0(param_2,param_3);
  iVar2 = *(int *)(iVar2 + 0x48);
  iVar3 = FUN_009c16d0(in_stack_00000030,in_stack_00000034);
  uVar4 = *(uint *)(iVar3 + 0x48);
  if ((iVar2 == 0) || (uVar4 == 0)) {
    if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_4);
    }
    if (0xf < in_stack_0000004c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_stack_00000038);
    }
    ExceptionList = local_10;
    return uVar4 & 0xffffff00;
  }
  piVar1 = *(int **)(iVar2 + 0x16c);
  (**(code **)(**(int **)(uVar4 + 0x16c) + 0x18))(local_4c);
  local_8._0_1_ = 2;
  (**(code **)(*piVar1 + 0x18))(local_30);
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar4 = FUN_0098ab20();
  local_11 = (undefined1)uVar4;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  if (0xf < in_stack_0000004c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000038);
  }
  ExceptionList = local_10;
  return uVar4;
}

