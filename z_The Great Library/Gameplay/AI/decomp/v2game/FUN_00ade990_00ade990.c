// FUN_00ade990 @ 00ade990 body=[[00ade990, 00adeaf6]]


byte FUN_00ade990(int *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  uint uVar11;
  
  piVar5 = param_1;
  uVar11 = 0;
  bVar4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_1 != 0) {
    (*(code *)PTR__free_00f01b10)(*param_1);
    *param_1 = 0;
  }
  iVar6 = FUN_00add910();
  uVar8 = param_1[1];
  uVar7 = iVar6 + 1;
  if (((uVar7 != uVar8) && (param_1[1] = uVar7, uVar8 < uVar7)) && ((uint)param_1[2] < uVar7)) {
    FUN_00aeb6c0(uVar7);
  }
  uVar8 = 0;
  if (param_1[1] != 0) {
    do {
      *(undefined4 *)(*param_1 + uVar8 * 4) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)param_1[1]);
  }
  uVar8 = *(uint *)(in_ECX + 0x24);
  param_1 = (int *)0x0;
  if (uVar8 == 0) {
LAB_00adea48:
    *(undefined4 *)*piVar5 = *(undefined4 *)(in_ECX + 0x18);
    return 0;
  }
  do {
    iVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x20) + uVar11 * 4) + 4))();
    if (iVar6 == 3) {
      if (param_1 == (int *)0x0) {
        if ((uVar11 == 0xffffffff) ||
           (iVar6 = *(int *)(*(int *)(in_ECX + 0x20) + uVar11 * 4), iVar6 == 0)) goto LAB_00adea48;
        uVar11 = *(uint *)(in_ECX + 0x34);
        uVar8 = 0;
        param_1 = (int *)0x0;
        if (uVar11 != 0) break;
        goto LAB_00adea92;
      }
      param_1 = (int *)((int)param_1 + 1);
    }
    uVar11 = uVar11 + 1;
    if (uVar8 <= uVar11) {
      *(undefined4 *)*piVar5 = *(undefined4 *)(in_ECX + 0x18);
      return 0;
    }
  } while( true );
  do {
    iVar9 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar8 * 4) + 4))();
    if (iVar9 == 5) {
      if (param_1 == (int *)0x0) {
        if ((uVar8 != 0xffffffff) &&
           (piVar1 = *(int **)(*(int *)(in_ECX + 0x30) + uVar8 * 4), piVar1 != (int *)0x0)) {
          iVar9 = (**(code **)(*piVar1 + 0x10))();
          goto LAB_00adea94;
        }
        break;
      }
      param_1 = (int *)((int)param_1 + 1);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < uVar11);
LAB_00adea92:
  iVar9 = 0;
LAB_00adea94:
  uVar11 = *(uint *)(in_ECX + 0x18);
  uVar8 = 0;
  if (uVar11 != 0) {
    iVar10 = *(int *)(iVar6 + 0x1c);
    do {
      iVar3 = *(int *)(iVar9 + uVar8 * 4);
      piVar1 = (int *)(*piVar5 + (uint)*(byte *)(iVar10 + 4 + iVar3 * 8) * 4);
      *piVar1 = *piVar1 + 1;
      iVar10 = *(int *)(iVar6 + 0x1c);
      bVar2 = *(byte *)(iVar10 + 4 + iVar3 * 8);
      if (bVar4 <= bVar2) {
        bVar4 = bVar2;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar11);
  }
  return bVar4;
}

