// FUN_0059cf70 @ 0059cf70 body=[[0059cf70, 0059cfdb] [0059cfe0, 0059d135] [0059d139, 0059d163] [0059d167, 0059d191] [0059d195, 0059d1bf] [0059d1c3, 0059d1e7] [0059d1eb, 0059d209] [0059d20d, 0059d22b] [0059d22f, 0059d24d] [0059d251, 0059d3c3] [0059d3c7, 0059d3ec] [0059d3f0, 0059d40f] [0059d413, 0059d42f] [0059d433, 0059d468] [0059d46c, 0059d48a] [0059d48e, 0059d50a] [0059d50e, 0059d5a2] [0059d5a6, 0059d5df] [0059d5e3, 0059d5fe] [0059d602, 0059d612] [0059d616, 0059d63f]]


/* WARNING: Removing unreachable block (ram,0x0059d424) */
/* WARNING: Removing unreachable block (ram,0x0059d3e1) */

undefined1 * FUN_0059cf70(undefined1 *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 ******ppppppuVar7;
  uint local_fc;
  uint local_e0;
  uint local_c4;
  undefined4 local_bc;
  int local_b8;
  int *local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  int *local_74;
  int local_70;
  int *local_6c;
  uint local_68;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined4 *****local_30 [4];
  int local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pvVar3 = ExceptionList;
  puStack_c = &LAB_00b72151;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_74 = (int *)*param_2;
  local_70 = param_2[2] + -1;
  local_b0 = 1;
  param_2 = (int *)0x0;
  if (local_74 == (int *)0x0) {
    ExceptionList = pvVar3;
    return param_1;
  }
  do {
    local_b4 = (int *)*local_74;
    if (local_b4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = local_b4 + 0xe;
    }
    local_74 = (int *)local_74[2];
    piVar4 = (int *)*piVar4;
    while (piVar4 != (int *)0x0) {
      local_6c = (int *)piVar4[2];
      piVar4 = (int *)*piVar4;
      param_2 = (int *)((int)param_2 + 1);
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded950,1);
      local_8 = 0x17;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (undefined4 *****)((uint)local_30[0] & 0xffffff00);
      FUN_00409350(&DAT_00e01ef0,2);
      local_8._0_1_ = 0x18;
      local_bc = piVar4[0x18];
      pcVar5 = (char *)&local_bc;
      local_7c = 0xf;
      local_b8 = piVar4[0x19];
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(&local_bc,(int)pcVar5 - ((int)&local_bc + 1));
      local_8._0_1_ = 0x19;
      local_54 = 0xf;
      local_58 = 0;
      local_68 = local_68 & 0xffffff00;
      FUN_00409350(&DAT_00df9b68,1);
      local_8._0_1_ = 0x1a;
      FUN_00988f20();
      local_8._0_1_ = 0x1b;
      FUN_00988f20();
      local_8._0_1_ = 0x1c;
      FUN_00988f20();
      local_8._0_1_ = 0x1d;
      FUN_00988f20();
      local_8._0_1_ = 0x1e;
      FUN_00448aa0();
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c4 = 0xf;
      if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e0 = 0xf;
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac = local_ac & 0xffffff00;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68 = local_68 & 0xffffff00;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (undefined4 *****)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (param_3 < 0x15) {
        (**(code **)(*piVar4 + 0x20))();
        local_8 = 0x28;
        if (0x14 < local_20) {
          ppppppuVar7 = (undefined4 ******)local_30[0];
          if (local_1c < 0x10) {
            ppppppuVar7 = local_30;
          }
          *(undefined1 *)(ppppppuVar7 + 5) = 0;
        }
        FUN_00448aa0();
        if (param_3 <= (int)param_2) {
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          FUN_00409350("AND_MORE",8);
          local_8._0_1_ = 0x29;
          FUN_009a8ee0(local_60,local_4c);
          local_8._0_1_ = 0x2a;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
          local_8._0_1_ = 0x2b;
          FUN_00448aa0();
          if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_98 = 0xf;
          local_9c = 0;
          local_ac = local_ac & 0xffffff00;
          local_8._0_1_ = 0x2c;
          FUN_009adb70();
          if (local_5c != 0) {
            FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_5c = 0;
          local_58 = 0;
          local_54 = 0;
          if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          break;
        }
        FUN_00448740(&DAT_00dee2cc,1);
        local_8 = local_8 & 0xffffff00;
        uVar2 = local_1c;
joined_r0x0059d500:
        if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        (**(code **)(*local_b4 + 0x20))();
        FUN_00448aa0();
        local_70 = local_70 + -1;
        if (0 < local_70) {
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = (uint)local_4c[0]._1_3_ << 8;
          FUN_00409350(&DAT_00df8148,2);
          local_8 = 0x1f;
          FUN_00448aa0();
          local_8 = local_8 & 0xffffff00;
          uVar2 = local_38;
          goto joined_r0x0059d500;
        }
        if (local_70 == 0) {
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = (uint)local_4c[0]._1_3_ << 8;
          FUN_00409350(&DAT_00dfaa6c,3);
          local_8 = 0x20;
          local_7c = 0xf;
          local_80 = 0;
          local_90 = local_90 & 0xffffff00;
          FUN_00409350(&DAT_00ded950,1);
          local_8._0_1_ = 0x21;
          FUN_009a8ee0(local_60,local_4c);
          local_8._0_1_ = 0x22;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
          local_8._0_1_ = 0x23;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = (undefined4 *****)((uint)local_30[0] & 0xffffff00);
          FUN_00409350(&DAT_00ded950,1);
          local_8._0_1_ = 0x24;
          FUN_00988f20();
          local_8._0_1_ = 0x25;
          FUN_00988f20();
          local_8._0_1_ = 0x26;
          FUN_00448aa0();
          if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_98 = 0xf;
          local_9c = 0;
          local_ac = local_ac & 0xffffff00;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = (undefined4 *****)((uint)local_30[0] & 0xffffff00);
          local_8._0_1_ = 0x27;
          FUN_009adb70();
          if (local_5c != 0) {
            FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_5c = 0;
          local_58 = 0;
          local_54 = 0;
          if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          local_7c = 0xf;
          local_80 = 0;
          local_90 = local_90 & 0xffffff00;
          uVar2 = local_38;
          goto joined_r0x0059d500;
        }
      }
      local_c4 = 0xf;
      local_e0 = 0xf;
      piVar4 = local_6c;
    }
    if ((param_3 <= (int)param_2) || (local_74 == (int *)0x0)) {
      ExceptionList = local_10;
      return param_1;
    }
  } while( true );
}

