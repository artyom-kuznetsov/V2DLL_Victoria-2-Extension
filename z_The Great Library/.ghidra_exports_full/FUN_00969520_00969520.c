// FUN_00969520 @ 00969520 body=[[00969520, 0096975f]]


uint FUN_00969520(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  int *unaff_ESI;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint local_c [2];
  
  uVar9 = DAT_01258a14;
  piVar7 = unaff_ESI + 0xe;
  local_c[0] = 3;
  do {
    uVar4 = 0;
    if (uVar9 != 0) {
      do {
        piVar1 = (int *)(unaff_ESI[9] + uVar4 * 4);
        *piVar1 = *piVar1 + *(int *)(piVar7[-3] + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar9);
    }
    uVar4 = 0;
    if (DAT_01258a18 != 0) {
      do {
        piVar1 = (int *)(unaff_ESI[10] + uVar4 * 4);
        *piVar1 = *piVar1 + *(int *)(*piVar7 + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_01258a18);
    }
    uVar4 = DAT_01258a28;
    piVar7 = piVar7 + 1;
    local_c[0] = local_c[0] - 1;
  } while (local_c[0] != 0);
  uVar9 = 1;
  local_c[0] = 0;
  if (1 < DAT_01258a28) {
    do {
      if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 < (int)uVar9) {
        iVar5 = FUN_0096bb70();
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xc) + uVar9 * 4);
      }
      if (*(char *)(iVar5 + 0x41) != '\0') {
        unaff_ESI[5] = unaff_ESI[5] + *(int *)(unaff_ESI[0x14] + uVar9 * 4);
      }
      if (*(char *)(iVar5 + 0x3d9) != '\0') {
        if (((char)unaff_ESI[0x3e] == '\0') && (*(int *)(unaff_ESI[0x14] + uVar9 * 4) == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        *(undefined1 *)(unaff_ESI + 0x3e) = uVar6;
      }
      unaff_ESI[*(int *)(iVar5 + 0x3c) + 6] =
           unaff_ESI[*(int *)(iVar5 + 0x3c) + 6] + *(int *)(unaff_ESI[0x14] + uVar9 * 4);
      *unaff_ESI = *unaff_ESI + *(int *)(unaff_ESI[0x14] + uVar9 * 4);
      piVar7 = (int *)(unaff_ESI[0x14] + uVar9 * 4);
      if (*(char *)(iVar5 + 0x3d9) == '\0') {
        unaff_ESI[1] = unaff_ESI[1] + *piVar7;
      }
      else {
        unaff_ESI[2] = unaff_ESI[2] + *piVar7;
      }
      unaff_ESI[4] = unaff_ESI[4] + *(int *)(unaff_ESI[0x16] + uVar9 * 4);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  uVar9 = DAT_01258a28;
  if (param_2 == 0) {
    uVar4 = 0;
    if (param_3 != 0) {
      local_c[0] = 0;
      iVar5 = FUN_004d34b0(local_c);
      uVar4 = iVar5 - local_c[0];
      if ((uVar4 != 0) && (iVar5 = 1, local_c[0] = uVar4, 1 < (int)uVar9)) {
        do {
          if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 < iVar5) {
            uVar4 = FUN_0096bb70();
          }
          else {
            uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + iVar5 * 4);
          }
          if (*(char *)(uVar4 + 0x50) != '\0') {
            iVar10 = unaff_ESI[0x17];
            piVar7 = (int *)(iVar10 + iVar5 * 4);
            *piVar7 = *piVar7 + local_c[0];
            uVar4 = iVar10 + iVar5 * 4;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar9);
      }
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 0x58);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)FUN_00aae9af(0x14);
      if (DAT_01258728 == (int *)0x0) {
        DAT_01258728 = (int *)0x0;
      }
      else {
        *DAT_01258728 = 0;
        DAT_01258728[1] = 0;
        DAT_01258728[2] = 0;
        *(undefined1 *)(DAT_01258728 + 4) = 0;
      }
    }
    iVar10 = iVar5 * 0xb0 + *DAT_01258728;
    iVar5 = *(int *)(iVar10 + 8);
    uVar9 = *(uint *)(iVar5 + 0x128);
    uVar11 = __allmul(uVar9 << 0xf,((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11,
                      *(undefined4 *)(iVar10 + 0x88),*(undefined4 *)(iVar10 + 0x8c));
    uVar4 = (uint)uVar11 >> 0x1e | (int)((ulonglong)uVar11 >> 0x20) << 2;
    iVar10 = uVar4 - *(int *)(iVar10 + 0x58);
    if ((0 < iVar10) &&
       (uVar4 = *(int *)(iVar5 + 0x10c) - *(int *)(iVar5 + 0x108) >> 5, 0 < (int)uVar4)) {
      iVar8 = 0;
      local_c[0] = uVar4;
      do {
        iVar2 = *(int *)(*(int *)(iVar8 + 8 + *(int *)(iVar5 + 0x108)) + 0x28);
        iVar3 = unaff_ESI[0x17];
        piVar7 = (int *)(iVar3 + iVar2 * 4);
        *piVar7 = *piVar7 + iVar10;
        iVar8 = iVar8 + 0x20;
        local_c[0] = local_c[0] - 1;
      } while (local_c[0] != 0);
      return iVar3 + iVar2 * 4;
    }
  }
  return uVar4;
}

