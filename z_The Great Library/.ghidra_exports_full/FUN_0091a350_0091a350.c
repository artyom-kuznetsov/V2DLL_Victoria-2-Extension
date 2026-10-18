// FUN_0091a350 @ 0091a350 body=[[0091a350, 0091a6f7] [0091a700, 0091a7e6]]


undefined4 *
FUN_0091a350(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint *puVar1;
  uint uVar2;
  void **ppvVar3;
  void **ppvVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *local_2c;
  uint local_28;
  uint *local_24;
  uint *local_20;
  void *local_1c;
  int local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e865;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[1] = 0x18d;
  param_1[5] = param_6;
  param_1[6] = param_2;
  param_1[7] = param_2;
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
    local_18 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
    if (local_18 != 0) {
      puVar1 = param_1 + 0x19;
      *(undefined1 *)(param_1 + 0x25) = 1;
      FUN_0042b980(puVar1,&local_2c,*puVar1,param_1[0x1a]);
      local_2c = param_1 + 0x15;
      FUN_0042b980(local_2c,&local_24,param_1[0x15],param_1[0x16]);
      local_1c = (void *)param_1[0x11];
      if (local_1c != (void *)param_1[0x12]) {
        local_20 = (uint *)0x0;
        FID_conflict__memcpy(local_1c,(void *)param_1[0x12],0);
        param_1[0x12] = (int)local_20 + (int)local_1c;
      }
      local_24 = (uint *)param_1[0xd];
      local_20 = param_1 + 0xd;
      if (local_24 != (uint *)param_1[0xe]) {
        local_1c = (void *)0x0;
        FID_conflict__memcpy(local_24,(uint *)param_1[0xe],0);
        local_20[1] = (int)local_1c + (int)local_24;
      }
      local_11 = '\0';
      local_12 = '\0';
      iVar7 = FUN_00425a40();
      local_1c = (void *)param_1[0x21];
      if ((*(int *)((int)local_1c + 4) == *(int *)(iVar7 + 4)) ||
         (iVar7 = FUN_00425ac0(), *(int *)((int)local_1c + 4) == *(int *)(iVar7 + 4))) {
        local_11 = '\x01';
      }
      iVar7 = FUN_00425a40();
      if ((*(int *)(param_1[0x1d] + 4) == *(int *)(iVar7 + 4)) ||
         (iVar7 = FUN_00425ac0(), cVar6 = local_12,
         *(int *)(param_1[0x1d] + 4) == *(int *)(iVar7 + 4))) {
        cVar6 = '\x01';
      }
      iVar7 = local_18;
      if ((local_11 == '\0') && (cVar6 == '\0')) {
        *(undefined1 *)(param_1 + 0x25) = 0;
      }
      else {
        iVar8 = FUN_00425a40();
        local_12 = *(int *)((int)local_1c + 4) == *(int *)(iVar8 + 4);
        if ((bool)local_12) {
          local_28 = *(uint *)(iVar7 + 0x88);
          local_24 = (uint *)(iVar7 + 0x88);
        }
        else {
          local_28 = *(uint *)(iVar7 + 0x98);
          local_24 = (uint *)(iVar7 + 0x98);
        }
        while ((*local_24 <= local_28 && (local_28 < local_24[1]))) {
          uVar2 = param_1[0x1a];
          uVar9 = local_28 + 0x40;
          if ((local_28 < uVar2) && (*puVar1 <= local_28)) {
            local_28 = uVar9;
            if (uVar2 == param_1[0x1b]) {
              FUN_0042c4b0();
            }
            iVar7 = param_1[0x1a];
          }
          else {
            local_28 = uVar9;
            if (uVar2 == param_1[0x1b]) {
              FUN_0042c4b0();
            }
            iVar7 = param_1[0x1a];
          }
          if (iVar7 != 0) {
            FUN_0094be20();
          }
          param_1[0x1a] = param_1[0x1a] + 0x40;
          ppvVar3 = (void **)param_1[0x12];
          local_1c = (void *)0x0;
          if (&local_1c < ppvVar3) {
            ppvVar4 = (void **)param_1[0x11];
            if (&local_1c < ppvVar4) goto LAB_0091a697;
            if (ppvVar3 == (void **)param_1[0x13]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x12] =
                   *(undefined4 *)(param_1[0x11] + ((int)&local_1c - (int)ppvVar4 >> 2) * 4);
            }
            param_1[0x12] = param_1[0x12] + 4;
          }
          else {
LAB_0091a697:
            if (ppvVar3 == (void **)param_1[0x13]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x12] = 0;
            }
            param_1[0x12] = param_1[0x12] + 4;
          }
        }
        if (local_12 == '\0') {
          local_28 = *(uint *)(local_18 + 0x88);
          local_24 = (uint *)(local_18 + 0x88);
        }
        else {
          local_28 = *(uint *)(local_18 + 0x98);
          local_24 = (uint *)(local_18 + 0x98);
        }
        while ((puVar1 = local_2c, *local_24 <= local_28 && (local_28 < local_24[1]))) {
          uVar2 = local_2c[1];
          uVar9 = local_28 + 0x40;
          if ((local_28 < uVar2) && (*local_2c <= local_28)) {
            local_28 = uVar9;
            if (uVar2 == local_2c[2]) {
              FUN_0042c4b0();
            }
            uVar2 = puVar1[1];
          }
          else {
            local_28 = uVar9;
            if (uVar2 == local_2c[2]) {
              FUN_0042c4b0();
            }
            uVar2 = puVar1[1];
          }
          if (uVar2 != 0) {
            FUN_0094be20();
          }
          puVar5 = local_20;
          puVar1[1] = puVar1[1] + 0x40;
          ppvVar3 = (void **)local_20[1];
          local_1c = (void *)0x0;
          if (&local_1c < ppvVar3) {
            ppvVar4 = (void **)*local_20;
            if (&local_1c < ppvVar4) goto LAB_0091a7bd;
            if (ppvVar3 == (void **)local_20[2]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)puVar5[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar5[1] =
                   *(undefined4 *)(*puVar5 + ((int)&local_1c - (int)ppvVar4 >> 2) * 4);
            }
            puVar5[1] = puVar5[1] + 4;
          }
          else {
LAB_0091a7bd:
            if (ppvVar3 == (void **)local_20[2]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)puVar5[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar5[1] = 0;
            }
            puVar5[1] = puVar5[1] + 4;
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

