// FUN_00719d30 @ 00719d30 body=[[00719d30, 00719e4f]]


undefined4 FUN_00719d30(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *in_EAX;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  local_10 = 0;
  iStack_c = 0;
  if ((*(int *)(in_ECX + 0x20) != 0) &&
     ((((*(char *)(in_ECX + 0x1c) != 'R' || (*(char *)(in_ECX + 0x1d) != 'E')) ||
       (*(char *)(in_ECX + 0x1e) != 'B')) &&
      (0 < (int)(*(int *)(in_ECX + 0x9dc) - *(int *)(in_ECX + 0x9d8) & 0xfffffffcU))))) {
    iVar3 = *(int *)(in_ECX + 0x20) * 0x58;
    iVar5 = *(int *)*in_EAX + iVar3;
    iVar3 = *(int *)in_EAX[1] + iVar3;
    uVar6 = (uint)*(byte *)(in_EAX[2] + 8 + iVar5);
    uVar4 = (uint)*(byte *)(in_EAX[2] + 8 + iVar3);
    iVar5 = *(int *)(iVar5 + 0x48);
    iVar3 = *(int *)(iVar3 + 0x48);
    uVar2 = *(uint *)(iVar5 + uVar6 * 8);
    puVar1 = (uint *)(iVar3 + uVar4 * 8);
    local_10 = uVar2 - *puVar1;
    iStack_c = (*(int *)(iVar5 + 4 + uVar6 * 8) - *(int *)(iVar3 + 4 + uVar4 * 8)) -
               (uint)(uVar2 < *puVar1);
  }
  if ((*(int *)(param_1 + 0x20) == 0) ||
     ((((*(char *)(param_1 + 0x1c) == 'R' && (*(char *)(param_1 + 0x1d) == 'E')) &&
       (*(char *)(param_1 + 0x1e) == 'B')) ||
      ((int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU) < 1)))) {
    iStack_14 = 0;
    local_18 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x20) * 0x58;
    iVar5 = *(int *)*in_EAX + iVar3;
    uVar6 = (uint)*(byte *)(in_EAX[2] + 8 + iVar5);
    iVar5 = *(int *)(iVar5 + 0x48);
    iVar3 = *(int *)in_EAX[1] + iVar3;
    uVar4 = (uint)*(byte *)(in_EAX[2] + 8 + iVar3);
    iVar3 = *(int *)(iVar3 + 0x48);
    uVar2 = *(uint *)(iVar5 + uVar6 * 8);
    puVar1 = (uint *)(iVar3 + uVar4 * 8);
    local_18 = uVar2 - *puVar1;
    iStack_14 = (*(int *)(iVar5 + 4 + uVar6 * 8) - *(int *)(iVar3 + 4 + uVar4 * 8)) -
                (uint)(uVar2 < *puVar1);
  }
  if ((iStack_14 <= iStack_c) && ((iStack_14 < iStack_c || (local_18 < local_10)))) {
    return 1;
  }
  return 0;
}

