// FUN_006e0770 @ 006e0770 body=[[006e0770, 006e07ac] [006e07b0, 006e0a77]]


void FUN_006e0770(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_006e0ee0(puVar6,param_3 + -2,param_4);
  puVar8 = puVar6;
  while (((param_2 < puVar8 &&
          (cVar4 = FUN_006dda00(puVar8[-2],puVar8[-1],*puVar8,puVar8[1]), cVar4 == '\0')) &&
         (cVar4 = FUN_006dda00(*puVar8,puVar8[1],puVar8[-2],puVar8[-1]), cVar4 == '\0'))) {
    puVar8 = puVar8 + -2;
  }
  do {
    puVar6 = puVar6 + 2;
    puVar3 = puVar6;
    local_8 = puVar6;
    local_c = puVar8;
    puVar10 = puVar8;
    if ((param_3 <= puVar6) ||
       (cVar4 = FUN_006dda00(*puVar6,puVar6[1],*puVar8,puVar8[1]), cVar4 != '\0')) break;
    cVar4 = FUN_006dda00(*puVar8,puVar8[1],*puVar6,puVar6[1]);
  } while (cVar4 == '\0');
joined_r0x006e0873:
  do {
    puVar9 = puVar10;
    puVar2 = puVar3;
    puVar3 = puVar8;
    if (param_3 <= puVar2) {
joined_r0x006e08f1:
      while (puVar5 = puVar8, puVar7 = puVar6, param_2 < puVar8) {
        puVar6 = puVar3 + -2;
        cVar4 = FUN_006dda00(*puVar6,puVar3[-1],*puVar9,puVar9[1]);
        puVar10 = puVar9;
        if (cVar4 == '\0') {
          cVar4 = FUN_006dda00(*puVar9,puVar9[1],*puVar6,puVar3[-1]);
          puVar5 = local_c;
          puVar7 = local_8;
          if (cVar4 != '\0') break;
          puVar10 = puVar9 + -2;
          if (puVar10 != puVar6) {
            uVar1 = *puVar10;
            *puVar10 = *puVar6;
            *puVar6 = uVar1;
            uVar1 = puVar9[-1];
            puVar9[-1] = puVar3[-1];
            puVar3[-1] = uVar1;
          }
        }
        local_c = local_c + -2;
        puVar3 = puVar6;
        puVar6 = local_8;
        puVar9 = puVar10;
        puVar8 = local_c;
      }
      if (puVar5 == param_2) {
        if (puVar2 == param_3) {
          *param_1 = puVar9;
          param_1[1] = puVar7;
          return;
        }
        if ((puVar7 != puVar2) && (puVar9 != puVar7)) {
          uVar1 = *puVar9;
          *puVar9 = *puVar7;
          *puVar7 = uVar1;
          uVar1 = puVar9[1];
          puVar9[1] = puVar7[1];
          puVar7[1] = uVar1;
        }
        puVar6 = puVar7 + 2;
        puVar8 = puVar5;
        puVar3 = puVar2 + 2;
        local_8 = puVar6;
        puVar10 = puVar9 + 2;
        if (puVar9 != puVar2) {
          uVar1 = *puVar9;
          *puVar9 = *puVar2;
          *puVar2 = uVar1;
          uVar1 = puVar9[1];
          puVar9[1] = puVar2[1];
          puVar2[1] = uVar1;
        }
      }
      else {
        puVar8 = puVar5 + -2;
        local_c = puVar8;
        if (puVar2 == param_3) {
          puVar10 = puVar9 + -2;
          if (puVar8 != puVar10) {
            uVar1 = *puVar8;
            *puVar8 = *puVar10;
            *puVar10 = uVar1;
            uVar1 = puVar5[-1];
            puVar5[-1] = puVar9[-1];
            puVar9[-1] = uVar1;
          }
          puVar6 = puVar7 + -2;
          puVar3 = puVar2;
          local_8 = puVar6;
          if (puVar10 != puVar6) {
            uVar1 = *puVar10;
            *puVar10 = *puVar6;
            *puVar6 = uVar1;
            uVar1 = puVar9[-1];
            puVar9[-1] = puVar7[-1];
            puVar7[-1] = uVar1;
          }
        }
        else {
          if (puVar2 != puVar8) {
            uVar1 = *puVar2;
            *puVar2 = *puVar8;
            *puVar8 = uVar1;
            uVar1 = puVar2[1];
            puVar2[1] = puVar5[-1];
            puVar5[-1] = uVar1;
          }
          puVar6 = puVar7;
          puVar3 = puVar2 + 2;
          puVar10 = puVar9;
        }
      }
      goto joined_r0x006e0873;
    }
    cVar4 = FUN_006dda00(*puVar9,puVar9[1],*puVar2,puVar2[1]);
    local_8 = puVar6;
    puVar8 = local_c;
    if (cVar4 == '\0') {
      cVar4 = FUN_006dda00(*puVar2,puVar2[1],*puVar9,puVar9[1]);
      puVar3 = local_c;
      if (cVar4 != '\0') goto joined_r0x006e08f1;
      local_8 = puVar6 + 2;
      if (puVar6 != puVar2) {
        uVar1 = *puVar6;
        *puVar6 = *puVar2;
        *puVar2 = uVar1;
        uVar1 = puVar6[1];
        puVar6[1] = puVar2[1];
        puVar2[1] = uVar1;
      }
    }
    puVar6 = local_8;
    puVar3 = puVar2 + 2;
    puVar10 = puVar9;
  } while( true );
}

