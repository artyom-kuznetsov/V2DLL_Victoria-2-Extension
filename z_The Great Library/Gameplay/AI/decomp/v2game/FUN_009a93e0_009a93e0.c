// FUN_009a93e0 @ 009a93e0 body=[[009a93e0, 009a9607]]


void FUN_009a93e0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *unaff_ESI;
  bool bVar5;
  
  pbVar2 = unaff_ESI;
  if (0xf < *(uint *)(unaff_ESI + 0x14)) {
    pbVar2 = *(byte **)unaff_ESI;
  }
  pcVar4 = "SINGULAR";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_009a9420:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009a9425;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_009a9420;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a9425:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  pbVar2 = unaff_ESI;
  if (0xf < *(uint *)(unaff_ESI + 0x14)) {
    pbVar2 = *(byte **)unaff_ESI;
  }
  pcVar4 = "PLURAL";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_009a9463:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009a9468;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_009a9463;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a9468:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  pbVar2 = unaff_ESI;
  if (0xf < *(uint *)(unaff_ESI + 0x14)) {
    pbVar2 = *(byte **)unaff_ESI;
  }
  pcVar4 = "MASCULINE";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_009a94a8:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009a94ad;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_009a94a8;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a94ad:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  pbVar2 = unaff_ESI;
  if (0xf < *(uint *)(unaff_ESI + 0x14)) {
    pbVar2 = *(byte **)unaff_ESI;
  }
  pcVar4 = "FEMININE";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_009a94e8:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009a94ed;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_009a94e8;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a94ed:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  pbVar2 = unaff_ESI;
  if (0xf < *(uint *)(unaff_ESI + 0x14)) {
    pbVar2 = *(byte **)unaff_ESI;
  }
  pcVar4 = "NEUTER";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_009a9528:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009a952d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_009a9528;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a952d:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  pbVar2 = unaff_ESI;
  if (0xf < *(uint *)(unaff_ESI + 0x14)) {
    pbVar2 = *(byte **)unaff_ESI;
  }
  pcVar4 = "SUBJECT";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_009a9570:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009a9575;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_009a9570;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a9575:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  pbVar2 = unaff_ESI;
  if (0xf < *(uint *)(unaff_ESI + 0x14)) {
    pbVar2 = *(byte **)unaff_ESI;
  }
  pcVar4 = "DIRECT_OBJECT";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_009a95b0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009a95b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_009a95b0;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a95b5:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  if (0xf < *(uint *)(unaff_ESI + 0x14)) {
    unaff_ESI = *(byte **)unaff_ESI;
  }
  pcVar4 = "INDIRECT_OBJECT";
  do {
    bVar1 = *unaff_ESI;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_009a95f1:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009a95f6;
    }
    if (bVar1 == 0) break;
    bVar1 = unaff_ESI[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_009a95f1;
    unaff_ESI = unaff_ESI + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a95f6:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 8) = 2;
  }
  return;
}

