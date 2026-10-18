// FUN_00a2dbb0 @ 00a2dbb0 body=[[00a2dbb0, 00a2dbcc] [00a2dbd0, 00a2dc50]]


undefined4 FUN_00a2dbb0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  byte *pbVar5;
  bool bVar6;
  
  pbVar2 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar2 = *(byte **)param_1;
  }
  pbVar5 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a2dbf0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a2dbf5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a2dbf0;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a2dbf5:
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x16c) != 0) {
      FUN_009bcce0(*(undefined4 *)(in_ECX + 0x160),in_ECX + 0x170);
      *(undefined4 *)(in_ECX + 0x16c) = 0;
    }
    FUN_00408ed0(param_1,0,0xffffffff);
    uVar4 = FUN_009bcfc0(param_1);
    *(undefined4 *)(in_ECX + 0x16c) = uVar4;
    return 1;
  }
  return 0;
}

