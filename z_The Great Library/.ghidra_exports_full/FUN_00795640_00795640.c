// FUN_00795640 @ 00795640 body=[[00795640, 00795699] [007956a0, 007956cb]]


undefined4 FUN_00795640(int *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  int unaff_EDI;
  bool bVar6;
  
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar5 = "transferbutton";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00795680:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00795685;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00795680;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00795685:
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(unaff_EDI + 4)) {
    do {
      cVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(unaff_EDI + 8) + iVar4 * 4) + 0x1c) + 0x58))
                        (param_1);
      if (cVar2 != '\0') {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_EDI + 4));
  }
  return 0;
}

