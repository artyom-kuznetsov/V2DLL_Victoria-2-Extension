// FUN_006a3420 @ 006a3420 body=[[006a3420, 006a3533] [006a3537, 006a3561] [006a3565, 006a3584] [006a3588, 006a35d3] [006a35d7, 006a36e0] [006a36e4, 006a370e] [006a3712, 006a3739] [006a373d, 006a377d] [006a3781, 006a379d] [006a37a1, 006a37bf]]


void FUN_006a3420(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,
                 undefined4 param_6,code *param_7,char param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void **ppvVar3;
  int iVar4;
  undefined4 *******pppppppuVar5;
  int iVar6;
  uint local_124;
  uint local_110;
  uint local_108;
  uint local_f4;
  int local_ec [10];
  undefined4 ******local_c4 [5];
  uint local_b0;
  int local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined1 local_84 [40];
  undefined4 ******local_5c [4];
  undefined4 local_4c;
  uint local_48;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b929d9;
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar3, param_3 < param_2) {
    local_18 = (param_2 + -1) / 2;
    local_8 = 0xffffffff;
    uVar1 = *(undefined4 *)(param_1 + local_18 * 4);
    uVar2 = *param_4;
    FUN_00698880();
    local_8 = 0;
    FUN_00698880();
    local_8._0_1_ = 1;
    (*param_7)(uVar1,param_6,local_ec,0);
    (*param_7)(uVar2,param_6,local_84,0);
    iVar4 = local_88;
    if (param_8 == '\0') {
      iVar4 = local_8c;
    }
    iVar6 = local_ec[0];
    if (iVar4 != 0xf) {
      iVar6 = iVar4;
    }
    switch(iVar6) {
    case 0:
    case 1:
    case 2:
      FUN_0055dd40();
      local_8._0_1_ = 2;
      FUN_0055dd40();
      local_8._0_1_ = 3;
      local_11 = FUN_0098ab20();
      if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_108);
      }
      local_f4 = 0xf;
      local_108 = local_108 & 0xffffff00;
      if (0xf < local_110) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_124);
      }
      local_110 = 0xf;
      local_124 = local_124 & 0xffffff00;
      break;
    case 3:
      local_11 = FUN_0098ab20();
      goto LAB_006a35c1;
    case 4:
      pppppppuVar5 = (undefined4 *******)local_c4[0];
      if (local_b0 < 0x10) {
        pppppppuVar5 = local_c4;
      }
      iVar4 = FUN_00aaf0c5(pppppppuVar5);
      pppppppuVar5 = (undefined4 *******)local_5c[0];
      if (local_48 < 0x10) {
        pppppppuVar5 = local_5c;
      }
      iVar6 = FUN_00aaf0c5(pppppppuVar5);
      if (iVar4 == iVar6) {
        local_11 = FUN_0098ab20();
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c[0]);
        }
      }
      else {
        local_11 = iVar4 < iVar6;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c[0]);
        }
      }
      goto joined_r0x006a372c;
    case 5:
    case 6:
    case 7:
      local_11 = local_a0 < local_38;
LAB_006a35c1:
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      goto joined_r0x006a372c;
    case 8:
    case 9:
    case 10:
      if ((local_30 < local_98) || ((local_30 <= local_98 && (local_34 <= local_9c)))) {
        local_11 = '\0';
      }
      else {
        local_11 = '\x01';
      }
      break;
    case 0xb:
    case 0xc:
      local_11 = (int)local_94 < (int)local_2c;
      break;
    case 0xd:
      local_11 = local_94 < local_2c;
      break;
    case 0xe:
      local_11 = local_90 < local_28;
      break;
    default:
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = (undefined4 ******)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c4[0]);
      }
      goto LAB_006a37a1;
    }
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
joined_r0x006a372c:
    local_5c[0] = (undefined4 ******)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_b0) {
      local_8 = 0xffffffff;
      local_48 = 0xf;
      local_4c = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c4[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    if (local_11 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + local_18 * 4);
    ppvVar3 = ExceptionList;
    param_2 = local_18;
  }
LAB_006a37a1:
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  ExceptionList = local_10;
  return;
}

