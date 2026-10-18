// FUN_0043d420 @ 0043d420 body=[[0043d420, 0043d50b] [0043d50f, 0043d546] [0043d54c, 0043d739] [0043d73d, 0043d758] [0043d75c, 0043d777] [0043d77b, 0043d79c] [0043d7a0, 0043d7b4]]


/* WARNING: Removing unreachable block (ram,0x0043d55e) */

undefined1 * FUN_0043d420(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EDX;
  undefined8 uVar4;
  uint local_8c;
  uint local_68;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b62c0b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined2 *)(param_2 + 0x54) = 0;
  *(undefined2 *)(param_2 + 0x56) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  if (in_EDX == *(int *)(param_1 + 0xb0)) {
    FUN_00409350();
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 2;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 3;
    FUN_00408ed0();
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if ((in_EDX == *(int *)(param_1 + 0xb4)) || (in_EDX == *(int *)(param_1 + 0xb8))) {
    local_1c = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x228);
    local_18 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x22c);
    FUN_004a5020();
    (**(code **)(*(int *)(*(int *)(param_1 + 0xac) + 0x54) + 0x10))();
    uVar4 = FUN_00b31c36();
    __allmul(uVar4);
    FUN_0043e0d0();
    local_8 = 5;
    uVar2 = FUN_0043e0d0();
    local_8._0_1_ = 6;
    uVar3 = FUN_0043e0d0();
    local_8._0_1_ = 7;
    FUN_0043e9a0(local_5c,&DAT_00df8258,uVar3,&DAT_00df8254,uVar2);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00408ed0();
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = local_40 & 0xffffff00;
    if (0xf < local_8c) {
      local_2c = 0xf;
      local_48 = 0xf;
      local_4c = 0;
      local_30 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (in_EDX == *(int *)(param_1 + 0x20)) {
    FUN_009885d0();
    local_8 = 9;
    FUN_009a8ee0();
    local_8._0_1_ = 10;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0xb;
    FUN_00408ed0();
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009a9740();
    FUN_00408ad0();
  }
  ExceptionList = local_10;
  return param_2;
}

