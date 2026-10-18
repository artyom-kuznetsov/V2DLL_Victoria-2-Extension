// FUN_00475580 @ 00475580 body=[[00475580, 00475653]]


undefined4 FUN_00475580(void)

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
  pcVar5 = "NEVER";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_004755c0:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004755c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_004755c0;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_004755c5:
  if (iVar4 == 0) {
    return 0;
  }
  if (0xf < *(uint *)(unaff_EDI + 0x14)) {
    unaff_EDI = *(byte **)unaff_EDI;
  }
  pcVar5 = "MONTHLY";
  do {
    bVar1 = *unaff_EDI;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00475600:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00475605;
    }
    if (bVar1 == 0) break;
    bVar1 = unaff_EDI[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00475600;
    unaff_EDI = unaff_EDI + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00475605:
  if (iVar4 == 0) {
    return 1;
  }
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    cVar2 = FUN_0040b360();
    if (cVar2 == '\0') {
      FUN_0040b360();
      return 4;
    }
    return 3;
  }
  return 2;
}

