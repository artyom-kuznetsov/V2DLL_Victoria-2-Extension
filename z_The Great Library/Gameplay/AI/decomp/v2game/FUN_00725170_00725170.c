// FUN_00725170 @ 00725170 body=[[00725170, 007251c9] [007251d0, 0072529e] [007252a0, 0072557c]]


void FUN_00725170(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *local_c;
  int *local_8;
  
  piVar8 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00726f00(piVar8,param_4);
  piVar12 = piVar8 + 1;
  if (param_2 < piVar8) {
    iVar2 = *(int *)(DAT_012588e8 + 0xbcc);
    while( true ) {
      iVar3 = *(int *)(*(int *)(*piVar8 + 0x28) + 8);
      uVar10 = (uint)*(byte *)(iVar3 + 0x5bc + iVar2);
      iVar4 = *(int *)(*(int *)(piVar8[-1] + 0x28) + 8);
      uVar7 = (uint)*(byte *)(iVar4 + 0x5bc + iVar2);
      iVar5 = *(int *)(*(int *)(iVar2 + 0x5fc) + 4 + uVar10 * 8);
      iVar1 = *(int *)(*(int *)(iVar2 + 0x5fc) + 4 + uVar7 * 8);
      if ((iVar5 < iVar1) ||
         ((iVar5 <= iVar1 &&
          (*(uint *)(*(int *)(iVar2 + 0x5fc) + uVar10 * 8) <
           *(uint *)(*(int *)(iVar2 + 0x5fc) + uVar7 * 8))))) break;
      iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
      uVar7 = (uint)*(byte *)(iVar4 + 0x5bc + iVar1);
      iVar4 = *(int *)(iVar1 + 0x5fc);
      uVar10 = (uint)*(byte *)(iVar3 + 0x5bc + iVar1);
      iVar3 = *(int *)(iVar4 + 4 + uVar7 * 8);
      iVar1 = *(int *)(iVar4 + 4 + uVar10 * 8);
      if ((iVar3 < iVar1) ||
         (((iVar3 <= iVar1 && (*(uint *)(iVar4 + uVar7 * 8) < *(uint *)(iVar4 + uVar10 * 8))) ||
          (piVar8 = piVar8 + -1, piVar8 <= param_2)))) break;
    }
  }
  piVar14 = piVar12;
  piVar6 = piVar12;
  local_8 = piVar12;
  local_c = piVar8;
  piVar9 = piVar8;
  if (piVar12 < param_3) {
    iVar2 = *(int *)(DAT_012588e8 + 0xbcc);
    iVar1 = *(int *)(*(int *)(*piVar8 + 0x28) + 8);
    while( true ) {
      uVar10 = (uint)*(byte *)(iVar1 + 0x5bc + iVar2);
      iVar4 = *(int *)(*(int *)(*piVar12 + 0x28) + 8);
      uVar7 = (uint)*(byte *)(iVar2 + 0x5bc + iVar4);
      iVar5 = *(int *)(*(int *)(iVar2 + 0x5fc) + 4 + uVar10 * 8);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x5fc) + 4 + uVar7 * 8);
      piVar14 = piVar12;
      piVar6 = piVar12;
      local_8 = piVar12;
      if ((iVar5 < iVar3) ||
         ((iVar5 <= iVar3 &&
          (*(uint *)(*(int *)(iVar2 + 0x5fc) + uVar10 * 8) <
           *(uint *)(*(int *)(iVar2 + 0x5fc) + uVar7 * 8))))) break;
      iVar3 = *(int *)(DAT_012588e8 + 0xbcc);
      uVar10 = (uint)*(byte *)(iVar1 + 0x5bc + iVar3);
      uVar7 = (uint)*(byte *)(iVar3 + 0x5bc + iVar4);
      iVar4 = *(int *)(iVar3 + 0x5fc);
      iVar5 = *(int *)(iVar4 + 4 + uVar7 * 8);
      iVar3 = *(int *)(iVar4 + 4 + uVar10 * 8);
      if ((iVar5 < iVar3) ||
         (((iVar5 <= iVar3 && (*(uint *)(iVar4 + uVar7 * 8) < *(uint *)(iVar4 + uVar10 * 8))) ||
          (piVar12 = piVar12 + 1, piVar14 = piVar12, piVar6 = piVar12, local_8 = piVar12,
          param_3 <= piVar12)))) break;
    }
  }
joined_r0x00725349:
  do {
    piVar11 = piVar12;
    if (param_3 <= piVar12) {
joined_r0x0072541e:
      while (piVar13 = piVar14, param_2 < piVar8) {
        iVar1 = *(int *)(*(int *)(*piVar9 + 0x28) + 8);
        iVar2 = *(int *)(DAT_012588e8 + 0xbcc);
        iVar3 = *(int *)(*(int *)(piVar8[-1] + 0x28) + 8);
        uVar7 = (uint)*(byte *)(iVar2 + 0x5bc + iVar3);
        uVar10 = (uint)*(byte *)(iVar2 + 0x5bc + iVar1);
        iVar4 = *(int *)(iVar2 + 0x5fc);
        iVar5 = *(int *)(iVar4 + 4 + uVar10 * 8);
        iVar2 = *(int *)(iVar4 + 4 + uVar7 * 8);
        if ((iVar2 <= iVar5) &&
           ((iVar2 < iVar5 || (*(uint *)(iVar4 + uVar7 * 8) <= *(uint *)(iVar4 + uVar10 * 8))))) {
          iVar2 = *(int *)(DAT_012588e8 + 0xbcc);
          uVar7 = (uint)*(byte *)(iVar2 + 0x5bc + iVar3);
          iVar3 = *(int *)(iVar2 + 0x5fc);
          uVar10 = (uint)*(byte *)(iVar2 + 0x5bc + iVar1);
          iVar1 = *(int *)(iVar3 + 4 + uVar7 * 8);
          iVar2 = *(int *)(iVar3 + 4 + uVar10 * 8);
          piVar8 = local_c;
          piVar13 = local_8;
          if ((iVar1 < iVar2) ||
             ((iVar1 <= iVar2 && (*(uint *)(iVar3 + uVar7 * 8) < *(uint *)(iVar3 + uVar10 * 8)))))
          break;
          iVar2 = piVar9[-1];
          piVar9 = piVar9 + -1;
          *piVar9 = local_c[-1];
          local_c[-1] = iVar2;
        }
        local_c = local_c + -1;
        piVar14 = local_8;
        piVar8 = local_c;
      }
      if (piVar8 == param_2) {
        if (piVar11 == param_3) {
          param_1[1] = (uint)piVar13;
          *param_1 = (uint)piVar9;
          return;
        }
        if (piVar13 != piVar11) {
          iVar2 = *piVar9;
          *piVar9 = *piVar13;
          *piVar13 = iVar2;
        }
        iVar2 = *piVar9;
        *piVar9 = *piVar11;
        piVar12 = piVar11 + 1;
        *piVar11 = iVar2;
        piVar14 = piVar13 + 1;
        piVar6 = piVar12;
        local_8 = piVar13 + 1;
        piVar9 = piVar9 + 1;
      }
      else {
        piVar8 = piVar8 + -1;
        local_c = piVar8;
        if (piVar11 == param_3) {
          piVar9 = piVar9 + -1;
          if (piVar8 != piVar9) {
            iVar2 = *piVar8;
            *piVar8 = *piVar9;
            *piVar9 = iVar2;
          }
          iVar2 = *piVar9;
          piVar14 = piVar13 + -1;
          *piVar9 = piVar13[-1];
          *piVar14 = iVar2;
          piVar12 = piVar11;
          local_8 = piVar14;
        }
        else {
          iVar2 = *piVar11;
          *piVar11 = *piVar8;
          *piVar8 = iVar2;
          piVar12 = piVar11 + 1;
          piVar14 = piVar13;
          piVar6 = piVar12;
        }
      }
      goto joined_r0x00725349;
    }
    iVar2 = *(int *)(DAT_012588e8 + 0xbcc);
    iVar1 = *(int *)(*(int *)(*piVar12 + 0x28) + 8);
    uVar10 = (uint)*(byte *)(iVar2 + 0x5bc + iVar1);
    iVar3 = *(int *)(*(int *)(*piVar9 + 0x28) + 8);
    uVar7 = (uint)*(byte *)(iVar2 + 0x5bc + iVar3);
    iVar4 = *(int *)(iVar2 + 0x5fc);
    iVar5 = *(int *)(iVar4 + 4 + uVar10 * 8);
    iVar2 = *(int *)(iVar4 + 4 + uVar7 * 8);
    piVar8 = local_c;
    if ((iVar2 <= iVar5) &&
       ((iVar2 < iVar5 || (*(uint *)(iVar4 + uVar7 * 8) <= *(uint *)(iVar4 + uVar10 * 8))))) {
      iVar2 = *(int *)(DAT_012588e8 + 0xbcc);
      uVar10 = (uint)*(byte *)(iVar2 + 0x5bc + iVar1);
      iVar1 = *(int *)(iVar2 + 0x5fc);
      uVar7 = (uint)*(byte *)(iVar2 + 0x5bc + iVar3);
      iVar3 = *(int *)(iVar1 + 4 + uVar7 * 8);
      iVar2 = *(int *)(iVar1 + 4 + uVar10 * 8);
      piVar14 = local_8;
      piVar11 = piVar6;
      if ((iVar3 < iVar2) ||
         ((iVar3 <= iVar2 && (*(uint *)(iVar1 + uVar7 * 8) < *(uint *)(iVar1 + uVar10 * 8)))))
      goto joined_r0x0072541e;
      iVar2 = *local_8;
      *local_8 = *piVar6;
      *piVar6 = iVar2;
      local_8 = local_8 + 1;
    }
    piVar12 = piVar6 + 1;
    piVar14 = local_8;
    piVar6 = piVar6 + 1;
  } while( true );
}

