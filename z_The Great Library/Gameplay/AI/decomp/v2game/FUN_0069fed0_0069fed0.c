// FUN_0069fed0 @ 0069fed0 body=[[0069fed0, 0069ff31] [0069ff35, 006a0089]]


void FUN_0069fed0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_4 != 0) {
    ExceptionList = &local_14;
    uVar3 = FUN_004f97a0();
    local_c = 0;
    FUN_00408ed0(uVar3,0,0xffffffff);
    local_c = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
  }
  local_c = 0xffffffff;
  switch(param_2) {
  case 0:
    *param_3 = 0;
    param_3[0x11] = *(undefined4 *)(param_1 + 0x1c);
    param_3[0x12] = *(undefined4 *)(param_1 + 0x20);
    ExceptionList = local_14;
    return;
  case 1:
    iVar4 = *(int *)(param_1 + 0x12e8);
    *param_3 = 0xd;
    param_3[0x16] = iVar4 * 4;
    ExceptionList = local_14;
    return;
  case 2:
    iVar4 = *(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) >> 2;
    break;
  case 3:
    iVar4 = 0;
    for (piVar1 = *(int **)(param_1 + 0xe44); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar4 = iVar4 + *(int *)(*piVar1 + 0x68);
    }
    *param_3 = 0xb;
    param_3[0x16] = iVar4;
    ExceptionList = local_14;
    return;
  case 4:
    FUN_0096ba50(&local_40);
    *param_3 = 10;
    param_3[0x14] = local_40;
    param_3[0x15] = local_3c;
    ExceptionList = local_14;
    return;
  case 5:
    uVar3 = *(undefined4 *)(param_1 + 2000);
    uVar2 = *(undefined4 *)(param_1 + 0x7d4);
    *param_3 = 8;
    param_3[0x14] = uVar3;
    param_3[0x15] = uVar2;
    ExceptionList = local_14;
    return;
  case 6:
    iVar4 = FUN_005db9b0();
    break;
  case 7:
    iVar4 = FUN_005dba20();
    break;
  default:
    goto switchD_0069ff41_default;
  }
  *param_3 = 0xb;
  param_3[0x16] = iVar4;
switchD_0069ff41_default:
  ExceptionList = local_14;
  return;
}

