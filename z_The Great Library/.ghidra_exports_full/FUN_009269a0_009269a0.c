// FUN_009269a0 @ 009269a0 body=[[009269a0, 00926bba]]


/* WARNING: Removing unreachable block (ram,0x00926b81) */

void FUN_009269a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *unaff_ESI;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  iVar5 = DAT_00f0973c;
  local_10 = *(undefined4 *)(param_1 + 0x10);
  local_c = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(DAT_012586dc + 0x10);
  uVar3 = *(uint *)(iVar2 + 0x18);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  local_18 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
  iVar4 = **(int **)(*(int *)(iVar1 + local_c * 4) + 0xa0);
  uVar8 = __allmul(*(undefined4 *)(iVar4 + 0x48 + iVar5 * 8),
                   *(undefined4 *)(iVar4 + 0x4c + iVar5 * 8),local_18);
  uVar8 = __alldiv((uint)uVar8 & 0xffff8000,(int)((ulonglong)uVar8 >> 0x20),DAT_00f0aac8,
                   DAT_00f0aacc);
  uVar6 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + (uint)uVar8;
  iVar4 = *(int *)(param_1 + 0x14);
  unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)uVar8 >> 0x20) + (uint)CARRY4(uVar6,(uint)uVar8);
  local_10 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + iVar4 * 4) + 0xa0) + 4);
  uVar8 = __allmul(*(undefined4 *)(iVar4 + 0x48 + iVar5 * 8),
                   *(undefined4 *)(iVar4 + 0x4c + iVar5 * 8),local_18);
  uVar8 = __alldiv((uint)uVar8 & 0xffff8000,(int)((ulonglong)uVar8 >> 0x20),DAT_00f0aac8,
                   DAT_00f0aacc);
  uVar6 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + (uint)uVar8;
  unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)uVar8 >> 0x20) + (uint)CARRY4(uVar6,(uint)uVar8);
  uVar8 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
  local_18._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_10 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + *(int *)(param_1 + 0x14) * 4) + 0xa0) + 8);
  uVar8 = __allmul(*(undefined4 *)(iVar1 + 0x48 + iVar5 * 8),
                   *(undefined4 *)(iVar1 + 0x4c + iVar5 * 8),uVar8);
  uVar8 = __alldiv((uint)uVar8 & 0xffff8000,(int)((ulonglong)uVar8 >> 0x20),DAT_00f0aac8,
                   DAT_00f0aacc);
  uVar6 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + (uint)uVar8;
  unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)uVar8 >> 0x20) + (uint)CARRY4(uVar6,(uint)uVar8);
  uVar6 = *(uint *)(iVar2 + 0x1c);
  uVar8 = __alldiv(uVar6 << 0x1e,((int)uVar6 >> 0x1f) << 0x1e | uVar6 >> 2,0x1f40000,0);
  local_c = (int)((ulonglong)uVar8 >> 0x20);
  uVar6 = FUN_00926900(param_1 + 8);
  local_18 = __alldiv(uVar6 << 0x1e,
                      (((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11) << 0xf | (uVar6 & 0x1ffff) >> 2,
                      (int)uVar8,local_c);
  local_10 = 0x8000;
  local_c = 0;
  if (local_18 < 0x8001) {
    puVar7 = &local_18;
  }
  else {
    puVar7 = (undefined8 *)&local_10;
  }
  lVar9 = __allmul(*unaff_ESI,unaff_ESI[1],*(undefined4 *)puVar7,*(undefined4 *)((int)puVar7 + 4));
  *(longlong *)unaff_ESI = lVar9 >> 0xf;
  return;
}

