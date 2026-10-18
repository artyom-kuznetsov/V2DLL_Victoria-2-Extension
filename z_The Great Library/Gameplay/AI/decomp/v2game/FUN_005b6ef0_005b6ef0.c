// FUN_005b6ef0 @ 005b6ef0 body=[[005b6ef0, 005b7038] [005b703c, 005b704c]]


void FUN_005b6ef0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  char *pcVar5;
  bool bVar6;
  undefined4 local_60;
  int local_5c;
  int iStack_58;
  undefined4 auStack_50 [5];
  uint uStack_3c;
  undefined4 auStack_34 [5];
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((char)in_ECX[4] == '\0') {
    local_5c = DAT_00f096c4;
    local_60 = 0x25;
    DAT_00f096c4 = DAT_00f096c4 + 1;
    ExceptionList = &pvStack_14;
    (**(code **)(*in_ECX + 0x18))(&local_60);
  }
  pbVar2 = (byte *)(in_ECX + 0x2d);
  if (0xf < (uint)in_ECX[0x32]) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar5 = "no_leader";
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_005b6f80:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_005b6f85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_005b6f80;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005b6f85:
  if (iVar3 == 0) {
    if (in_ECX[0x2c] == 0) {
      iStack_58 = in_ECX[0x23];
      uVar4 = FUN_0055fd70(auStack_50);
      uStack_c = 0;
      FUN_00408ed0(uVar4,0,0xffffffff);
      auStack_34[0] = auStack_50[0];
      uStack_20 = uStack_3c;
    }
    else {
      iStack_58 = in_ECX[0x23];
      uVar4 = FUN_0055fbd0(auStack_34);
      uStack_c = 1;
      FUN_00408ed0(uVar4,0,0xffffffff);
    }
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_34[0]);
    }
  }
  ExceptionList = pvStack_14;
  return;
}

