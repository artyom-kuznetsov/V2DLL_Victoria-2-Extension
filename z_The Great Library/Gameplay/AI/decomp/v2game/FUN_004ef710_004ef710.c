// FUN_004ef710 @ 004ef710 body=[[004ef710, 004ef813] [004ef817, 004ef83a] [004ef83e, 004ef93c] [004ef940, 004ef9e6] [004ef9ea, 004efa14] [004efa18, 004efa3d] [004efa41, 004efa63] [004efa67, 004efa80] [004efa84, 004efa9d] [004efaa1, 004efacb]]


undefined4 FUN_004ef710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  char local_124 [32];
  uint local_104 [4];
  undefined4 local_f4;
  uint local_f0;
  uint local_e8;
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  char local_94 [4];
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b751ab;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = 0;
  local_18 = *(int *)(param_1 + 0x48);
  uVar3 = *(uint *)(in_ECX + 0x128);
  local_14 = &stack0xfffffec4;
  ExceptionList = &local_10;
  __allmul(uVar3 << 0xf,((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11,param_3,param_4);
  local_14 = (undefined1 *)FUN_00988bb0(local_104,0);
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pcVar4 = __itoa(local_18,local_94,10);
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_00409350();
  local_8._0_1_ = 3;
  FUN_0043ec10(param_2,"EMPLOYEES",local_3c);
  local_1c = 1;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2;
  local_f0 = 0xf;
  local_f4 = 0;
  local_104[0] = local_104[0] & 0xffffff00;
  local_14 = (undefined1 *)0x0;
  local_18 = iVar5;
  if (0 < iVar5) {
    do {
      iVar1 = (int)local_14 * 4;
      if (*(int *)(iVar1 + *(int *)(param_1 + 0x5c)) != 0) {
        local_60 = 0xf;
        local_64 = 0;
        local_74 = local_74 & 0xffffff00;
        FUN_00409350();
        local_44 = 0xf;
        local_48 = 0;
        local_58 = local_58 & 0xffffff00;
        local_8._0_1_ = 5;
        local_8._1_3_ = 0;
        pcVar4 = __itoa(*(int *)(*(int *)(param_1 + 0x5c) + iVar1),local_124,10);
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        FUN_00409350();
        local_8._0_1_ = 6;
        iVar5 = DAT_0131bb34;
        if (DAT_0131bb34 == 0) {
          local_20 = FUN_00aae9af();
          local_8._0_1_ = 7;
          if (local_20 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_0041a160();
          }
          local_8 = CONCAT31(local_8._1_3_,8);
          local_20 = 0;
          if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        DAT_0131bb34 = iVar5;
        local_8._0_1_ = 6;
        if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < (int)local_14) {
          FUN_0096bb70();
        }
        FUN_0096d650();
        local_8._0_1_ = 9;
        FUN_00988fa0();
        local_8._0_1_ = 10;
        FUN_00988f20();
        local_8._0_1_ = 0xb;
        uVar6 = FUN_00988f20();
        local_8._0_1_ = 0xc;
        FUN_00448aa0(uVar6);
        if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_d4 = 0xf;
        local_d8 = 0;
        local_e8 = local_e8 & 0xffffff00;
        if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_9c = 0xf;
        local_a0 = 0;
        local_b0 = local_b0 & 0xffffff00;
        if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b8 = 0xf;
        local_bc = 0;
        local_cc = local_cc & 0xffffff00;
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_7c = 0xf;
        local_80 = 0;
        local_90 = local_90 & 0xffffff00;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_44 = 0xf;
        local_48 = 0;
        local_58 = local_58 & 0xffffff00;
        iVar5 = local_18;
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_14 = (undefined1 *)((int)local_14 + 1);
    } while ((int)local_14 < iVar5);
  }
  ExceptionList = local_10;
  return param_2;
}

