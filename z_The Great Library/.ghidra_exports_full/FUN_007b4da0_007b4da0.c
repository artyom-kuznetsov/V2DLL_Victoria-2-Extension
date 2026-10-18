// FUN_007b4da0 @ 007b4da0 body=[[007b4da0, 007b4f4f] [007b4f53, 007b4f8e] [007b4f94, 007b4fe3]]


undefined4 FUN_007b4da0(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int *in_ECX;
  char *pcVar5;
  bool bVar6;
  uint auStack_cc [4];
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 auStack_2c [24];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b6b5db;
  pvStack_14 = ExceptionList;
  local_7c = 0xf;
  local_60 = 0xf;
  local_44 = 0xf;
  local_b0 = 0;
  local_80 = 0;
  local_90 = 0;
  local_64 = 0;
  local_74 = 0;
  local_48 = 0;
  local_58 = 0;
  local_3c = 0;
  local_38 = 1;
  local_c = 0;
  ExceptionList = &pvStack_14;
  pbVar3 = (byte *)(**(code **)(*in_ECX + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar5 = "name_label";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_007b4e50:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_007b4e55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_007b4e50;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_007b4e55:
  if (iVar4 != 0) {
    pbVar3 = (byte *)(**(code **)(*in_ECX + 0x44))();
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pcVar5 = "member_button";
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_007b4e92:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_007b4e97;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_007b4e92;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_007b4e97:
    if (iVar4 != 0) {
      (**(code **)(*in_ECX + 0x44))();
      cVar2 = FUN_0040b360();
      if (cVar2 != '\0') {
        uStack_b8 = 0xf;
        uStack_bc = 0;
        auStack_cc[0] = auStack_cc[0] & 0xffffff00;
        FUN_00409350("ME_CLICK_BUY",0xc);
        local_c._0_1_ = 1;
        FUN_009a8ee0(auStack_2c,auStack_cc);
        local_c._0_1_ = 2;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_c._0_1_ = 3;
        FUN_00408ed0();
        if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_98 = 0xf;
        uStack_9c = 0;
        uStack_ac = uStack_ac & 0xffffff00;
        local_c._0_1_ = 1;
        FUN_009a9740();
        local_c = (uint)local_c._1_3_ << 8;
        if (0xf < uStack_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      goto LAB_007b4fb7;
    }
  }
  FUN_00408ed0();
  FUN_00408ed0();
LAB_007b4fb7:
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = pvStack_14;
  return param_2;
}

