// FUN_00442750 @ 00442750 body=[[00442750, 00442816] [0044281a, 00442841]]


undefined1 * FUN_00442750(undefined1 *param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pvVar1 = ExceptionList;
  puStack_c = &LAB_00b3ff11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
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
  if (param_2 == *(int *)(in_ECX + 0x30)) {
    FUN_00408ed0(in_ECX + 0x6c,0,0xffffffff);
  }
  else {
    if (param_2 != *(int *)(in_ECX + 0x38)) {
      ExceptionList = pvVar1;
      return param_1;
    }
    (**(code **)(**(int **)(in_ECX + 0x38) + 0x80))();
    uVar2 = FUN_004f97a0();
    local_8 = 1;
    FUN_00408ed0(uVar2,0,0xffffffff);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
  }
  FUN_00408ed0(in_ECX + 0x88,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

