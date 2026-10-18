// FUN_00464de0 @ 00464de0 body=[[00464de0, 00464f04]]


int FUN_00464de0(int param_1)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  int *piVar7;
  byte *unaff_EDI;
  bool bVar8;
  
  pbVar3 = unaff_EDI;
  if (0xf < *(uint *)(unaff_EDI + 0x14)) {
    pbVar3 = *(byte **)unaff_EDI;
  }
  pbVar5 = &DAT_00dfa838;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00464e20:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00464e25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00464e20;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00464e25:
  if (iVar4 == 0) {
    if (in_EAX < *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 4) {
      piVar7 = (int *)(in_EAX * 0x10 + *(int *)(param_1 + 0x24));
      return piVar7[1] - *piVar7 >> 3;
    }
  }
  else {
    if (0xf < *(uint *)(unaff_EDI + 0x14)) {
      unaff_EDI = *(byte **)unaff_EDI;
    }
    pcVar6 = "strings";
    do {
      bVar1 = *unaff_EDI;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00464e86:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00464e8b;
      }
      if (bVar1 == 0) break;
      bVar1 = unaff_EDI[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00464e86;
      unaff_EDI = unaff_EDI + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00464e8b:
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x44);
      if (in_EAX < *(int *)(param_1 + 0x48) - iVar4 >> 4) {
        return (*(int *)(iVar4 + 4 + in_EAX * 0x10) - *(int *)(iVar4 + in_EAX * 0x10)) / 0x1c;
      }
    }
    else {
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        return -1;
      }
      if (in_EAX < *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 4) {
        piVar7 = (int *)(in_EAX * 0x10 + *(int *)(param_1 + 0x34));
        return piVar7[1] - *piVar7 >> 2;
      }
    }
  }
  return 0;
}

