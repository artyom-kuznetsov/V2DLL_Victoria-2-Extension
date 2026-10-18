// FUN_00a8d400 @ 00a8d400 body=[[00a8d400, 00a8d56e]]


void FUN_00a8d400(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *local_18;
  int *local_8;
  
  iVar9 = 0;
  local_18 = *(int **)(param_1 + 4);
  for (piVar3 = local_18; (local_18 <= piVar3 && (piVar3 < *(int **)(param_1 + 8)));
      piVar3 = piVar3 + 6) {
    iVar9 = iVar9 + *piVar3;
  }
  local_8 = local_18 + 3;
  for (; (*(int **)(param_1 + 4) <= local_18 && (local_18 < *(int **)(param_1 + 8)));
      local_18 = local_18 + 6) {
    iVar4 = *local_18;
    if (iVar9 == 0) {
      iVar4 = -1;
    }
    else if (iVar4 + 0x189373U < 0x39580e) {
      iVar4 = (iVar4 * 1000) / iVar9;
    }
    else {
      uVar10 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      iVar4 = __alldiv(uVar10,iVar9,iVar9 >> 0x1f);
    }
    iVar1 = *(int *)(param_1 + 0x14);
    iVar7 = iVar4 >> 0x1f;
    iVar8 = iVar1 >> 0x1f;
    uVar10 = __allmul(iVar1,iVar8,iVar4,iVar7);
    iVar5 = __alldiv(uVar10,1000,0);
    iVar2 = *local_8;
    iVar5 = iVar5 % iVar2;
    if (iVar2 + 0x189373U < 0x39580e) {
      iVar6 = (iVar2 * 1000) / 2000;
    }
    else {
      uVar10 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar6 = __alldiv(uVar10,2000,0);
    }
    if (iVar6 < iVar5) {
      uVar10 = __allmul(iVar1,iVar8,iVar4,iVar7);
      iVar4 = __alldiv(uVar10,1000,0);
      iVar4 = iVar4 + (iVar2 - iVar5);
    }
    else {
      uVar10 = __allmul(iVar1,iVar8,iVar4,iVar7);
      iVar4 = __alldiv(uVar10,1000,0);
      iVar4 = iVar4 - iVar5;
    }
    *local_18 = iVar4;
    local_8 = local_8 + 6;
  }
  return;
}

