// FUN_00464fb0 @ 00464fb0 body=[[00464fb0, 004650db]]


uint FUN_00464fb0(int param_1,int param_2)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *unaff_EDI;
  bool bVar7;
  
  pbVar3 = unaff_EDI;
  if (0xf < *(uint *)(unaff_EDI + 0x14)) {
    pbVar3 = *(byte **)unaff_EDI;
  }
  pbVar5 = &DAT_00dfa838;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00464ff0:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00464ff5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00464ff0;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00464ff5:
  if (iVar4 == 0) {
    uVar2 = *(uint *)(param_1 + 0x24);
    if (in_EAX < (int)(*(int *)(param_1 + 0x28) - uVar2) >> 4) {
      return CONCAT31((int3)(uVar2 >> 8),
                      param_2 < *(int *)(uVar2 + 4 + in_EAX * 0x10) -
                                *(int *)(uVar2 + in_EAX * 0x10) >> 3);
    }
  }
  else {
    if (0xf < *(uint *)(unaff_EDI + 0x14)) {
      unaff_EDI = *(byte **)unaff_EDI;
    }
    pcVar6 = "strings";
    do {
      bVar1 = *unaff_EDI;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00465057:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0046505c;
      }
      if (bVar1 == 0) break;
      bVar1 = unaff_EDI[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00465057;
      unaff_EDI = unaff_EDI + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0046505c:
    if (iVar4 == 0) {
      uVar2 = *(uint *)(param_1 + 0x44);
      if (in_EAX < (int)(*(int *)(param_1 + 0x48) - uVar2) >> 4) {
        iVar4 = (*(int *)(uVar2 + 4 + in_EAX * 0x10) - *(int *)(uVar2 + in_EAX * 0x10)) / 0x1c;
        return CONCAT31((int3)((uint)iVar4 >> 8),param_2 < iVar4);
      }
    }
    else {
      uVar2 = FUN_0040b360();
      if (((char)uVar2 != '\0') &&
         (uVar2 = *(uint *)(param_1 + 0x34), in_EAX < (int)(*(int *)(param_1 + 0x38) - uVar2) >> 4))
      {
        return CONCAT31((int3)(uVar2 >> 8),
                        param_2 < *(int *)(uVar2 + 4 + in_EAX * 0x10) -
                                  *(int *)(uVar2 + in_EAX * 0x10) >> 2);
      }
    }
  }
  return uVar2 & 0xffffff00;
}

