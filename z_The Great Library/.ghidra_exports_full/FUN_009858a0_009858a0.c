// FUN_009858a0 @ 009858a0 body=[[009858a0, 009859b6] [009859ba, 009859f1] [009859f5, 00985a10] [00985a19, 00985ad6] [00985ada, 00985afa] [00985afe, 00985b1d] [00985b26, 00985e50]]


undefined1 * FUN_009858a0(undefined4 param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 local_84 [28];
  undefined4 local_68;
  uint local_64 [4];
  int local_54;
  uint local_50;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b63d83;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
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
  local_68 = 1;
  pbVar3 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar8 = "closebutton";
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_00985932:
      local_54 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00985937;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_00985932;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  local_54 = 0;
LAB_00985937:
  if (local_54 == 0) {
    local_50 = 0xf;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("TUTORIAL_EXIT",0xd);
    local_8 = 1;
    FUN_009a8ee0(local_40,local_64);
    local_8._0_1_ = 2;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 3;
    FUN_00408ed0();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_009adb70();
    if (local_3c == 0) {
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      if (local_50 < 0x10) {
        ExceptionList = local_10;
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pbVar3 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar8 = "progress";
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_00985a52:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00985a57;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_00985a52;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00985a57:
  if (iVar4 == 0) {
    FUN_00868080();
    uVar5 = FUN_009888f0();
    local_8 = 5;
    uVar6 = FUN_009888f0();
    local_8._0_1_ = 6;
    FUN_0043ec10(local_2c,"CURRENT",uVar6,"TOTAL",uVar5);
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_00408ed0();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (local_50 < 0x10) {
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (local_34 < 0x10) {
        ExceptionList = local_10;
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(*param_3 + 0x44))();
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    (**(code **)(*param_3 + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 == '\0') {
      ExceptionList = local_10;
      return param_2;
    }
    iVar4 = FUN_00868080();
    if (*(int *)(iVar4 + 0xa4) == 0) {
      FUN_009885d0();
      local_8 = 0x15;
      FUN_009a8ee0(local_40,local_2c);
      local_8._0_1_ = 0x16;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0x17;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x15);
    }
    else {
      iVar4 = FUN_00868080();
      if (*(int *)(iVar4 + 0xa4) == 1) {
        FUN_009885d0();
        local_8 = 0x18;
        FUN_009a8ee0(local_40,local_2c);
        local_8._0_1_ = 0x19;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_8._0_1_ = 0x1a;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x18);
      }
      else {
        FUN_009885d0();
        local_8 = 0x1b;
        FUN_009a8ee0(local_40,local_2c);
        local_8._0_1_ = 0x1c;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_8._0_1_ = 0x1d;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x1b);
      }
    }
  }
  else {
    iVar4 = FUN_00868080();
    iVar7 = FUN_00867ed0();
    if (iVar4 != iVar7) {
      FUN_009888f0();
      local_8 = 0xb;
      FUN_009885d0();
      local_8._0_1_ = 0xc;
      uVar5 = FUN_00988f20();
      local_8._0_1_ = 0xd;
      FUN_009a8ee0(local_40,uVar5);
      local_8._0_1_ = 0xe;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0x10;
      FUN_009a9740();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x13;
      FUN_00408ad0();
      FUN_0042c180(local_84,local_2c);
      local_8 = CONCAT31(local_8._1_3_,0x14);
      FUN_00408ed0();
      FUN_00408ad0();
      goto LAB_00985e34;
    }
    FUN_009885d0();
    local_8 = 8;
    FUN_009a8ee0(local_40,local_2c);
    local_8._0_1_ = 9;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 10;
    FUN_00408ed0();
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,8);
  }
  FUN_009a9740();
LAB_00985e34:
  FUN_00408ad0();
  ExceptionList = local_10;
  return param_2;
}

