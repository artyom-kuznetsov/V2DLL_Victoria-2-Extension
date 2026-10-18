// FUN_0064d940 @ 0064d940 body=[[0064d940, 0064dac5]]


undefined4 FUN_0064d940(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  
  FUN_0066bc90();
  *(undefined1 *)(in_ECX + 0x744) = 1;
  FUN_004cd940();
  *(undefined1 *)(in_ECX + 0x744) = 0;
  iVar5 = *(int *)(param_1 + 0x20);
  pbVar7 = (byte *)(iVar5 + 0x14);
  pbVar3 = pbVar7;
  if (0xf < *(uint *)(iVar5 + 0x28)) {
    pbVar3 = *(byte **)pbVar7;
  }
  pcVar6 = "TECH_ONCE";
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_0064d9a8:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0064d9ad;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_0064d9a8;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0064d9ad:
  if (iVar4 != 0) {
    if (0xf < *(uint *)(iVar5 + 0x28)) {
      pbVar7 = *(byte **)pbVar7;
    }
    pcVar6 = "TECH_REPEAT";
    do {
      bVar1 = *pbVar7;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_0064d9e6:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0064d9eb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_0064d9e6;
      pbVar7 = pbVar7 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0064d9eb:
    if (iVar5 != 0) {
      cVar2 = FUN_0040b360();
      if (cVar2 != '\0') {
        FUN_0066bd60(3,0);
        return 1;
      }
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        return 1;
      }
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar5 == 0) {
        if (*(int *)(param_1 + 0x38) == 0) {
          iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                           *(int *)(param_1 + 0x40) * 4) + 0xbe4) * 4);
        }
        else {
          iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                           *(int *)(param_1 + 0x38) * 4) + 0xbe4) * 4);
        }
        if (iVar5 == 0) {
          return 1;
        }
      }
      (**(code **)(*in_ECX + 0xb4))(iVar5);
      return 1;
    }
  }
  FUN_0066bd60(5,0);
  return 1;
}

