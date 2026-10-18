// FUN_0042cdc0 @ 0042cdc0 body=[[0042cdc0, 0042cdfc] [0042ce00, 0042d0df]]


void FUN_0042cdc0(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar8 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_0042d110(puVar8,param_3 + -2,param_4);
  puVar7 = puVar8 + 2;
  local_8 = puVar7;
  if (param_2 < puVar8) {
    while( true ) {
      local_10 = puVar8 + -2;
      FUN_00425f80(&local_c);
      FUN_00425f80(&local_14);
      if (local_14 < (int)local_c) break;
      FUN_00425f80(&local_18);
      FUN_00425f80(&local_1c);
      if ((local_1c < local_18) || (puVar8 = local_10, local_10 <= param_2)) break;
    }
  }
  puVar3 = puVar7;
  local_c = puVar8;
  puVar5 = local_8;
  puVar4 = local_8;
  puVar9 = puVar8;
  if (puVar7 < param_3) {
    while( true ) {
      FUN_00425f80(&local_1c);
      FUN_00425f80(&local_18);
      puVar3 = puVar7;
      puVar5 = puVar7;
      puVar4 = puVar7;
      if (local_18 < local_1c) break;
      FUN_00425f80(&local_14);
      FUN_00425f80(&local_10);
      if (((int)local_10 < local_14) ||
         (puVar7 = puVar7 + 2, puVar3 = puVar7, puVar5 = puVar7, puVar4 = puVar7, param_3 <= puVar7)
         ) break;
    }
  }
joined_r0x0042ced3:
  do {
    local_8 = puVar4;
    puVar4 = puVar3;
    puVar3 = puVar8;
    if (param_3 <= puVar4) {
joined_r0x0042cf64:
      while (local_8 = puVar5, puVar5 = puVar8, param_2 < puVar8) {
        puVar6 = puVar3 + -2;
        FUN_00425f80(&local_24);
        FUN_00425f80(&local_28);
        puVar5 = puVar9;
        if (local_24 <= local_28) {
          FUN_00425f80(&local_2c);
          FUN_00425f80(&local_30);
          puVar5 = local_c;
          puVar7 = local_8;
          if (local_30 < local_2c) break;
          uVar1 = puVar9[-2];
          uVar2 = puVar9[-1];
          puVar5 = puVar9 + -2;
          *puVar5 = *puVar6;
          puVar9[-1] = puVar3[-1];
          *puVar6 = uVar1;
          puVar3[-1] = uVar2;
        }
        local_c = local_c + -2;
        puVar3 = puVar6;
        puVar7 = local_8;
        puVar9 = puVar5;
        puVar5 = local_8;
        puVar8 = local_c;
      }
      if (puVar5 == param_2) {
        if (puVar4 == param_3) {
          *param_1 = (uint)puVar9;
          param_1[1] = (uint)puVar7;
          return;
        }
        if (puVar7 != puVar4) {
          uVar1 = puVar9[1];
          uVar2 = *puVar9;
          *puVar9 = *puVar7;
          puVar9[1] = puVar7[1];
          *puVar7 = uVar2;
          puVar7[1] = uVar1;
        }
        uVar1 = *puVar9;
        uVar2 = puVar9[1];
        *puVar9 = *puVar4;
        puVar9[1] = puVar4[1];
        puVar7 = puVar7 + 2;
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
        puVar8 = puVar5;
        puVar3 = puVar4 + 2;
        local_10 = puVar4;
        puVar5 = puVar7;
        puVar4 = puVar7;
        puVar9 = puVar9 + 2;
      }
      else {
        puVar8 = puVar5 + -2;
        local_c = puVar8;
        if (puVar4 == param_3) {
          puVar6 = puVar9 + -2;
          if (puVar8 != puVar6) {
            uVar1 = puVar5[-1];
            uVar2 = *puVar8;
            *puVar8 = *puVar6;
            puVar5[-1] = puVar9[-1];
            *puVar6 = uVar2;
            puVar9[-1] = uVar1;
          }
          uVar1 = puVar9[-1];
          uVar2 = *puVar6;
          puVar5 = puVar7 + -2;
          *puVar6 = *puVar5;
          puVar9[-1] = puVar7[-1];
          *puVar5 = uVar2;
          puVar7[-1] = uVar1;
          puVar7 = puVar5;
          puVar3 = puVar4;
          puVar4 = puVar5;
          puVar9 = puVar6;
        }
        else {
          uVar1 = puVar4[1];
          uVar2 = *puVar4;
          *puVar4 = *puVar8;
          puVar4[1] = puVar5[-1];
          *puVar8 = uVar2;
          puVar5[-1] = uVar1;
          puVar3 = puVar4 + 2;
          puVar5 = local_8;
          puVar4 = local_8;
        }
      }
      goto joined_r0x0042ced3;
    }
    FUN_00425f80(&local_1c);
    FUN_00425f80(&local_18);
    if (local_1c <= local_18) {
      FUN_00425f80(&local_14);
      FUN_00425f80(&local_20);
      puVar8 = local_c;
      puVar3 = local_c;
      puVar5 = puVar7;
      if (local_20 < local_14) goto joined_r0x0042cf64;
      uVar1 = puVar7[1];
      uVar2 = *puVar7;
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar7 = puVar7 + 2;
      *puVar4 = uVar2;
      puVar4[1] = uVar1;
    }
    puVar8 = local_c;
    puVar3 = puVar4 + 2;
    puVar5 = puVar7;
    puVar4 = local_8;
  } while( true );
}

