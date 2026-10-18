// FUN_00a79b90 @ 00a79b90 body=[[00a79b90, 00a79bac] [00a79bb0, 00a79eed]]


void FUN_00a79b90(int *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  pbVar4 = param_2;
  if (0xf < uVar2) {
    pbVar4 = *(byte **)param_2;
  }
  pcVar6 = "RIGHT";
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00a79bd0:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00a79bd5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00a79bd0;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00a79bd5:
  if (iVar5 == 0) {
    *param_1 = 0x27;
    param_1[1] = 0x100;
    return;
  }
  pbVar4 = param_2;
  if (0xf < uVar2) {
    pbVar4 = *(byte **)param_2;
  }
  pbVar7 = &DAT_00e437c8;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00a79c20:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00a79c25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00a79c20;
    pbVar4 = pbVar4 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00a79c25:
  if (iVar5 == 0) {
    *param_1 = 0x25;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x26;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x28;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x1b;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x20;
    param_1[1] = 0x102;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0xd;
    param_1[1] = 0x102;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x21;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x22;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x70;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x71;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x72;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x73;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x74;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x75;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *param_1 = 0x76;
    param_1[1] = 0x100;
    return;
  }
  cVar3 = FUN_0040b360();
  if (cVar3 == '\0') {
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      *param_1 = 0x2e;
      param_1[1] = 0x100;
      return;
    }
    if (*(int *)(param_2 + 0x10) != 1) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if (uVar2 < 0x10) {
      *param_1 = (int)(char)*param_2;
      param_1[1] = 0x102;
      return;
    }
    *param_1 = (int)**(char **)param_2;
    param_1[1] = 0x102;
    return;
  }
  *param_1 = 0x77;
  param_1[1] = 0x100;
  return;
}

