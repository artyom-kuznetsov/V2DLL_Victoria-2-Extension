// FUN_005bb7d0 @ 005bb7d0 body=[[005bb7d0, 005bb837] [005bb83b, 005bb855] [005bb859, 005bb8f3] [005bb8f7, 005bb92b] [005bb92f, 005bb99b] [005bb99f, 005bb9e7] [005bb9eb, 005bba05] [005bba09, 005bba23] [005bba27, 005bba3b]]


/* WARNING: Removing unreachable block (ram,0x005bb9df) */
/* WARNING: Removing unreachable block (ram,0x005bb82f) */
/* WARNING: Removing unreachable block (ram,0x005bb993) */

undefined1 * FUN_005bb7d0(undefined1 *param_1,undefined4 param_2,char param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  int in_stack_0000002c;
  char cStack00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  uint in_stack_0000004c;
  undefined8 local_74;
  undefined4 local_60;
  uint local_4c;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b71c6a;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 2;
  uStack_7 = 0;
  if (in_stack_0000002c == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_74 = 0xded94d;
    *param_1 = 0;
    FUN_00409350();
    if (0xf < in_stack_00000024) {
      local_74 = CONCAT44(param_4,&UNK_005bb856);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_74 = 0xffffffff00000000;
    ExceptionList = &local_10;
    FUN_00448aa0();
    iVar1 = in_stack_0000002c;
    if (cStack00000030 == '\0') {
      in_stack_0000002c = -in_stack_0000002c;
    }
    local_74 = CONCAT44(&param_4,local_28);
    FUN_009a8ee0();
    local_8 = 3;
    local_74 = CONCAT44(0x5bb8af,(undefined4)local_74);
    iVar2 = FUN_00475500();
    local_74 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_74 = 0xffffffff00000000;
    local_8 = 4;
    FUN_00448aa0();
    if (0xf < local_4c) {
      local_74 = CONCAT44(local_60,&UNK_005bb8f4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 5;
    local_74 = CONCAT44(0x5bb910,(undefined4)local_74);
    FUN_009adb70();
    _local_8 = CONCAT31(uStack_7,2);
    if (local_24 != 0) {
      local_74 = CONCAT44(0x5bb923,(undefined4)local_74);
      FUN_009e6a80();
      local_74 = CONCAT44(local_24,&UNK_005bb92c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (in_stack_0000002c < 1) {
      local_74 = 0x300df8540;
    }
    else {
      local_74 = 0x300dfd1d4;
    }
    FUN_00448740();
    if ((0 < iVar1) && (param_3 != '\0')) {
      local_74 = 0x100df9640;
      FUN_00448740();
    }
    _cStack00000030 = &local_74;
    local_74 = CONCAT44(in_stack_00000034,iVar1);
    FUN_00988a50();
    local_74 = 0xffffffff00000000;
    local_8 = 6;
    FUN_00448aa0();
    local_8 = 2;
    local_74 = 0xffffffff00000000;
    FUN_00448aa0();
    local_74 = 0x300dfc7b4;
    FUN_00448740();
    local_74 = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    if (0xf < in_stack_00000024) {
      local_74 = CONCAT44(param_4,&UNK_005bba06);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (in_stack_0000004c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  in_stack_00000024 = 0xf;
  in_stack_00000020 = 0;
  param_4 = param_4 & 0xffffff00;
  local_74 = CONCAT44(in_stack_00000038,&UNK_005bba24);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

