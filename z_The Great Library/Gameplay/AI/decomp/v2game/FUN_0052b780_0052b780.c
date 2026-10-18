// FUN_0052b780 @ 0052b780 body=[[0052b780, 0052b85b]]


void FUN_0052b780(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *unaff_ESI;
  bool bVar6;
  undefined8 uVar7;
  int local_10;
  
  iVar4 = (DAT_00f096c8 + 0xd) * 0x10;
  iVar3 = *(int *)(iVar4 + 4 + param_1);
  iVar1 = *(int *)(iVar4 + param_1);
  piVar5 = (int *)(iVar4 + param_1);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  iVar4 = DAT_00f0973c;
  local_10 = 0;
  if (0 < (int)(iVar3 - iVar1 & 0xfffffff8U)) {
    do {
      if (local_10 == 0) {
        iVar3 = **(int **)(param_1 + 0xa0);
LAB_0052b7d0:
        uVar7 = __allmul(*(undefined4 *)(iVar3 + 0x48 + iVar4 * 8),
                         *(undefined4 *)(iVar3 + 0x4c + iVar4 * 8),*(undefined4 *)(iVar3 + 0x60),
                         *(undefined4 *)(iVar3 + 100));
        uVar7 = __alldiv((uint)uVar7 & 0xffff8000,(int)((ulonglong)uVar7 >> 0x20),DAT_00f0aac8,
                         DAT_00f0aacc);
        iVar3 = (int)((ulonglong)uVar7 >> 0x20);
        bVar6 = CARRY4(*unaff_ESI,(uint)uVar7);
        *unaff_ESI = *unaff_ESI + (uint)uVar7;
      }
      else {
        if (local_10 == 1) {
          iVar3 = *(int *)(*(int *)(param_1 + 0xa0) + 4);
          goto LAB_0052b7d0;
        }
        if (local_10 == 2) {
          iVar3 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
          goto LAB_0052b7d0;
        }
        uVar2 = *(uint *)(*piVar5 + local_10 * 8);
        bVar6 = CARRY4(*unaff_ESI,uVar2);
        *unaff_ESI = *unaff_ESI + uVar2;
        iVar3 = *(int *)(*piVar5 + 4 + local_10 * 8);
      }
      unaff_ESI[1] = unaff_ESI[1] + iVar3 + (uint)bVar6;
      local_10 = local_10 + 1;
    } while (local_10 < piVar5[1] - *piVar5 >> 3);
  }
  return;
}

