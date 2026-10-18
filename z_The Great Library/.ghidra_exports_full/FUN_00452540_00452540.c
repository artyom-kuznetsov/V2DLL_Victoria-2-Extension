// FUN_00452540 @ 00452540 body=[[00452540, 0045265d] [00452661, 00452698] [0045269c, 00452779] [0045277d, 004527b4] [004527b8, 00452869] [0045286d, 004528a1] [004528aa, 00452bfd] [00452c01, 00452c38] [00452c3c, 00452c53] [00452c57, 00452c6b]]


undefined1 * FUN_00452540(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int *in_ECX;
  char *pcVar5;
  bool bVar6;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b6297b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_18 = 1;
  local_14 = (byte *)(**(code **)(*in_ECX + 0x44))();
  pbVar3 = local_14;
  if (0xf < *(uint *)(local_14 + 0x14)) {
    pbVar3 = *(byte **)local_14;
  }
  pcVar5 = "header_title";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_004525d4:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004525d9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_004525d4;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_004525d9:
  if (iVar4 == 0) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (uint)local_48[0]._1_3_ << 8;
    FUN_00409350("MSG_FILTER_TOOLTIP_HEADER",0x19);
    local_8 = 1;
    FUN_009a8ee0(local_2c,local_48);
    local_8._0_1_ = 2;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 3;
    FUN_00408ed0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto joined_r0x004527c5;
  }
  pbVar3 = local_14;
  if (0xf < *(uint *)(local_14 + 0x14)) {
    pbVar3 = *(byte **)local_14;
  }
  pcVar5 = "filter_deselect";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_004526f0:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004526f5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_004526f0;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_004526f5:
  if (iVar4 == 0) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (uint)local_48[0]._1_3_ << 8;
    FUN_00409350("MSG_FILTER_TOOLTIP_DESELECT",0x1b);
    local_8 = 5;
    FUN_009a8ee0(local_2c,local_48);
    local_8._0_1_ = 6;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 7;
    FUN_00408ed0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto joined_r0x004527c5;
  }
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    cVar2 = FUN_0040b360();
    if (cVar2 == '\0') {
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        cVar2 = FUN_0040b360();
        if (cVar2 == '\0') {
          cVar2 = FUN_0040b360();
          if (cVar2 == '\0') {
            cVar2 = FUN_0040b360();
            if ((((cVar2 == '\0') && (cVar2 = FUN_0040b360(), cVar2 == '\0')) &&
                (cVar2 = FUN_0040b360(), cVar2 == '\0')) &&
               (((cVar2 = FUN_0040b360(), cVar2 == '\0' && (cVar2 = FUN_0040b360(), cVar2 == '\0'))
                && (cVar2 = FUN_0040b360(), cVar2 == '\0')))) goto LAB_00452b80;
            FUN_009885d0();
            local_8 = 0x18;
            FUN_009a8ee0(local_2c,local_64);
            local_8._0_1_ = 0x19;
            iVar4 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
            local_8._0_1_ = 0x1a;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8._0_1_ = 0x18;
          }
          else {
            FUN_009885d0();
            local_8 = 0x15;
            FUN_009a8ee0(local_2c,local_64);
            local_8._0_1_ = 0x16;
            iVar4 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
            local_8._0_1_ = 0x17;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8._0_1_ = 0x15;
          }
        }
        else {
          FUN_009885d0();
          local_8 = 0x12;
          FUN_009a8ee0(local_2c,local_64);
          local_8._0_1_ = 0x13;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_8._0_1_ = 0x14;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8._0_1_ = 0x12;
        }
      }
      else {
        FUN_009885d0();
        local_8 = 0xf;
        FUN_009a8ee0(local_2c,local_64);
        local_8._0_1_ = 0x10;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_8._0_1_ = 0x11;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8._0_1_ = 0xf;
      }
    }
    else {
      FUN_009885d0();
      local_8 = 0xc;
      FUN_009a8ee0(local_2c,local_64);
      local_8._0_1_ = 0xd;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0xe;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8._0_1_ = 0xc;
    }
    FUN_009a9740();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
  }
  else {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("MSG_FILTER_TOOLTIP_BESTGUESS",0x1c);
    local_8 = 9;
    FUN_009a8ee0(local_2c,local_48);
    local_8._0_1_ = 10;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 0xb;
    FUN_00408ed0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8._0_1_ = 9;
    FUN_009a9740();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_00452b80:
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("MSG_FILTER_TOOLTIP_DELAYED",0x1a);
  local_8 = 0x1b;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 0x1c;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 0x1d;
  FUN_00408ed0();
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
joined_r0x004527c5:
  if (0xf < local_34) {
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

