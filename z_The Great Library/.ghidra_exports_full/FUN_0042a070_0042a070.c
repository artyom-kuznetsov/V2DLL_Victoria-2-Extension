// FUN_0042a070 @ 0042a070 body=[[0042a070, 0042a0df] [0042a0e3, 0042a122]]


void FUN_0042a070(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xc) != DAT_01259abc) {
    ExceptionList = &local_10;
    FUN_0043acd0(in_ECX + 0xc,local_2c);
    local_8 = 0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(in_ECX + 8);
  if (piVar1 != (int *)0x0) {
    FUN_009a0940(param_1);
    (**(code **)(*piVar1 + 4))(param_1);
  }
  ExceptionList = local_10;
  return;
}

