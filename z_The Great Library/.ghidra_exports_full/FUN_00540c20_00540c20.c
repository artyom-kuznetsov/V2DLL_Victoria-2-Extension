// FUN_00540c20 @ 00540c20 body=[[00540c20, 00540c56] [00540c60, 00540e36]]


void FUN_00540c20(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int local_30;
  int local_2c;
  undefined1 local_10 [12];
  
  iVar9 = *(int *)(param_1 + 0x1594) - *(int *)(param_1 + 0x1590) >> 2;
  local_30 = 0;
  if (0 < iVar9) {
    do {
      iVar2 = *(int *)(DAT_012586dc + 0x40);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1590) + local_30 * 4);
      uVar6 = *(uint *)(iVar2 + 0x88);
      uVar12 = __alldiv(uVar6 << 0x1e,((int)uVar6 >> 0x1f) << 0x1e | uVar6 >> 2,0x1f40000,0);
      uVar4 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x1b0);
      uVar5 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x1b4);
      uVar6 = *(uint *)(iVar2 + 0x84);
      uVar13 = __alldiv(uVar6 << 0x1e,((int)uVar6 >> 0x1f) << 0x1e | uVar6 >> 2,0x1f40000,0);
      iVar11 = DAT_012587e4;
      *(undefined8 *)(iVar3 + 0x20) = uVar13;
      puVar1 = (uint *)(iVar3 + 0x20);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + *(uint *)(iVar3 + 0x18);
      *(int *)(iVar3 + 0x24) =
           *(int *)(iVar3 + 0x24) + *(int *)(iVar3 + 0x1c) +
           (uint)CARRY4(uVar6,*(uint *)(iVar3 + 0x18));
      iVar2 = *(int *)(*(int *)(iVar11 + 4) + *(int *)(param_1 + 0x20) * 4);
      uVar6 = 0;
      local_2c = *(int *)(iVar2 + 0x864) - *(int *)(iVar2 + 0x860) >> 2;
      if (1 < local_2c) {
        piVar10 = *(int **)(iVar2 + 0x860);
        local_2c = local_2c + -1;
        do {
          piVar10 = piVar10 + 1;
          uVar6 = uVar6 + (*(int *)(*piVar10 + 0x50) -
                          *(int *)(**(int **)(*(int *)(*piVar10 + 0x54) + 8) + 0x50));
          local_2c = local_2c + -1;
          iVar11 = DAT_012587e4;
        } while (local_2c != 0);
      }
      lVar14 = __allmul(uVar6 << 0xf,((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11,uVar12);
      uVar7 = (uint)(lVar14 >> 0xf);
      puVar1 = (uint *)(iVar3 + 0x20);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + uVar7;
      *(int *)(iVar3 + 0x24) =
           *(int *)(iVar3 + 0x24) + (int)((ulonglong)(lVar14 >> 0xf) >> 0x20) +
           (uint)CARRY4(uVar6,uVar7);
      if (*(int *)(iVar3 + 0x14) != 0) {
        iVar2 = *(int *)(*(int *)(*(int *)(iVar11 + 4) + *(int *)(iVar3 + 0x14) * 4) + 0xe64);
        uVar7 = *(uint *)(iVar2 + 0x90);
        puVar1 = (uint *)(iVar3 + 0x20);
        uVar6 = *puVar1;
        *puVar1 = *puVar1 + uVar7;
        *(int *)(iVar3 + 0x24) =
             *(int *)(iVar3 + 0x24) + *(int *)(iVar2 + 0x94) + (uint)CARRY4(uVar6,uVar7);
        puVar8 = (uint *)FUN_00472210(local_10,iVar3 + 0x10);
        uVar7 = *puVar8;
        puVar1 = (uint *)(iVar3 + 0x20);
        uVar6 = *puVar1;
        *puVar1 = *puVar1 + uVar7;
        *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + puVar8[1] + (uint)CARRY4(uVar6,uVar7);
      }
      uVar6 = *(uint *)(*(int *)(*(int *)(iVar11 + 4) + *(int *)(param_1 + 0x20) * 4) + 0x12f4);
      if (uVar6 != 0) {
        uVar12 = __alldiv(*(uint *)(iVar3 + 0x28) << 0x1e,*(uint *)(iVar3 + 0x28) >> 2,uVar6 << 0xf,
                          ((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11);
        lVar14 = __allmul(uVar12,uVar4,uVar5);
        uVar7 = (uint)(lVar14 >> 0xf);
        puVar1 = (uint *)(iVar3 + 0x20);
        uVar6 = *puVar1;
        *puVar1 = *puVar1 + uVar7;
        *(int *)(iVar3 + 0x24) =
             *(int *)(iVar3 + 0x24) + (int)((ulonglong)(lVar14 >> 0xf) >> 0x20) +
             (uint)CARRY4(uVar6,uVar7);
      }
      if ((*(int *)(iVar3 + 0x24) < 1) && (*(int *)(iVar3 + 0x24) < 0)) {
        *(undefined4 *)(iVar3 + 0x20) = 0;
        *(undefined4 *)(iVar3 + 0x24) = 0;
      }
      local_30 = local_30 + 1;
    } while (local_30 < iVar9);
  }
  return;
}

