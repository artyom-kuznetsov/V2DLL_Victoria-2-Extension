// FUN_005570d0 @ 005570d0 body=[[005570d0, 005571bd] [005571c0, 0055748a]]


void FUN_005570d0(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar10 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 2;
  FUN_00558d90(puVar10,param_3 + -2,param_4);
  puVar9 = puVar10 + 2;
  if (param_2 < puVar10) {
    while( true ) {
      iVar4 = FUN_00445060(param_4);
      iVar5 = FUN_00445060(param_4);
      if (iVar4 < iVar5) break;
      iVar4 = FUN_00445060(param_4);
      iVar5 = FUN_00445060(param_4);
      if ((iVar4 < iVar5) || (puVar10 = puVar10 + -2, puVar10 <= param_2)) break;
    }
  }
  puVar3 = puVar9;
  local_8 = puVar9;
  local_c = puVar10;
  puVar11 = puVar10;
  if (puVar9 < param_3) {
    iVar4 = FUN_00445060(param_4);
    while (iVar5 = FUN_00445060(param_4), puVar3 = puVar9, local_8 = puVar9, iVar5 <= iVar4) {
      iVar5 = FUN_00445060(param_4);
      iVar6 = FUN_00445060(param_4);
      if ((iVar5 < iVar6) ||
         (puVar9 = puVar9 + 2, puVar3 = puVar9, local_8 = puVar9, param_3 <= puVar9)) break;
    }
  }
joined_r0x00557224:
  do {
    puVar12 = puVar10;
    if (param_3 <= puVar3) {
joined_r0x005572da:
      while (puVar8 = puVar10, param_2 < puVar10) {
        puVar7 = puVar12 + -2;
        iVar4 = FUN_00445060(param_4);
        iVar5 = FUN_00445060(param_4);
        puVar8 = puVar11;
        if (iVar5 <= iVar4) {
          iVar4 = FUN_00445060(param_4);
          iVar5 = FUN_00445060(param_4);
          puVar8 = local_c;
          puVar9 = local_8;
          if (iVar4 < iVar5) break;
          uVar1 = puVar11[-2];
          uVar2 = puVar11[-1];
          puVar8 = puVar11 + -2;
          *puVar8 = *puVar7;
          puVar11[-1] = puVar12[-1];
          *puVar7 = uVar1;
          puVar12[-1] = uVar2;
        }
        local_c = local_c + -2;
        puVar12 = puVar7;
        puVar9 = local_8;
        puVar11 = puVar8;
        puVar10 = local_c;
      }
      if (puVar8 == param_2) {
        if (puVar3 == param_3) {
          *param_1 = (uint)puVar11;
          param_1[1] = (uint)puVar9;
          return;
        }
        if (puVar9 != puVar3) {
          uVar1 = puVar11[1];
          uVar2 = *puVar11;
          *puVar11 = *puVar9;
          puVar11[1] = puVar9[1];
          *puVar9 = uVar2;
          puVar9[1] = uVar1;
        }
        uVar1 = *puVar11;
        uVar2 = puVar11[1];
        *puVar11 = *puVar3;
        puVar11[1] = puVar3[1];
        puVar9 = puVar9 + 2;
        *puVar3 = uVar1;
        puVar3[1] = uVar2;
        puVar10 = puVar8;
        puVar3 = puVar3 + 2;
        local_8 = puVar9;
        puVar11 = puVar11 + 2;
      }
      else {
        puVar10 = puVar8 + -2;
        local_c = puVar10;
        if (puVar3 == param_3) {
          puVar12 = puVar11 + -2;
          if (puVar10 != puVar12) {
            uVar1 = puVar8[-1];
            uVar2 = *puVar10;
            *puVar10 = *puVar12;
            puVar8[-1] = puVar11[-1];
            *puVar12 = uVar2;
            puVar11[-1] = uVar1;
          }
          uVar1 = puVar11[-1];
          uVar2 = *puVar12;
          local_8 = puVar9 + -2;
          *puVar12 = *local_8;
          puVar11[-1] = puVar9[-1];
          *local_8 = uVar2;
          puVar9[-1] = uVar1;
          puVar9 = local_8;
          puVar11 = puVar12;
        }
        else {
          uVar1 = puVar3[1];
          uVar2 = *puVar3;
          *puVar3 = *puVar10;
          puVar3[1] = puVar8[-1];
          *puVar10 = uVar2;
          puVar8[-1] = uVar1;
          puVar3 = puVar3 + 2;
        }
      }
      goto joined_r0x00557224;
    }
    iVar4 = FUN_00445060(param_4);
    iVar5 = FUN_00445060(param_4);
    puVar10 = local_c;
    if (iVar5 <= iVar4) {
      iVar4 = FUN_00445060(param_4);
      iVar5 = FUN_00445060(param_4);
      puVar12 = local_c;
      puVar9 = local_8;
      if (iVar4 < iVar5) goto joined_r0x005572da;
      uVar1 = local_8[1];
      uVar2 = *local_8;
      *local_8 = *puVar3;
      local_8[1] = puVar3[1];
      local_8 = local_8 + 2;
      *puVar3 = uVar2;
      puVar3[1] = uVar1;
    }
    puVar9 = local_8;
    puVar3 = puVar3 + 2;
  } while( true );
}

