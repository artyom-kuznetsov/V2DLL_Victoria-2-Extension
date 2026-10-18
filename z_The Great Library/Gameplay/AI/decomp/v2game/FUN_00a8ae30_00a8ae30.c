// FUN_00a8ae30 @ 00a8ae30 body=[[00a8ae30, 00a8b183]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00a8ae30(uint param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  u_long local_44;
  u_long local_40;
  int local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar5 = param_1;
  DVar7 = timeGetTime();
  local_8 = DVar7 - _DAT_01258b70;
  local_14 = 0;
  local_20 = (undefined4 *)(local_8 - *(int *)(param_1 + 0x14));
  local_c = 0;
  local_18 = 0;
  puVar11 = local_20;
  if (((undefined4 *)0x3e7 < local_20) &&
     (puVar11 = *(undefined4 **)(param_1 + 0x20),
     puVar11 < puVar11 + *(int *)(param_1 + 0x24) * 0x3a)) {
    uVar15 = *(int *)(param_1 + 0x24) * 0xe8 - 1;
    puVar10 = puVar11 + 0xe;
    puVar11 = (undefined4 *)(uVar15 * -0x72c234f7);
    iVar6 = uVar15 / 0xe8 + 1;
    do {
      iVar13 = iVar6;
      if (puVar10[-8] == 4) {
        puVar11 = (undefined4 *)*puVar10;
        local_14 = local_14 + 1;
        local_c = local_c + (int)puVar11;
      }
      puVar10 = puVar10 + 0x3a;
      iVar6 = iVar13 + -1;
    } while (iVar13 + -1 != 0);
    if (local_14 != 0) {
      uVar15 = 0;
      if (*(int *)(param_1 + 0x10) == 0) {
        local_10 = 0xffffffff;
        param_1 = local_14;
      }
      else {
        local_10 = (uint)(*(int *)(param_1 + 0x10) * (int)local_20) / 1000;
        param_1 = local_14;
      }
      while (param_1 != 0) {
        if (iVar13 == 0) {
          if ((param_1 != 0) &&
             (uVar12 = *(uint *)(iVar5 + 0x20), uVar12 < *(int *)(iVar5 + 0x24) * 0xe8 + uVar12)) {
            puVar9 = (uint *)(uVar12 + 0x30);
            do {
              if (((puVar9[-6] == 4) && (*puVar9 != local_8)) &&
                 (puVar9[0xd] = uVar15, uVar15 < puVar9[0xc])) {
                puVar9[0xc] = uVar15;
              }
              puVar2 = puVar9 + 0x2e;
              puVar9 = puVar9 + 0x3a;
            } while (puVar2 < (uint *)(*(int *)(iVar5 + 0x24) * 0xe8 + *(int *)(iVar5 + 0x20)));
          }
          break;
        }
        local_24 = 0;
        if (local_c < local_10) {
          local_1c = 0x20;
        }
        else {
          local_1c = (local_10 << 5) / local_c;
        }
        uVar12 = *(uint *)(iVar5 + 0x20);
        uVar15 = local_1c;
        iVar13 = local_24;
        if (uVar12 < *(int *)(iVar5 + 0x24) * 0xe8 + uVar12) {
          piVar14 = (int *)(uVar12 + 0x24);
          do {
            if (((piVar14[-3] == 4) && (*piVar14 != 0)) && (piVar14[3] != local_8)) {
              uVar12 = (uint)(*piVar14 * (int)local_20) / 1000;
              if (uVar12 < piVar14[5] * local_1c >> 5) {
                uVar8 = (uVar12 << 5) / (uint)piVar14[5];
                piVar14[0x10] = uVar8;
                if (uVar8 == 0) {
                  piVar14[0x10] = 1;
                }
                if ((uint)piVar14[0x10] < (uint)piVar14[0xf]) {
                  piVar14[0xf] = piVar14[0x10];
                }
                param_1 = param_1 - 1;
                local_10 = local_10 - uVar12;
                local_c = local_c - uVar12;
                piVar14[3] = local_8;
                local_24 = 1;
              }
            }
            piVar1 = piVar14 + 0x31;
            piVar14 = piVar14 + 0x3a;
            iVar13 = local_24;
          } while (piVar1 < (int *)(*(int *)(iVar5 + 0x24) * 0xe8 + *(int *)(iVar5 + 0x20)));
        }
      }
      if (*(int *)(iVar5 + 0x1c) != 0) {
        uVar15 = *(uint *)(iVar5 + 0xc);
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        if (uVar15 == 0) {
          local_18 = 0;
        }
        else if (local_14 != 0) {
          bVar4 = true;
          uVar12 = local_14;
          param_1 = local_14;
          do {
            if (!bVar4) break;
            local_18 = uVar15 / uVar12;
            bVar4 = false;
            uVar8 = *(uint *)(iVar5 + 0x20);
            if (uVar8 < *(int *)(iVar5 + 0x24) * 0xe8 + uVar8) {
              puVar9 = (uint *)(uVar8 + 0x28);
              do {
                if (((puVar9[-4] == 4) && (puVar9[1] != local_8)) &&
                   ((uVar12 = *puVar9, uVar12 == 0 || (local_18 <= uVar12)))) {
                  param_1 = param_1 - 1;
                  puVar9[1] = local_8;
                  bVar4 = true;
                  uVar15 = uVar15 - uVar12;
                }
                puVar2 = puVar9 + 0x30;
                puVar9 = puVar9 + 0x3a;
                uVar12 = param_1;
              } while (puVar2 < (uint *)(*(int *)(iVar5 + 0x24) * 0xe8 + *(int *)(iVar5 + 0x20)));
            }
          } while (uVar12 != 0);
        }
        uVar15 = *(uint *)(iVar5 + 0x20);
        if (uVar15 < *(int *)(iVar5 + 0x24) * 0xe8 + uVar15) {
          puVar9 = (uint *)(uVar15 + 0x2c);
          do {
            if (puVar9[-5] == 4) {
              local_50 = 0xff09;
              local_4e = 1;
              local_4c = 0x14;
              local_40 = htonl(*(u_long *)(iVar5 + 0x10));
              uVar15 = local_18;
              if (*puVar9 == local_8) {
                uVar15 = puVar9[-1];
              }
              local_44 = htonl(uVar15);
              FUN_00a8a550(puVar9 + -0xb,&local_50,0,0,0);
            }
            puVar2 = puVar9 + 0x2f;
            puVar9 = puVar9 + 0x3a;
          } while (puVar2 < (uint *)(*(int *)(iVar5 + 0x24) * 0xe8 + *(int *)(iVar5 + 0x20)));
        }
      }
      puVar11 = *(undefined4 **)(iVar5 + 0x20);
      *(uint *)(iVar5 + 0x14) = local_8;
      if (puVar11 < puVar11 + *(int *)(iVar5 + 0x24) * 0x3a) {
        puVar10 = puVar11 + 0xe;
        do {
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar11 = puVar10 + 0x3a;
          puVar3 = puVar10 + 0x2c;
          puVar10 = puVar11;
        } while (puVar3 < (undefined4 *)(*(int *)(iVar5 + 0x24) * 0xe8 + *(int *)(iVar5 + 0x20)));
      }
    }
  }
  return puVar11;
}

