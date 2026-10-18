// FUN_004a5e00 @ 004a5e00  (requested 004A5E00, first bytes: 55 8B EC 83 EC 40 53 56)


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004a5f93) */

void FUN_004a5e00(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int in_ECX;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 uVar20;
  int iStack_64;
  longlong lStack_60;
  uint auStack_58 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_c;
  
  *(undefined4 *)(in_ECX + 0x7c) = 2;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  iVar12 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x60);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x68);
  local_c = 0;
  auStack_58[1] = 0x4a5e35;
  iVar13 = iVar3 * -4;
  iVar15 = *(int *)(DAT_012588e8 + 0xbcc);
  if (iVar12 != 0) {
    do {
      iVar4 = *(int *)(iVar12 + 0x224);
      if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                             *(int *)(*(int *)(in_ECX + 0x6c) + 0x5c) * 4) + 0xb10) != '\0') &&
         ((10 < *(int *)(iVar12 + 0x184) || (*(char *)(iVar12 + 0x188) != '\0')))) {
        iVar12 = *(int *)(*(int *)(iVar12 + 0x18) + 300);
        iVar5 = *(int *)(iVar12 + 0x80);
        iVar16 = iVar15 + 0x280;
        auStack_58[1 - iVar3] = iVar16;
        auStack_58[-iVar3] = iVar12 + 0x24;
        auStack_58[-1 - iVar3] = 0x4a5ec1;
        FUN_0047e3e0();
        auStack_58[1 - iVar3] = iVar16;
        auStack_58[-iVar3] = iVar12 + 0x90;
        auStack_58[-1 - iVar3] = 0x4a5ed1;
        FUN_0047e3e0();
        uVar10 = (uint)*(byte *)(*(int *)(iVar5 + 8) + 8 + iVar16);
        uVar11 = *(undefined4 *)(iVar12 + 0x88);
        iVar16 = *(int *)(iVar15 + 0x2c8);
        auStack_58[1 - iVar3] = *(undefined4 *)(iVar12 + 0x8c);
        uVar6 = *(undefined4 *)(iVar16 + 4 + uVar10 * 8);
        auStack_58[-iVar3] = uVar11;
        uVar11 = *(undefined4 *)(iVar16 + uVar10 * 8);
        auStack_58[-1 - iVar3] = uVar6;
        *(undefined4 *)((int)&lStack_60 + iVar13) = uVar11;
        (&iStack_64)[-iVar3] = 0x4a5efb;
        lVar19 = __allmul();
        auStack_58[1 - iVar3] = 0;
        lVar19 = ((lVar19 >> 0xf) - CONCAT44(local_2c,local_30)) - CONCAT44(local_34,local_38);
        auStack_58[-iVar3] = 0x1f40000;
        auStack_58[-1 - iVar3] = (int)((ulonglong)lVar19 >> 0x20);
        *(int *)((int)&lStack_60 + iVar13) = (int)lVar19;
        (&iStack_64)[-iVar3] = 0x4a5f1c;
        uVar20 = __allmul();
        uVar10 = (uint)uVar20 >> 0x1e | (int)((ulonglong)uVar20 >> 0x20) << 2;
        *(uint *)(&stack0xffffffb0 + local_c * 4 + iVar13) = uVar10;
        iVar16 = *(int *)(iVar12 + 0x88);
        iVar12 = *(int *)(iVar12 + 0x8c);
        if ((-1 < iVar12) && ((0 < iVar12 || (iVar16 != 0)))) {
          iVar5 = *(int *)(iVar5 + 8);
          uVar14 = (uint)*(byte *)(iVar5 + 0x1d8 + iVar15);
          uVar18 = (uint)*(byte *)(iVar5 + 0x10 + iVar15);
          uVar7 = *(uint *)(*(int *)(iVar15 + 0x218) + uVar14 * 8);
          puVar2 = (uint *)(*(int *)(iVar15 + 0x50) + uVar18 * 8);
          uVar8 = *puVar2;
          uVar17 = uVar7 - *puVar2;
          iVar5 = *(int *)(*(int *)(iVar15 + 0x218) + 4 + uVar14 * 8);
          iVar9 = *(int *)(*(int *)(iVar15 + 0x50) + 4 + uVar18 * 8);
          auStack_58[1 - iVar3] = iVar12;
          auStack_58[-iVar3] = iVar16;
          auStack_58[-1 - iVar3] =
               ((iVar5 - iVar9) - (uint)(uVar7 < uVar8)) * 0x8000 | uVar17 >> 0x11;
          *(uint *)((int)&lStack_60 + iVar13) = uVar17 * 0x8000;
          (&iStack_64)[-iVar3] = 0x4a5f8d;
          lVar19 = __alldiv();
          if (0x28000 < lVar19) {
            lVar19 = 0x28000;
          }
          if (0 < (int)uVar10) {
            auStack_58[1 - iVar3] = 0;
            auStack_58[-iVar3] = 0x1f40000;
            auStack_58[-1 - iVar3] = (int)((ulonglong)lVar19 >> 0x20);
            *(int *)((int)&lStack_60 + iVar13) = (int)lVar19;
            (&iStack_64)[-iVar3] = 0x4a5fb5;
            uVar20 = __allmul();
            iVar12 = *(int *)(&stack0xffffffb0 + local_c * 4 + iVar13);
            auStack_58[1 - iVar3] = 0;
            auStack_58[-iVar3] = 1000;
            *(longlong *)((int)&lStack_60 + iVar13) =
                 (longlong)iVar12 *
                 (longlong)(int)((uint)uVar20 >> 0x1e | (int)((ulonglong)uVar20 >> 0x20) << 2);
            (&iStack_64)[-iVar3] = 0x4a5fd7;
            uVar11 = __alldiv();
            *(undefined4 *)(&stack0xffffffb0 + local_c * 4 + iVar13) = uVar11;
          }
        }
        local_c = local_c + 1;
      }
      iVar12 = iVar4;
    } while (iVar4 != 0);
    if (local_c != 0) {
      auStack_58[1 - iVar3] = 0;
      auStack_58[-iVar3] = 0;
      auStack_58[-1 - iVar3] = 0x4a6015;
      uVar11 = FUN_009b7950();
      auStack_58[1 - iVar3] = uVar11;
      auStack_58[-iVar3] = local_c;
      auStack_58[-1 - iVar3] = 0x4a601f;
      iVar12 = FUN_009dcac0();
      if (iVar12 != -1) {
        iVar15 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x60);
        iVar13 = 0;
        if (iVar15 == 0) {
          return;
        }
        do {
          piVar1 = (int *)(iVar15 + 0x224);
          if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                 *(int *)(*(int *)(in_ECX + 0x6c) + 0x5c) * 4) + 0xb10) != '\0') &&
             ((10 < *(int *)(iVar15 + 0x184) || (*(char *)(iVar15 + 0x188) != '\0')))) {
            if (iVar13 == iVar12) {
              auStack_58[1 - iVar3] = 0x4a6096;
              uVar11 = FUN_0048c050();
              *(undefined4 *)(in_ECX + 0x78) = uVar11;
              *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(iVar15 + 0x18);
              return;
            }
            iVar13 = iVar13 + 1;
          }
          iVar15 = *piVar1;
        } while (*piVar1 != 0);
        return;
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x7c) = 4;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  return;
}

