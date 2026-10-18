// FUN_0060f180 @ 0060f180 body=[[0060f180, 0060f434]]


undefined4 *
FUN_0060f180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  puVar7 = param_2 + (((int)param_3 - (int)param_2 >> 4) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 4;
  FUN_006110c0(puVar7,param_3 + -4,param_4);
  puVar9 = puVar7 + 4;
  for (; param_2 < puVar7; puVar7 = puVar7 + -4) {
    iVar1 = puVar7[-1];
    iVar2 = puVar7[3];
    if ((iVar2 < iVar1) ||
       ((((iVar2 <= iVar1 && ((uint)puVar7[2] < (uint)puVar7[-2])) || (iVar1 < iVar2)) ||
        ((iVar1 <= iVar2 && ((uint)puVar7[-2] < (uint)puVar7[2])))))) break;
  }
  puVar10 = puVar9;
  puVar6 = puVar7;
  if (puVar9 < param_3) {
    iVar1 = puVar7[3];
    while( true ) {
      iVar2 = puVar9[3];
      puVar10 = puVar9;
      if (((iVar1 < iVar2) || ((iVar1 <= iVar2 && ((uint)puVar7[2] < (uint)puVar9[2])))) ||
         (iVar2 < iVar1)) break;
      if (((iVar2 <= iVar1) && ((uint)puVar9[2] < (uint)puVar7[2])) ||
         (puVar9 = puVar9 + 4, puVar10 = puVar9, param_3 <= puVar9)) break;
    }
  }
joined_r0x0060f223:
  do {
    puVar11 = puVar7;
    if (param_3 <= puVar9) {
joined_r0x0060f28b:
      for (; param_2 < puVar11; puVar11 = puVar11 + -4) {
        puVar7 = puVar6;
        if (((int)puVar11[-1] <= (int)puVar6[3]) &&
           (((int)puVar11[-1] < (int)puVar6[3] || ((uint)puVar11[-2] <= (uint)puVar6[2])))) {
          if (((int)puVar11[-1] < (int)puVar6[3]) ||
             (((int)puVar11[-1] <= (int)puVar6[3] && ((uint)puVar11[-2] < (uint)puVar6[2])))) break;
          uVar3 = puVar6[-2];
          uVar4 = puVar6[-4];
          puVar7 = puVar6 + -4;
          uVar5 = puVar6[-1];
          *puVar7 = puVar11[-4];
          puVar6[-2] = puVar11[-2];
          puVar6[-1] = puVar11[-1];
          puVar11[-4] = uVar4;
          puVar11[-2] = uVar3;
          puVar11[-1] = uVar5;
        }
        puVar6 = puVar7;
      }
      if (puVar11 == param_2) {
        if (puVar9 == param_3) {
          param_1[1] = puVar10;
          *param_1 = puVar6;
          return param_1;
        }
        if (puVar10 != puVar9) {
          uVar3 = puVar6[2];
          uVar4 = *puVar6;
          uVar5 = puVar6[3];
          *puVar6 = *puVar10;
          puVar6[2] = puVar10[2];
          puVar6[3] = puVar10[3];
          *puVar10 = uVar4;
          puVar10[2] = uVar3;
          puVar10[3] = uVar5;
        }
        uVar3 = *puVar6;
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        *puVar6 = *puVar9;
        puVar6[2] = puVar9[2];
        puVar6[3] = puVar9[3];
        *puVar9 = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
        puVar7 = puVar11;
        puVar6 = puVar6 + 4;
      }
      else {
        puVar7 = puVar11 + -4;
        if (puVar9 == param_3) {
          puVar8 = puVar6 + -4;
          if (puVar7 != puVar8) {
            uVar3 = puVar11[-2];
            uVar4 = *puVar7;
            uVar5 = puVar11[-1];
            *puVar7 = *puVar8;
            puVar11[-2] = puVar6[-2];
            puVar11[-1] = puVar6[-1];
            *puVar8 = uVar4;
            puVar6[-2] = uVar3;
            puVar6[-1] = uVar5;
          }
          uVar3 = puVar6[-2];
          uVar4 = *puVar8;
          uVar5 = puVar6[-1];
          puVar11 = puVar10 + -4;
          *puVar8 = *puVar11;
          puVar6[-2] = puVar10[-2];
          puVar6[-1] = puVar10[-1];
          *puVar11 = uVar4;
          puVar10[-2] = uVar3;
          puVar10[-1] = uVar5;
          puVar10 = puVar11;
          puVar6 = puVar8;
        }
        else {
          uVar3 = puVar9[2];
          uVar4 = *puVar9;
          uVar5 = puVar9[3];
          *puVar9 = *puVar7;
          puVar9[2] = puVar11[-2];
          puVar9[3] = puVar11[-1];
          *puVar7 = uVar4;
          puVar11[-2] = uVar3;
          puVar11[-1] = uVar5;
          puVar9 = puVar9 + 4;
        }
      }
      goto joined_r0x0060f223;
    }
    if (((int)puVar6[3] <= (int)puVar9[3]) &&
       (((int)puVar6[3] < (int)puVar9[3] || ((uint)puVar6[2] <= (uint)puVar9[2])))) {
      if (((int)puVar6[3] < (int)puVar9[3]) ||
         (((int)puVar6[3] <= (int)puVar9[3] && ((uint)puVar6[2] < (uint)puVar9[2]))))
      goto joined_r0x0060f28b;
      uVar3 = *puVar10;
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *puVar10 = *puVar9;
      puVar10[2] = puVar9[2];
      puVar10[3] = puVar9[3];
      *puVar9 = uVar3;
      puVar9[2] = uVar4;
      puVar10 = puVar10 + 4;
      puVar9[3] = uVar5;
    }
    puVar9 = puVar9 + 4;
  } while( true );
}

