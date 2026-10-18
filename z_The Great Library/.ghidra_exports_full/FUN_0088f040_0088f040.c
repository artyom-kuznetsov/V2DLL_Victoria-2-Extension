// FUN_0088f040 @ 0088f040 body=[[0088f040, 0088f0c1] [0088f0c5, 0088f119] [0088f11d, 0088f134] [0088f138, 0088f146] [0088f14a, 0088f15e]]


/* WARNING: Removing unreachable block (ram,0x0088f12c) */

undefined4 FUN_0088f040(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  void **ppvVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b42600;
  local_10 = ExceptionList;
  local_14 = 0;
  uStack_7 = 0;
  uVar2 = uStack_7;
  uStack_7 = 0;
  ExceptionList = &local_10;
  ppvVar1 = &local_10;
  if (0 < param_3) {
    do {
      ExceptionList = ppvVar1;
      local_8 = 1;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_8 = 2;
      FUN_00448aa0();
      local_8 = 1;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      param_3 = param_3 + -1;
      ppvVar1 = ExceptionList;
      uVar2 = uStack_7;
    } while (param_3 != 0);
  }
  uStack_7 = uVar2;
  local_8 = 1;
  FUN_00408ed0(&param_4,0,0xffffffff);
  uVar3 = (**(code **)(*in_ECX + 0x24))(local_30,param_2);
  _local_8 = CONCAT31(uStack_7,3);
  FUN_00988f20(uVar3);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  ExceptionList = local_10;
  return param_1;
}

