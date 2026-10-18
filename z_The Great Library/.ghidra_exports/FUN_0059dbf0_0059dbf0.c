// FUN_0059dbf0 @ 0059dbf0  (requested 0059DBF0, first bytes: 55 8B EC 6A FF 68 D3 E9)


/* WARNING: Removing unreachable block (ram,0x0059e142) */
/* WARNING: Removing unreachable block (ram,0x0059e1c8) */
/* WARNING: Removing unreachable block (ram,0x0059e0ba) */

undefined1 * FUN_0059dbf0(undefined1 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint local_134;
  uint local_118;
  uint local_fc;
  undefined1 local_a0 [4];
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_8c [4];
  undefined4 local_7c;
  uint local_78;
  int local_70;
  int local_6c;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  int *local_4c;
  int local_48;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8e9d3;
  local_14 = (undefined1 *)0x0;
  local_24 = (undefined1 *)0x0;
  local_20 = (undefined1 *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_8._1_3_ = 0;
  piVar2 = (int *)*param_2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
joined_r0x0059dc2c:
  do {
    if (piVar2 == (int *)0x0) {
      local_8._0_1_ = 0;
      local_54 = 0xf;
      local_58 = 0;
      local_68 = local_68 & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_48 = local_1c + -1;
      param_2 = (undefined4 *)0x0;
      local_14 = local_24;
      break;
    }
    local_8._0_1_ = 0;
    local_4c = (int *)piVar2[2];
    iVar6 = *piVar2;
    if (((*(char *)(iVar6 + 0xc0) == 'R') && (*(char *)(iVar6 + 0xc1) == 'E')) &&
       (*(char *)(iVar6 + 0xc2) == 'B')) {
      local_28 = (undefined1 *)FUN_0068bae0();
      if (local_28 == (undefined1 *)0x0) {
        FUN_0055dd40();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_14 = (undefined1 *)((uint)local_14 | 1);
        FUN_005498a0();
        bVar1 = true;
        if (local_6c != 0) goto LAB_0059dc9f;
      }
      else {
LAB_0059dc9f:
        bVar1 = false;
      }
      local_8 = 0;
      if ((((uint)local_14 & 1) != 0) &&
         (local_14 = (undefined1 *)((uint)local_14 & 0xfffffffe), 0xf < local_30)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (bVar1) {
        FUN_0055dd40();
        local_8._0_1_ = 2;
        param_2 = (undefined4 *)local_20;
        puVar5 = (undefined1 *)FUN_00aae9af();
        local_8 = CONCAT31(local_8._1_3_,3);
        local_28 = puVar5;
        if (puVar5 == (undefined1 *)0x0) goto LAB_0059de6f;
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0();
        *(undefined1 **)(puVar5 + 0x1c) = local_20;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      else {
        if (local_28 == (undefined1 *)0x0) {
LAB_0059dd52:
          bVar1 = false;
        }
        else {
          FUN_0041a080();
          local_8 = CONCAT31(local_8._1_3_,4);
          local_14 = (undefined1 *)((uint)local_14 | 2);
          FUN_005498a0();
          bVar1 = true;
          if (local_70 != 0) goto LAB_0059dd52;
        }
        local_8._0_1_ = 0;
        local_8._1_3_ = 0;
        if ((((uint)local_14 & 2) != 0) &&
           (local_14 = (undefined1 *)((uint)local_14 & 0xfffffffd), 0xf < local_30)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        piVar2 = local_4c;
        if (!bVar1) goto joined_r0x0059dc2c;
        FUN_0041a080();
        local_8._0_1_ = 5;
        param_2 = (undefined4 *)local_20;
        puVar5 = (undefined1 *)FUN_00aae9af();
        local_8 = CONCAT31(local_8._1_3_,6);
        local_28 = puVar5;
        if (puVar5 == (undefined1 *)0x0) goto LAB_0059de6f;
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0();
        *(undefined1 **)(puVar5 + 0x1c) = local_20;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
    }
    else {
      FUN_0055dd40();
      local_8._0_1_ = 7;
      FUN_005498a0();
      local_8._0_1_ = 0;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      piVar2 = local_4c;
      if (local_48 != 0) goto joined_r0x0059dc2c;
      FUN_0055dd40();
      local_8._0_1_ = 8;
      param_2 = (undefined4 *)local_20;
      puVar5 = (undefined1 *)FUN_00aae9af();
      local_8 = CONCAT31(local_8._1_3_,9);
      local_28 = puVar5;
      if (puVar5 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0();
        *(undefined1 **)(puVar5 + 0x1c) = local_20;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
        goto LAB_0059de71;
      }
LAB_0059de6f:
      puVar5 = (undefined1 *)0x0;
    }
LAB_0059de71:
    iVar6 = local_1c + 1;
    puVar4 = puVar5;
    if (local_1c != 0) {
      *(undefined1 **)((int)param_2 + 0x20) = puVar5;
      puVar4 = local_24;
    }
    local_24 = puVar4;
    local_8._0_1_ = 0;
    piVar2 = local_4c;
    local_20 = puVar5;
    local_1c = iVar6;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
joined_r0x0059dede:
  if (local_14 == (undefined1 *)0x0) {
    local_8._0_1_ = 10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    FUN_004097a0();
    ExceptionList = local_10;
    return param_1;
  }
  local_8._0_1_ = 10;
  FUN_00408ed0();
  local_8._0_1_ = 0xb;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 0xb;
  if (param_2 == (undefined4 *)local_48) {
    if (param_2 == (undefined4 *)0x0) goto LAB_0059e2b7;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (uint)local_8c[0]._1_3_ << 8;
    FUN_00409350(&DAT_00dfaa6c,3);
    local_8._0_1_ = 0xf;
    FUN_00409350(&DAT_00ded950,1);
    local_8._0_1_ = 0x10;
    FUN_009a8ee0(local_a0,local_8c);
    local_8._0_1_ = 0x11;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x12;
    FUN_00409350(&DAT_00ded950,1);
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    local_8._0_1_ = 0x15;
    FUN_00988f20();
    local_8._0_1_ = 0x16;
    FUN_00408ed0();
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_134 = 0xf;
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_118 = 0xf;
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = 0xf;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    local_8._0_1_ = 0x17;
    FUN_009adb70();
    if (local_9c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_8._0_1_ = 0xb;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0x18);
    FUN_00408ed0();
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = (uint)local_8c[0]._1_3_ << 8;
      local_8._0_1_ = uVar3;
      FUN_00409350(&DAT_00df8148,2);
      local_8._0_1_ = 0xc;
      FUN_00988f20();
      local_8._0_1_ = 0xd;
      FUN_00408ed0();
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0xb;
      local_30 = 0xf;
      local_34 = 0;
      local_44 = local_44 & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
LAB_0059e2b7:
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_00408ed0();
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  param_2 = (undefined4 *)((int)param_2 + 1);
  local_14 = *(undefined1 **)(local_14 + 0x20);
  goto joined_r0x0059dede;
}

