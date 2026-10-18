// FUN_0060c890 @ 0060c890 body=[[0060c890, 0060c983]]


void FUN_0060c890(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int in_ECX;
  char *pcVar4;
  bool bVar5;
  
  pbVar2 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar4 = "debt_sort_country";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_0060c8d0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_0060c8d5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_0060c8d0;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0060c8d5:
  if (iVar3 == 0) {
    if (*(char *)(in_ECX + 0xe1) == '\0') {
      *(bool *)(in_ECX + 0xe2) = *(char *)(in_ECX + 0xe2) == '\0';
      FUN_0060ca30(in_ECX);
      return;
    }
    *(undefined1 *)(in_ECX + 0xe1) = 0;
    FUN_0060ca30(in_ECX);
    return;
  }
  pbVar2 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar4 = "debt_sort_amount";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_0060c945:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_0060c94a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_0060c945;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0060c94a:
  if (iVar3 == 0) {
    if (*(char *)(in_ECX + 0xe1) != '\0') {
      *(bool *)(in_ECX + 0xe2) = *(char *)(in_ECX + 0xe2) == '\0';
      FUN_0060ca30(in_ECX);
      return;
    }
    *(undefined1 *)(in_ECX + 0xe1) = 1;
  }
  FUN_0060ca30(in_ECX);
  return;
}

