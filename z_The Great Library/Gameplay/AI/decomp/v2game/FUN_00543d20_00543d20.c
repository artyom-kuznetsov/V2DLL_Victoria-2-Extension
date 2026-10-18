// FUN_00543d20 @ 00543d20 body=[[00543d20, 00543e78]]


void FUN_00543d20(int param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int local_10;
  uint local_8;
  
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 0x1594) - *(int *)(param_1 + 0x1590) >> 2;
  if (0 < iVar4) {
    piVar7 = *(int **)(param_1 + 0x1590);
    do {
      if (*(int *)(*piVar7 + 0xc) == in_EAX) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1590) + iVar6 * 4);
        goto LAB_00543d65;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < iVar4);
  }
  iVar4 = 0;
LAB_00543d65:
  local_8 = 1;
  if (iVar4 != 0) {
    local_8 = *(int *)(iVar4 + 0x28) + 1;
  }
  iVar4 = *(int *)(param_1 + 0x1594) - *(int *)(param_1 + 0x1590) >> 2;
  local_10 = 0;
  if (0 < iVar4) {
    do {
      piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x1590) + local_10 * 4) + 0xc);
      if ((piVar7 != (int *)0x0) && (cVar3 = (**(code **)(*piVar7 + 0x34))(), cVar3 != '\0')) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1590) + local_10 * 4);
        uVar2 = *(uint *)(iVar6 + 0x28);
        if ((int)local_8 < (int)uVar2) {
          uVar5 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0xb8);
          uVar10 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
          uVar11 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,local_8 << 0xf,
                            ((int)local_8 >> 0x1f) << 0xf | local_8 >> 0x11);
          iVar8 = (int)((ulonglong)uVar11 >> 0x20);
          uVar5 = (uint)uVar11 - 0x8000;
          uVar2 = (uint)((uint)uVar11 < 0x8000);
          iVar9 = iVar8 - uVar2;
          if ((-1 < iVar9) && ((iVar9 != 0 && (int)uVar2 <= iVar8 || (0x18000 < uVar5)))) {
            uVar5 = 0x18000;
            iVar9 = 0;
          }
          lVar12 = __allmul(uVar5,iVar9,uVar10);
          uVar5 = (uint)(lVar12 >> 0xf);
          puVar1 = (uint *)(iVar6 + 0x18);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + uVar5;
          *(int *)(iVar6 + 0x1c) =
               *(int *)(iVar6 + 0x1c) + (int)((ulonglong)(lVar12 >> 0xf) >> 0x20) +
               (uint)CARRY4(uVar2,uVar5);
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar4);
  }
  return;
}

