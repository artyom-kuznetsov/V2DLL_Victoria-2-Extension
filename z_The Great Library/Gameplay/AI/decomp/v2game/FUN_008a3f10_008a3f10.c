// FUN_008a3f10 @ 008a3f10 body=[[008a3f10, 008a3ff3] [008a3ff7, 008a400d] [008a4011, 008a4027] [008a402b, 008a4042] [008a4046, 008a4085] [008a4089, 008a409c]]


undefined1 * FUN_008a3f10(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int in_ECX;
  uint in_stack_00000020;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b67e4b;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if (DAT_0125eadc == 0) {
    ExceptionList = &local_10;
    local_14 = FUN_00aae9af(0x9c);
    local_8._0_1_ = 1;
    if (local_14 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00576fe0(local_14);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0057ab10(uVar1);
  }
  piVar2 = (int *)FUN_0057b0a0(in_ECX + 0x20);
  if (piVar2 == (int *)0x0) {
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
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 2;
  uVar1 = (**(code **)(*piVar2 + 0x18))(local_68);
  local_8._0_1_ = 3;
  FUN_0042c180(local_4c,uVar1);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00988f20(local_30);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

