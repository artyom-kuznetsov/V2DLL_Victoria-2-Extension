// FUN_004723d0 @ 004723d0 body=[[004723d0, 0047254a]]


void FUN_004723d0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int unaff_ESI;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_10;
  uint local_c;
  
  uVar2 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x1b0);
  uVar3 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x1b4);
  uVar6 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x88);
  uVar5 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x84);
  uVar8 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
  *(undefined8 *)(unaff_ESI + 0x20) = uVar8;
  puVar1 = (uint *)(unaff_ESI + 0x20);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + *(uint *)(unaff_ESI + 0x18);
  *(int *)(unaff_ESI + 0x24) =
       *(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x1c) +
       (uint)CARRY4(uVar5,*(uint *)(unaff_ESI + 0x18));
  local_10 = *param_1;
  uVar5 = FUN_00526870();
  local_c = ((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11;
  uVar8 = __alldiv(uVar6 << 0x1e,((int)uVar6 >> 0x1f) << 0x1e | uVar6 >> 2,0x1f40000,0);
  lVar9 = __allmul(uVar5 << 0xf,local_c,uVar8);
  uVar6 = (uint)(lVar9 >> 0xf);
  puVar1 = (uint *)(unaff_ESI + 0x20);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + uVar6;
  *(int *)(unaff_ESI + 0x24) =
       *(int *)(unaff_ESI + 0x24) + (int)((ulonglong)(lVar9 >> 0xf) >> 0x20) +
       (uint)CARRY4(uVar5,uVar6);
  if (*(int *)(unaff_ESI + 0x14) != 0) {
    local_10 = *(undefined4 *)(unaff_ESI + 0x10);
    iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x14) * 4) + 0xe64);
    uVar6 = *(uint *)(iVar4 + 0x90);
    puVar1 = (uint *)(unaff_ESI + 0x20);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar6;
    *(int *)(unaff_ESI + 0x24) =
         *(int *)(unaff_ESI + 0x24) + *(int *)(iVar4 + 0x94) + (uint)CARRY4(uVar5,uVar6);
    puVar7 = (uint *)FUN_00472210(&local_10,unaff_ESI + 0x10);
    uVar6 = *puVar7;
    puVar1 = (uint *)(unaff_ESI + 0x20);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar6;
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + puVar7[1] + (uint)CARRY4(uVar5,uVar6);
  }
  uVar5 = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[1] * 4) + 0x12f4);
  if (uVar5 != 0) {
    uVar8 = __alldiv(*(uint *)(unaff_ESI + 0x28) << 0x1e,*(uint *)(unaff_ESI + 0x28) >> 2,
                     uVar5 << 0xf,((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11);
    lVar9 = __allmul(uVar8,uVar2,uVar3);
    uVar6 = (uint)(lVar9 >> 0xf);
    puVar1 = (uint *)(unaff_ESI + 0x20);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar6;
    *(int *)(unaff_ESI + 0x24) =
         *(int *)(unaff_ESI + 0x24) + (int)((ulonglong)(lVar9 >> 0xf) >> 0x20) +
         (uint)CARRY4(uVar5,uVar6);
  }
  if ((*(int *)(unaff_ESI + 0x24) < 1) && (*(int *)(unaff_ESI + 0x24) < 0)) {
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
  }
  return;
}

