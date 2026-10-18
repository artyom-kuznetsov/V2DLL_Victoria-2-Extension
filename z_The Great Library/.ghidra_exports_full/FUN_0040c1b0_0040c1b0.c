// FUN_0040c1b0 @ 0040c1b0 body=[[0040c1b0, 0040c29b] [0040c29f, 0040c2cf] [0040c2d3, 0040c2ec] [0040c2f0, 0040c384] [0040c388, 0040c3b8] [0040c3bc, 0040c3d5] [0040c3d9, 0040c4fb] [0040c4ff, 0040c529] [0040c52d, 0040c54c] [0040c550, 0040c573] [0040c577, 0040c58d] [0040c591, 0040c68d] [0040c691, 0040c6b2] [0040c6b6, 0040c6db] [0040c6df, 0040c6fe] [0040c702, 0040c718] [0040c71c, 0040c739] [0040c742, 0040c7c7] [0040c7cb, 0040c7fb] [0040c7ff, 0040c82e]]


undefined1 * FUN_0040c1b0(int param_1,undefined1 *param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int in_ECX;
  int *piVar6;
  char *pcVar7;
  uint local_b4;
  uint local_98;
  uint local_70;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_00b83063;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined2 *)(param_2 + 0x54) = 0;
  *(undefined2 *)(param_2 + 0x56) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  if (in_ECX == *(int *)(param_1 + 0x3c)) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("BP_TOOLTIP_SHARE_PLAN",0x15);
    local_8 = 1;
    FUN_009a8ee0(local_5c,local_2c);
    local_8._0_1_ = 2;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 3;
    FUN_00408ed0();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_58 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(char *)(*(int *)(param_1 + 0x28) + 0x21d) == '\0') {
      ExceptionList = local_10;
      return param_2;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("BP_SHARED_WITH",0xe);
    local_8 = 5;
    FUN_009a8ee0(local_5c,local_2c);
    local_8._0_1_ = 6;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 7;
    FUN_00408ed0();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_58 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (*(char *)(*(int *)(param_1 + 0x28) + 0x21d) == '\0') {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                               *(int *)(*(int *)(param_1 + 0x28) + 0x218) * 4) + 0xd58);
    }
    if ((piVar6[1] - *piVar6 & 0xfffffff8U) != 0) {
      puVar4 = (uint *)FUN_00408a90();
      pcVar7 = (char *)*puVar4;
      while( true ) {
        if (pcVar7 < (char *)*puVar4) {
          ExceptionList = local_10;
          return param_2;
        }
        if ((char *)puVar4[1] <= pcVar7) {
          ExceptionList = local_10;
          return param_2;
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded950,1);
        local_8 = 0xf;
        FUN_0055dd40();
        local_8._0_1_ = 0x10;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        pcVar5 = pcVar7;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
        local_8._0_1_ = 0x11;
        FUN_00988fa0();
        local_8._0_1_ = 0x12;
        FUN_00988f20();
        local_8._0_1_ = 0x13;
        FUN_00988f20();
        local_8._0_1_ = 0x14;
        FUN_00448aa0();
        if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_70 = 0xf;
        if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_98 = 0xf;
        if (0xf < local_b4) break;
        local_b4 = 0xf;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_50 = 0xf;
        local_54 = 0;
        pcVar7 = pcVar7 + 8;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc20,2);
    local_8 = 9;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc10,4);
    local_8._0_1_ = 10;
    FUN_009a8ee0(local_5c,local_2c);
    local_8._0_1_ = 0xb;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0xc;
    FUN_00988fa0();
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    FUN_00448aa0();
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009a9740();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  else {
    if (in_ECX != *(int *)(param_1 + 0x44)) {
      ExceptionList = pvVar2;
      return param_2;
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("BP_TOOLTIP_VISIBILITY",0x15);
    local_8 = 0x15;
    FUN_009a8ee0(local_5c,local_48);
    local_8._0_1_ = 0x16;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0x17;
    FUN_00408ed0();
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x18);
    FUN_009adb70();
    if (local_58 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
  }
  if (local_34 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

