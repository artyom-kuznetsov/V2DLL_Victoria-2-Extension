// FUN_00a8c9b0 @ 00a8c9b0 body=[[00a8c9b0, 00a8c9c7] [00a8c9d0, 00a8d024]]


uint FUN_00a8c9b0(uint *param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint local_8;
  
  if ((char)param_1[4] == '\0') {
LAB_00a8cd80:
    uVar5 = *param_1;
    if (*(int *)(uVar5 + 0x14) != 0) {
      if (param_1[3] == 0) {
        uVar7 = param_1[0x110];
        uVar5 = param_1[0x3e90] + 1;
        if (uVar7 == uVar5) goto LAB_00a8d013;
        if ((int)uVar5 <= (int)uVar7) goto LAB_00a8d01c;
        uVar15 = 0;
        *(char *)(param_1 + 2) = (char)param_1[0xf];
        uVar8 = param_1[0xe];
        param_1[3] = 1;
        local_8 = 0;
        uVar13 = 0x100;
        do {
          uVar10 = (int)(uVar13 + uVar15) >> 1;
          uVar11 = uVar10;
          if ((int)param_1[uVar10 + 0x111] <= (int)uVar8) {
            uVar11 = uVar13;
            uVar15 = uVar10;
            local_8 = uVar10;
          }
          uVar13 = uVar11;
        } while (uVar11 - uVar15 != 1);
        param_1[0xe] = (*(byte *)((uVar8 >> 1) + param_1[0x315]) >> ((byte)uVar8 & 1) * '\x04' & 0xf
                       ) << 0x10 | (uint)*(ushort *)(param_1[0x314] + uVar8 * 2);
        param_1[0x110] = uVar7 + 1;
        if (uVar7 + 1 != uVar5) {
          local_8 = local_8 & 0xff;
          if (local_8 == param_1[0xf]) {
            uVar8 = param_1[0xe];
            param_1[3] = 2;
            local_8 = 0;
            uVar13 = 0x100;
            do {
              uVar11 = (int)(local_8 + uVar13) >> 1;
              uVar15 = uVar11;
              if ((int)param_1[uVar11 + 0x111] <= (int)uVar8) {
                uVar15 = uVar13;
                local_8 = uVar11;
              }
              uVar13 = uVar15;
            } while (uVar15 - local_8 != 1);
            param_1[0xe] = (*(byte *)((uVar8 >> 1) + param_1[0x315]) >> ((byte)uVar8 & 1) * '\x04' &
                           0xf) << 0x10 | (uint)*(ushort *)(param_1[0x314] + uVar8 * 2);
            param_1[0x110] = uVar7 + 2;
            if (uVar7 + 2 == uVar5) goto LAB_00a8cd80;
            local_8 = local_8 & 0xff;
            if (local_8 == param_1[0xf]) {
              uVar8 = param_1[0xe];
              param_1[3] = 3;
              local_8 = FUN_00a8c980();
              uVar2 = *(ushort *)(param_1[0x314] + uVar8 * 2);
              uVar8 = (*(byte *)((uVar8 >> 1) + param_1[0x315]) >> ((byte)uVar8 & 1) * '\x04' & 0xf)
                      << 0x10 | (uint)uVar2;
              param_1[0xe] = uVar8;
              param_1[0x110] = uVar7 + 3;
              if (uVar7 + 3 == uVar5) goto LAB_00a8cd80;
              local_8 = local_8 & 0xff;
              if (local_8 == param_1[0xf]) {
                uVar5 = FUN_00a8c980();
                uVar3 = *(ushort *)(param_1[0x314] + uVar8 * 2);
                uVar8 = (*(byte *)((uVar8 >> 1) + param_1[0x315]) >> ((byte)uVar2 & 1) * '\x04' &
                        0xf) << 0x10 | (uint)uVar3;
                param_1[0xe] = uVar8;
                param_1[0x110] = uVar7 + 4;
                param_1[3] = (uVar5 & 0xff) + 4;
                uVar5 = FUN_00a8c980();
                param_1[0xf] = uVar5;
                param_1[0xe] = (*(byte *)((uVar8 >> 1) + param_1[0x315]) >>
                                ((byte)uVar3 & 1) * '\x04' & 0xf) << 0x10 |
                               (uint)*(ushort *)(param_1[0x314] + uVar8 * 2);
                param_1[0x110] = uVar7 + 5;
                goto LAB_00a8cd80;
              }
            }
          }
          param_1[0xf] = local_8;
        }
      }
      else {
        **(undefined1 **)(uVar5 + 0x10) = (char)param_1[2];
        uVar5 = *(uint *)(&DAT_00f065f8 + (param_1[0x318] >> 0x18 ^ (uint)(byte)param_1[2]) * 4);
        param_1[3] = param_1[3] - 1;
        param_1[0x318] = param_1[0x318] << 8 ^ uVar5;
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
        *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
        *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + 1;
        if (*(int *)(*param_1 + 0x18) == 0) {
          piVar1 = (int *)(*param_1 + 0x1c);
          *piVar1 = *piVar1 + 1;
        }
      }
      goto LAB_00a8cd80;
    }
  }
  else {
    while (uVar5 = *param_1, *(int *)(uVar5 + 0x14) != 0) {
      if (param_1[3] == 0) {
        uVar5 = param_1[0x3e90] + 1;
        if (param_1[0x110] == uVar5) break;
        if ((int)uVar5 <= (int)param_1[0x110]) {
LAB_00a8d01c:
          return CONCAT31((int3)(uVar5 >> 8),1);
        }
        iVar14 = 0;
        *(char *)(param_1 + 2) = (char)param_1[0xf];
        uVar7 = param_1[0xe];
        param_1[3] = 1;
        local_8 = 0;
        iVar12 = 0x100;
        do {
          iVar6 = iVar12 + iVar14 >> 1;
          iVar9 = iVar6;
          if ((int)param_1[iVar6 + 0x111] <= (int)uVar7) {
            iVar9 = iVar12;
            iVar14 = iVar6;
            local_8 = iVar6;
          }
          iVar12 = iVar9;
        } while (iVar9 - iVar14 != 1);
        param_1[0xe] = (*(byte *)((uVar7 >> 1) + param_1[0x315]) >> ((byte)uVar7 & 1) * '\x04' & 0xf
                       ) << 0x10 | (uint)*(ushort *)(param_1[0x314] + uVar7 * 2);
        if (param_1[5] == 0) {
          uVar7 = param_1[6] + 1;
          param_1[5] = (&DAT_00f069f8)[param_1[6]];
          param_1[6] = uVar7;
          if (uVar7 == 0x200) {
            param_1[6] = 0;
          }
        }
        param_1[5] = param_1[5] - 1;
        uVar7 = param_1[0x110];
        param_1[0x110] = uVar7 + 1;
        if (uVar7 + 1 != uVar5) {
          uVar8 = (uint)(param_1[5] == 1 ^ (byte)local_8);
          if (uVar8 == param_1[0xf]) {
            uVar8 = param_1[0xe];
            param_1[3] = 2;
            local_8 = 0;
            iVar12 = 0x100;
            do {
              iVar9 = (int)(local_8 + iVar12) >> 1;
              iVar14 = iVar9;
              if ((int)param_1[iVar9 + 0x111] <= (int)uVar8) {
                iVar14 = iVar12;
                local_8 = iVar9;
              }
              iVar12 = iVar14;
            } while (iVar14 - local_8 != 1);
            param_1[0xe] = (*(byte *)((uVar8 >> 1) + param_1[0x315]) >> ((byte)uVar8 & 1) * '\x04' &
                           0xf) << 0x10 | (uint)*(ushort *)(param_1[0x314] + uVar8 * 2);
            if (param_1[5] == 0) {
              uVar8 = param_1[6] + 1;
              param_1[5] = (&DAT_00f069f8)[param_1[6]];
              param_1[6] = uVar8;
              if (uVar8 == 0x200) {
                param_1[6] = 0;
              }
            }
            param_1[5] = param_1[5] - 1;
            param_1[0x110] = uVar7 + 2;
            if (uVar7 + 2 != uVar5) {
              uVar8 = (uint)(param_1[5] == 1 ^ (byte)local_8);
              if (uVar8 == param_1[0xf]) {
                uVar8 = param_1[0xe];
                param_1[3] = 3;
                bVar4 = FUN_00a8c980();
                param_1[0xe] = (*(byte *)((uVar8 >> 1) + param_1[0x315]) >>
                                ((byte)uVar8 & 1) * '\x04' & 0xf) << 0x10 |
                               (uint)*(ushort *)(param_1[0x314] + uVar8 * 2);
                if (param_1[5] == 0) {
                  uVar8 = param_1[6] + 1;
                  param_1[5] = (&DAT_00f069f8)[param_1[6]];
                  param_1[6] = uVar8;
                  if (uVar8 == 0x200) {
                    param_1[6] = 0;
                  }
                }
                param_1[5] = param_1[5] - 1;
                param_1[0x110] = uVar7 + 3;
                if (uVar7 + 3 != uVar5) {
                  uVar5 = (uint)(bVar4 ^ param_1[5] == 1);
                  if (uVar5 == param_1[0xf]) {
                    uVar8 = FUN_00a8c980();
                    uVar5 = param_1[0xe];
                    param_1[0xe] = (*(byte *)((uVar5 >> 1) + param_1[0x315]) >>
                                    ((byte)uVar5 & 1) * '\x04' & 0xf) << 0x10 |
                                   (uint)*(ushort *)(param_1[0x314] + uVar5 * 2);
                    if (param_1[5] == 0) {
                      uVar5 = param_1[6] + 1;
                      param_1[5] = (&DAT_00f069f8)[param_1[6]];
                      param_1[6] = uVar5;
                      if (uVar5 == 0x200) {
                        param_1[6] = 0;
                      }
                    }
                    param_1[5] = param_1[5] - 1;
                    param_1[0x110] = uVar7 + 4;
                    param_1[3] = ((uint)(param_1[5] == 1) ^ uVar8 & 0xff) + 4;
                    uVar8 = FUN_00a8c980();
                    uVar5 = param_1[0xe];
                    param_1[0xf] = uVar8;
                    param_1[0xe] = (*(byte *)((uVar5 >> 1) + param_1[0x315]) >>
                                    ((byte)uVar5 & 1) * '\x04' & 0xf) << 0x10 |
                                   (uint)*(ushort *)(param_1[0x314] + uVar5 * 2);
                    if (param_1[5] == 0) {
                      uVar5 = param_1[6] + 1;
                      param_1[5] = (&DAT_00f069f8)[param_1[6]];
                      param_1[6] = uVar5;
                      if (uVar5 == 0x200) {
                        param_1[6] = 0;
                      }
                    }
                    param_1[5] = param_1[5] - 1;
                    param_1[0xf] = param_1[5] == 1 ^ uVar8;
                    param_1[0x110] = uVar7 + 5;
                  }
                  else {
                    param_1[0xf] = uVar5;
                  }
                }
              }
              else {
                param_1[0xf] = uVar8;
              }
            }
          }
          else {
            param_1[0xf] = uVar8;
          }
        }
      }
      else {
        **(undefined1 **)(uVar5 + 0x10) = (char)param_1[2];
        uVar5 = *(uint *)(&DAT_00f065f8 + (param_1[0x318] >> 0x18 ^ (uint)(byte)param_1[2]) * 4);
        param_1[3] = param_1[3] - 1;
        param_1[0x318] = param_1[0x318] << 8 ^ uVar5;
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
        *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
        *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + 1;
        if (*(int *)(*param_1 + 0x18) == 0) {
          piVar1 = (int *)(*param_1 + 0x1c);
          *piVar1 = *piVar1 + 1;
        }
      }
    }
  }
LAB_00a8d013:
  return uVar5 & 0xffffff00;
}

