// FUN_007197c0 @ 007197c0 body=[[007197c0, 00719a72]]


uint * FUN_007197c0(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar11 = param_2 + (((int)param_3 - (int)param_2 >> 4) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 4;
  FUN_00719a80(puVar11,param_3 + -4,param_4);
  puVar10 = puVar11 + 4;
  for (; param_2 < puVar11; puVar11 = puVar11 + -4) {
    iVar1 = puVar11[-1];
    iVar2 = puVar11[3];
    if ((iVar2 < iVar1) ||
       ((((iVar2 <= iVar1 && ((uint)puVar11[2] < (uint)puVar11[-2])) || (iVar1 < iVar2)) ||
        ((iVar1 <= iVar2 && ((uint)puVar11[-2] < (uint)puVar11[2])))))) break;
  }
  puVar12 = puVar10;
  puVar9 = puVar11;
  if (puVar10 < param_3) {
    iVar1 = puVar11[3];
    while( true ) {
      iVar2 = puVar10[3];
      puVar12 = puVar10;
      if (((iVar1 < iVar2) || ((iVar1 <= iVar2 && ((uint)puVar11[2] < (uint)puVar10[2])))) ||
         (iVar2 < iVar1)) break;
      if (((iVar2 <= iVar1) && ((uint)puVar10[2] < (uint)puVar11[2])) ||
         (puVar10 = puVar10 + 4, puVar12 = puVar10, param_3 <= puVar10)) break;
    }
  }
joined_r0x00719863:
  do {
    puVar6 = puVar12;
    puVar5 = puVar10;
    puVar7 = puVar11;
    puVar8 = puVar9;
    puVar12 = puVar6;
    if (param_3 <= puVar5) {
joined_r0x007198cf:
      for (; param_2 < puVar7; puVar7 = puVar7 + -4) {
        puVar10 = puVar8;
        if (((int)puVar7[-1] <= (int)puVar8[3]) &&
           (((int)puVar7[-1] < (int)puVar8[3] || ((uint)puVar7[-2] <= (uint)puVar8[2])))) {
          if (((int)puVar7[-1] < (int)puVar8[3]) ||
             (((int)puVar7[-1] <= (int)puVar8[3] && ((uint)puVar7[-2] < (uint)puVar8[2])))) break;
          puVar10 = puVar8 + -4;
          puVar11 = puVar7 + -4;
          if (puVar10 != puVar11) {
            uVar3 = *puVar10;
            *puVar10 = *puVar11;
            *puVar11 = uVar3;
            uVar3 = puVar8[-1];
            uVar4 = puVar8[-2];
            puVar8[-2] = puVar7[-2];
            puVar8[-1] = puVar7[-1];
            puVar7[-2] = uVar4;
            puVar7[-1] = uVar3;
          }
        }
        puVar8 = puVar10;
      }
      if (puVar7 == param_2) {
        if (puVar5 == param_3) {
          param_1[1] = (uint)puVar6;
          *param_1 = (uint)puVar8;
          return param_1;
        }
        if ((puVar6 != puVar5) && (puVar8 != puVar6)) {
          uVar3 = *puVar8;
          *puVar8 = *puVar6;
          *puVar6 = uVar3;
          uVar3 = puVar8[3];
          uVar4 = puVar8[2];
          puVar8[2] = puVar6[2];
          puVar8[3] = puVar6[3];
          puVar6[2] = uVar4;
          puVar6[3] = uVar3;
        }
        puVar10 = puVar5 + 4;
        puVar12 = puVar6 + 4;
        puVar11 = puVar7;
        puVar9 = puVar8 + 4;
        if (puVar8 != puVar5) {
          uVar3 = *puVar8;
          *puVar8 = *puVar5;
          *puVar5 = uVar3;
          uVar3 = puVar8[2];
          uVar4 = puVar8[3];
          puVar8[2] = puVar5[2];
          puVar8[3] = puVar5[3];
          puVar5[2] = uVar3;
          puVar5[3] = uVar4;
        }
      }
      else {
        puVar11 = puVar7 + -4;
        if (puVar5 == param_3) {
          puVar9 = puVar8 + -4;
          if (puVar11 != puVar9) {
            uVar3 = *puVar11;
            *puVar11 = *puVar9;
            *puVar9 = uVar3;
            uVar3 = puVar7[-1];
            uVar4 = puVar7[-2];
            puVar7[-2] = puVar8[-2];
            puVar7[-1] = puVar8[-1];
            puVar8[-2] = uVar4;
            puVar8[-1] = uVar3;
          }
          puVar12 = puVar6 + -4;
          puVar10 = puVar5;
          if (puVar9 != puVar12) {
            uVar3 = *puVar9;
            *puVar9 = *puVar12;
            *puVar12 = uVar3;
            uVar3 = puVar8[-1];
            uVar4 = puVar8[-2];
            puVar8[-2] = puVar6[-2];
            puVar8[-1] = puVar6[-1];
            puVar6[-2] = uVar4;
            puVar6[-1] = uVar3;
          }
        }
        else {
          if (puVar5 != puVar11) {
            uVar3 = *puVar5;
            *puVar5 = *puVar11;
            *puVar11 = uVar3;
            uVar3 = puVar5[3];
            uVar4 = puVar5[2];
            puVar5[2] = puVar7[-2];
            puVar5[3] = puVar7[-1];
            puVar7[-2] = uVar4;
            puVar7[-1] = uVar3;
          }
          puVar10 = puVar5 + 4;
          puVar9 = puVar8;
        }
      }
      goto joined_r0x00719863;
    }
    if (((int)puVar9[3] <= (int)puVar5[3]) &&
       (((int)puVar9[3] < (int)puVar5[3] || ((uint)puVar9[2] <= (uint)puVar5[2])))) {
      if (((int)puVar9[3] < (int)puVar5[3]) ||
         (((int)puVar9[3] <= (int)puVar5[3] && ((uint)puVar9[2] < (uint)puVar5[2]))))
      goto joined_r0x007198cf;
      puVar12 = puVar6 + 4;
      if (puVar6 != puVar5) {
        uVar3 = *puVar6;
        *puVar6 = *puVar5;
        *puVar5 = uVar3;
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar6[2] = puVar5[2];
        puVar6[3] = puVar5[3];
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
      }
    }
    puVar10 = puVar5 + 4;
  } while( true );
}

