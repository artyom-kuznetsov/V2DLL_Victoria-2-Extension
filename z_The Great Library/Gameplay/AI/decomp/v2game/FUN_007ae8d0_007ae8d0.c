// FUN_007ae8d0 @ 007ae8d0 body=[[007ae8d0, 007ae989]]


void FUN_007ae8d0(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  bool bVar6;
  
  pbVar2 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar5 = "sort_by_type";
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_007ae911:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_007ae916;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_007ae911;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_007ae916:
  iVar4 = 0;
  if (iVar3 != 0) {
    pbVar2 = (byte *)(**(code **)(*param_1 + 0x44))();
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    pcVar5 = "sort_by_name";
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_007ae950:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_007ae955;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_007ae950;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_007ae955:
    iVar4 = (iVar3 != 0) + 1;
  }
  if (*(int *)(in_ECX + 0x13c) == iVar4) {
    *(bool *)(in_ECX + 0x140) = *(char *)(in_ECX + 0x140) == '\0';
  }
  *(int *)(in_ECX + 0x13c) = iVar4;
  FUN_007adb70(in_ECX);
  return;
}

