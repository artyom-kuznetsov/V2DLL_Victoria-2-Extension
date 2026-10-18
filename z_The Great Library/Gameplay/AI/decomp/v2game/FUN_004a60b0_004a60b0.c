// FUN_004a60b0 @ 004a60b0  (requested 004A60B0, first bytes: 55 8B EC 83 EC 08 53 8B)


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004a6175) */

void FUN_004a60b0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  undefined4 uVar10;
  int in_ECX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  int local_8;
  
  iVar15 = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 3;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  local_8 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x60);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x68);
  uStack_1c = 0x4a60e2;
  if (local_8 != 0) {
    do {
      iVar16 = *(int *)(local_8 + 0x224);
      auStack_2c[4 - iVar1] = 0x4a6105;
      cVar9 = FUN_004a75b0();
      if (cVar9 != '\0') {
        uVar2 = *(uint *)(local_8 + 0x1d8);
        uVar3 = *(uint *)(local_8 + 0x168);
        uVar11 = uVar2 - *(uint *)(local_8 + 0x168);
        iVar4 = *(int *)(local_8 + 0x1dc);
        iVar5 = *(int *)(local_8 + 0x16c);
        uVar6 = *(uint *)(local_8 + 0x158);
        uVar12 = uVar11 - *(uint *)(local_8 + 0x158);
        auStack_2c[4 - iVar1] = 0;
        iVar7 = *(int *)(local_8 + 0x15c);
        uVar8 = *(uint *)(local_8 + 0x170);
        uVar13 = uVar12 + *(uint *)(local_8 + 0x170);
        auStack_2c[3 - iVar1] = 0x1f40000;
        uVar14 = uVar13 + *(uint *)(local_8 + 0x160);
        auStack_2c[2 - iVar1] =
             (((((iVar4 - iVar5) - (uint)(uVar2 < uVar3)) - iVar7) - (uint)(uVar11 < uVar6)) +
              *(int *)(local_8 + 0x174) + (uint)CARRY4(uVar12,uVar8) + *(int *)(local_8 + 0x164) +
             (uint)CARRY4(uVar13,*(uint *)(local_8 + 0x160))) * 0x8000 | uVar14 >> 0x11;
        auStack_2c[1 - iVar1] = uVar14 * 0x8000;
        auStack_2c[-iVar1] = 0x4a615e;
        uVar17 = __alldiv();
        uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
        auStack_2c[4 - iVar1] = uVar10;
        auStack_2c[3 - iVar1] = (int)uVar17;
        auStack_2c[2 - iVar1] = uVar10;
        auStack_2c[1 - iVar1] = (int)uVar17;
        auStack_2c[-iVar1] = 0x4a6167;
        lVar18 = __allmul();
        lVar18 = lVar18 >> 0xf;
        if (0x7a1200000 < lVar18) {
          lVar18 = 0x7a1200000;
        }
        auStack_2c[4 - iVar1] = 0;
        auStack_2c[3 - iVar1] = 0x1f40000;
        auStack_2c[2 - iVar1] = (int)((ulonglong)lVar18 >> 0x20);
        auStack_2c[1 - iVar1] = (int)lVar18;
        auStack_2c[-iVar1] = 0x4a6194;
        uVar17 = __allmul();
        *(uint *)(&stack0xffffffe8 + iVar15 * 4 + iVar1 * -4) =
             (uint)uVar17 >> 0x1e | (int)((ulonglong)uVar17 >> 0x20) << 2;
        iVar15 = iVar15 + 1;
      }
      local_8 = iVar16;
    } while (iVar16 != 0);
    if (iVar15 != 0) {
      auStack_2c[4 - iVar1] = 0;
      auStack_2c[3 - iVar1] = 0;
      auStack_2c[2 - iVar1] = 0x4a61d7;
      uVar10 = FUN_009b7950();
      auStack_2c[4 - iVar1] = uVar10;
      auStack_2c[3 - iVar1] = iVar15;
      auStack_2c[2 - iVar1] = 0x4a61e1;
      iVar15 = FUN_009dcac0();
      if (iVar15 == -1) {
        *(undefined4 *)(in_ECX + 0x7c) = 4;
        *(undefined4 *)(in_ECX + 0x70) = 0;
        *(undefined4 *)(in_ECX + 0x74) = 0;
        *(undefined4 *)(in_ECX + 0x78) = 0;
        return;
      }
      iVar16 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x60);
      local_8 = 0;
      if (iVar16 == 0) {
        return;
      }
      do {
        iVar4 = *(int *)(iVar16 + 0x224);
        auStack_2c[4 - iVar1] = 0x4a622d;
        cVar9 = FUN_004a75b0();
        if (cVar9 != '\0') {
          if (local_8 == iVar15) {
            auStack_2c[4 - iVar1] = 0x4a6259;
            uVar10 = FUN_0048c050();
            *(undefined4 *)(in_ECX + 0x78) = uVar10;
            *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(iVar16 + 0x18);
            return;
          }
          local_8 = local_8 + 1;
        }
        iVar16 = iVar4;
      } while (iVar4 != 0);
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x7c) = 4;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  return;
}

