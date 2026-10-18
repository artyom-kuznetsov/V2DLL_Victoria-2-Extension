// FUN_00726670 @ 00726670 body=[[00726670, 007267b9] [007267c0, 0072696c] [00726970, 00726b00]]


void FUN_00726670(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *local_c;
  int *local_8;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007281e0(piVar7,param_4);
  iVar5 = DAT_012588e8;
  piVar6 = piVar7 + 1;
  if (param_2 < piVar7) {
    iVar10 = *(int *)(DAT_012588e8 + 0xb60) * 0x58 +
             *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3f4);
    while( true ) {
      iVar13 = *(int *)(*(int *)(*piVar7 + 0x28) + 8);
      iVar1 = *(int *)(*(int *)(piVar7[-1] + 0x28) + 8);
      uVar9 = (uint)*(byte *)(iVar13 + 8 + iVar10);
      uVar11 = (uint)*(byte *)(iVar1 + 8 + iVar10);
      iVar2 = *(int *)(*(int *)(iVar10 + 0x48) + 4 + uVar9 * 8);
      iVar12 = *(int *)(*(int *)(iVar10 + 0x48) + 4 + uVar11 * 8);
      if ((iVar2 < iVar12) ||
         ((iVar2 <= iVar12 &&
          (*(uint *)(*(int *)(iVar10 + 0x48) + uVar9 * 8) <
           *(uint *)(*(int *)(iVar10 + 0x48) + uVar11 * 8))))) break;
      iVar12 = *(int *)(DAT_012588e8 + 0xb60) * 0x58 +
               *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3f4);
      uVar11 = (uint)*(byte *)(iVar13 + 8 + iVar12);
      uVar9 = (uint)*(byte *)(iVar1 + 8 + iVar12);
      iVar13 = *(int *)(iVar12 + 0x48);
      iVar1 = *(int *)(iVar13 + 4 + uVar9 * 8);
      iVar12 = *(int *)(iVar13 + 4 + uVar11 * 8);
      if ((iVar1 < iVar12) ||
         (((iVar1 <= iVar12 && (*(uint *)(iVar13 + uVar9 * 8) < *(uint *)(iVar13 + uVar11 * 8))) ||
          (piVar7 = piVar7 + -1, piVar7 <= param_2)))) break;
    }
  }
  piVar3 = piVar6;
  piVar4 = piVar6;
  local_8 = piVar6;
  local_c = piVar7;
  piVar8 = piVar7;
  if (piVar6 < param_3) {
    iVar12 = *(int *)(DAT_012588e8 + 0xb60) * 0x58 +
             *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3f4);
    iVar10 = *(int *)(*(int *)(*piVar7 + 0x28) + 8);
    while( true ) {
      uVar9 = (uint)*(byte *)(iVar10 + 8 + iVar12);
      iVar1 = *(int *)(*(int *)(*piVar6 + 0x28) + 8);
      uVar11 = (uint)*(byte *)(iVar1 + 8 + iVar12);
      iVar2 = *(int *)(*(int *)(iVar12 + 0x48) + 4 + uVar9 * 8);
      iVar13 = *(int *)(*(int *)(iVar12 + 0x48) + 4 + uVar11 * 8);
      piVar3 = piVar6;
      piVar4 = piVar6;
      local_8 = piVar6;
      if ((iVar2 < iVar13) ||
         ((iVar2 <= iVar13 &&
          (*(uint *)(*(int *)(iVar12 + 0x48) + uVar9 * 8) <
           *(uint *)(*(int *)(iVar12 + 0x48) + uVar11 * 8))))) break;
      iVar13 = *(int *)(DAT_012588e8 + 0xb60) * 0x58 +
               *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3f4);
      uVar11 = (uint)*(byte *)(iVar1 + 8 + iVar13);
      uVar9 = (uint)*(byte *)(iVar13 + 8 + iVar10);
      iVar1 = *(int *)(iVar13 + 0x48);
      iVar2 = *(int *)(iVar1 + 4 + uVar11 * 8);
      iVar13 = *(int *)(iVar1 + 4 + uVar9 * 8);
      if ((iVar2 < iVar13) ||
         (((iVar2 <= iVar13 && (*(uint *)(iVar1 + uVar11 * 8) < *(uint *)(iVar1 + uVar9 * 8))) ||
          (piVar6 = piVar6 + 1, piVar3 = piVar6, piVar4 = piVar6, local_8 = piVar6,
          param_3 <= piVar6)))) break;
    }
  }
joined_r0x00726877:
  do {
    piVar14 = piVar3;
    if (param_3 <= piVar3) {
joined_r0x00726965:
      while (param_2 < piVar7) {
        iVar12 = *(int *)(*(int *)(piVar7[-1] + 0x28) + 8);
        iVar10 = *(int *)(iVar5 + 0xb60) * 0x58 + *(int *)(*(int *)(iVar5 + 0xbcc) + 0x3f4);
        iVar13 = *(int *)(*(int *)(*piVar8 + 0x28) + 8);
        uVar9 = (uint)*(byte *)(iVar13 + 8 + iVar10);
        uVar11 = (uint)*(byte *)(iVar12 + 8 + iVar10);
        iVar1 = *(int *)(iVar10 + 0x48);
        iVar2 = *(int *)(iVar1 + 4 + uVar9 * 8);
        iVar10 = *(int *)(iVar1 + 4 + uVar11 * 8);
        if ((iVar10 <= iVar2) &&
           ((iVar10 < iVar2 || (*(uint *)(iVar1 + uVar11 * 8) <= *(uint *)(iVar1 + uVar9 * 8))))) {
          iVar10 = *(int *)(iVar5 + 0xb60) * 0x58 + *(int *)(*(int *)(iVar5 + 0xbcc) + 0x3f4);
          uVar11 = (uint)*(byte *)(iVar12 + 8 + iVar10);
          uVar9 = (uint)*(byte *)(iVar10 + 8 + iVar13);
          iVar12 = *(int *)(iVar10 + 0x48);
          iVar13 = *(int *)(iVar12 + 4 + uVar11 * 8);
          iVar10 = *(int *)(iVar12 + 4 + uVar9 * 8);
          piVar6 = local_8;
          piVar7 = local_c;
          if ((iVar13 < iVar10) ||
             ((iVar13 <= iVar10 && (*(uint *)(iVar12 + uVar11 * 8) < *(uint *)(iVar12 + uVar9 * 8)))
             )) break;
          iVar10 = piVar8[-1];
          piVar8 = piVar8 + -1;
          *piVar8 = local_c[-1];
          local_c[-1] = iVar10;
        }
        local_c = local_c + -1;
        piVar6 = local_8;
        piVar7 = local_c;
      }
      if (piVar7 == param_2) {
        if (piVar14 == param_3) {
          *param_1 = (uint)piVar8;
          param_1[1] = (uint)piVar6;
          return;
        }
        if (piVar6 != piVar14) {
          iVar10 = *piVar8;
          *piVar8 = *piVar6;
          *piVar6 = iVar10;
        }
        piVar6 = piVar6 + 1;
        iVar10 = *piVar8;
        *piVar8 = *piVar14;
        *piVar14 = iVar10;
        piVar3 = piVar14 + 1;
        piVar4 = piVar14 + 1;
        local_8 = piVar6;
        piVar8 = piVar8 + 1;
      }
      else {
        piVar7 = piVar7 + -1;
        local_c = piVar7;
        if (piVar14 == param_3) {
          piVar8 = piVar8 + -1;
          if (piVar7 != piVar8) {
            iVar10 = *piVar7;
            *piVar7 = *piVar8;
            *piVar8 = iVar10;
          }
          iVar10 = *piVar8;
          piVar6 = piVar6 + -1;
          *piVar8 = *piVar6;
          *piVar6 = iVar10;
          piVar3 = piVar14;
          local_8 = piVar6;
        }
        else {
          iVar10 = *piVar14;
          *piVar14 = *piVar7;
          *piVar7 = iVar10;
          piVar3 = piVar14 + 1;
          piVar4 = piVar14 + 1;
        }
      }
      goto joined_r0x00726877;
    }
    iVar12 = *(int *)(*(int *)(*piVar3 + 0x28) + 8);
    iVar10 = *(int *)(iVar5 + 0xb60) * 0x58 + *(int *)(*(int *)(iVar5 + 0xbcc) + 0x3f4);
    iVar13 = *(int *)(*(int *)(*piVar8 + 0x28) + 8);
    uVar9 = (uint)*(byte *)(iVar13 + 8 + iVar10);
    uVar11 = (uint)*(byte *)(iVar12 + 8 + iVar10);
    iVar1 = *(int *)(iVar10 + 0x48);
    iVar2 = *(int *)(iVar1 + 4 + uVar11 * 8);
    iVar10 = *(int *)(iVar1 + 4 + uVar9 * 8);
    piVar7 = local_c;
    if ((iVar10 <= iVar2) &&
       ((iVar10 < iVar2 || (*(uint *)(iVar1 + uVar9 * 8) <= *(uint *)(iVar1 + uVar11 * 8))))) {
      iVar10 = *(int *)(iVar5 + 0xb60) * 0x58 + *(int *)(*(int *)(iVar5 + 0xbcc) + 0x3f4);
      uVar9 = (uint)*(byte *)(iVar12 + 8 + iVar10);
      uVar11 = (uint)*(byte *)(iVar13 + 8 + iVar10);
      iVar12 = *(int *)(iVar10 + 0x48);
      iVar13 = *(int *)(iVar12 + 4 + uVar11 * 8);
      iVar10 = *(int *)(iVar12 + 4 + uVar9 * 8);
      piVar6 = local_8;
      piVar14 = piVar4;
      if ((iVar13 < iVar10) ||
         ((iVar13 <= iVar10 && (*(uint *)(iVar12 + uVar11 * 8) < *(uint *)(iVar12 + uVar9 * 8)))))
      goto joined_r0x00726965;
      iVar10 = *local_8;
      *local_8 = *piVar4;
      local_8 = local_8 + 1;
      *piVar4 = iVar10;
    }
    piVar6 = local_8;
    piVar3 = piVar4 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
}

