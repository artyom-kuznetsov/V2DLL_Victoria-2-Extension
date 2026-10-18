// FUN_00857e60 @ 00857e60 body=[[00857e60, 00857f99] [00857fa0, 008580d3]]


int FUN_00857e60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int local_1c;
  int local_c;
  int local_8;
  
  iVar6 = DAT_012588e8;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  piVar11 = *(int **)(iVar1 + 0x9d8);
  local_c = 0;
  iVar8 = 0;
  do {
    do {
      if ((piVar11 < *(int **)(iVar1 + 0x9d8)) || (*(int **)(iVar1 + 0x9dc) <= piVar11)) {
        return local_c;
      }
      iVar2 = *(int *)(*(int *)(iVar6 + 0xacc) + *piVar11 * 4);
      piVar11 = piVar11 + 1;
      local_8 = 0;
    } while (0 < *(int *)(*(int *)(iVar2 + 0x188) + 0x84));
    cVar7 = FUN_00511e70(*(undefined4 *)(param_1 + 0x7c),iVar2);
    if (cVar7 != '\0') {
      if (*(int *)(iVar2 + 0x58) == *(int *)(iVar1 + 0xbe4)) {
        local_8 = 500;
      }
      iVar9 = FUN_0050e450();
      if (iVar9 != 0) {
        for (piVar13 = *(int **)(iVar9 + 4); piVar13 != (int *)0x0; piVar13 = (int *)piVar13[2]) {
          if (*piVar13 == iVar2) {
            local_8 = local_8 + 500;
            break;
          }
        }
      }
      iVar9 = *(int *)(iVar2 + 0x5c);
      local_1c = 0;
      if (0 < (*(int *)(iVar9 + 0xcc) - *(int *)(iVar9 + 200)) / 0x24) {
        piVar13 = *(int **)(iVar9 + 200);
        do {
          iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar13[1] * 4);
          if ((*(char *)(*(int *)(iVar10 + 0x5c) + 0x2a) != '\0') &&
             (uVar3 = *(uint *)(iVar10 + 300), uVar3 != *(uint *)(param_1 + 0x38))) {
            if (*piVar13 == 1) {
              local_8 = local_8 + 200;
            }
            for (piVar4 = *(int **)(*(int *)(iVar1 + 0x3bc) + (uVar3 % *(uint *)(iVar1 + 0x3b8)) * 4
                                   ); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
              iVar12 = *piVar4;
              if (*(uint *)(iVar12 + 0xc) == uVar3) {
                if (iVar12 != 0) {
                  iVar12 = *(int *)(iVar12 + 0x10);
                  goto LAB_00858010;
                }
                break;
              }
            }
            iVar12 = 0;
LAB_00858010:
            for (piVar4 = *(int **)(*(int *)(iVar1 + 0x3f4) +
                                   (*(uint *)(iVar10 + 300) % *(uint *)(iVar1 + 0x3f0)) * 4);
                piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
              iVar5 = *piVar4;
              if (*(uint *)(iVar5 + 0xc) == *(uint *)(iVar10 + 300)) {
                if (iVar5 != 0) {
                  iVar10 = *(int *)(iVar5 + 0x10);
                  goto LAB_00858046;
                }
                break;
              }
            }
            iVar10 = 0;
LAB_00858046:
            iVar12 = iVar12 + ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2);
            if (0x95 < iVar12) {
              if (*piVar13 == 2) {
                local_8 = local_8 + iVar12 + iVar12 / 2;
              }
              else {
                if (*piVar13 == 1) {
                  iVar12 = iVar12 * 2;
                }
                local_8 = local_8 + iVar12;
              }
            }
          }
          local_1c = local_1c + 1;
          piVar13 = piVar13 + 9;
        } while (local_1c < (*(int *)(iVar9 + 0xcc) - *(int *)(iVar9 + 200)) / 0x24);
      }
    }
    if (iVar8 < local_8) {
      local_c = iVar2;
      iVar8 = local_8;
    }
  } while( true );
}

