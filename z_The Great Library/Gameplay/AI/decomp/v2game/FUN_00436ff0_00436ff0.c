// FUN_00436ff0 @ 00436ff0 body=[[00436ff0, 0043708c]]


int FUN_00436ff0(void)

{
  byte bVar1;
  char cVar2;
  byte *in_EAX;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar3 = in_EAX;
  if (0xf < *(uint *)(in_EAX + 0x14)) {
    pbVar3 = *(byte **)in_EAX;
  }
  pcVar5 = "administration";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00437025:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0043702a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00437025;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0043702a:
  if (iVar4 == 0) {
    return 1;
  }
  if (0xf < *(uint *)(in_EAX + 0x14)) {
    in_EAX = *(byte **)in_EAX;
  }
  pcVar5 = "military";
  do {
    bVar1 = *in_EAX;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00437064:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00437069;
    }
    if (bVar1 == 0) break;
    bVar1 = in_EAX[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00437064;
    in_EAX = in_EAX + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00437069:
  if (iVar4 != 0) {
    cVar2 = FUN_0040b360();
    return (-(uint)(cVar2 != '\0') & 0xfffffffc) + 4;
  }
  return 3;
}

