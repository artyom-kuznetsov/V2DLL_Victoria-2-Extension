// FUN_0052b610 @ 0052b610  (requested 0052B610, first bytes: 55 8B EC 83 E4 F8 83 EC)


void FUN_0052b610(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *unaff_ESI;
  bool bVar6;
  undefined8 uVar7;
  int local_10;
  
  iVar3 = (DAT_00f096c8 + 0xd) * 0x10;
  iVar5 = *(int *)(iVar3 + 4 + param_1);
  iVar1 = *(int *)(iVar3 + param_1);
  piVar4 = (int *)(iVar3 + param_1);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  iVar3 = DAT_00f0973c;
  local_10 = 0;
  if (0 < (int)(iVar5 - iVar1 & 0xfffffff8U)) {
    do {
      if (local_10 == 0) {
        uVar7 = __allmul(*(undefined4 *)(**(int **)(param_1 + 0xa0) + 0x48 + iVar3 * 8),
                         *(undefined4 *)(**(int **)(param_1 + 0xa0) + 0x4c + iVar3 * 8),
                         *(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
        uVar7 = __alldiv((uint)uVar7 & 0xffff8000,(int)((ulonglong)uVar7 >> 0x20),DAT_00f0aac8,
                         DAT_00f0aacc);
        iVar5 = (int)((ulonglong)uVar7 >> 0x20);
        bVar6 = CARRY4(*unaff_ESI,(uint)uVar7);
        *unaff_ESI = *unaff_ESI + (uint)uVar7;
      }
      else if (local_10 == 1) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xa0) + 4);
        uVar7 = __allmul(*(undefined4 *)(iVar5 + 0x48 + iVar3 * 8),
                         *(undefined4 *)(iVar5 + 0x4c + iVar3 * 8),*(undefined4 *)(*param_2 + 8),
                         *(undefined4 *)(*param_2 + 0xc));
        uVar7 = __alldiv((uint)uVar7 & 0xffff8000,(int)((ulonglong)uVar7 >> 0x20),DAT_00f0aac8,
                         DAT_00f0aacc);
        iVar5 = (int)((ulonglong)uVar7 >> 0x20);
        bVar6 = CARRY4(*unaff_ESI,(uint)uVar7);
        *unaff_ESI = *unaff_ESI + (uint)uVar7;
      }
      else if (local_10 == 2) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
        uVar7 = __allmul(*(undefined4 *)(iVar5 + 0x48 + iVar3 * 8),
                         *(undefined4 *)(iVar5 + 0x4c + iVar3 * 8),*(undefined4 *)(*param_2 + 0x10),
                         *(undefined4 *)(*param_2 + 0x14));
        uVar7 = __alldiv((uint)uVar7 & 0xffff8000,(int)((ulonglong)uVar7 >> 0x20),DAT_00f0aac8,
                         DAT_00f0aacc);
        iVar5 = (int)((ulonglong)uVar7 >> 0x20);
        bVar6 = CARRY4(*unaff_ESI,(uint)uVar7);
        *unaff_ESI = *unaff_ESI + (uint)uVar7;
      }
      else {
        uVar2 = *(uint *)(*piVar4 + local_10 * 8);
        bVar6 = CARRY4(*unaff_ESI,uVar2);
        *unaff_ESI = *unaff_ESI + uVar2;
        iVar5 = *(int *)(*piVar4 + 4 + local_10 * 8);
      }
      unaff_ESI[1] = unaff_ESI[1] + iVar5 + (uint)bVar6;
      local_10 = local_10 + 1;
    } while (local_10 < piVar4[1] - *piVar4 >> 3);
  }
  return;
}

