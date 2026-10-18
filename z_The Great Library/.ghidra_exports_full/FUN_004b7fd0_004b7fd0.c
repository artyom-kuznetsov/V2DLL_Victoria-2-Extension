// FUN_004b7fd0 @ 004b7fd0 body=[[004b7fd0, 004b80ac]]


uint FUN_004b7fd0(int param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint local_8;
  
  iVar3 = *(int *)(in_EAX + 0x5c);
  iVar4 = *(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200);
  uVar2 = iVar4 * 0x38e38e39;
  iVar4 = iVar4 / 0x24;
  local_8 = 0;
  if (0 < iVar4) {
    piVar5 = *(int **)(iVar3 + 200);
    do {
      if (*piVar5 != 4) {
        iVar3 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + piVar5[1] * 4);
        if (*(int *)(iVar3 + 300) == *(int *)(param_1 + 4)) {
LAB_004b80a2:
          return CONCAT31((int3)((uint)iVar3 >> 8),1);
        }
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 300) * 4);
        if ((*(char *)(iVar1 + 0xcf5) != '\0') || (*(char *)(iVar1 + 0xcf4) != '\0')) {
          iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 300) * 4);
          if (*(int *)(iVar3 + 0xcfc) == *(int *)(param_1 + 4)) goto LAB_004b80a2;
        }
      }
      uVar2 = local_8 + 1;
      piVar5 = piVar5 + 9;
      local_8 = uVar2;
    } while ((int)uVar2 < iVar4);
  }
  return uVar2 & 0xffffff00;
}

