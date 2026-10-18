// FUN_0045c440 @ 0045c440 body=[[0045c440, 0045c629]]


undefined4 *
FUN_0045c440(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  undefined4 *local_8;
  
  local_8 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 2;
  FUN_0045ca60(local_8,param_3 + -2,param_4);
  puVar7 = local_8 + 2;
  for (; param_2 < local_8; local_8 = local_8 + -2) {
    if (((int)local_8[1] < (int)local_8[-1]) || ((int)local_8[-1] < (int)local_8[1])) break;
  }
  puVar8 = puVar7;
  puVar9 = local_8;
  puVar3 = local_8;
  if (puVar7 < param_3) {
    do {
      puVar8 = puVar7;
      if (((int)local_8[1] < (int)puVar7[1]) || ((int)puVar7[1] < (int)local_8[1])) break;
      puVar7 = puVar7 + 2;
      puVar8 = puVar7;
    } while (puVar7 < param_3);
  }
joined_r0x0045c4ba:
  do {
    puVar5 = puVar9;
    if (param_3 <= puVar7) {
joined_r0x0045c4fc:
      while (param_2 < puVar9) {
        puVar6 = puVar5 + -2;
        puVar4 = puVar3;
        if ((int)puVar5[-1] <= (int)puVar3[1]) {
          puVar9 = local_8;
          if ((int)puVar5[-1] < (int)puVar3[1]) break;
          uVar1 = puVar3[-1];
          uVar2 = puVar3[-2];
          puVar4 = puVar3 + -2;
          *puVar4 = *puVar6;
          puVar3[-1] = puVar5[-1];
          *puVar6 = uVar2;
          puVar5[-1] = uVar1;
        }
        puVar9 = local_8 + -2;
        puVar3 = puVar4;
        puVar5 = puVar6;
        local_8 = puVar9;
      }
      if (puVar9 == param_2) {
        if (puVar7 == param_3) {
          param_1[1] = puVar8;
          *param_1 = puVar3;
          return param_1;
        }
        if (puVar8 != puVar7) {
          uVar1 = puVar3[1];
          uVar2 = *puVar3;
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          *puVar8 = uVar2;
          puVar8[1] = uVar1;
        }
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        *puVar3 = *puVar7;
        puVar3[1] = puVar7[1];
        *puVar7 = uVar1;
        puVar7[1] = uVar2;
        puVar7 = puVar7 + 2;
        puVar8 = puVar8 + 2;
        puVar3 = puVar3 + 2;
      }
      else {
        local_8 = puVar9 + -2;
        if (puVar7 == param_3) {
          puVar5 = puVar3 + -2;
          if (local_8 != puVar5) {
            uVar1 = puVar9[-1];
            uVar2 = *local_8;
            *local_8 = *puVar5;
            puVar9[-1] = puVar3[-1];
            *puVar5 = uVar2;
            puVar3[-1] = uVar1;
          }
          uVar1 = puVar3[-1];
          uVar2 = *puVar5;
          puVar9 = puVar8 + -2;
          *puVar5 = *puVar9;
          puVar3[-1] = puVar8[-1];
          *puVar9 = uVar2;
          puVar8[-1] = uVar1;
          puVar8 = puVar9;
          puVar9 = local_8;
          puVar3 = puVar5;
        }
        else {
          uVar1 = puVar7[1];
          uVar2 = *puVar7;
          *puVar7 = *local_8;
          puVar7[1] = puVar9[-1];
          *local_8 = uVar2;
          puVar9[-1] = uVar1;
          puVar7 = puVar7 + 2;
          puVar9 = local_8;
        }
      }
      goto joined_r0x0045c4ba;
    }
    if ((int)puVar3[1] <= (int)puVar7[1]) {
      if ((int)puVar3[1] < (int)puVar7[1]) goto joined_r0x0045c4fc;
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      *puVar7 = uVar1;
      puVar8 = puVar8 + 2;
      puVar7[1] = uVar2;
    }
    puVar7 = puVar7 + 2;
  } while( true );
}

