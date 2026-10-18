// FUN_00556380 @ 00556380 body=[[00556380, 00556713]]


void FUN_00556380(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *local_c;
  int *local_8;
  
  piVar9 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00558160(piVar9,param_4);
  piVar10 = piVar9 + 1;
  if (param_2 < piVar9) {
    iVar2 = *(int *)(DAT_012587e4 + 4);
    while( true ) {
      iVar3 = *(int *)(*(int *)(iVar2 + *(int *)(*piVar9 + 0xc) * 4) + 0xe88);
      iVar4 = *(int *)(*(int *)(iVar2 + *(int *)(piVar9[-1] + 0xc) * 4) + 0xe88);
      iVar5 = *(int *)(iVar3 + 0x14);
      iVar1 = *(int *)(iVar4 + 0x14);
      if ((iVar5 < iVar1) ||
         ((iVar5 <= iVar1 && (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar4 + 0x10))))) break;
      iVar3 = *(int *)(*(int *)(iVar2 + *(int *)(piVar9[-1] + 0xc) * 4) + 0xe88);
      iVar4 = *(int *)(*(int *)(iVar2 + *(int *)(*piVar9 + 0xc) * 4) + 0xe88);
      iVar5 = *(int *)(iVar3 + 0x14);
      iVar1 = *(int *)(iVar4 + 0x14);
      if ((iVar5 < iVar1) ||
         (((iVar5 <= iVar1 && (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar4 + 0x10))) ||
          (piVar9 = piVar9 + -1, piVar9 <= param_2)))) break;
    }
  }
  piVar12 = piVar10;
  piVar7 = piVar10;
  local_8 = piVar10;
  local_c = piVar9;
  piVar13 = piVar9;
  if (piVar10 < param_3) {
    iVar2 = *(int *)(DAT_012587e4 + 4);
    while( true ) {
      iVar3 = *(int *)(*(int *)(iVar2 + *(int *)(*piVar9 + 0xc) * 4) + 0xe88);
      iVar4 = *(int *)(*(int *)(iVar2 + *(int *)(*piVar10 + 0xc) * 4) + 0xe88);
      iVar5 = *(int *)(iVar3 + 0x14);
      iVar1 = *(int *)(iVar4 + 0x14);
      piVar12 = piVar10;
      piVar7 = piVar10;
      local_8 = piVar10;
      if ((iVar5 < iVar1) ||
         ((iVar5 <= iVar1 && (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar4 + 0x10))))) break;
      iVar3 = *(int *)(*(int *)(iVar2 + *(int *)(*piVar10 + 0xc) * 4) + 0xe88);
      iVar4 = *(int *)(*(int *)(iVar2 + *(int *)(*piVar9 + 0xc) * 4) + 0xe88);
      iVar5 = *(int *)(iVar3 + 0x14);
      iVar1 = *(int *)(iVar4 + 0x14);
      if ((iVar5 < iVar1) ||
         (((iVar5 <= iVar1 && (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar4 + 0x10))) ||
          (piVar10 = piVar10 + 1, piVar12 = piVar10, piVar7 = piVar10, local_8 = piVar10,
          param_3 <= piVar10)))) break;
    }
  }
joined_r0x00556513:
  do {
    if (param_3 <= piVar10) {
joined_r0x005565d1:
      while (piVar8 = piVar10, piVar11 = piVar12, param_2 < piVar9) {
        iVar1 = *(int *)(DAT_012587e4 + 4);
        iVar3 = *(int *)(*(int *)(iVar1 + *(int *)(*piVar13 + 0xc) * 4) + 0xe88);
        iVar4 = *(int *)(*(int *)(iVar1 + *(int *)(piVar9[-1] + 0xc) * 4) + 0xe88);
        iVar5 = *(int *)(iVar3 + 0x14);
        iVar2 = *(int *)(iVar4 + 0x14);
        if ((iVar2 <= iVar5) &&
           ((iVar2 < iVar5 || (*(uint *)(iVar4 + 0x10) <= *(uint *)(iVar3 + 0x10))))) {
          iVar3 = *(int *)(*(int *)(iVar1 + *(int *)(piVar9[-1] + 0xc) * 4) + 0xe88);
          iVar1 = *(int *)(*(int *)(iVar1 + *(int *)(*piVar13 + 0xc) * 4) + 0xe88);
          iVar4 = *(int *)(iVar3 + 0x14);
          iVar2 = *(int *)(iVar1 + 0x14);
          piVar8 = piVar7;
          piVar9 = local_c;
          piVar11 = local_8;
          if ((iVar4 < iVar2) ||
             ((iVar4 <= iVar2 && (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar1 + 0x10))))) break;
          iVar2 = piVar13[-1];
          piVar13 = piVar13 + -1;
          *piVar13 = local_c[-1];
          local_c[-1] = iVar2;
        }
        local_c = local_c + -1;
        piVar10 = piVar7;
        piVar12 = local_8;
        piVar9 = local_c;
      }
      if (piVar9 == param_2) {
        if (piVar8 == param_3) {
          *param_1 = (uint)piVar13;
          param_1[1] = (uint)piVar11;
          return;
        }
        if (piVar11 != piVar8) {
          iVar2 = *piVar13;
          *piVar13 = *piVar11;
          *piVar11 = iVar2;
        }
        iVar2 = *piVar13;
        *piVar13 = *piVar8;
        piVar10 = piVar8 + 1;
        *piVar8 = iVar2;
        piVar12 = piVar11 + 1;
        piVar7 = piVar10;
        local_8 = piVar11 + 1;
        piVar13 = piVar13 + 1;
      }
      else {
        piVar9 = piVar9 + -1;
        local_c = piVar9;
        if (piVar8 == param_3) {
          piVar13 = piVar13 + -1;
          if (piVar9 != piVar13) {
            iVar2 = *piVar9;
            *piVar9 = *piVar13;
            *piVar13 = iVar2;
          }
          iVar2 = *piVar13;
          piVar12 = piVar11 + -1;
          *piVar13 = piVar11[-1];
          *piVar12 = iVar2;
          piVar10 = piVar8;
          local_8 = piVar12;
        }
        else {
          iVar2 = *piVar8;
          *piVar8 = *piVar9;
          *piVar9 = iVar2;
          piVar10 = piVar8 + 1;
          piVar12 = piVar11;
          piVar7 = piVar10;
        }
      }
      goto joined_r0x00556513;
    }
    iVar1 = *piVar10;
    iVar3 = *(int *)(DAT_012587e4 + 4);
    iVar4 = *(int *)(*(int *)(iVar3 + *(int *)(iVar1 + 0xc) * 4) + 0xe88);
    iVar5 = *(int *)(*(int *)(iVar3 + *(int *)(*piVar13 + 0xc) * 4) + 0xe88);
    iVar6 = *(int *)(iVar4 + 0x14);
    iVar2 = *(int *)(iVar5 + 0x14);
    piVar9 = local_c;
    if ((iVar2 <= iVar6) &&
       ((iVar2 < iVar6 || (*(uint *)(iVar5 + 0x10) <= *(uint *)(iVar4 + 0x10))))) {
      iVar4 = *(int *)(*(int *)(iVar3 + *(int *)(*piVar13 + 0xc) * 4) + 0xe88);
      iVar3 = *(int *)(*(int *)(iVar3 + *(int *)(iVar1 + 0xc) * 4) + 0xe88);
      iVar5 = *(int *)(iVar4 + 0x14);
      iVar2 = *(int *)(iVar3 + 0x14);
      piVar10 = piVar7;
      piVar12 = local_8;
      if ((iVar5 < iVar2) ||
         ((iVar5 <= iVar2 && (*(uint *)(iVar4 + 0x10) < *(uint *)(iVar3 + 0x10)))))
      goto joined_r0x005565d1;
      iVar2 = *local_8;
      *local_8 = iVar1;
      local_8 = local_8 + 1;
      *piVar7 = iVar2;
    }
    piVar10 = piVar7 + 1;
    piVar12 = local_8;
    piVar7 = piVar7 + 1;
  } while( true );
}

