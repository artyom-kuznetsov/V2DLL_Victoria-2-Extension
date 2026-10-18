// FUN_00595bf0 @ 00595bf0  (requested 00595BF0, first bytes: 55 8B EC 83 EC 2C 53 56)


void FUN_00595bf0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_10;
  int local_c;
  
  iVar5 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x24))();
  if (iVar5 == 2) {
    *param_2 = 0;
    return;
  }
  iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14);
  local_10 = 0;
  bVar4 = false;
  uVar9 = __allmul(*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x54) >> 0x1f,1000,0);
  local_c = __alldiv(uVar9,iVar5,iVar5 >> 0x1f);
  uVar7 = *(uint *)(param_1 + 0x34);
  while ((*(uint *)(param_1 + 0x34) <= uVar7 && (uVar7 < *(uint *)(param_1 + 0x38)))) {
    iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x40);
    iVar1 = *(int *)(uVar7 + 4);
    iVar2 = *(int *)(DAT_012587e4 + 4);
    iVar3 = *(int *)(iVar2 + iVar1 * 4);
    uVar7 = uVar7 + 8;
    iVar8 = 0;
    for (piVar6 = *(int **)(iVar3 + 0x9d8);
        (*(int **)(iVar3 + 0x9d8) <= piVar6 && (piVar6 < *(int **)(iVar3 + 0x9dc)));
        piVar6 = piVar6 + 1) {
      iVar8 = iVar8 + *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4) + 0x50) * 1000
      ;
    }
    if (iVar8 < 1000) {
      iVar8 = 1000;
    }
    uVar9 = __allmul(local_c,local_c >> 0x1f,1000,0);
    local_c = __alldiv(uVar9,iVar8,iVar8 >> 0x1f);
    iVar1 = *(int *)(iVar2 + iVar1 * 4);
    iVar2 = *(int *)(*(int *)(iVar1 + 0xbcc) + 0x6c);
    iVar5 = __alldiv((longlong)iVar5 * (longlong)local_c,1000,0);
    iVar5 = __alldiv((longlong)iVar5 * (longlong)(iVar2 + 1000),1000,0);
    piVar6 = (int *)(iVar1 + 0x680);
    *piVar6 = *piVar6 + iVar5;
    if (*piVar6 < 0) {
      *(undefined4 *)(iVar1 + 0x680) = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar1 + 0xa60) + 0x28);
      if (iVar2 < *(int *)(iVar1 + 0x680)) {
        *(int *)(iVar1 + 0x680) = iVar2;
      }
    }
    if (!bVar4) {
      local_10 = iVar5;
    }
    bVar4 = true;
  }
  *param_2 = local_10;
  return;
}

