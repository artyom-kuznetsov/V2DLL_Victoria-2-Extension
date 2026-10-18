// FUN_0069fd00 @ 0069fd00 body=[[0069fd00, 0069fd61] [0069fd65, 0069feb5]]


void FUN_0069fd00(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 local_50;
  uint local_3c;
  undefined1 local_34 [24];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_4 != 0) {
    ExceptionList = &local_14;
    uVar4 = FUN_004f97a0();
    local_c = 0;
    FUN_00408ed0(uVar4,0,0xffffffff);
    local_c = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
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
    uVar4 = FUN_00537a30(param_1,local_34);
    local_14 = (void *)0x1;
    *param_3 = 3;
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00408ad0();
    ExceptionList = pvStack_1c;
    return;
  case 2:
    uVar4 = *(undefined4 *)(param_1 + 0x1a0);
    uVar1 = *(undefined4 *)(param_1 + 0x1a4);
    *param_3 = 8;
    param_3[0x15] = uVar1;
    break;
  case 3:
    uVar4 = *(undefined4 *)(param_1 + 0x198);
    uVar1 = *(undefined4 *)(param_1 + 0x19c);
    *param_3 = 8;
    param_3[0x15] = uVar1;
    break;
  case 4:
    iVar2 = *(int *)(*(int *)(param_1 + 0xbcc) + 0x28c);
    iVar3 = *(int *)(param_1 + 0xea0);
    *param_3 = 5;
    param_3[0x13] = iVar2 + iVar3;
    ExceptionList = local_14;
    return;
  case 5:
    uVar5 = *(int *)(*(int *)(param_1 + 0xbcc) + 0x28c) + *(int *)(param_1 + 0xea0);
    lVar6 = __alldiv(uVar5 * 0x40000000,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
    lVar6 = lVar6 + CONCAT44(*(int *)(param_1 + 0x1a4) + *(int *)(param_1 + 0x19c) +
                             (uint)CARRY4(*(uint *)(param_1 + 0x1a0),*(uint *)(param_1 + 0x198)),
                             *(uint *)(param_1 + 0x1a0) + *(uint *)(param_1 + 0x198));
    uVar4 = (undefined4)lVar6;
    *param_3 = 8;
    param_3[0x15] = (int)((ulonglong)lVar6 >> 0x20);
    break;
  default:
    goto switchD_0069fd71_default;
  }
  param_3[0x14] = uVar4;
switchD_0069fd71_default:
  ExceptionList = local_14;
  return;
}

