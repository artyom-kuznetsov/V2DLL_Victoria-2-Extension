// FUN_00add810 @ 00add810 body=[[00add810, 00add90a]]


byte FUN_00add810(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  int iStack_8;
  
  uVar2 = *(uint *)(in_ECX + 0x24);
  iVar7 = 0;
  uVar8 = 0;
  if (uVar2 == 0) {
    return 0;
  }
  do {
    iVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x20) + uVar8 * 4) + 4))();
    if (iVar5 == 3) {
      if (iVar7 == 0) {
        if (uVar8 == 0xffffffff) {
          return 0;
        }
        iVar7 = *(int *)(*(int *)(in_ECX + 0x20) + uVar8 * 4);
        if (iVar7 == 0) {
          return 0;
        }
        uVar2 = *(uint *)(in_ECX + 0x34);
        iVar5 = *(int *)(in_ECX + 0x10);
        uVar8 = 0;
        iStack_8 = 0;
        if (uVar2 == 0) goto LAB_00add8a2;
        break;
      }
      iVar7 = iVar7 + 1;
    }
    uVar8 = uVar8 + 1;
    if (uVar2 <= uVar8) {
      return 0;
    }
  } while( true );
  do {
    iVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar8 * 4) + 4))();
    if (iVar6 == 5) {
      if (iStack_8 == 0) {
        if ((uVar8 != 0xffffffff) &&
           (piVar3 = *(int **)(*(int *)(in_ECX + 0x30) + uVar8 * 4), piVar3 != (int *)0x0)) {
          iVar6 = (**(code **)(*piVar3 + 0x10))();
          goto LAB_00add8a4;
        }
        break;
      }
      iStack_8 = iStack_8 + 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < uVar2);
LAB_00add8a2:
  iVar6 = 0;
LAB_00add8a4:
  iVar7 = *(int *)(iVar7 + 0x1c);
  bVar1 = *(byte *)(iVar7 + 4 + *(int *)(iVar6 + *(int *)(iVar5 + param_1 * 4) * 4) * 8);
  bVar4 = 0;
  if (bVar1 != 0) {
    bVar4 = bVar1;
  }
  bVar1 = *(byte *)(iVar7 + 4 + *(int *)(iVar6 + *(int *)(iVar5 + 4 + param_1 * 4) * 4) * 8);
  if (bVar4 < bVar1) {
    bVar4 = bVar1;
  }
  bVar1 = *(byte *)(iVar7 + 4 + *(int *)(iVar6 + *(int *)(iVar5 + 8 + param_1 * 4) * 4) * 8);
  if (bVar4 < bVar1) {
    bVar4 = bVar1;
  }
  return bVar4;
}

