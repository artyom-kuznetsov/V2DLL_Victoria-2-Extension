// FUN_007262d0 @ 007262d0 body=[[007262d0, 0072633c] [00726340, 0072637b] [00726380, 00726663]]


void FUN_007262d0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar10 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_00727ed0(piVar10,param_4);
  piVar16 = piVar10;
  while (((param_2 < piVar16 && (cVar6 = FUN_007236b0(), cVar6 == '\0')) &&
         (cVar6 = FUN_007236b0(), cVar6 == '\0'))) {
    piVar16 = piVar16 + -1;
  }
  do {
    piVar10 = piVar10 + 1;
    piVar14 = piVar10;
    piVar18 = piVar16;
    piVar5 = piVar10;
    local_c = piVar10;
    local_8 = piVar16;
    local_10 = piVar16;
    if ((param_3 <= piVar10) || (cVar6 = FUN_007236b0(), cVar6 != '\0')) break;
    cVar6 = FUN_007236b0();
  } while (cVar6 == '\0');
joined_r0x00726374:
  do {
    if (param_3 <= piVar10) {
joined_r0x00726460:
      while (piVar9 = piVar10, piVar13 = piVar14, param_2 < piVar18) {
        iVar8 = *(int *)(DAT_012588e8 + 0xbcc);
        iVar7 = *(int *)(*(int *)(*piVar16 + 0x28) + 8);
        iVar12 = *(int *)(*(int *)(piVar18[-1] + 0x28) + 8);
        uVar17 = (uint)*(byte *)(iVar12 + 0x72c + iVar8);
        uVar11 = (uint)*(byte *)(iVar12 + 0x784 + iVar8);
        uVar4 = *(uint *)(*(int *)(iVar8 + 0x76c) + uVar17 * 8);
        puVar1 = (uint *)(*(int *)(iVar8 + 0x7c4) + uVar11 * 8);
        iVar12 = (*(int *)(*(int *)(iVar8 + 0x76c) + 4 + uVar17 * 8) -
                 *(int *)(*(int *)(iVar8 + 0x7c4) + 4 + uVar11 * 8)) - (uint)(uVar4 < *puVar1);
        uVar17 = (uint)*(byte *)(iVar7 + 0x784 + iVar8);
        uVar15 = (uint)*(byte *)(iVar7 + 0x72c + iVar8);
        uVar11 = *(uint *)(*(int *)(iVar8 + 0x76c) + uVar15 * 8);
        puVar2 = (uint *)(*(int *)(iVar8 + 0x7c4) + uVar17 * 8);
        iVar8 = (*(int *)(*(int *)(iVar8 + 0x76c) + 4 + uVar15 * 8) -
                *(int *)(*(int *)(iVar8 + 0x7c4) + 4 + uVar17 * 8)) - (uint)(uVar11 < *puVar2);
        if ((iVar12 <= iVar8) && ((iVar12 < iVar8 || (uVar4 - *puVar1 <= uVar11 - *puVar2)))) {
          iVar8 = *(int *)(DAT_012588e8 + 0xbcc);
          iVar7 = *(int *)(*(int *)(*piVar16 + 0x28) + 8);
          iVar12 = *(int *)(*(int *)(piVar18[-1] + 0x28) + 8);
          uVar17 = (uint)*(byte *)(iVar12 + 0x72c + iVar8);
          uVar11 = (uint)*(byte *)(iVar12 + 0x784 + iVar8);
          uVar4 = *(uint *)(*(int *)(iVar8 + 0x76c) + uVar17 * 8);
          puVar1 = (uint *)(*(int *)(iVar8 + 0x7c4) + uVar11 * 8);
          iVar12 = (*(int *)(*(int *)(iVar8 + 0x76c) + 4 + uVar17 * 8) -
                   *(int *)(*(int *)(iVar8 + 0x7c4) + 4 + uVar11 * 8)) - (uint)(uVar4 < *puVar1);
          uVar15 = (uint)*(byte *)(iVar7 + 0x72c + iVar8);
          uVar17 = (uint)*(byte *)(iVar7 + 0x784 + iVar8);
          uVar11 = *(uint *)(*(int *)(iVar8 + 0x76c) + uVar15 * 8);
          puVar2 = (uint *)(*(int *)(iVar8 + 0x7c4) + uVar17 * 8);
          iVar8 = (*(int *)(*(int *)(iVar8 + 0x76c) + 4 + uVar15 * 8) -
                  *(int *)(*(int *)(iVar8 + 0x7c4) + 4 + uVar17 * 8)) - (uint)(uVar11 < *puVar2);
          piVar9 = piVar5;
          piVar13 = local_c;
          piVar16 = local_8;
          piVar18 = local_10;
          if ((iVar12 < iVar8) || ((iVar12 <= iVar8 && (uVar4 - *puVar1 < uVar11 - *puVar2))))
          break;
          iVar8 = local_8[-1];
          local_8 = local_8 + -1;
          *local_8 = local_10[-1];
          local_10[-1] = iVar8;
        }
        local_10 = local_10 + -1;
        piVar10 = piVar5;
        piVar14 = local_c;
        piVar16 = local_8;
        piVar18 = local_10;
      }
      if (piVar18 == param_2) {
        if (piVar9 == param_3) {
          *param_1 = piVar16;
          param_1[1] = piVar13;
          return;
        }
        if (piVar13 != piVar9) {
          iVar8 = *piVar16;
          *piVar16 = *piVar13;
          *piVar13 = iVar8;
        }
        iVar8 = *piVar16;
        *piVar16 = *piVar9;
        piVar16 = piVar16 + 1;
        piVar10 = piVar9 + 1;
        *piVar9 = iVar8;
        piVar14 = piVar13 + 1;
        piVar5 = piVar10;
        local_c = piVar13 + 1;
        local_8 = piVar16;
      }
      else {
        piVar18 = piVar18 + -1;
        local_10 = piVar18;
        if (piVar9 == param_3) {
          piVar16 = piVar16 + -1;
          if (piVar18 != piVar16) {
            iVar8 = *piVar18;
            *piVar18 = *piVar16;
            *piVar16 = iVar8;
          }
          iVar8 = *piVar16;
          piVar14 = piVar13 + -1;
          *piVar16 = piVar13[-1];
          *piVar14 = iVar8;
          piVar10 = piVar9;
          local_c = piVar14;
          local_8 = piVar16;
        }
        else {
          iVar8 = *piVar9;
          *piVar9 = *piVar18;
          *piVar18 = iVar8;
          piVar10 = piVar9 + 1;
          piVar14 = piVar13;
          piVar5 = piVar10;
        }
      }
      goto joined_r0x00726374;
    }
    iVar8 = *piVar10;
    iVar7 = *(int *)(DAT_012588e8 + 0xbcc);
    iVar12 = *(int *)(*(int *)(*piVar16 + 0x28) + 8);
    uVar17 = (uint)*(byte *)(iVar12 + 0x72c + iVar7);
    iVar3 = *(int *)(*(int *)(iVar8 + 0x28) + 8);
    uVar11 = (uint)*(byte *)(iVar12 + 0x784 + iVar7);
    uVar4 = *(uint *)(*(int *)(iVar7 + 0x76c) + uVar17 * 8);
    puVar1 = (uint *)(*(int *)(iVar7 + 0x7c4) + uVar11 * 8);
    iVar12 = (*(int *)(*(int *)(iVar7 + 0x76c) + 4 + uVar17 * 8) -
             *(int *)(*(int *)(iVar7 + 0x7c4) + 4 + uVar11 * 8)) - (uint)(uVar4 < *puVar1);
    uVar17 = (uint)*(byte *)(iVar3 + 0x784 + iVar7);
    uVar15 = (uint)*(byte *)(iVar3 + 0x72c + iVar7);
    uVar11 = *(uint *)(*(int *)(iVar7 + 0x76c) + uVar15 * 8);
    puVar2 = (uint *)(*(int *)(iVar7 + 0x7c4) + uVar17 * 8);
    iVar7 = (*(int *)(*(int *)(iVar7 + 0x76c) + 4 + uVar15 * 8) -
            *(int *)(*(int *)(iVar7 + 0x7c4) + 4 + uVar17 * 8)) - (uint)(uVar11 < *puVar2);
    piVar16 = local_8;
    piVar18 = local_10;
    if ((iVar12 <= iVar7) && ((iVar12 < iVar7 || (uVar4 - *puVar1 <= uVar11 - *puVar2)))) {
      cVar6 = FUN_007236b0();
      piVar10 = piVar5;
      piVar14 = local_c;
      if (cVar6 != '\0') goto joined_r0x00726460;
      iVar7 = *local_c;
      *local_c = iVar8;
      *piVar5 = iVar7;
      local_c = local_c + 1;
    }
    piVar10 = piVar5 + 1;
    piVar14 = local_c;
    piVar5 = piVar5 + 1;
  } while( true );
}

