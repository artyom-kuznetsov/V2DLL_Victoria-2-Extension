// FUN_00724de0 @ 00724de0 body=[[00724de0, 00724f7f]]


void FUN_00724de0(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,
                 int param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar7 = (param_2 + -1) / 2;
    iVar2 = *(int *)(param_1 + iVar7 * 4);
    local_18 = 0;
    iStack_14 = 0;
    if ((*(int *)(iVar2 + 0x20) != 0) &&
       ((((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
         (*(char *)(iVar2 + 0x1e) != 'B')) &&
        (0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))))) {
      iVar5 = *(int *)(iVar2 + 0x20) * 0x58;
      iVar8 = *param_5 + iVar5;
      uVar4 = (uint)*(byte *)(param_7 + 8 + iVar8);
      iVar8 = *(int *)(iVar8 + 0x48);
      uVar3 = *(uint *)(iVar8 + uVar4 * 8);
      iVar5 = *param_6 + iVar5;
      uVar6 = (uint)*(byte *)(param_7 + 8 + iVar5);
      iVar5 = *(int *)(iVar5 + 0x48);
      puVar1 = (uint *)(iVar5 + uVar6 * 8);
      local_18 = uVar3 - *puVar1;
      iStack_14 = (*(int *)(iVar8 + 4 + uVar4 * 8) - *(int *)(iVar5 + 4 + uVar6 * 8)) -
                  (uint)(uVar3 < *puVar1);
    }
    iVar8 = *param_4;
    if ((*(int *)(iVar8 + 0x20) == 0) ||
       ((((*(char *)(iVar8 + 0x1c) == 'R' && (*(char *)(iVar8 + 0x1d) == 'E')) &&
         (*(char *)(iVar8 + 0x1e) == 'B')) ||
        ((int)(*(int *)(iVar8 + 0x9dc) - *(int *)(iVar8 + 0x9d8) & 0xfffffffcU) < 1)))) {
      iStack_1c = 0;
      local_20 = 0;
    }
    else {
      iVar5 = *(int *)(iVar8 + 0x20) * 0x58;
      iVar8 = *param_6 + iVar5;
      uVar4 = (uint)*(byte *)(param_7 + 8 + iVar8);
      iVar8 = *(int *)(iVar8 + 0x48);
      iVar5 = *param_5 + iVar5;
      uVar6 = (uint)*(byte *)(param_7 + 8 + iVar5);
      iVar5 = *(int *)(iVar5 + 0x48);
      uVar3 = *(uint *)(iVar5 + uVar6 * 8);
      puVar1 = (uint *)(iVar8 + uVar4 * 8);
      local_20 = uVar3 - *puVar1;
      iStack_1c = (*(int *)(iVar5 + 4 + uVar6 * 8) - *(int *)(iVar8 + 4 + uVar4 * 8)) -
                  (uint)(uVar3 < *puVar1);
    }
    if (iStack_14 < iStack_1c) break;
    if ((iStack_14 <= iStack_1c) && (local_18 <= local_20)) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    *(int *)(param_1 + param_2 * 4) = iVar2;
    param_2 = iVar7;
    if (iVar7 <= param_3) {
      *(int *)(param_1 + iVar7 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

