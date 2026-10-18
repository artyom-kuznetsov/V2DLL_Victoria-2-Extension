// FUN_00709910 @ 00709910 body=[[00709910, 00709ac3] [00709ac7, 00709af5] [00709afe, 0070a2d6] [0070a2da, 0070a308] [0070a30c, 0070a336]]


undefined4 FUN_00709910(int *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  byte *pbVar6;
  bool bVar7;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  byte *local_44;
  undefined1 local_40 [20];
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b7d056;
  local_10 = ExceptionList;
  local_44 = (byte *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00475500();
  local_44 = (byte *)(in_ECX + 5);
  pbVar3 = local_44;
  if (0xf < (uint)in_ECX[10]) {
    pbVar3 = *(byte **)local_44;
  }
  pbVar6 = &DAT_00e100e0;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_007099b3:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_007099b8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_007099b3;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_007099b8:
  if (iVar4 == 0) {
    (**(code **)(*(int *)param_1[0x585] + 0x14))(param_2);
    FUN_00459820();
    ExceptionList = local_10;
    return param_2;
  }
  if (in_ECX == *(int **)(param_1[0x348] + 0x48)) {
    FUN_0046e2f0(param_2,in_ECX);
    FUN_00459820();
    ExceptionList = local_10;
    return param_2;
  }
  (**(code **)(*in_ECX + 0x44))();
  cVar2 = FUN_0040b360();
  if (cVar2 != '\0') {
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("MESSAGECAT_COMBAT",0x11);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_40,local_60);
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
    local_8._0_1_ = 1;
    FUN_009a9740();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_0070a2a3;
  }
  (**(code **)(*in_ECX + 0x44))();
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    (**(code **)(*in_ECX + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_009885d0();
      local_8._0_1_ = 7;
      FUN_009a8ee0(local_40,local_2c);
      local_8._0_1_ = 8;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 9;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,7);
      goto LAB_0070a293;
    }
    (**(code **)(*in_ECX + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_009885d0();
      local_8._0_1_ = 10;
      FUN_009a8ee0(local_40,local_2c);
      local_8._0_1_ = 0xb;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0xc;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,10);
      goto LAB_0070a293;
    }
    (**(code **)(*in_ECX + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_009885d0();
      local_8._0_1_ = 0xd;
      FUN_009a8ee0(local_40,local_2c);
      local_8._0_1_ = 0xe;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0xf;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0xd);
      goto LAB_0070a293;
    }
    (**(code **)(*in_ECX + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_009885d0();
      local_8._0_1_ = 0x10;
      FUN_009a8ee0(local_40,local_2c);
      local_8._0_1_ = 0x11;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0x12;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x10);
      goto LAB_0070a293;
    }
    (**(code **)(*in_ECX + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_009885d0();
      local_8._0_1_ = 0x13;
      FUN_009a8ee0(local_40,local_2c);
      local_8._0_1_ = 0x14;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0x15;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x13);
      goto LAB_0070a293;
    }
    (**(code **)(*in_ECX + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 == '\0') {
      (**(code **)(*in_ECX + 0x44))();
      cVar2 = FUN_0040b360();
      if (cVar2 != '\0') goto LAB_0070a210;
      (**(code **)(*in_ECX + 0x44))();
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        (**(code **)(*in_ECX + 0x44))();
        cVar2 = FUN_0040b360();
        if (cVar2 == '\0') {
          (**(code **)(*in_ECX + 0x44))();
          cVar2 = FUN_0040b360();
          if (cVar2 == '\0') {
            cVar2 = FUN_0040b360();
            if (cVar2 == '\0') {
              cVar2 = FUN_0040b360();
              if (cVar2 == '\0') {
                (**(code **)(*in_ECX + 0x44))();
                cVar2 = FUN_0040b360();
                if (cVar2 == '\0') {
                  (**(code **)(*in_ECX + 0x44))();
                  cVar2 = FUN_0040b360();
                  if (cVar2 == '\0') {
                    cVar2 = FUN_00424500();
                    if ((cVar2 != '\0') ||
                       (cVar2 = (**(code **)(*DAT_012586e8 + 0xc))(), cVar2 != '\0'))
                    goto LAB_0070a30c;
                    FUN_0066a040();
                    local_8._0_1_ = 0x2b;
                    goto LAB_0070a1f0;
                  }
                  cVar2 = (**(code **)(*in_ECX + 0xc0))();
                  if (cVar2 == '\0') goto LAB_0070a2a3;
                  iVar4 = (**(code **)(*param_1 + 0x44))();
                  if (*(char *)(iVar4 + 0x34) == '\0') {
                    FUN_009885d0();
                    local_8._0_1_ = 0x25;
                    FUN_009a8ee0(local_40,local_2c);
                    local_8._0_1_ = 0x26;
                    iVar4 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
                    local_8._0_1_ = 0x27;
                    FUN_00408ed0();
                    FUN_00408ad0();
                    local_8 = CONCAT31(local_8._1_3_,0x25);
                  }
                  else {
                    FUN_009885d0();
                    local_8._0_1_ = 0x28;
                    FUN_009a8ee0(local_40,local_2c);
                    local_8._0_1_ = 0x29;
                    iVar4 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
                    local_8._0_1_ = 0x2a;
                    FUN_00408ed0();
                    FUN_00408ad0();
                    local_8 = CONCAT31(local_8._1_3_,0x28);
                  }
                }
                else {
                  FUN_009885d0();
                  local_8._0_1_ = 0x22;
                  FUN_009a8ee0(local_40,local_2c);
                  local_8._0_1_ = 0x23;
                  iVar4 = FUN_00475500();
                  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
                  local_8._0_1_ = 0x24;
                  FUN_00408ed0();
                  FUN_00408ad0();
                  local_8 = CONCAT31(local_8._1_3_,0x22);
                }
                goto LAB_0070a293;
              }
              FUN_00648150();
              local_8._0_1_ = 0x21;
            }
            else {
              FUN_00648150();
              local_8._0_1_ = 0x20;
            }
LAB_0070a1f0:
            FUN_004115d0();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00459820();
            goto LAB_0070a2a3;
          }
          FUN_009885d0();
          local_8._0_1_ = 0x1d;
          FUN_009a8ee0(local_40,local_2c);
          local_8._0_1_ = 0x1e;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_8._0_1_ = 0x1f;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x1d);
        }
        else {
          FUN_009885d0();
          local_8._0_1_ = 0x1a;
          FUN_009a8ee0(local_40,local_2c);
          local_8._0_1_ = 0x1b;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_8._0_1_ = 0x1c;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x1a);
        }
        goto LAB_0070a293;
      }
      FUN_00576f80();
      puVar5 = (undefined4 *)FUN_005c2ad0();
      if (puVar5 == (undefined4 *)0x0) goto LAB_0070a2a3;
      (**(code **)*puVar5)();
      local_8 = CONCAT31(local_8._1_3_,0x19);
      FUN_00408ed0();
      goto LAB_0070a298;
    }
LAB_0070a210:
    if (((char)param_1[0x17] != '\0') &&
       (iVar4 = (**(code **)(*param_1 + 0x44))(), *(char *)(iVar4 + 0x34) == '\0')) {
      FUN_009885d0();
      local_8._0_1_ = 0x16;
      FUN_009a8ee0(local_40,local_2c);
      local_8._0_1_ = 0x17;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0x18;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x16);
      goto LAB_0070a293;
    }
  }
  else {
    FUN_009885d0();
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_40,local_2c);
    local_8._0_1_ = 5;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 6;
    FUN_00408ed0();
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,4);
LAB_0070a293:
    FUN_009a9740();
LAB_0070a298:
    local_8 = local_8 & 0xffffff00;
    FUN_00408ad0();
  }
LAB_0070a2a3:
  FUN_00989330();
  local_8._0_1_ = 0x2c;
  FUN_00408ed0();
  local_8._0_1_ = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00989330();
  local_8._0_1_ = 0x2d;
  FUN_00408ed0();
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_0070a30c:
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_10;
  return param_2;
}

