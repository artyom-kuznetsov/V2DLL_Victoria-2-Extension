// FUN_006d0b60 @ 006d0b60 body=[[006d0b60, 006d0d02] [006d0d06, 006d0d26] [006d0d2a, 006d0dd3] [006d0dd7, 006d0df7] [006d0dfb, 006d1148] [006d114c, 006d1160]]


undefined1 * FUN_006d0b60(undefined4 param_1,undefined1 *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  undefined1 local_78 [20];
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined8 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b8ade1;
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
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  pbVar4 = (byte *)(**(code **)(*in_ECX + 0x44))();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar8 = "suppress_button";
  do {
    bVar1 = *pbVar4;
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_006d0bf0:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_006d0bf5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_006d0bf0;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_006d0bf5:
  if (iVar5 == 0) {
    iVar5 = FUN_006d06b0();
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return param_2;
    }
    local_1c._0_4_ = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    if (*(int *)(iVar5 + 0x28) != 0) {
      uVar2 = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                       0x15a0);
      local_1c = __alldiv(uVar2 << 0x1e,
                          (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf |
                          (uVar2 & 0x1ffff) >> 2);
      puVar6 = (uint *)FUN_00472300();
      if (((int)puVar6[1] < local_1c._4_4_) ||
         (((int)puVar6[1] <= local_1c._4_4_ && (*puVar6 <= (uint)local_1c)))) {
        FUN_00988a50();
        local_8 = 4;
        FUN_00472300();
        uVar7 = FUN_00988bb0(local_40,1);
        local_8._0_1_ = 5;
        FUN_0043ec10(local_5c,&DAT_00df7e90,uVar7);
        local_8 = CONCAT31(local_8._1_3_,6);
        FUN_00408ed0();
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        if (local_64 < 0x10) {
          ExceptionList = local_10;
          return param_2;
        }
        goto LAB_006d1144;
      }
    }
    FUN_00472300();
    FUN_00988bb0(local_78,2);
    local_8 = 1;
    uVar7 = FUN_00988a50();
    local_8._0_1_ = 2;
    FUN_0043ec10(local_40,&DAT_00df7e90,uVar7);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00408ed0();
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
  }
  else {
    pbVar4 = (byte *)(**(code **)(*in_ECX + 0x44))();
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    pbVar9 = &DAT_00df09f4;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_006d0e51:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_006d0e56;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_006d0e51;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_006d0e56:
    if (iVar5 != 0) {
      (**(code **)(*in_ECX + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        (**(code **)(*in_ECX + 0x44))();
        cVar3 = FUN_0040b360();
        if (cVar3 != '\0') {
          iVar5 = FUN_006d06b0();
          if (iVar5 == 0) {
            ExceptionList = local_10;
            return param_2;
          }
          FUN_00472550();
          local_8 = 8;
          FUN_00408ed0();
          FUN_00408ad0();
          ExceptionList = local_10;
          return param_2;
        }
        (**(code **)(*in_ECX + 0x44))();
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          (**(code **)(*in_ECX + 0x44))();
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            ExceptionList = local_10;
            return param_2;
          }
          iVar5 = FUN_006d06b0();
          if (iVar5 == 0) {
            ExceptionList = local_10;
            return param_2;
          }
          FUN_009885d0();
          local_8 = 0xf;
          FUN_009a8ee0();
          local_8._0_1_ = 0x10;
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
          local_8._0_1_ = 0x11;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8._0_1_ = 0xf;
          FUN_009a9740();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x12;
          FUN_009a8ee0();
          local_8._0_1_ = 0x13;
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
          local_8._0_1_ = 0x14;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x12);
        }
        else {
          iVar5 = FUN_006d06b0();
          if (iVar5 == 0) {
            ExceptionList = local_10;
            return param_2;
          }
          FUN_009885d0();
          local_8 = 9;
          FUN_009a8ee0();
          local_8._0_1_ = 10;
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
          local_8._0_1_ = 0xb;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8._0_1_ = 9;
          FUN_009a9740();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0xc;
          FUN_009a8ee0();
          local_8._0_1_ = 0xd;
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
          local_8._0_1_ = 0xe;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0xc);
        }
        FUN_009a9740();
        FUN_00408ad0();
        ExceptionList = local_10;
        return param_2;
      }
    }
    iVar5 = FUN_006d06b0();
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return param_2;
    }
    FUN_00472cd0();
    local_8 = 7;
    FUN_00408ed0();
  }
  if (local_64 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
LAB_006d1144:
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

