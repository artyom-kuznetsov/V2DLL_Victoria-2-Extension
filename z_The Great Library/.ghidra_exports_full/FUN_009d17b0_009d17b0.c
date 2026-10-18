// FUN_009d17b0 @ 009d17b0 body=[[009d17b0, 009d19f7] [009d1a00, 009d1cb4] [009d1cb8, 009d1cd4] [009d1cd8, 009d1ceb]]


/* WARNING: Removing unreachable block (ram,0x009d1a54) */

void FUN_009d17b0(int param_1)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint **ppuVar14;
  uint **ppuVar15;
  uint **local_68;
  int local_64;
  uint *local_5c [2];
  uint local_54;
  uint local_4c;
  uint **local_44;
  uint **local_40;
  uint **local_3c;
  uint local_34;
  int local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b4f0b0;
  local_44 = (uint **)0x0;
  local_40 = (uint **)0x0;
  local_3c = (uint **)0x0;
  local_c = 0;
  piVar12 = *(int **)(param_1 + 0x94);
  piVar2 = (int *)*piVar12;
  local_14 = ExceptionList;
  ppuVar15 = local_40;
  ExceptionList = &local_14;
  while (local_40 = ppuVar15, piVar2 != piVar12) {
    if ((*(char *)(piVar2 + 0x49) != '\0') &&
       (iVar13 = *(int *)(param_1 + 0x3c), iVar6 = FUN_0045c080(iVar13,piVar2 + 0x13),
       iVar6 == iVar13)) {
      local_5c[1] = (uint *)(piVar2 + 10);
      local_5c[0] = (uint *)0x0;
      FUN_00868690();
    }
    FUN_009d3e90();
    ppuVar15 = local_40;
    piVar12 = *(int **)(param_1 + 0x94);
  }
  piVar12 = (int *)**(int **)(param_1 + 0xa4);
  if (piVar12 != *(int **)(param_1 + 0xa4)) {
    do {
      iVar13 = *(int *)(param_1 + 0x4c);
      iVar6 = FUN_0045c080(iVar13,piVar12 + 0x13);
      if (iVar6 != iVar13) {
        puVar3 = (uint *)(piVar12 + 10);
        local_5c[0] = (uint *)0xfffffc18;
        local_5c[1] = puVar3;
        if ((local_5c < ppuVar15) && (local_44 <= local_5c)) {
          iVar13 = (int)local_5c - (int)local_44 >> 3;
          if (ppuVar15 == local_3c) {
            uVar7 = (int)ppuVar15 - (int)local_44 >> 3;
            if (0x1ffffffe < uVar7) {
LAB_009d1abc:
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad("vector<T> too long");
            }
            uVar7 = uVar7 + 1;
            uVar10 = (int)local_3c - (int)local_44 >> 3;
            if (uVar10 < uVar7) {
              if (0x1fffffff - (uVar10 >> 1) < uVar10) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar10 + (uVar10 >> 1);
              }
              if (uVar10 < uVar7) {
                uVar10 = uVar7;
              }
              FUN_004237e0(uVar10);
              ppuVar15 = local_40;
            }
          }
          if (ppuVar15 != (uint **)0x0) {
            *ppuVar15 = local_44[iVar13 * 2];
            ppuVar15[1] = local_44[iVar13 * 2 + 1];
          }
        }
        else {
          if (ppuVar15 == local_3c) {
            uVar7 = (int)ppuVar15 - (int)local_44 >> 3;
            if (0x1ffffffe < uVar7) goto LAB_009d1abc;
            uVar7 = uVar7 + 1;
            uVar10 = (int)local_3c - (int)local_44 >> 3;
            if (uVar10 < uVar7) {
              if (0x1fffffff - (uVar10 >> 1) < uVar10) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar10 + (uVar10 >> 1);
              }
              if (uVar10 < uVar7) {
                uVar10 = uVar7;
              }
              FUN_004237e0(uVar10);
              ppuVar15 = local_40;
            }
          }
          if (ppuVar15 != (uint **)0x0) {
            *ppuVar15 = (uint *)0xfffffc18;
            ppuVar15[1] = puVar3;
          }
        }
        ppuVar15 = ppuVar15 + 2;
        local_40 = ppuVar15;
      }
      if (*(char *)((int)piVar12 + 0x129) == '\0') {
        piVar2 = (int *)piVar12[2];
        if (*(char *)((int)piVar2 + 0x129) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x129);
          piVar12 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x129);
            piVar12 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar12[1] + 0x129);
          piVar5 = (int *)piVar12[1];
          piVar2 = piVar12;
          while ((piVar12 = piVar5, cVar1 == '\0' && (piVar2 == (int *)piVar12[2]))) {
            cVar1 = *(char *)(piVar12[1] + 0x129);
            piVar5 = (int *)piVar12[1];
            piVar2 = piVar12;
          }
        }
      }
    } while (piVar12 != *(int **)(param_1 + 0xa4));
  }
  iVar13 = (int)ppuVar15 - (int)local_44 >> 3;
  ppuVar14 = local_44;
  do {
    bVar4 = false;
    local_64 = 0;
    if (iVar13 < 1) break;
    do {
      puVar3 = ppuVar14[local_64 * 2];
      local_5c[0] = ppuVar14[local_64 * 2 + 1] + 0x1e;
      uVar7 = ppuVar14[local_64 * 2 + 1][0x1e];
      while ((*local_5c[0] <= uVar7 && (uVar7 < local_5c[0][1]))) {
        local_4c = uVar7 + 0x1c;
        iVar6 = 0;
        local_54 = uVar7;
        do {
          uVar7 = *(uint *)(local_54 + 0x10);
          uVar10 = local_44[iVar6 * 2 + 1][6];
          uVar11 = uVar10;
          if (uVar7 <= uVar10) {
            uVar11 = uVar7;
          }
          iVar8 = FUN_00414bd0(uVar11);
          if ((((iVar8 == 0) && (uVar7 <= uVar10)) && (uVar10 == uVar7)) &&
             ((int)local_44[iVar6 * 2] <= (int)puVar3)) {
            local_44[iVar6 * 2] = (uint *)((int)local_44[iVar6 * 2] + 1);
            bVar4 = true;
          }
          iVar6 = iVar6 + 1;
          uVar7 = local_4c;
          ppuVar14 = local_44;
          ppuVar15 = local_40;
        } while (iVar6 < iVar13);
      }
      local_64 = local_64 + 1;
    } while (local_64 < iVar13);
  } while (bVar4);
  local_5c[0] = (uint *)((uint)local_5c[0] & 0xffffff00);
  FUN_009d44f0(ppuVar14,ppuVar15,iVar13,local_5c[0]);
  FUN_00409350(&DAT_00ded94d,0);
  if (0 < iVar13) {
    local_68 = local_44 + 1;
    local_64 = iVar13;
    do {
      puVar3 = *local_68;
      if (puVar3[0x1b] == 0) {
        if (puVar3[0x14] != 0) {
          puVar9 = puVar3 + 0x10;
          goto LAB_009d1b3a;
        }
      }
      else {
        puVar9 = puVar3 + 0x17;
LAB_009d1b3a:
        if (0xf < puVar9[5]) {
          puVar9 = (uint *)*puVar9;
        }
        PHYSFS_mount(puVar9,0,0);
        if (DAT_01258a68 != 0) {
          PHYSFS_freeList(DAT_01258a68);
          DAT_01258a68 = 0;
        }
        DAT_01258a68 = PHYSFS_getSearchPath();
      }
      if (puVar3[0x2a] != 0) {
        if (*(int *)(param_1 + 0x84) != 0) {
          FUN_00448740(&DAT_00defd44,1);
        }
        FUN_00448aa0(puVar3 + 0x26,0,0xffffffff);
      }
      local_68 = local_68 + 2;
      local_64 = local_64 + -1;
    } while (local_64 != 0);
    if (0 < iVar13) {
      local_68 = local_44 + 1;
      local_64 = iVar13;
      do {
        puVar3 = *local_68;
        iVar13 = (int)(puVar3[0x23] - puVar3[0x22]) >> 0x1f;
        if ((int)(puVar3[0x23] - puVar3[0x22]) / 0x1c + iVar13 != iVar13) {
          local_20 = 0xf;
          local_24 = 0;
          local_34 = local_34 & 0xffffff00;
          local_c._0_1_ = 5;
          if (puVar3[0x1b] == 0) {
            if (puVar3[0x14] != 0) {
              puVar9 = puVar3 + 0x10;
              goto LAB_009d1c33;
            }
          }
          else {
            puVar9 = puVar3 + 0x17;
LAB_009d1c33:
            FUN_00408ed0(puVar9,0,0xffffffff);
            if ((local_24 != 0) && (iVar13 = (int)(puVar3[0x23] - puVar3[0x22]) / 0x1c, 0 < iVar13))
            {
              do {
                FUN_00991ea0();
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
          }
          local_c = (uint)local_c._1_3_ << 8;
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_34);
          }
        }
        local_68 = local_68 + 2;
        local_64 = local_64 + -1;
      } while (local_64 != 0);
    }
  }
  if (local_44 != (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44);
  }
  ExceptionList = local_14;
  return;
}

