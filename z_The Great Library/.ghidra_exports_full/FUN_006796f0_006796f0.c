// FUN_006796f0 @ 006796f0 body=[[006796f0, 0067970c] [00679710, 00679794]]


undefined1 FUN_006796f0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar3 = *(byte **)param_1;
  }
  pcVar5 = "reorganize";
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00679730:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00679735;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00679730;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00679735:
  if (iVar4 == 0) {
    if (*(int *)(in_ECX + 0x163c) != 0) {
      return *(undefined1 *)(*(int *)(in_ECX + 0x163c) + 0xc);
    }
  }
  else {
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x54) + 0x48))(param_1);
    if (iVar4 != 0) {
      iVar2 = *(int *)(in_ECX + 0x54);
      iVar7 = 0;
      iVar6 = *(int *)(iVar2 + 0x60) - *(int *)(iVar2 + 0x5c) >> 2;
      if (0 < iVar6) {
        piVar8 = *(int **)(iVar2 + 0x5c);
        do {
          if ((*(char *)(*piVar8 + 0x4f) != '\0') && (*(int *)(*piVar8 + 0x30) == iVar4)) {
            return 1;
          }
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar7 < iVar6);
      }
    }
  }
  return 0;
}

