// FUN_0060f660 @ 0060f660 body=[[0060f660, 0060f7dc] [0060f7e0, 0060fbd7]]


undefined4 *
FUN_0060f660(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *local_c;
  
  local_c = param_2 + (((int)param_3 - (int)param_2 >> 5) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 8;
  FUN_00611580(local_c,param_3 + -8,param_4);
  puVar13 = local_c + 8;
  for (; param_2 < local_c; local_c = local_c + -8) {
    iVar1 = local_c[-5];
    iVar2 = local_c[3];
    if ((iVar2 < iVar1) ||
       ((((iVar2 <= iVar1 && ((uint)local_c[2] < (uint)local_c[-6])) || (iVar1 < iVar2)) ||
        ((iVar1 <= iVar2 && ((uint)local_c[-6] < (uint)local_c[2])))))) break;
  }
  puVar14 = puVar13;
  puVar15 = local_c;
  puVar11 = local_c;
  if (puVar13 < param_3) {
    iVar1 = local_c[3];
    while( true ) {
      iVar2 = puVar13[3];
      puVar14 = puVar13;
      if (((iVar1 < iVar2) || ((iVar1 <= iVar2 && ((uint)local_c[2] < (uint)puVar13[2])))) ||
         (iVar2 < iVar1)) break;
      if (((iVar2 <= iVar1) && ((uint)puVar13[2] < (uint)local_c[2])) ||
         (puVar13 = puVar13 + 8, puVar14 = puVar13, param_3 <= puVar13)) break;
    }
  }
joined_r0x0060f703:
  do {
    if (param_3 <= puVar13) {
LAB_0060f7cf:
      if (param_2 < puVar15) {
        puVar12 = puVar15 + -4;
        puVar10 = puVar11;
        do {
          puVar11 = puVar10;
          if (((int)puVar12[-1] <= (int)puVar10[3]) &&
             (((int)puVar12[-1] < (int)puVar10[3] || ((uint)puVar12[-2] <= (uint)puVar10[2])))) {
            puVar15 = local_c;
            if (((int)puVar12[-1] < (int)puVar10[3]) ||
               (((int)puVar12[-1] <= (int)puVar10[3] && ((uint)puVar12[-2] < (uint)puVar10[2]))))
            break;
            uVar3 = puVar10[-6];
            uVar4 = puVar10[-8];
            puVar11 = puVar10 + -8;
            uVar5 = puVar10[-5];
            uVar6 = puVar10[-4];
            uVar7 = puVar10[-3];
            uVar8 = puVar10[-2];
            uVar9 = puVar10[-1];
            *puVar11 = puVar12[-4];
            puVar10[-6] = puVar12[-2];
            puVar10[-5] = puVar12[-1];
            puVar10[-4] = *puVar12;
            puVar10[-3] = puVar12[1];
            puVar10[-2] = puVar12[2];
            puVar10[-1] = puVar12[3];
            puVar12[-4] = uVar4;
            puVar12[-2] = uVar3;
            puVar12[-1] = uVar5;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar12[2] = uVar8;
            puVar12[3] = uVar9;
          }
          puVar15 = local_c + -8;
          puVar12 = puVar12 + -8;
          puVar10 = puVar11;
          local_c = puVar15;
        } while (param_2 < puVar15);
      }
      if (puVar15 == param_2) {
        if (puVar13 == param_3) {
          param_1[1] = puVar14;
          *param_1 = puVar11;
          return param_1;
        }
        if (puVar14 != puVar13) {
          uVar3 = puVar11[2];
          uVar4 = *puVar11;
          uVar5 = puVar11[3];
          uVar6 = puVar11[4];
          uVar7 = puVar11[5];
          uVar8 = puVar11[6];
          uVar9 = puVar11[7];
          *puVar11 = *puVar14;
          puVar11[2] = puVar14[2];
          puVar11[3] = puVar14[3];
          puVar11[4] = puVar14[4];
          puVar11[5] = puVar14[5];
          puVar11[6] = puVar14[6];
          puVar11[7] = puVar14[7];
          *puVar14 = uVar4;
          puVar14[2] = uVar3;
          puVar14[3] = uVar5;
          puVar14[4] = uVar6;
          puVar14[5] = uVar7;
          puVar14[6] = uVar8;
          puVar14[7] = uVar9;
        }
        uVar3 = *puVar11;
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        uVar6 = puVar11[4];
        uVar7 = puVar11[5];
        uVar8 = puVar11[6];
        uVar9 = puVar11[7];
        *puVar11 = *puVar13;
        puVar11[2] = puVar13[2];
        puVar11[3] = puVar13[3];
        puVar11[4] = puVar13[4];
        puVar11[5] = puVar13[5];
        puVar11[6] = puVar13[6];
        puVar11[7] = puVar13[7];
        *puVar13 = uVar3;
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        puVar13[4] = uVar6;
        puVar13[5] = uVar7;
        puVar13[6] = uVar8;
        puVar13[7] = uVar9;
        puVar13 = puVar13 + 8;
        puVar14 = puVar14 + 8;
        puVar11 = puVar11 + 8;
      }
      else {
        local_c = puVar15 + -8;
        if (puVar13 == param_3) {
          puVar12 = puVar11 + -8;
          if (local_c != puVar12) {
            uVar3 = puVar15[-6];
            uVar4 = *local_c;
            uVar5 = puVar15[-5];
            uVar6 = puVar15[-4];
            uVar7 = puVar15[-3];
            uVar8 = puVar15[-2];
            uVar9 = puVar15[-1];
            *local_c = *puVar12;
            puVar15[-6] = puVar11[-6];
            puVar15[-5] = puVar11[-5];
            puVar15[-4] = puVar11[-4];
            puVar15[-3] = puVar11[-3];
            puVar15[-2] = puVar11[-2];
            puVar15[-1] = puVar11[-1];
            *puVar12 = uVar4;
            puVar11[-6] = uVar3;
            puVar11[-5] = uVar5;
            puVar11[-4] = uVar6;
            puVar11[-3] = uVar7;
            puVar11[-2] = uVar8;
            puVar11[-1] = uVar9;
          }
          uVar3 = puVar11[-6];
          uVar4 = *puVar12;
          uVar5 = puVar11[-5];
          uVar6 = puVar11[-4];
          uVar7 = puVar11[-3];
          uVar8 = puVar11[-2];
          puVar15 = puVar14 + -8;
          uVar9 = puVar11[-1];
          *puVar12 = *puVar15;
          puVar11[-6] = puVar14[-6];
          puVar11[-5] = puVar14[-5];
          puVar11[-4] = puVar14[-4];
          puVar11[-3] = puVar14[-3];
          puVar11[-2] = puVar14[-2];
          puVar11[-1] = puVar14[-1];
          *puVar15 = uVar4;
          puVar14[-6] = uVar3;
          puVar14[-5] = uVar5;
          puVar14[-4] = uVar6;
          puVar14[-3] = uVar7;
          puVar14[-2] = uVar8;
          puVar14[-1] = uVar9;
          puVar14 = puVar15;
          puVar15 = local_c;
          puVar11 = puVar12;
        }
        else {
          uVar3 = puVar13[2];
          uVar4 = *puVar13;
          uVar5 = puVar13[3];
          uVar6 = puVar13[4];
          uVar7 = puVar13[5];
          uVar8 = puVar13[6];
          uVar9 = puVar13[7];
          *puVar13 = *local_c;
          puVar13[2] = puVar15[-6];
          puVar13[3] = puVar15[-5];
          puVar13[4] = puVar15[-4];
          puVar13[5] = puVar15[-3];
          puVar13[6] = puVar15[-2];
          puVar13[7] = puVar15[-1];
          *local_c = uVar4;
          puVar15[-6] = uVar3;
          puVar15[-5] = uVar5;
          puVar15[-4] = uVar6;
          puVar15[-3] = uVar7;
          puVar15[-2] = uVar8;
          puVar15[-1] = uVar9;
          puVar13 = puVar13 + 8;
          puVar15 = local_c;
        }
      }
      goto joined_r0x0060f703;
    }
    if (((int)puVar11[3] <= (int)puVar13[3]) &&
       (((int)puVar11[3] < (int)puVar13[3] || ((uint)puVar11[2] <= (uint)puVar13[2])))) {
      if (((int)puVar11[3] < (int)puVar13[3]) ||
         (((int)puVar11[3] <= (int)puVar13[3] && ((uint)puVar11[2] < (uint)puVar13[2]))))
      goto LAB_0060f7cf;
      uVar3 = *puVar14;
      uVar4 = puVar14[2];
      uVar5 = puVar14[3];
      uVar6 = puVar14[4];
      uVar7 = puVar14[5];
      uVar8 = puVar14[6];
      uVar9 = puVar14[7];
      *puVar14 = *puVar13;
      puVar14[2] = puVar13[2];
      puVar14[3] = puVar13[3];
      puVar14[4] = puVar13[4];
      puVar14[5] = puVar13[5];
      puVar14[6] = puVar13[6];
      puVar14[7] = puVar13[7];
      *puVar13 = uVar3;
      puVar13[2] = uVar4;
      puVar13[3] = uVar5;
      puVar13[4] = uVar6;
      puVar13[5] = uVar7;
      puVar13[6] = uVar8;
      puVar14 = puVar14 + 8;
      puVar13[7] = uVar9;
    }
    puVar13 = puVar13 + 8;
  } while( true );
}

