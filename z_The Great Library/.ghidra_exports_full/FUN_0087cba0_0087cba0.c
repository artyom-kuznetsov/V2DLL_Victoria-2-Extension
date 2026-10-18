// FUN_0087cba0 @ 0087cba0 body=[[0087cba0, 0087ccc0] [0087ccc4, 0087ccda] [0087ccde, 0087ccf4] [0087ccf8, 0087cd0e] [0087cd12, 0087cd29] [0087cd2d, 0087cd6c] [0087cd70, 0087cd83]]


undefined1 * FUN_0087cba0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  uint in_stack_00000020;
  undefined4 local_84;
  uint local_70;
  undefined4 local_68;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ba3b06;
  local_10 = ExceptionList;
  local_14 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if ((DAT_013f34f8 & 1) == 0) {
    DAT_013f34f8 = DAT_013f34f8 | 1;
    local_8 = 1;
    uStack_7 = 0;
    ExceptionList = &local_10;
    FUN_008a8650(0);
    _atexit((_func_4879 *)&DAT_00c84fc0);
  }
  local_8 = 0;
  FUN_00876240(*(undefined4 *)(in_ECX + 0x20));
  if (((DAT_013f34cc == '\0') || (DAT_013f34bc == 0)) ||
     (DAT_013f34bc == *(int *)(DAT_012588e8 + 0xb60))) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_3);
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfd75c,3);
  local_8 = 2;
  uVar1 = FUN_004f97a0();
  local_8 = 3;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  FUN_00409350(&DAT_00defdf4,1);
  local_8 = 4;
  FUN_00988f20(uVar1);
  _local_8 = CONCAT31(uStack_7,5);
  FUN_00988f20(local_4c);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

