// FUN_009193a0 @ 009193a0 body=[[009193a0, 00919656]]


uint FUN_009193a0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int in_ECX;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint local_1c [2];
  int local_14;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(in_ECX + 8);
  uVar8 = *(uint *)(in_ECX + 0x14);
  local_1c[0] = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4)
                                  + 0xbe8) + uVar8 * 4);
  if (*(int *)(local_1c[0] + 0x34) == 0) goto LAB_009193d6;
  iVar6 = *(int *)(local_1c[0] + 0x34);
  uVar9 = *(uint *)(*(int *)(iVar6 + 0x2c) + 4);
  local_1c[0] = *(uint *)(in_ECX + 0xc);
  if ((uVar9 == local_1c[0]) ||
     (bVar1 = false, *(uint *)(*(int *)(iVar6 + 0x3c) + 4) == local_1c[0])) {
    bVar1 = true;
  }
  if (uVar9 == uVar8) {
LAB_00919418:
    bVar2 = true;
  }
  else {
    local_1c[0] = *(uint *)(iVar6 + 0x3c);
    bVar2 = false;
    if (*(uint *)(local_1c[0] + 4) == uVar8) goto LAB_00919418;
  }
  if ((*(char *)(iVar6 + 0xfd) == '\0') || ((bVar1 && (bVar2)))) {
    local_14 = iVar6;
    local_1c[0] = FUN_0093c4c0(0);
    if (((char)local_1c[0] != '\0') &&
       (((cVar4 = FUN_0042bb00(), cVar4 != '\0' && (!bVar2)) ||
        ((local_1c[0] = FUN_0042bb00(), (char)local_1c[0] != '\0' && (!bVar1)))))) {
      bVar3 = true;
      piVar5 = (int *)FUN_009387c0(iVar6,*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
      iVar6 = piVar5[1] - *piVar5 >> 6;
      iVar11 = 0;
      if (0 < iVar6) {
        piVar5 = (int *)(*piVar5 + 0xc);
        do {
          if (piVar5[6] == *(int *)(in_ECX + 0x14)) {
            piVar10 = *(int **)(*piVar5 + 0x120);
            while( true ) {
              if (piVar10 == (int *)0x0) {
                bVar3 = false;
                goto LAB_009194cc;
              }
              if (*piVar10 == 0x8a1) break;
              piVar10 = (int *)piVar10[2];
            }
          }
          iVar11 = iVar11 + 1;
          piVar5 = piVar5 + 0x10;
        } while (iVar11 < iVar6);
      }
LAB_009194cc:
      local_1c[0] = *(uint *)(in_ECX + 0x14);
      local_10 = *(undefined4 *)(in_ECX + 0x10);
      piVar5 = (int *)FUN_0093d080(local_1c);
      iVar6 = *(int *)(*piVar5 + 0x10);
      iVar11 = *(int *)(*piVar5 + 0x14) - iVar6;
      local_1c[0] = iVar11 >> 6;
      iVar12 = 0;
      if (0 < (int)local_1c[0]) {
        piVar5 = (int *)(iVar6 + 0xc);
        do {
          if (piVar5[6] == *(int *)(in_ECX + 0xc)) {
            piVar10 = *(int **)(*piVar5 + 0x120);
            if (piVar10 == (int *)0x0) goto LAB_009193d6;
            while (*piVar10 != 0x8a1) {
              piVar10 = (int *)piVar10[2];
              if (piVar10 == (int *)0x0) {
                return (uint)(uint3)(iVar11 >> 0xe) << 8;
              }
            }
          }
          iVar12 = iVar12 + 1;
          piVar5 = piVar5 + 0x10;
        } while (iVar12 < (int)local_1c[0]);
      }
      if (!bVar3) goto LAB_009193d6;
    }
    if ((*(char *)(in_ECX + 0x94) != '\0') && ((bVar2 || (bVar1)))) {
      iVar6 = *(int *)(in_ECX + 0xc);
      if (*(char *)(in_ECX + 0x30) == '\0') {
        iVar6 = *(int *)(in_ECX + 0x14);
      }
      local_1c[0] = *(uint *)(in_ECX + 0x14);
      if ((*(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <= (int)local_1c[0])
         || (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + local_1c[0] * 4) != 0)) {
        local_10 = *(undefined4 *)(in_ECX + 0x10);
        puVar7 = (uint *)FUN_0093d080(local_1c);
        local_1c[0] = *puVar7;
        iVar11 = *(int *)(local_1c[0] + 0x14) - *(int *)(local_1c[0] + 0x10) >> 6;
        if (0 < iVar11) {
          local_1c[0] = 0;
          puVar7 = (uint *)(in_ECX + 100);
          if (iVar6 != *(int *)(in_ECX + 0x14)) {
            puVar7 = (uint *)(in_ECX + 0x54);
          }
          uVar8 = *puVar7;
          while ((*puVar7 <= uVar8 && (uVar8 < puVar7[1]))) {
            uVar9 = uVar8 + 0x40;
            piVar5 = (int *)(uVar8 + 0x1c);
            uVar8 = uVar9;
            if (*piVar5 == *(int *)(in_ECX + 0x14)) {
              local_1c[0] = local_1c[0] + 1;
            }
          }
          if (((int)local_1c[0] < iVar11) && (0 < (int)local_1c[0])) goto LAB_009193d6;
        }
      }
      return CONCAT31((int3)(local_1c[0] >> 8),1);
    }
  }
LAB_009193d6:
  return local_1c[0] & 0xffffff00;
}

