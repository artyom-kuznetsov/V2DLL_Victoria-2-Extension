// FUN_0073a3d0 @ 0073a3d0 body=[[0073a3d0, 0073a5de] [0073a5e2, 0073a601]]


void FUN_0073a3d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void **ppvVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 uStack_98;
  undefined4 *local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 uStack_70;
  uint *local_6c;
  undefined4 *local_68;
  undefined4 *puStack_64;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  undefined4 *puVar7;
  
  puStack_c = &LAB_00b3efc8;
  local_10 = ExceptionList;
  ppvVar4 = &local_10;
  puVar8 = param_1;
  if (param_1 != param_2) {
    while (ExceptionList = ppvVar4, puVar8 = puVar8 + 10, puVar8 != param_2) {
      local_8 = 0xffffffff;
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      local_20 = puVar8 + 1;
      puStack_64 = (undefined4 *)0xffffffff;
      local_68 = (undefined4 *)0x0;
      local_6c = puVar8 + 3;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      uStack_70 = 0x73a446;
      local_1c = puVar8;
      local_18 = puVar8;
      FUN_00408ed0();
      local_8 = 0;
      local_88 = *param_1;
      local_24 = (undefined1 *)&local_88;
      local_84 = param_1[1];
      local_80 = param_1[2];
      uStack_8c = 0xffffffff;
      local_90 = 0;
      local_94 = param_1 + 3;
      local_68 = (undefined4 *)0xf;
      local_6c = (uint *)0x0;
      local_7c = 0;
      uStack_98 = 0x73a47c;
      FUN_00408ed0();
      local_8._0_1_ = 1;
      local_28 = (undefined1 *)&local_b0;
      local_90 = 0xf;
      local_94 = (undefined4 *)0x0;
      local_a4 = 0;
      local_b0 = uVar1;
      local_ac = uVar2;
      local_a8 = uVar3;
      FUN_00408ed0(local_44,0,0xffffffff);
      local_8 = (uint)local_8._1_3_ << 8;
      cVar5 = FUN_0072fd90();
      puVar6 = local_20;
      if (cVar5 == '\0') {
        while( true ) {
          puVar7 = puVar6 + -10;
          local_88 = puVar6[-0xb];
          local_28 = (undefined1 *)&local_88;
          local_84 = *puVar7;
          puVar8 = puVar6 + -0xb;
          local_80 = puVar6[-9];
          uStack_8c = 0xffffffff;
          local_94 = puVar6 + -8;
          local_90 = 0;
          local_68 = (undefined4 *)0xf;
          local_6c = (uint *)0x0;
          local_7c = 0;
          uStack_98 = 0x73a539;
          FUN_00408ed0();
          local_8._0_1_ = 2;
          local_24 = (undefined1 *)&local_b0;
          local_90 = 0xf;
          local_94 = (undefined4 *)0x0;
          local_a4 = 0;
          local_b0 = uVar1;
          local_ac = uVar2;
          local_a8 = uVar3;
          FUN_00408ed0(local_44,0,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
          cVar5 = FUN_0072fd90();
          puStack_64 = (undefined4 *)0xffffffff;
          local_68 = (undefined4 *)0x0;
          if (cVar5 == '\0') break;
          *local_18 = *puVar8;
          local_18[1] = *puVar7;
          local_18[2] = puVar6[-9];
          local_6c = puVar6 + -8;
          uStack_70 = 0x73a59e;
          FUN_00408ed0();
          puVar6 = puVar7;
          local_18 = puVar8;
        }
        local_18[1] = uVar2;
        local_6c = local_44;
        *local_18 = uVar1;
        local_18[2] = uVar3;
        uStack_70 = 0x73a5c3;
        FUN_00408ed0();
        puVar8 = local_1c;
      }
      else {
        puStack_64 = param_1;
        local_6c = (uint *)0x73a4cf;
        local_68 = param_1;
        FUN_007a0280();
        puStack_64 = (undefined4 *)0xffffffff;
        *param_1 = uVar1;
        local_68 = (undefined4 *)0x0;
        local_6c = local_44;
        param_1[2] = uVar3;
        param_1[1] = uVar2;
        uStack_70 = 0x73a4f2;
        FUN_00408ed0();
      }
      local_8 = 0xffffffff;
      ppvVar4 = ExceptionList;
      if (0xf < local_30) {
        puStack_64 = (undefined4 *)local_44[0];
                    /* WARNING: Subroutine does not return */
        local_68 = (undefined4 *)&UNK_0073a5df;
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

