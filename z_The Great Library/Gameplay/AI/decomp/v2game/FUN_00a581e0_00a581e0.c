// FUN_00a581e0 @ 00a581e0 body=[[00a581e0, 00a582d3]]


byte FUN_00a581e0(void)

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
  pcVar5 = "UPPER_LEFT";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00a58214:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a58219;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00a58214;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00a58219:
  if (iVar4 == 0) {
    return 0;
  }
  if (0xf < *(uint *)(unaff_EDI + 0x14)) {
    unaff_EDI = *(byte **)unaff_EDI;
  }
  pcVar5 = "UPPER_RIGHT";
  do {
    bVar1 = *unaff_EDI;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00a58250:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a58255;
    }
    if (bVar1 == 0) break;
    bVar1 = unaff_EDI[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00a58250;
    unaff_EDI = unaff_EDI + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00a58255:
  if (iVar4 == 0) {
    return 1;
  }
  cVar2 = FUN_0040b360();
  if (cVar2 != '\0') {
    return 2;
  }
  cVar2 = FUN_0040b360();
  if (cVar2 != '\0') {
    return 3;
  }
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    cVar2 = FUN_0040b360();
    if (cVar2 == '\0') {
      cVar2 = FUN_0040b360();
      return -(cVar2 != '\0') & 6;
    }
    return 5;
  }
  return 4;
}

