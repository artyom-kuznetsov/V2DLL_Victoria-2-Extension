// FUN_00556d90 @ 00556d90 body=[[00556d90, 005570c7]]


undefined4 *
FUN_00556d90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar8 = param_2 + (((int)param_3 - (int)param_2 >> 4) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 4;
  FUN_00558a80(puVar8,param_3 + -4,param_4);
  puVar10 = puVar8 + 4;
  for (; param_2 < puVar8; puVar8 = puVar8 + -4) {
    iVar1 = puVar8[-1];
    iVar2 = puVar8[3];
    if ((iVar2 < iVar1) ||
       ((((iVar2 <= iVar1 && ((uint)puVar8[2] < (uint)puVar8[-2])) || (iVar1 < iVar2)) ||
        ((iVar1 <= iVar2 && ((uint)puVar8[-2] < (uint)puVar8[2])))))) break;
  }
  puVar11 = puVar10;
  puVar7 = puVar8;
  if (puVar10 < param_3) {
    iVar1 = puVar8[3];
    while( true ) {
      iVar2 = puVar10[3];
      puVar11 = puVar10;
      if (((iVar1 < iVar2) || ((iVar1 <= iVar2 && ((uint)puVar8[2] < (uint)puVar10[2])))) ||
         (iVar2 < iVar1)) break;
      if (((iVar2 <= iVar1) && ((uint)puVar10[2] < (uint)puVar8[2])) ||
         (puVar10 = puVar10 + 4, puVar11 = puVar10, param_3 <= puVar10)) break;
    }
  }
joined_r0x00556e33:
  do {
    puVar12 = puVar8;
    if (param_3 <= puVar10) {
joined_r0x00556ead:
      for (; param_2 < puVar12; puVar12 = puVar12 + -4) {
        puVar8 = puVar7;
        if (((int)puVar12[-1] <= (int)puVar7[3]) &&
           (((int)puVar12[-1] < (int)puVar7[3] || ((uint)puVar12[-2] <= (uint)puVar7[2])))) {
          if (((int)puVar12[-1] < (int)puVar7[3]) ||
             (((int)puVar12[-1] <= (int)puVar7[3] && ((uint)puVar12[-2] < (uint)puVar7[2])))) break;
          uVar3 = puVar7[-3];
          uVar4 = puVar7[-4];
          puVar8 = puVar7 + -4;
          uVar5 = puVar7[-2];
          uVar6 = puVar7[-1];
          *puVar8 = puVar12[-4];
          puVar7[-3] = puVar12[-3];
          puVar7[-2] = puVar12[-2];
          puVar7[-1] = puVar12[-1];
          puVar12[-4] = uVar4;
          puVar12[-3] = uVar3;
          puVar12[-2] = uVar5;
          puVar12[-1] = uVar6;
        }
        puVar7 = puVar8;
      }
      if (puVar12 == param_2) {
        if (puVar10 == param_3) {
          param_1[1] = puVar11;
          *param_1 = puVar7;
          return param_1;
        }
        if (puVar11 != puVar10) {
          uVar3 = puVar7[1];
          uVar4 = *puVar7;
          uVar5 = puVar7[2];
          uVar6 = puVar7[3];
          *puVar7 = *puVar11;
          puVar7[1] = puVar11[1];
          puVar7[2] = puVar11[2];
          puVar7[3] = puVar11[3];
          *puVar11 = uVar4;
          puVar11[1] = uVar3;
          puVar11[2] = uVar5;
          puVar11[3] = uVar6;
        }
        uVar3 = *puVar7;
        uVar4 = puVar7[1];
        uVar5 = puVar7[2];
        uVar6 = puVar7[3];
        *puVar7 = *puVar10;
        puVar7[1] = puVar10[1];
        puVar7[2] = puVar10[2];
        puVar7[3] = puVar10[3];
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        puVar10[3] = uVar6;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 4;
        puVar8 = puVar12;
        puVar7 = puVar7 + 4;
      }
      else {
        puVar8 = puVar12 + -4;
        if (puVar10 == param_3) {
          puVar9 = puVar7 + -4;
          if (puVar8 != puVar9) {
            uVar3 = puVar12[-3];
            uVar4 = *puVar8;
            uVar5 = puVar12[-2];
            uVar6 = puVar12[-1];
            *puVar8 = *puVar9;
            puVar12[-3] = puVar7[-3];
            puVar12[-2] = puVar7[-2];
            puVar12[-1] = puVar7[-1];
            *puVar9 = uVar4;
            puVar7[-3] = uVar3;
            puVar7[-2] = uVar5;
            puVar7[-1] = uVar6;
          }
          uVar3 = puVar7[-3];
          uVar4 = *puVar9;
          uVar5 = puVar7[-2];
          puVar12 = puVar11 + -4;
          uVar6 = puVar7[-1];
          *puVar9 = *puVar12;
          puVar7[-3] = puVar11[-3];
          puVar7[-2] = puVar11[-2];
          puVar7[-1] = puVar11[-1];
          *puVar12 = uVar4;
          puVar11[-3] = uVar3;
          puVar11[-2] = uVar5;
          puVar11[-1] = uVar6;
          puVar11 = puVar12;
          puVar7 = puVar9;
        }
        else {
          uVar3 = puVar10[1];
          uVar4 = *puVar10;
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          *puVar10 = *puVar8;
          puVar10[1] = puVar12[-3];
          puVar10[2] = puVar12[-2];
          puVar10[3] = puVar12[-1];
          *puVar8 = uVar4;
          puVar12[-3] = uVar3;
          puVar12[-2] = uVar5;
          puVar12[-1] = uVar6;
          puVar10 = puVar10 + 4;
        }
      }
      goto joined_r0x00556e33;
    }
    if (((int)puVar7[3] <= (int)puVar10[3]) &&
       (((int)puVar7[3] < (int)puVar10[3] || ((uint)puVar7[2] <= (uint)puVar10[2])))) {
      if (((int)puVar7[3] < (int)puVar10[3]) ||
         (((int)puVar7[3] <= (int)puVar10[3] && ((uint)puVar7[2] < (uint)puVar10[2]))))
      goto joined_r0x00556ead;
      uVar3 = *puVar11;
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      *puVar11 = *puVar10;
      puVar11[1] = puVar10[1];
      puVar11[2] = puVar10[2];
      puVar11[3] = puVar10[3];
      *puVar10 = uVar3;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar11 = puVar11 + 4;
      puVar10[3] = uVar6;
    }
    puVar10 = puVar10 + 4;
  } while( true );
}

