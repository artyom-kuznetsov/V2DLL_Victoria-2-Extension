// FUN_008ed620 @ 008ed620 body=[[008ed620, 008ed6fb]]


undefined4 FUN_008ed620(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_1c;
  
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  piVar3 = *(int **)(iVar2 + 0x9d8);
  local_1c = 0;
  while ((*(int **)(iVar2 + 0x9d8) <= piVar3 && (piVar3 < *(int **)(iVar2 + 0x9dc)))) {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 0x134) !=
        *(int *)(param_1 + 0xc)) {
      local_1c = local_1c + 1000;
    }
  }
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar2 = *(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) >> 2;
  if (0 < iVar2) {
    iVar2 = iVar2 * 1000;
    iVar1 = *(int *)(in_ECX + 0x1c);
    uVar4 = __allmul(local_1c,local_1c >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar4,iVar2,iVar2 >> 0x1f);
    if (iVar1 <= iVar2) {
      return 1;
    }
  }
  return 0;
}

