// FUN_00967b10 @ 00967b10 body=[[00967b10, 00967ec2]]


void FUN_00967b10(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int unaff_EDI;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int local_38;
  uint local_30;
  int local_2c;
  
  iVar12 = DAT_012586dc;
  iVar8 = *(int *)(DAT_012586dc + 0x50);
  uVar1 = *(undefined4 *)(iVar8 + 0x198);
  uVar2 = *(undefined4 *)(iVar8 + 0x19c);
  uVar3 = *(undefined4 *)(iVar8 + 0x1a0);
  uVar4 = *(undefined4 *)(iVar8 + 0x1a4);
  *(undefined4 *)(unaff_EDI + 0x30) = 0;
  *(undefined4 *)(unaff_EDI + 0x34) = 0;
  *(undefined1 *)(unaff_EDI + 0x38) = 0;
  if (*(int *)(unaff_EDI + 0x274) != 0) {
    iVar8 = *(int *)(*(int *)(unaff_EDI + 0x274) + 0xc);
    iVar12 = *(int *)(iVar12 + 0x50);
    if (iVar8 == 0) {
      if (*(int *)(iVar12 + 0x1bc) < *(int *)(unaff_EDI + 0x124)) {
        return;
      }
      if ((*(int *)(iVar12 + 0x1bc) <= *(int *)(unaff_EDI + 0x124)) &&
         (*(uint *)(iVar12 + 0x1b8) <= *(uint *)(unaff_EDI + 0x120))) {
        return;
      }
    }
    else {
      puVar9 = (uint *)(*(int *)(unaff_EDI + 0xa4) + *(int *)(iVar8 + 0x50) * 8);
      if ((*(int *)(iVar12 + 0x18c) <= (int)puVar9[1]) &&
         ((*(int *)(iVar12 + 0x18c) < (int)puVar9[1] || (*(uint *)(iVar12 + 0x188) < *puVar9)))) {
        *puVar9 = 0x320000;
        puVar9[1] = 0;
        return;
      }
    }
    *(undefined1 *)(unaff_EDI + 0x38) = 1;
    return;
  }
  if ((*(int *)(*(int *)(*(int *)(unaff_EDI + 100) + 0x188) + 0x84) < 1) &&
     (iVar8 = FUN_00967f50(), iVar8 == 0)) {
    iVar8 = *(int *)(iVar12 + 0x50);
    local_2c = *(int *)(iVar8 + 0x184);
    local_30 = *(uint *)(iVar8 + 0x180);
    uVar14 = FUN_00b31c36();
    iVar8 = (int)((ulonglong)uVar14 >> 0x20);
    if ((*(int *)(unaff_EDI + 0x11c) <= iVar8) &&
       ((*(int *)(unaff_EDI + 0x11c) < iVar8 || (*(uint *)(unaff_EDI + 0x118) < (uint)uVar14)))) {
      puVar9 = (uint *)FUN_00408d50(DAT_00f14a8c);
      if ((int)puVar9[1] < *(int *)(unaff_EDI + 300)) {
        return;
      }
      if (((int)puVar9[1] <= *(int *)(unaff_EDI + 300)) && (*puVar9 < *(uint *)(unaff_EDI + 0x128)))
      {
        return;
      }
    }
    iVar8 = DAT_01258a48;
    iVar13 = 0;
    iVar12 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
    local_38 = -1;
    if (0 < iVar12) {
      do {
        iVar5 = *(int *)(*(int *)(iVar8 + 0x18) + iVar13 * 4);
        iVar6 = *(int *)(*(int *)(iVar5 + 0x54) + 0x5c);
        if ((iVar6 == 2) || (iVar6 == 3)) {
          uVar11 = *(uint *)(*(int *)(unaff_EDI + 0xa4) + iVar13 * 8);
          iVar6 = *(int *)(*(int *)(unaff_EDI + 0xa4) + 4 + iVar13 * 8);
          if (((local_2c <= iVar6) && ((local_2c < iVar6 || (local_30 < uVar11)))) &&
             (((*(int *)(iVar5 + 100) - *(int *)(iVar5 + 0x60) & 0xfffffffcU) == 0 ||
              (cVar7 = (**(code **)(*(int *)(iVar5 + 0x58) + 0x18))(param_1), cVar7 != '\0')))) {
            local_38 = iVar13;
            local_30 = uVar11;
            local_2c = iVar6;
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar12);
      if (-1 < local_38) {
        lVar15 = __allmul(*(undefined4 *)(unaff_EDI + 0x128),*(undefined4 *)(unaff_EDI + 300),uVar3,
                          uVar4);
        lVar16 = __allmul(*(undefined4 *)(unaff_EDI + 0x118),*(undefined4 *)(unaff_EDI + 0x11c),
                          uVar1,uVar2);
        lVar17 = __allmul(local_30,local_2c,0x48000,0);
        uVar14 = __allmul((lVar15 >> 0xf) + (lVar16 >> 0xf),lVar17 >> 0xf);
        uVar11 = (uint)uVar14 >> 0x1e | (int)((ulonglong)uVar14 >> 0x20) << 2;
        if ((10 < uVar11) && (*(uint *)(unaff_EDI + 600) < uVar11)) {
          iVar8 = *(int *)(*(int *)(unaff_EDI + 0xf4) + 4 + local_38 * 8);
          if (iVar8 < 0) {
            return;
          }
          if ((iVar8 < 1) && (*(int *)(*(int *)(unaff_EDI + 0xf4) + local_38 * 8) == 0)) {
            return;
          }
          *(undefined4 *)(unaff_EDI + 0x30) =
               *(undefined4 *)(*(int *)(DAT_01258a48 + 0x18) + local_38 * 4);
          return;
        }
      }
    }
    if (*(uint *)(unaff_EDI + 600) < 0x14) {
      iVar8 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x1bc);
      if ((iVar8 <= *(int *)(unaff_EDI + 0x124)) &&
         ((iVar8 < *(int *)(unaff_EDI + 0x124) ||
          (*(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x1b8) < *(uint *)(unaff_EDI + 0x120))))) {
        iVar8 = *(int *)(unaff_EDI + 100);
        if (*(int *)(unaff_EDI + 0x6c) !=
            *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar8 + 300) * 4) + 0xe64)) {
          pcVar10 = *(char **)(iVar8 + 0x148);
          iVar12 = *(int *)(iVar8 + 0x14c) - (int)pcVar10 >> 3;
          local_38 = 0;
          if (0 < iVar12) {
            while ((((*pcVar10 == 'R' && (pcVar10[1] == 'E')) && (pcVar10[2] == 'B')) ||
                   ((*(int *)(pcVar10 + 4) == *(int *)(iVar8 + 300) ||
                    (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(pcVar10 + 4) * 4) +
                             0xe64) != *(int *)(unaff_EDI + 0x6c)))))) {
              local_38 = local_38 + 1;
              pcVar10 = pcVar10 + 8;
              if (iVar12 <= local_38) {
                return;
              }
            }
            *(undefined4 *)(unaff_EDI + 0x34) = *(undefined4 *)(pcVar10 + 4);
          }
        }
      }
    }
  }
  return;
}

