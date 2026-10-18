// FUN_00a86db0 @ 00a86db0 body=[[00a86db0, 00a86ddc] [00a86de0, 00a86e18] [00a86e22, 00a86e34]]


void FUN_00a86db0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a558;
  local_8 = 0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (puVar1 = param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(in_ECX[0x1d] + 0x10))(*puVar1,1);
  }
  (**(code **)(*in_ECX + 0xe4))();
  if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

