// FUN_004da1c0 @ 004da1c0 body=[[004da1c0, 004da272]]


undefined4 FUN_004da1c0(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *unaff_EDI;
  bool bVar7;
  
  pbVar3 = unaff_EDI;
  if (0xf < *(uint *)(unaff_EDI + 0x14)) {
    pbVar3 = *(byte **)unaff_EDI;
  }
  pcVar6 = "factory";
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_004da1f4:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004da1f9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_004da1f4;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_004da1f9:
  if (iVar4 == 0) {
    return 0;
  }
  if (0xf < *(uint *)(unaff_EDI + 0x14)) {
    unaff_EDI = *(byte **)unaff_EDI;
  }
  pbVar3 = &DAT_00dfda14;
  do {
    bVar1 = *unaff_EDI;
    bVar7 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) {
LAB_004da230:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004da235;
    }
    if (bVar1 == 0) break;
    bVar1 = unaff_EDI[1];
    bVar7 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) goto LAB_004da230;
    unaff_EDI = unaff_EDI + 2;
    pbVar3 = pbVar3 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_004da235:
  if (iVar4 == 0) {
    return 1;
  }
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    cVar2 = FUN_0040b360();
    uVar5 = 3;
    if (cVar2 == '\0') {
      uVar5 = 4;
    }
    return uVar5;
  }
  return 2;
}

