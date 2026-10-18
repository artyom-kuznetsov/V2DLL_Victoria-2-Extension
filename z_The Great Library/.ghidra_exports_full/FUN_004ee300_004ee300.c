// FUN_004ee300 @ 004ee300 body=[[004ee300, 004ee493]]


void FUN_004ee300(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x48) * 1000;
  iVar7 = iVar2 >> 0x1f;
  uVar10 = __allmul(DAT_0125d6d4,DAT_0125d6d4 >> 0x1f,iVar2,iVar7);
  iVar3 = __alldiv(uVar10,1000,0);
  iVar3 = iVar3 / 1000;
  iVar8 = *(int *)(param_2 + 0x11c) - *(int *)(param_2 + 0x118) >> 3;
  local_8 = 0;
  iVar9 = iVar3;
  if (0 < iVar8) {
    do {
      piVar1 = (int *)(*(int *)(param_2 + 0x118) + local_8 * 8);
      iVar6 = *piVar1;
      iVar5 = piVar1[1];
      uVar10 = __allmul(iVar5,iVar5 >> 0x1f,iVar2,iVar7);
      iVar4 = __alldiv(uVar10,1000,0);
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + *(int *)(iVar6 + 0x28) * 4);
      if (iVar5 < iVar4 / 1000) {
        iVar5 = iVar4 / 1000 - iVar5;
        if (iVar9 < iVar5) {
          iVar5 = iVar9;
        }
        iVar6 = FUN_004ee780(iVar6,iVar5);
        iVar9 = iVar9 - iVar6;
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar8);
  }
  local_8 = iVar3 - iVar9;
  if (local_8 != 0) {
    iVar9 = 0;
    iVar3 = *(int *)(param_2 + 0x11c) - *(int *)(param_2 + 0x118) >> 3;
    if (0 < iVar3) {
      do {
        iVar8 = *(int *)(*(int *)(param_2 + 0x118) + iVar9 * 8);
        iVar6 = *(int *)(*(int *)(param_2 + 0x118) + iVar9 * 8 + 4);
        uVar10 = __allmul(iVar6,iVar6 >> 0x1f,iVar2,iVar7);
        iVar5 = __alldiv(uVar10,1000,0);
        iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + *(int *)(iVar8 + 0x28) * 4);
        if (iVar5 / 1000 < iVar6) {
          iVar6 = iVar6 - iVar5 / 1000;
          if (local_8 < iVar6) {
            iVar6 = local_8;
          }
          FUN_004ee650(iVar8,iVar6);
          local_8 = local_8 - iVar6;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar3);
    }
  }
  return;
}

