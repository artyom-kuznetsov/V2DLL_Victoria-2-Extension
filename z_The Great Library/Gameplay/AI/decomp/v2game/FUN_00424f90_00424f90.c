// FUN_00424f90 @ 00424f90 body=[[00424f90, 00425170] [00425174, 0042520d] [00425211, 00425269]]


undefined4 * FUN_00424f90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined3 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 uVar5;
  int *local_6c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b53e77;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCrisis::vftable;
  if ((*(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48) & 0xfffffffcU) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = **(undefined4 **)(param_2 + 0x48);
  }
  param_1[2] = uVar5;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = *param_3;
  param_1[6] = param_3[1];
  param_1[7] = *in_ECX;
  param_1[8] = in_ECX[1];
  param_1[9] = 0x2d2d2d;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0x2d2d2d;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 6;
  uStack_7 = 0;
  param_1[0x2a] = 43800000;
  param_1[0x2a] = DAT_01259abc;
  param_1[0x2b] = 43800000;
  param_1[0x2b] = DAT_01259abc;
  iVar4 = DAT_012587e4;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  local_1c = *param_3;
  iVar4 = *(int *)(*(int *)(iVar4 + 4) + param_3[1] * 4);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if ((int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU) < 1) {
    FUN_00409350("liberate_country",0x10);
    local_8 = 7;
    uVar2 = local_8;
    local_8 = 7;
    if (DAT_0131acac == 0) {
      iVar4 = FUN_00aae9af(0x20);
      local_8 = 8;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0090cca0();
      }
      local_8 = 7;
      FUN_0090d9d0(uVar5);
      uVar2 = local_8;
    }
    local_8 = uVar2;
    FUN_0090da40(local_38);
    FUN_0094bdb0(param_1[5],param_1[6],param_1[7],param_1[8]);
    _local_8 = CONCAT31(uStack_7,6);
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
  }
  else {
    uStack_7 = uVar1;
    FUN_00409350("acquire_core_state",0x12);
    local_8 = 9;
    uVar2 = local_8;
    local_8 = 9;
    if (DAT_0131acac == 0) {
      iVar4 = FUN_00aae9af(0x20);
      local_8 = 10;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0090cca0();
      }
      local_8 = 9;
      FUN_0090d9d0(uVar5);
      uVar2 = local_8;
    }
    local_8 = uVar2;
    FUN_0090da40(local_38);
    FUN_0094bdb0(param_1[5],param_1[6],param_1[7],param_1[8]);
    _local_8 = CONCAT31(uStack_7,6);
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
  }
  if ((local_6c != (int *)0x0) && (cVar3 = (**(code **)(*local_6c + 0x1c))(), cVar3 != '\0')) {
    FUN_0042c2f0();
  }
  FUN_00425590();
  ExceptionList = local_10;
  return param_1;
}

