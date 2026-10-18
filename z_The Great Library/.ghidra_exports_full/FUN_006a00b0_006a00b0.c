// FUN_006a00b0 @ 006a00b0 body=[[006a00b0, 006a0109] [006a010d, 006a0187] [006a019d, 006a01c3]]


void FUN_006a00b0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    ExceptionList = &local_10;
    uVar3 = FUN_004f97a0();
    local_8 = 0;
    FUN_00408ed0(uVar3,0,0xffffffff);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
  }
  iVar2 = DAT_01258a48;
  local_8 = 0xffffffff;
  if (param_2 == 0) {
    *param_3 = 0;
    param_3[0x11] = *(undefined4 *)(param_1 + 0x1c);
    param_3[0x12] = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    param_3[0x18] = 0xb;
    piVar1 = *(int **)(*(int *)(param_1 + 0x860) +
                      *(int *)(*(int *)(*(int *)(iVar2 + 0x38) + param_2 * 4) + 0x50) * 4);
    param_3[0x16] = piVar1[0x14];
    *param_3 = 0xb;
    uVar3 = (**(code **)(*piVar1 + 0x18))(local_48);
    local_8 = 1;
    *param_3 = 3;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

