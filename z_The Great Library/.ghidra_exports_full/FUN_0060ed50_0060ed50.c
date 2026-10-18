// FUN_0060ed50 @ 0060ed50 body=[[0060ed50, 0060f170]]


undefined4 *
FUN_0060ed50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *local_c;
  
  local_c = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_00610d10(local_c,param_3 + -6,param_4);
  puVar11 = local_c + 6;
  for (; param_2 < local_c; local_c = local_c + -6) {
    iVar1 = local_c[-3];
    iVar2 = local_c[3];
    if ((iVar2 < iVar1) ||
       ((((iVar2 <= iVar1 && ((uint)local_c[2] < (uint)local_c[-4])) || (iVar1 < iVar2)) ||
        ((iVar1 <= iVar2 && ((uint)local_c[-4] < (uint)local_c[2])))))) break;
  }
  puVar12 = puVar11;
  puVar13 = local_c;
  puVar9 = local_c;
  if (puVar11 < param_3) {
    iVar1 = local_c[3];
    while( true ) {
      iVar2 = puVar11[3];
      puVar12 = puVar11;
      if (((iVar1 < iVar2) || ((iVar1 <= iVar2 && ((uint)local_c[2] < (uint)puVar11[2])))) ||
         (iVar2 < iVar1)) break;
      if (((iVar2 <= iVar1) && ((uint)puVar11[2] < (uint)local_c[2])) ||
         (puVar11 = puVar11 + 6, puVar12 = puVar11, param_3 <= puVar11)) break;
    }
  }
joined_r0x0060ee03:
  do {
    if (param_3 <= puVar11) {
LAB_0060ee9b:
      if (param_2 < puVar13) {
        puVar10 = puVar13 + -2;
        puVar8 = puVar9;
        do {
          puVar9 = puVar8;
          if (((int)puVar10[-1] <= (int)puVar8[3]) &&
             (((int)puVar10[-1] < (int)puVar8[3] || ((uint)puVar10[-2] <= (uint)puVar8[2])))) {
            puVar13 = local_c;
            if (((int)puVar10[-1] < (int)puVar8[3]) ||
               (((int)puVar10[-1] <= (int)puVar8[3] && ((uint)puVar10[-2] < (uint)puVar8[2]))))
            break;
            uVar3 = puVar8[-4];
            uVar4 = puVar8[-6];
            puVar9 = puVar8 + -6;
            uVar5 = puVar8[-3];
            uVar6 = puVar8[-2];
            uVar7 = puVar8[-1];
            *puVar9 = puVar10[-4];
            puVar8[-4] = puVar10[-2];
            puVar8[-3] = puVar10[-1];
            puVar8[-2] = *puVar10;
            puVar8[-1] = puVar10[1];
            puVar10[-4] = uVar4;
            puVar10[-2] = uVar3;
            puVar10[-1] = uVar5;
            *puVar10 = uVar6;
            puVar10[1] = uVar7;
          }
          puVar13 = local_c + -6;
          puVar10 = puVar10 + -6;
          puVar8 = puVar9;
          local_c = puVar13;
        } while (param_2 < puVar13);
      }
      if (puVar13 == param_2) {
        if (puVar11 == param_3) {
          param_1[1] = puVar12;
          *param_1 = puVar9;
          return param_1;
        }
        if (puVar12 != puVar11) {
          uVar3 = puVar9[2];
          uVar4 = *puVar9;
          uVar5 = puVar9[3];
          uVar6 = puVar9[4];
          uVar7 = puVar9[5];
          *puVar9 = *puVar12;
          puVar9[2] = puVar12[2];
          puVar9[3] = puVar12[3];
          puVar9[4] = puVar12[4];
          puVar9[5] = puVar12[5];
          *puVar12 = uVar4;
          puVar12[2] = uVar3;
          puVar12[3] = uVar5;
          puVar12[4] = uVar6;
          puVar12[5] = uVar7;
        }
        uVar3 = *puVar9;
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        uVar6 = puVar9[4];
        uVar7 = puVar9[5];
        *puVar9 = *puVar11;
        puVar9[2] = puVar11[2];
        puVar9[3] = puVar11[3];
        puVar9[4] = puVar11[4];
        puVar9[5] = puVar11[5];
        *puVar11 = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
        puVar11 = puVar11 + 6;
        puVar12 = puVar12 + 6;
        puVar9 = puVar9 + 6;
      }
      else {
        local_c = puVar13 + -6;
        if (puVar11 == param_3) {
          puVar10 = puVar9 + -6;
          if (local_c != puVar10) {
            uVar3 = puVar13[-4];
            uVar4 = *local_c;
            uVar5 = puVar13[-3];
            uVar6 = puVar13[-2];
            uVar7 = puVar13[-1];
            *local_c = *puVar10;
            puVar13[-4] = puVar9[-4];
            puVar13[-3] = puVar9[-3];
            puVar13[-2] = puVar9[-2];
            puVar13[-1] = puVar9[-1];
            *puVar10 = uVar4;
            puVar9[-4] = uVar3;
            puVar9[-3] = uVar5;
            puVar9[-2] = uVar6;
            puVar9[-1] = uVar7;
          }
          uVar3 = puVar9[-4];
          uVar4 = *puVar10;
          uVar5 = puVar9[-3];
          uVar6 = puVar9[-2];
          puVar13 = puVar12 + -6;
          uVar7 = puVar9[-1];
          *puVar10 = *puVar13;
          puVar9[-4] = puVar12[-4];
          puVar9[-3] = puVar12[-3];
          puVar9[-2] = puVar12[-2];
          puVar9[-1] = puVar12[-1];
          *puVar13 = uVar4;
          puVar12[-4] = uVar3;
          puVar12[-3] = uVar5;
          puVar12[-2] = uVar6;
          puVar12[-1] = uVar7;
          puVar12 = puVar13;
          puVar13 = local_c;
          puVar9 = puVar10;
        }
        else {
          uVar3 = puVar11[2];
          uVar4 = *puVar11;
          uVar5 = puVar11[3];
          uVar6 = puVar11[4];
          uVar7 = puVar11[5];
          *puVar11 = *local_c;
          puVar11[2] = puVar13[-4];
          puVar11[3] = puVar13[-3];
          puVar11[4] = puVar13[-2];
          puVar11[5] = puVar13[-1];
          *local_c = uVar4;
          puVar13[-4] = uVar3;
          puVar13[-3] = uVar5;
          puVar13[-2] = uVar6;
          puVar13[-1] = uVar7;
          puVar11 = puVar11 + 6;
          puVar13 = local_c;
        }
      }
      goto joined_r0x0060ee03;
    }
    if (((int)puVar9[3] <= (int)puVar11[3]) &&
       (((int)puVar9[3] < (int)puVar11[3] || ((uint)puVar9[2] <= (uint)puVar11[2])))) {
      if (((int)puVar9[3] < (int)puVar11[3]) ||
         (((int)puVar9[3] <= (int)puVar11[3] && ((uint)puVar9[2] < (uint)puVar11[2]))))
      goto LAB_0060ee9b;
      uVar3 = *puVar12;
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar6 = puVar12[4];
      uVar7 = puVar12[5];
      *puVar12 = *puVar11;
      puVar12[2] = puVar11[2];
      puVar12[3] = puVar11[3];
      puVar12[4] = puVar11[4];
      puVar12[5] = puVar11[5];
      *puVar11 = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar12 = puVar12 + 6;
      puVar11[5] = uVar7;
    }
    puVar11 = puVar11 + 6;
  } while( true );
}

