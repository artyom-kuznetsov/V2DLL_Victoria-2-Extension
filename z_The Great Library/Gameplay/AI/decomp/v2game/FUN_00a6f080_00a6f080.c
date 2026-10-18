// FUN_00a6f080 @ 00a6f080 body=[[00a6f080, 00a6f0bc] [00a6f0c0, 00a6f1ef]]


undefined4 FUN_00a6f080(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int unaff_ESI;
  int iVar6;
  bool bVar7;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba00fb;
  local_14 = ExceptionList;
  pbVar2 = (byte *)(unaff_ESI + 0x74);
  iVar6 = 0;
  local_28 = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x88)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar5 = "LOWER_LEFT";
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00a6f0e0:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00a6f0e5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00a6f0e0;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a6f0e5:
  if (iVar3 == 0) {
    local_28 = *(int *)(*(int *)(unaff_ESI + 0x68) + 0x6b9bc) / 2 + *(int *)(unaff_ESI + 0x6c);
    iVar6 = *(int *)(*(int *)(unaff_ESI + 0x68) + 0x6b9c0);
    iVar6 = (iVar6 / 2 - iVar6) + *(int *)(unaff_ESI + 0x70);
  }
  if (*(uint *)(unaff_ESI + 0x88) < 0x10) {
    pbVar2 = (byte *)(unaff_ESI + 0x74);
  }
  else {
    pbVar2 = *(byte **)(unaff_ESI + 0x74);
  }
  pcVar5 = "CENTRE";
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00a6f162:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00a6f167;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00a6f162;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a6f167:
  if (iVar3 == 0) {
    local_28 = *(int *)(unaff_ESI + 0x6c);
    iVar6 = *(int *)(*(int *)(unaff_ESI + 0x68) + 0x6b9c0) * 2;
  }
  ExceptionList = &local_14;
  iVar3 = FUN_00aae9af(0x90);
  local_c = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_00a8b510(iVar3,param_2,*(undefined4 *)(unaff_ESI + 0x90),
                         *(undefined4 *)(unaff_ESI + 0x94),local_28,iVar6);
    ExceptionList = local_14;
    return uVar4;
  }
  ExceptionList = local_14;
  return 0;
}

