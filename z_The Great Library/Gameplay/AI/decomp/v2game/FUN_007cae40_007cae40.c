// FUN_007cae40 @ 007cae40 body=[[007cae40, 007cb12c]]


void FUN_007cae40(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007ce760(puVar5,param_4);
  local_8 = puVar5 + 1;
  if (param_2 < puVar5) {
    while( true ) {
      puVar3 = (uint *)FUN_007c7d90();
      puVar4 = (uint *)FUN_007c7d90();
      if (((int)puVar4[1] < (int)puVar3[1]) ||
         (((int)puVar4[1] <= (int)puVar3[1] && (*puVar4 < *puVar3)))) break;
      puVar3 = (uint *)FUN_007c7d90();
      puVar4 = (uint *)FUN_007c7d90();
      if (((int)puVar4[1] < (int)puVar3[1]) ||
         ((((int)puVar4[1] <= (int)puVar3[1] && (*puVar4 < *puVar3)) ||
          (puVar5 = puVar5 + -1, puVar5 <= param_2)))) break;
    }
  }
  puVar6 = local_8;
  local_10 = local_8;
  puVar2 = local_8;
  local_c = puVar5;
  puVar7 = puVar5;
  if (local_8 < param_3) {
    while( true ) {
      puVar3 = (uint *)FUN_007c7d90();
      puVar4 = (uint *)FUN_007c7d90();
      puVar6 = local_8;
      local_10 = local_8;
      puVar2 = local_8;
      if (((int)puVar4[1] < (int)puVar3[1]) ||
         (((int)puVar4[1] <= (int)puVar3[1] && (*puVar4 < *puVar3)))) break;
      puVar3 = (uint *)FUN_007c7d90();
      puVar4 = (uint *)FUN_007c7d90();
      if (((int)puVar4[1] < (int)puVar3[1]) ||
         ((((int)puVar4[1] <= (int)puVar3[1] && (*puVar4 < *puVar3)) ||
          (local_8 = local_8 + 1, puVar6 = local_8, local_10 = local_8, puVar2 = local_8,
          param_3 <= local_8)))) break;
    }
  }
joined_r0x007caf73:
  do {
    if (param_3 <= puVar6) {
joined_r0x007cb006:
      while (param_2 < puVar5) {
        puVar3 = (uint *)FUN_007c7d90();
        puVar4 = (uint *)FUN_007c7d90();
        puVar6 = local_10;
        if (((int)puVar3[1] <= (int)puVar4[1]) &&
           (((int)puVar3[1] < (int)puVar4[1] || (*puVar3 <= *puVar4)))) {
          puVar3 = (uint *)FUN_007c7d90();
          puVar4 = (uint *)FUN_007c7d90();
          puVar5 = local_c;
          if (((int)puVar4[1] < (int)puVar3[1]) ||
             (((int)puVar4[1] <= (int)puVar3[1] && (*puVar4 < *puVar3)))) break;
          uVar1 = puVar7[-1];
          puVar7 = puVar7 + -1;
          *puVar7 = local_c[-1];
          local_c[-1] = uVar1;
        }
        local_c = local_c + -1;
        puVar5 = local_c;
      }
      if (puVar5 == param_2) {
        if (puVar6 == param_3) {
          *param_1 = (uint)puVar7;
          param_1[1] = (uint)puVar2;
          return;
        }
        if (puVar2 != puVar6) {
          uVar1 = *puVar7;
          *puVar7 = *puVar2;
          *puVar2 = uVar1;
        }
        uVar1 = *puVar7;
        *puVar7 = *puVar6;
        local_10 = puVar6 + 1;
        *puVar6 = uVar1;
        puVar6 = local_10;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      else {
        puVar5 = puVar5 + -1;
        local_c = puVar5;
        if (puVar6 == param_3) {
          puVar7 = puVar7 + -1;
          if (puVar5 != puVar7) {
            uVar1 = *puVar5;
            *puVar5 = *puVar7;
            *puVar7 = uVar1;
          }
          uVar1 = *puVar7;
          *puVar7 = puVar2[-1];
          puVar2[-1] = uVar1;
          puVar2 = puVar2 + -1;
        }
        else {
          uVar1 = *puVar6;
          *puVar6 = *puVar5;
          *puVar5 = uVar1;
          local_10 = puVar6 + 1;
          puVar6 = local_10;
        }
      }
      goto joined_r0x007caf73;
    }
    puVar3 = (uint *)FUN_007c7d90();
    puVar4 = (uint *)FUN_007c7d90();
    local_8 = puVar2;
    puVar5 = local_c;
    if (((int)puVar3[1] <= (int)puVar4[1]) &&
       (((int)puVar3[1] < (int)puVar4[1] || (*puVar3 <= *puVar4)))) {
      puVar3 = (uint *)FUN_007c7d90();
      puVar4 = (uint *)FUN_007c7d90();
      local_10 = puVar6;
      if (((int)puVar4[1] < (int)puVar3[1]) ||
         (((int)puVar4[1] <= (int)puVar3[1] && (*puVar4 < *puVar3)))) goto joined_r0x007cb006;
      local_8 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = *puVar6;
      *puVar6 = uVar1;
    }
    local_10 = puVar6 + 1;
    puVar6 = local_10;
    puVar2 = local_8;
  } while( true );
}

