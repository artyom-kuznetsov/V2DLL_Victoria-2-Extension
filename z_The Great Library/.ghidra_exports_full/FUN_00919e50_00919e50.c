// FUN_00919e50 @ 00919e50 body=[[00919e50, 0091a0ec] [0091a0f0, 0091a2e9]]


undefined4 *
FUN_00919e50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  void **ppvVar4;
  void **ppvVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  uint *local_24;
  void *local_20;
  int local_1c;
  char local_16;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e865;
  local_10 = ExceptionList;
  uVar2 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  ExceptionList = &local_10;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[1] = 0x18d;
  param_1[5] = param_5;
  param_1[6] = uVar2;
  param_1[7] = uVar2;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *param_1 = CCrisisBackDownAction::vftable;
  param_1[0xb] = 0x18d;
  param_1[10] = CPeaceOffer::vftable;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  local_8 = 1;
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_0092a7c0(param_1[2],param_1[3],param_1[4],param_1[5]);
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[3] * 4) + 0xbe8) +
                       param_1[5] * 4) + 0x34) != 0) {
    local_1c = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
    if (local_1c != 0) {
      puVar1 = param_1 + 0x19;
      *(undefined1 *)(param_1 + 0x25) = 1;
      FUN_0042b980(puVar1,&local_30,*puVar1,param_1[0x1a]);
      local_30 = param_1 + 0x15;
      FUN_0042b980(local_30,&local_28,param_1[0x15],param_1[0x16]);
      local_24 = (uint *)param_1[0x11];
      if (local_24 != (void *)param_1[0x12]) {
        local_20 = (void *)0x0;
        FID_conflict__memcpy(local_24,(void *)param_1[0x12],0);
        param_1[0x12] = (int)local_24 + (int)local_20;
      }
      local_20 = (void *)param_1[0xd];
      local_24 = param_1 + 0xd;
      if (local_20 != (void *)param_1[0xe]) {
        local_28 = (uint *)0x0;
        FID_conflict__memcpy(local_20,(void *)param_1[0xe],0);
        local_24[1] = (int)local_20 + (int)local_28;
      }
      local_15 = '\0';
      local_16 = '\0';
      iVar8 = FUN_00425a40();
      local_20 = (void *)param_1[0x21];
      if ((*(int *)((int)local_20 + 4) == *(int *)(iVar8 + 4)) ||
         (iVar8 = FUN_00425ac0(), *(int *)((int)local_20 + 4) == *(int *)(iVar8 + 4))) {
        local_15 = '\x01';
      }
      iVar8 = FUN_00425a40();
      if ((*(int *)(param_1[0x1d] + 4) == *(int *)(iVar8 + 4)) ||
         (iVar8 = FUN_00425ac0(), cVar7 = local_16,
         *(int *)(param_1[0x1d] + 4) == *(int *)(iVar8 + 4))) {
        cVar7 = '\x01';
      }
      iVar8 = local_1c;
      if ((local_15 == '\0') && (cVar7 == '\0')) {
        *(undefined1 *)(param_1 + 0x25) = 0;
      }
      else {
        iVar9 = FUN_00425a40();
        local_16 = *(int *)((int)local_20 + 4) == *(int *)(iVar9 + 4);
        if ((bool)local_16) {
          local_2c = *(uint *)(iVar8 + 0x88);
          local_28 = (uint *)(iVar8 + 0x88);
        }
        else {
          local_2c = *(uint *)(iVar8 + 0x98);
          local_28 = (uint *)(iVar8 + 0x98);
        }
        while ((*local_28 <= local_2c && (local_2c < local_28[1]))) {
          uVar3 = param_1[0x1a];
          uVar10 = local_2c + 0x40;
          if ((local_2c < uVar3) && (*puVar1 <= local_2c)) {
            local_2c = uVar10;
            if (uVar3 == param_1[0x1b]) {
              FUN_0042c4b0();
            }
            iVar8 = param_1[0x1a];
          }
          else {
            local_2c = uVar10;
            if (uVar3 == param_1[0x1b]) {
              FUN_0042c4b0();
            }
            iVar8 = param_1[0x1a];
          }
          if (iVar8 != 0) {
            FUN_0094be20();
          }
          param_1[0x1a] = param_1[0x1a] + 0x40;
          ppvVar4 = (void **)param_1[0x12];
          local_20 = (void *)0x0;
          if (&local_20 < ppvVar4) {
            ppvVar5 = (void **)param_1[0x11];
            if (&local_20 < ppvVar5) goto LAB_0091a1a4;
            if (ppvVar4 == (void **)param_1[0x13]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x12] =
                   *(undefined4 *)(param_1[0x11] + ((int)&local_20 - (int)ppvVar5 >> 2) * 4);
            }
            param_1[0x12] = param_1[0x12] + 4;
          }
          else {
LAB_0091a1a4:
            if (ppvVar4 == (void **)param_1[0x13]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x12] = 0;
            }
            param_1[0x12] = param_1[0x12] + 4;
          }
        }
        if (local_16 == '\0') {
          local_2c = *(uint *)(local_1c + 0x88);
          local_28 = (uint *)(local_1c + 0x88);
        }
        else {
          local_2c = *(uint *)(local_1c + 0x98);
          local_28 = (uint *)(local_1c + 0x98);
        }
        while ((puVar1 = local_30, *local_28 <= local_2c && (local_2c < local_28[1]))) {
          uVar3 = local_30[1];
          uVar10 = local_2c + 0x40;
          if ((local_2c < uVar3) && (*local_30 <= local_2c)) {
            local_2c = uVar10;
            if (uVar3 == local_30[2]) {
              FUN_0042c4b0();
            }
            uVar3 = puVar1[1];
          }
          else {
            local_2c = uVar10;
            if (uVar3 == local_30[2]) {
              FUN_0042c4b0();
            }
            uVar3 = puVar1[1];
          }
          if (uVar3 != 0) {
            FUN_0094be20();
          }
          puVar6 = local_24;
          puVar1[1] = puVar1[1] + 0x40;
          ppvVar4 = (void **)local_24[1];
          local_20 = (void *)0x0;
          if (&local_20 < ppvVar4) {
            ppvVar5 = (void **)*local_24;
            if (&local_20 < ppvVar5) goto LAB_0091a2c0;
            if (ppvVar4 == (void **)local_24[2]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)puVar6[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar6[1] =
                   *(undefined4 *)(*puVar6 + ((int)&local_20 - (int)ppvVar5 >> 2) * 4);
            }
            puVar6[1] = puVar6[1] + 4;
          }
          else {
LAB_0091a2c0:
            if (ppvVar4 == (void **)local_24[2]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)puVar6[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar6[1] = 0;
            }
            puVar6[1] = puVar6[1] + 4;
          }
        }
      }
      ExceptionList = local_10;
      return param_1;
    }
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  ExceptionList = local_10;
  return param_1;
}

