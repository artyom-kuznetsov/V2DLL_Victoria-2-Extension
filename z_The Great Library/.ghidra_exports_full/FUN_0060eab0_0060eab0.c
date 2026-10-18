// FUN_0060eab0 @ 0060eab0 body=[[0060eab0, 0060ed4c]]


undefined4 *
FUN_0060eab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 2;
  FUN_00610a50(local_c,param_3 + -2,param_4);
  puVar11 = local_c + 2;
  for (; param_2 < local_c; local_c = local_c + -2) {
    uVar1 = *(uint *)(local_c[-1] + 0x1d8);
    uVar2 = *(uint *)(local_c[1] + 0x1d8);
    iVar3 = *(int *)(local_c[-1] + 0x1dc);
    iVar4 = *(int *)(local_c[1] + 0x1dc);
    if ((iVar4 < iVar3) ||
       ((((iVar4 <= iVar3 && (uVar2 < uVar1)) || (iVar3 < iVar4)) ||
        ((iVar3 <= iVar4 && (uVar1 < uVar2)))))) break;
  }
  puVar8 = puVar11;
  local_8 = puVar11;
  puVar7 = local_c;
  if (puVar11 < param_3) {
    uVar1 = *(uint *)(local_c[1] + 0x1d8);
    iVar3 = *(int *)(local_c[1] + 0x1dc);
    while( true ) {
      uVar2 = *(uint *)(puVar11[1] + 0x1d8);
      iVar4 = *(int *)(puVar11[1] + 0x1dc);
      puVar8 = puVar11;
      local_8 = puVar11;
      if (((iVar3 < iVar4) || ((iVar3 <= iVar4 && (uVar1 < uVar2)))) || (iVar4 < iVar3)) break;
      if (((iVar4 <= iVar3) && (uVar2 < uVar1)) ||
         (puVar11 = puVar11 + 2, puVar8 = puVar11, local_8 = puVar11, param_3 <= puVar11)) break;
    }
  }
joined_r0x0060eb78:
  do {
    puVar10 = local_c;
    if (param_3 <= puVar11) {
joined_r0x0060ebf8:
      for (; puVar12 = puVar8, param_2 < local_c; local_c = local_c + -2) {
        puVar9 = puVar10 + -2;
        uVar1 = *(uint *)(puVar10[-1] + 0x1d8);
        iVar3 = *(int *)(puVar10[-1] + 0x1dc);
        uVar2 = *(uint *)(puVar7[1] + 0x1d8);
        iVar4 = *(int *)(puVar7[1] + 0x1dc);
        puVar8 = puVar7;
        if ((iVar3 <= iVar4) && ((iVar3 < iVar4 || (uVar1 <= uVar2)))) {
          puVar12 = local_8;
          if ((iVar3 < iVar4) || ((iVar3 <= iVar4 && (uVar1 < uVar2)))) break;
          uVar5 = puVar7[-2];
          uVar6 = puVar7[-1];
          puVar8 = puVar7 + -2;
          *puVar8 = *puVar9;
          puVar7[-1] = puVar10[-1];
          *puVar9 = uVar5;
          puVar10[-1] = uVar6;
        }
        puVar7 = puVar8;
        puVar8 = local_8;
        puVar10 = puVar9;
      }
      if (local_c == param_2) {
        if (puVar11 == param_3) {
          param_1[1] = puVar12;
          *param_1 = puVar7;
          return param_1;
        }
        if (puVar12 != puVar11) {
          uVar5 = *puVar7;
          uVar6 = puVar7[1];
          *puVar7 = *puVar12;
          puVar7[1] = puVar12[1];
          *puVar12 = uVar5;
          puVar12[1] = uVar6;
        }
        uVar5 = *puVar7;
        uVar6 = puVar7[1];
        *puVar7 = *puVar11;
        puVar7[1] = puVar11[1];
        *puVar11 = uVar5;
        puVar11[1] = uVar6;
        puVar11 = puVar11 + 2;
        puVar8 = puVar12 + 2;
        local_8 = puVar12 + 2;
        puVar7 = puVar7 + 2;
      }
      else {
        puVar10 = local_c + -2;
        if (puVar11 == param_3) {
          puVar9 = puVar7 + -2;
          if (puVar10 != puVar9) {
            uVar5 = local_c[-1];
            uVar6 = *puVar10;
            *puVar10 = *puVar9;
            local_c[-1] = puVar7[-1];
            *puVar9 = uVar6;
            puVar7[-1] = uVar5;
          }
          uVar5 = puVar7[-1];
          uVar6 = *puVar9;
          puVar8 = puVar12 + -2;
          *puVar9 = *puVar8;
          puVar7[-1] = puVar12[-1];
          *puVar8 = uVar6;
          puVar12[-1] = uVar5;
          local_8 = puVar8;
          local_c = puVar10;
          puVar7 = puVar9;
        }
        else {
          uVar5 = puVar11[1];
          uVar6 = *puVar11;
          *puVar11 = *puVar10;
          puVar11[1] = local_c[-1];
          *puVar10 = uVar6;
          local_c[-1] = uVar5;
          puVar11 = puVar11 + 2;
          puVar8 = puVar12;
          local_c = puVar10;
        }
      }
      goto joined_r0x0060eb78;
    }
    uVar1 = *(uint *)(puVar11[1] + 0x1d8);
    iVar3 = *(int *)(puVar11[1] + 0x1dc);
    uVar2 = *(uint *)(puVar7[1] + 0x1d8);
    iVar4 = *(int *)(puVar7[1] + 0x1dc);
    if ((iVar4 <= iVar3) && ((iVar4 < iVar3 || (uVar2 <= uVar1)))) {
      local_8 = puVar8;
      if ((iVar4 < iVar3) || ((iVar4 <= iVar3 && (uVar2 < uVar1)))) goto joined_r0x0060ebf8;
      uVar5 = *puVar8;
      uVar6 = puVar8[1];
      *puVar8 = *puVar11;
      puVar8[1] = puVar11[1];
      *puVar11 = uVar5;
      puVar8 = puVar8 + 2;
      puVar11[1] = uVar6;
    }
    puVar11 = puVar11 + 2;
    local_8 = puVar8;
  } while( true );
}

