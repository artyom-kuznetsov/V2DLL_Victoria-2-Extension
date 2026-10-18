// FUN_00a16a90 @ 00a16a90 body=[[00a16a90, 00a16b59]]


byte FUN_00a16a90(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  byte *unaff_EDI;
  bool bVar6;
  
  pbVar3 = unaff_EDI;
  if (0xf < *(uint *)(unaff_EDI + 0x14)) {
    pbVar3 = *(byte **)unaff_EDI;
  }
  pcVar5 = "RUNNING";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00a16ac4:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a16ac9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00a16ac4;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00a16ac9:
  if (iVar4 == 0) {
    return 1;
  }
  if (0xf < *(uint *)(unaff_EDI + 0x14)) {
    unaff_EDI = *(byte **)unaff_EDI;
  }
  pcVar5 = "FINNISHED";
  do {
    bVar1 = *unaff_EDI;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00a16b04:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a16b09;
    }
    if (bVar1 == 0) break;
    bVar1 = unaff_EDI[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00a16b04;
    unaff_EDI = unaff_EDI + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00a16b09:
  if (iVar4 == 0) {
    return 2;
  }
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    cVar2 = FUN_0040b360();
    if (cVar2 == '\0') {
      cVar2 = FUN_0040b360();
      return -(cVar2 != '\0') & 5;
    }
    return 4;
  }
  return 3;
}

