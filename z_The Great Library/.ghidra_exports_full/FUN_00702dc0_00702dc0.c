// FUN_00702dc0 @ 00702dc0 body=[[00702dc0, 00702ecc]]


void FUN_00702dc0(int *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  bool bVar6;
  
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar5 = "tab_factories";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00702e01:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00702e06;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00702e01;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00702e06:
  if (iVar4 == 0) {
    FUN_00702ed0(0);
    return;
  }
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar5 = "tab_invest";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00702e50:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00702e55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00702e50;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00702e55:
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_00702ed0(3);
      return;
    }
    (**(code **)(*param_1 + 0x44))();
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_00702ed0(4);
    }
    return;
  }
  if (*(int *)(in_ECX + 0x3c0) != 0) {
    FUN_00702ed0(1);
    return;
  }
  FUN_00702ed0(2);
  return;
}

