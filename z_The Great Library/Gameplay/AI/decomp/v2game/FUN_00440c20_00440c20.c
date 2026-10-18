// FUN_00440c20 @ 00440c20 body=[[00440c20, 00440d20] [00440d24, 00440d38]]


undefined1 * FUN_00440c20(undefined1 *param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  puStack_c = &LAB_00b82d39;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  if (param_2 == *(int *)(in_ECX + 0x28)) {
    FUN_00408ed0(in_ECX + 0xe4,0,0xffffffff);
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 == *(int *)(in_ECX + 0x3c)) {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x80))();
    uVar2 = FUN_004f97a0();
    local_8 = 1;
  }
  else {
    if (param_2 != *(int *)(in_ECX + 0x40)) {
      ExceptionList = pvVar1;
      return param_1;
    }
    (**(code **)(**(int **)(in_ECX + 0x40) + 0x80))();
    uVar2 = FUN_004f97a0();
    local_8 = 2;
  }
  FUN_00408ed0(uVar2,0,0xffffffff);
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30);
}

