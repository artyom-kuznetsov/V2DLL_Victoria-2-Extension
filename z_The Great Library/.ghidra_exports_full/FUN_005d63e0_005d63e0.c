// FUN_005d63e0 @ 005d63e0 body=[[005d63e0, 005d6573]]


void FUN_005d63e0(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int local_1c;
  int local_14;
  undefined4 uStack_10;
  
  iVar5 = *(int *)(in_ECX + 0xdc);
  if (*(char *)(in_ECX + 0x164) != '\0') {
    *param_1 = 0;
    return;
  }
  if ((((iVar5 == 0) || (*(int *)(in_ECX + 0xc4) != *(int *)(iVar5 + 300))) ||
      (*(int *)(in_ECX + 0x74) != 0)) || (*(char *)(in_ECX + 0x104) != '\0')) {
    piVar3 = (int *)FUN_005dc2a0(iVar5 + 0xec,&local_14);
  }
  else {
    piVar3 = (int *)FUN_005dc200(iVar5 + 0xec,&local_14);
  }
  local_1c = *piVar3;
  cVar2 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x20))();
  if (cVar2 != '\0') {
    local_1c = local_1c + *(int *)(*(int *)(*(int *)(in_ECX + 0xd8) + 0x48) + 0x38);
  }
  uStack_10 = *(undefined4 *)(in_ECX + 0xc0);
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc4) * 4) +
                           0xbcc) + 0x20);
  local_14 = *(int *)(*(int *)(*(int *)(in_ECX + 0xdc) + 0x9c) + 0x10);
  piVar3 = (int *)FUN_004b3c40(*(int *)(in_ECX + 0xdc),(undefined4 *)(in_ECX + 0xc0));
  iVar1 = *piVar3;
  iVar4 = FUN_004b80b0(*(undefined4 *)(in_ECX + 0xc0),*(undefined4 *)(in_ECX + 0xc4));
  iVar5 = __alldiv((longlong)(iVar5 + 1000) * (longlong)local_1c,1000,0);
  iVar6 = (*(int *)(*(int *)(*(int *)(in_ECX + 0xdc) + 0x9c) + 0x18) / 1000) * 1000;
  local_14 = iVar5 + (iVar1 / 1000) * -1000 + iVar4 * 1000 + local_14;
  if (iVar6 < local_14) {
    local_14 = iVar6;
  }
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (*(int *)(in_ECX + 0x70) != 0) {
    local_14 = local_14 + *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xdc);
  }
  *param_1 = local_14;
  return;
}

