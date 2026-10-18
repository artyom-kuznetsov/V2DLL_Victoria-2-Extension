// FUN_006a0460 @ 006a0460 body=[[006a0460, 006a04bc] [006a04c0, 006a05dd]]


void FUN_006a0460(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 local_9c [56];
  undefined1 local_64 [28];
  undefined1 local_48 [28];
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7c1fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    ExceptionList = &local_10;
    uVar1 = FUN_004f97a0();
    local_8 = 0;
    FUN_00408ed0(uVar1,0,0xffffffff);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
  }
  local_8 = 0xffffffff;
  switch(param_2) {
  case 0:
    *param_3 = 0;
    param_3[0x11] = *(undefined4 *)(param_1 + 0x1c);
    param_3[0x12] = *(undefined4 *)(param_1 + 0x20);
    ExceptionList = local_10;
    return;
  case 1:
    uVar1 = FUN_0050e9e0();
    local_8 = 1;
    *param_3 = 3;
    FUN_00408ed0(uVar1,0,0xffffffff);
    break;
  case 2:
    uVar1 = (**(code **)(**(int **)(param_1 + 0x12b0) + 0x18))(local_48);
    local_8 = 2;
    *param_3 = 3;
    FUN_00408ed0(uVar1,0,0xffffffff);
    break;
  case 3:
    uVar1 = FUN_009790b0(*(undefined4 *)(param_1 + 0x84c),local_64);
    local_8 = 3;
    *param_3 = 3;
    FUN_00408ed0(uVar1,0,0xffffffff);
    break;
  case 4:
    uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x84c) + 0x54) + 0x18))(local_9c);
    local_8 = 4;
    *param_3 = 3;
    FUN_00408ed0(uVar1,0,0xffffffff);
    break;
  default:
    goto switchD_006a04cc_default;
  }
  FUN_00408ad0();
switchD_006a04cc_default:
  ExceptionList = local_10;
  return;
}

