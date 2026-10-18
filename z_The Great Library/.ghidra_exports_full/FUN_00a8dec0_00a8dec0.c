// FUN_00a8dec0 @ 00a8dec0 body=[[00a8dec0, 00a8df0c] [00a8df10, 00a8e06c]]


void FUN_00a8dec0(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_ESI;
  undefined4 *puVar10;
  int iVar11;
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *(int *)(unaff_ESI + 0x20);
  local_1c = *(int *)(unaff_ESI + 0x24);
  local_c = *(int *)(unaff_ESI + 0x28);
  FUN_00a8de50();
  iVar9 = *(int *)(unaff_ESI + 0x54) + 1;
  local_18 = iVar9;
  if (-1 < iVar9) {
    puVar10 = (undefined4 *)(unaff_ESI + 0x278);
    for (iVar7 = *(int *)(unaff_ESI + 0x54) + 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  }
  iVar7 = 0;
  iVar5 = 0;
  iVar11 = 0;
  local_8 = 0;
  if (0 < *(int *)(unaff_ESI + 0x54)) {
    iVar4 = *(int *)(unaff_ESI + 0x54);
    do {
      local_11c[iVar5] = (char)iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  local_10 = 0;
  if (0 < *(int *)(unaff_ESI + 0x44)) {
    do {
      cVar3 = local_11c[1];
      iVar9 = *(int *)(local_14 + local_10 * 4) + -1;
      if (iVar9 < 0) {
        iVar9 = iVar9 + *(int *)(unaff_ESI + 0x44);
      }
      cVar2 = *(char *)(*(byte *)(iVar9 + local_1c) + 0x158 + unaff_ESI);
      if (local_11c[0] == cVar2) {
        iVar7 = iVar7 + 1;
        local_8 = iVar7;
      }
      else {
        if (0 < iVar7) {
          uVar8 = iVar7 - 1;
          while( true ) {
            if ((uVar8 & 1) == 0) {
              *(undefined2 *)(local_c + iVar11 * 2) = 0;
              *(int *)(unaff_ESI + 0x278) = *(int *)(unaff_ESI + 0x278) + 1;
            }
            else {
              *(undefined2 *)(local_c + iVar11 * 2) = 1;
              *(int *)(unaff_ESI + 0x27c) = *(int *)(unaff_ESI + 0x27c) + 1;
            }
            iVar11 = iVar11 + 1;
            if ((int)uVar8 < 2) break;
            uVar8 = (int)(uVar8 - 2) / 2;
          }
          local_8 = 0;
          iVar7 = 0;
        }
        local_11c[1] = local_11c[0];
        pcVar6 = local_11c + 1;
        local_11c[0] = cVar3;
        while (cVar2 != local_11c[0]) {
          pcVar6 = pcVar6 + 1;
          cVar3 = *pcVar6;
          *pcVar6 = local_11c[0];
          iVar7 = local_8;
          local_11c[0] = cVar3;
        }
        *(short *)(local_c + iVar11 * 2) = (short)((int)pcVar6 - (int)local_11c) + 1;
        iVar11 = iVar11 + 1;
        piVar1 = (int *)(unaff_ESI + 0x27c + ((int)pcVar6 - (int)local_11c) * 4);
        *piVar1 = *piVar1 + 1;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(unaff_ESI + 0x44));
    iVar9 = local_18;
    if (0 < iVar7) {
      uVar8 = iVar7 - 1;
      while( true ) {
        if ((uVar8 & 1) == 0) {
          *(undefined2 *)(local_c + iVar11 * 2) = 0;
          *(int *)(unaff_ESI + 0x278) = *(int *)(unaff_ESI + 0x278) + 1;
        }
        else {
          *(undefined2 *)(local_c + iVar11 * 2) = 1;
          *(int *)(unaff_ESI + 0x27c) = *(int *)(unaff_ESI + 0x27c) + 1;
        }
        iVar11 = iVar11 + 1;
        if ((int)uVar8 < 2) break;
        uVar8 = (int)(uVar8 - 2) / 2;
      }
    }
  }
  *(short *)(local_c + iVar11 * 2) = (short)iVar9;
  piVar1 = (int *)(unaff_ESI + 0x278 + iVar9 * 4);
  *piVar1 = *piVar1 + 1;
  *(int *)(unaff_ESI + 0x274) = iVar11 + 1;
  return;
}

