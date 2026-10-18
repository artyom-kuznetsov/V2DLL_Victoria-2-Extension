// FUN_00464f10 @ 00464f10 body=[[00464f10, 00464fa3]]


undefined4 FUN_00464f10(void)

{
  byte bVar1;
  char cVar2;
  byte *in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
  pbVar3 = in_EAX;
  if (0xf < *(uint *)(in_EAX + 0x14)) {
    pbVar3 = *(byte **)in_EAX;
  }
  pbVar5 = &DAT_00dfa838;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00464f45:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00464f4a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00464f45;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00464f4a:
  if (iVar4 != 0) {
    if (0xf < *(uint *)(in_EAX + 0x14)) {
      in_EAX = *(byte **)in_EAX;
    }
    pcVar6 = "strings";
    do {
      bVar1 = *in_EAX;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00464f80:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00464f85;
      }
      if (bVar1 == 0) break;
      bVar1 = in_EAX[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00464f80;
      in_EAX = in_EAX + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00464f85:
    if ((iVar4 != 0) && (cVar2 = FUN_0040b360(), cVar2 == '\0')) {
      return 0;
    }
  }
  return 1;
}

