// FUN_00848b40 @ 00848b40 body=[[00848b40, 00848b87] [00848b90, 00848ff1]]


void FUN_00848b40(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
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
  FUN_00849240(puVar10,param_3 + -2,param_4,param_5);
  puVar9 = puVar10 + 2;
  puVar4 = puVar10;
  if (param_2 < puVar10) {
    while( true ) {
      puVar12 = puVar4 + -2;
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4) + 0xbe8);
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + puVar4[-1] * 4) + 0x34);
      uVar5 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar4[1] * 4) + 0x34),&param_4,puVar10,
                           0);
      uVar6 = FUN_00936fc0(uVar2,&param_4,puVar12,0);
      if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
          (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) break;
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4) + 0xbe8);
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + puVar4[1] * 4) + 0x34);
      uVar5 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar4[-1] * 4) + 0x34),&param_4,puVar12
                           ,0);
      uVar6 = FUN_00936fc0(uVar2,&param_4,puVar10,0);
      if (((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
           (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) ||
         (puVar10 = puVar10 + -2, puVar4 = puVar12, puVar10 <= param_2)) break;
    }
  }
  puVar4 = puVar9;
  local_8 = puVar9;
  local_c = puVar10;
  puVar12 = puVar10;
  if (puVar9 < param_3) {
    while( true ) {
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4) + 0xbe8);
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + puVar9[1] * 4) + 0x34);
      uVar5 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar10[1] * 4) + 0x34),&param_4,puVar10
                           ,0);
      uVar6 = FUN_00936fc0(uVar2,&param_4,puVar9,0);
      puVar4 = puVar9;
      local_8 = puVar9;
      if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
          (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) break;
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4) + 0xbe8);
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + puVar10[1] * 4) + 0x34);
      uVar5 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar9[1] * 4) + 0x34),&param_4,puVar9,0
                          );
      uVar6 = FUN_00936fc0(uVar2,&param_4,puVar10,0);
      if (((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
           (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) ||
         (puVar9 = puVar9 + 2, puVar4 = puVar9, local_8 = puVar9, param_3 <= puVar9)) break;
    }
  }
joined_r0x00848d27:
  do {
    puVar11 = puVar10;
    if (param_3 <= puVar4) {
joined_r0x00848e15:
      while (puVar7 = puVar10, param_2 < puVar10) {
        puVar8 = puVar11 + -2;
        iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4) + 0xbe8);
        uVar2 = *(undefined4 *)(*(int *)(iVar1 + puVar11[-1] * 4) + 0x34);
        uVar5 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar12[1] * 4) + 0x34),&param_4,
                             puVar12,0);
        uVar6 = FUN_00936fc0(uVar2,&param_4,puVar8,0);
        puVar7 = puVar12;
        puVar9 = local_8;
        if ((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) <=
            (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
          iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4) + 0xbe8);
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + puVar12[1] * 4) + 0x34);
          uVar5 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar11[-1] * 4) + 0x34),&param_4,
                               puVar8,0);
          uVar6 = FUN_00936fc0(uVar2,&param_4,puVar12,0);
          puVar7 = local_c;
          if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
              (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) break;
          uVar2 = puVar12[-2];
          uVar3 = puVar12[-1];
          puVar7 = puVar12 + -2;
          *puVar7 = *puVar8;
          puVar12[-1] = puVar11[-1];
          *puVar8 = uVar2;
          puVar11[-1] = uVar3;
        }
        local_c = local_c + -2;
        puVar11 = puVar8;
        puVar12 = puVar7;
        puVar10 = local_c;
      }
      if (puVar7 == param_2) {
        if (puVar4 == param_3) {
          *param_1 = (uint)puVar12;
          param_1[1] = (uint)puVar9;
          return;
        }
        if (puVar9 != puVar4) {
          uVar2 = puVar12[1];
          uVar3 = *puVar12;
          *puVar12 = *puVar9;
          puVar12[1] = puVar9[1];
          *puVar9 = uVar3;
          puVar9[1] = uVar2;
        }
        uVar2 = *puVar12;
        uVar3 = puVar12[1];
        *puVar12 = *puVar4;
        puVar12[1] = puVar4[1];
        puVar9 = puVar9 + 2;
        *puVar4 = uVar2;
        puVar4[1] = uVar3;
        puVar10 = puVar7;
        puVar4 = puVar4 + 2;
        local_8 = puVar9;
        puVar12 = puVar12 + 2;
      }
      else {
        puVar10 = puVar7 + -2;
        local_c = puVar10;
        if (puVar4 == param_3) {
          puVar11 = puVar12 + -2;
          if (puVar10 != puVar11) {
            uVar2 = puVar7[-1];
            uVar3 = *puVar10;
            *puVar10 = *puVar11;
            puVar7[-1] = puVar12[-1];
            *puVar11 = uVar3;
            puVar12[-1] = uVar2;
          }
          uVar2 = puVar12[-1];
          uVar3 = *puVar11;
          local_8 = puVar9 + -2;
          *puVar11 = *local_8;
          puVar12[-1] = puVar9[-1];
          *local_8 = uVar3;
          puVar9[-1] = uVar2;
          puVar9 = local_8;
          puVar12 = puVar11;
        }
        else {
          uVar2 = puVar4[1];
          uVar3 = *puVar4;
          *puVar4 = *puVar10;
          puVar4[1] = puVar7[-1];
          *puVar10 = uVar3;
          puVar7[-1] = uVar2;
          puVar4 = puVar4 + 2;
        }
      }
      goto joined_r0x00848d27;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4) + 0xbe8);
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + puVar4[1] * 4) + 0x34);
    uVar5 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar12[1] * 4) + 0x34),&param_4,puVar12,0
                        );
    uVar6 = FUN_00936fc0(uVar2,&param_4,puVar4,0);
    puVar10 = local_c;
    if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <=
        (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4) + 0xbe8);
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + puVar4[1] * 4) + 0x34);
      uVar5 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + puVar12[1] * 4) + 0x34),&param_4,puVar12
                           ,0);
      uVar6 = FUN_00936fc0(uVar2,&param_4,puVar4,0);
      puVar11 = local_c;
      local_8 = puVar9;
      if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
          (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) goto joined_r0x00848e15;
      uVar2 = puVar9[1];
      uVar3 = *puVar9;
      *puVar9 = *puVar4;
      puVar9[1] = puVar4[1];
      puVar9 = puVar9 + 2;
      *puVar4 = uVar3;
      puVar4[1] = uVar2;
    }
    puVar4 = puVar4 + 2;
    local_8 = puVar9;
  } while( true );
}

