// FUN_00801c50 @ 00801c50 body=[[00801c50, 00801e7c] [00801e80, 00801fe1]]


void FUN_00801c50(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int local_10;
  
  iVar2 = DAT_012588e8;
  uVar4 = FUN_009b6df0();
  iVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  local_10 = 1;
  if (iVar5 < 2) {
    return;
  }
LAB_00801cd0:
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + local_10 * 4) + 0xc);
  uVar6 = FUN_009b6df0();
  if (((*(int *)(iVar1 + 300) == 0) && (*(int *)(iVar1 + 0x164) != 0)) &&
     (**(int **)(iVar1 + 0x15c) != 0)) {
    piVar9 = (int *)(**(int **)(iVar1 + 0x15c) + 0x98);
    iVar7 = 0;
    piVar10 = piVar9;
    do {
      if (*piVar10 != 0) {
        iVar7 = 0;
        goto LAB_00801e80;
      }
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 7;
    } while (iVar7 < 4);
    FUN_004bbd60(iVar1);
    goto LAB_00801f0e;
  }
  goto LAB_00801f18;
  while( true ) {
    iVar7 = iVar7 + 1;
    piVar9 = piVar9 + 7;
    if (3 < iVar7) break;
LAB_00801e80:
    if (*piVar9 == *(int *)(iVar2 + 0xb60)) break;
  }
LAB_00801f0e:
  uVar6 = FUN_009b6df0();
LAB_00801f18:
  if ((*(int *)(iVar1 + 0x158) == 0) || (cVar3 = FUN_004bc020(iVar1), uVar8 = uVar4, cVar3 == '\0'))
  {
    uVar8 = uVar6;
  }
  **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_10 * 4) = uVar6;
  iVar1 = local_10 * 4;
  local_10 = local_10 + 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 4) = uVar8;
  if (iVar5 <= local_10) {
    return;
  }
  goto LAB_00801cd0;
}

