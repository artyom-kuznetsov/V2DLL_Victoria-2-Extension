// FUN_007b89d0 @ 007b89d0 body=[[007b89d0, 007b8e5b]]


undefined4 FUN_007b89d0(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  char *pcVar6;
  bool bVar7;
  undefined1 auStack_e4 [20];
  undefined1 auStack_d0 [56];
  undefined1 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 auStack_34 [32];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b6b4c7;
  pvStack_14 = ExceptionList;
  local_84 = 0xf;
  local_68 = 0xf;
  local_4c = 0xf;
  local_88 = 0;
  local_98 = 0;
  local_6c = 0;
  local_7c = 0;
  local_50 = 0;
  local_60 = 0;
  local_44 = 0;
  local_40 = 1;
  local_c = 0;
  ExceptionList = &pvStack_14;
  pbVar3 = (byte *)(**(code **)(*in_ECX + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar6 = "name_label";
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_007b8a84:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_007b8a89;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_007b8a84;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_007b8a89:
  if (iVar4 != 0) {
    pbVar3 = (byte *)(**(code **)(*in_ECX + 0x44))();
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pcVar6 = "member_button";
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_007b8ac6:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_007b8acb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_007b8ac6;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_007b8acb:
    if (iVar4 != 0) {
      (**(code **)(*in_ECX + 0x44))();
      cVar2 = FUN_0040b360();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x90) == 0) {
          FUN_009885d0();
          local_c._0_1_ = 1;
          FUN_009a8ee0(auStack_e4,auStack_34);
          local_c._0_1_ = 2;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_c._0_1_ = 3;
          FUN_00408ed0();
          FUN_00408ad0();
          local_c._0_1_ = 1;
          FUN_009a9740();
          local_c = (uint)local_c._1_3_ << 8;
          FUN_00408ad0();
        }
        else {
          iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x100))();
          iVar4 = *(int *)(iVar4 + 0x28);
          if (*(uint *)(param_1 + 0xcc) < 0x10) {
            pcVar6 = (char *)(param_1 + 0xb8);
          }
          else {
            pcVar6 = *(char **)(param_1 + 0xb8);
          }
          _atof(pcVar6);
          FUN_00401000();
          iVar5 = FUN_00b31c00();
          if (iVar4 < iVar5) {
            FUN_009885d0();
            local_c._0_1_ = 4;
            FUN_009a8ee0(auStack_e4,auStack_34);
            local_c._0_1_ = 6;
            FUN_00408ad0();
            FUN_009885d0();
            local_c._0_1_ = 7;
            FUN_00401320();
            local_c._0_1_ = 8;
            FUN_009a9980();
            FUN_00408ad0();
            local_c._0_1_ = 6;
            FUN_00408ad0();
            iVar4 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
            local_c._0_1_ = 9;
            FUN_00408ed0();
            FUN_00408ad0();
            local_c = (uint)local_c._1_3_ << 8;
            FUN_009a9740();
          }
          else {
            if (*(char *)(param_1 + 0x17c) == '\0') {
              FUN_009885d0();
              local_c._0_1_ = 10;
              FUN_009a8ee0(auStack_e4,auStack_d0);
              local_c._0_1_ = 0xb;
              iVar4 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
              local_c._0_1_ = 0xc;
              FUN_00408ed0();
              FUN_00408ad0();
              local_c._0_1_ = 10;
            }
            else {
              FUN_009885d0();
              local_c._0_1_ = 0xd;
              FUN_009a8ee0(auStack_e4,auStack_d0);
              local_c._0_1_ = 0xe;
              iVar4 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
              local_c._0_1_ = 0xf;
              FUN_00408ed0();
              FUN_00408ad0();
              local_c._0_1_ = 0xd;
            }
            FUN_009a9740();
            local_c = (uint)local_c._1_3_ << 8;
            FUN_00408ad0();
          }
        }
      }
      goto LAB_007b8e2f;
    }
  }
  FUN_00408ed0();
  FUN_00408ed0();
LAB_007b8e2f:
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = pvStack_14;
  return param_2;
}

