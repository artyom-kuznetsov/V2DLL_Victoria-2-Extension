// FUN_00a54b20 @ 00a54b20 body=[[00a54b20, 00a54de9]]


void FUN_00a54b20(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int unaff_EDI;
  bool bVar8;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar4 = FUN_00aae9af(0x1f8);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a2e250();
  }
  if (*(uint *)(unaff_EDI + 0xd4) < 0x10) {
    pbVar5 = (byte *)(unaff_EDI + 0xc0);
  }
  else {
    pbVar5 = *(byte **)(unaff_EDI + 0xc0);
  }
  pcVar7 = "SpotLight";
  do {
    bVar2 = *pbVar5;
    bVar8 = bVar2 < (byte)*pcVar7;
    if (bVar2 != *pcVar7) {
LAB_00a54b80:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00a54b85;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar8 = bVar2 < (byte)pcVar7[1];
    if (bVar2 != pcVar7[1]) goto LAB_00a54b80;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_00a54b85:
  if (iVar6 == 0) {
    *(undefined4 *)(iVar4 + 0xf8) = 1;
  }
  if (*(uint *)(unaff_EDI + 0xd4) < 0x10) {
    pbVar5 = (byte *)(unaff_EDI + 0xc0);
  }
  else {
    pbVar5 = *(byte **)(unaff_EDI + 0xc0);
  }
  pcVar7 = "DirectionalLight";
  do {
    bVar2 = *pbVar5;
    bVar8 = bVar2 < (byte)*pcVar7;
    if (bVar2 != *pcVar7) {
LAB_00a54bd0:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00a54bd5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar8 = bVar2 < (byte)pcVar7[1];
    if (bVar2 != pcVar7[1]) goto LAB_00a54bd0;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_00a54bd5:
  if (iVar6 == 0) {
    *(undefined4 *)(iVar4 + 0xf8) = 3;
  }
  if (*(uint *)(unaff_EDI + 0xd4) < 0x10) {
    pbVar5 = (byte *)(unaff_EDI + 0xc0);
  }
  else {
    pbVar5 = *(byte **)(unaff_EDI + 0xc0);
  }
  pcVar7 = "PointLight";
  do {
    bVar2 = *pbVar5;
    bVar8 = bVar2 < (byte)*pcVar7;
    if (bVar2 != *pcVar7) {
LAB_00a54c20:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00a54c25;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar8 = bVar2 < (byte)pcVar7[1];
    if (bVar2 != pcVar7[1]) goto LAB_00a54c20;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_00a54c25:
  if (iVar6 == 0) {
    *(undefined4 *)(iVar4 + 0xf8) = 1;
  }
  local_14 = (undefined4)*(undefined8 *)(unaff_EDI + 0x5c);
  uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(unaff_EDI + 0x5c) >> 0x20);
  local_c = (undefined4)*(undefined8 *)(unaff_EDI + 100);
  uStack_8 = (undefined4)((ulonglong)*(undefined8 *)(unaff_EDI + 100) >> 0x20);
  *(undefined4 *)(iVar4 + 0xfc) = local_14;
  *(undefined4 *)(iVar4 + 0x100) = uStack_10;
  *(undefined4 *)(iVar4 + 0x104) = local_c;
  *(undefined4 *)(iVar4 + 0x108) = uStack_8;
  local_14 = (undefined4)*(undefined8 *)(unaff_EDI + 0x6c);
  uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(unaff_EDI + 0x6c) >> 0x20);
  local_c = (undefined4)*(undefined8 *)(unaff_EDI + 0x74);
  uStack_8 = (undefined4)((ulonglong)*(undefined8 *)(unaff_EDI + 0x74) >> 0x20);
  *(undefined4 *)(iVar4 + 0x10c) = local_14;
  *(undefined4 *)(iVar4 + 0x110) = uStack_10;
  *(undefined4 *)(iVar4 + 0x114) = local_c;
  *(undefined4 *)(iVar4 + 0x118) = uStack_8;
  local_14 = (undefined4)*(undefined8 *)(unaff_EDI + 0x7c);
  uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(unaff_EDI + 0x7c) >> 0x20);
  local_c = (undefined4)*(undefined8 *)(unaff_EDI + 0x84);
  uStack_8 = (undefined4)((ulonglong)*(undefined8 *)(unaff_EDI + 0x84) >> 0x20);
  *(undefined4 *)(iVar4 + 0x11c) = local_14;
  *(undefined4 *)(iVar4 + 0x120) = uStack_10;
  *(undefined4 *)(iVar4 + 0x124) = local_c;
  *(undefined4 *)(iVar4 + 0x128) = uStack_8;
  uVar3 = *(undefined4 *)(unaff_EDI + 0x94);
  uStack_10 = (undefined4)*(undefined8 *)(unaff_EDI + 0x8c);
  local_c = (undefined4)((ulonglong)*(undefined8 *)(unaff_EDI + 0x8c) >> 0x20);
  *(undefined4 *)(iVar4 + 300) = uStack_10;
  *(undefined4 *)(iVar4 + 0x130) = local_c;
  *(undefined4 *)(iVar4 + 0x134) = uVar3;
  uVar3 = *(undefined4 *)(unaff_EDI + 0xa0);
  uStack_10 = (undefined4)*(undefined8 *)(unaff_EDI + 0x98);
  local_c = (undefined4)((ulonglong)*(undefined8 *)(unaff_EDI + 0x98) >> 0x20);
  *(undefined4 *)(iVar4 + 0x138) = uStack_10;
  *(undefined4 *)(iVar4 + 0x13c) = local_c;
  *(undefined4 *)(iVar4 + 0x140) = uVar3;
  uVar3 = *(undefined4 *)(unaff_EDI + 0xa8);
  uVar1 = *(undefined4 *)(unaff_EDI + 0xac);
  *(undefined4 *)(iVar4 + 0x14c) = *(undefined4 *)(unaff_EDI + 0xa4);
  *(undefined4 *)(iVar4 + 0x150) = uVar3;
  *(undefined4 *)(iVar4 + 0x154) = uVar1;
  *(undefined4 *)(iVar4 + 0x158) = *(undefined4 *)(unaff_EDI + 0xb8);
  *(undefined4 *)(iVar4 + 0x15c) = *(undefined4 *)(unaff_EDI + 0xbc);
  *(undefined4 *)(iVar4 + 0x144) = *(undefined4 *)(unaff_EDI + 0xb4);
  *(undefined4 *)(iVar4 + 0x148) = *(undefined4 *)(unaff_EDI + 0xb0);
  return;
}

