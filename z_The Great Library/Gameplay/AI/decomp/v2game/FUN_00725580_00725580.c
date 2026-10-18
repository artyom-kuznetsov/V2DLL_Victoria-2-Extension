// FUN_00725580 @ 00725580 body=[[00725580, 00725720]]


void FUN_00725580(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_8;
  
  puVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00727240(puVar7,param_4);
  local_8 = puVar7 + 1;
  while (((param_2 < puVar7 && (cVar5 = FUN_007235e0(*puVar7), cVar5 == '\0')) &&
         (cVar5 = FUN_007235e0(puVar7[-1]), cVar5 == '\0'))) {
    puVar7 = puVar7 + -1;
  }
  puVar3 = local_8;
  puVar4 = local_8;
  puVar6 = puVar7;
  if (local_8 < param_3) {
    uVar1 = *puVar7;
    do {
      uVar2 = *local_8;
      cVar5 = FUN_007235e0(uVar1);
      puVar3 = local_8;
      puVar4 = local_8;
      if ((cVar5 != '\0') || (cVar5 = FUN_007235e0(uVar2), cVar5 != '\0')) break;
      local_8 = local_8 + 1;
      puVar3 = local_8;
      puVar4 = local_8;
    } while (local_8 < param_3);
  }
joined_r0x00725623:
  do {
    if (param_3 <= puVar3) {
joined_r0x0072565f:
      for (; param_2 < puVar6; puVar6 = puVar6 + -1) {
        cVar5 = FUN_007235e0(*puVar7);
        if (cVar5 == '\0') {
          cVar5 = FUN_007235e0(puVar6[-1]);
          if (cVar5 != '\0') break;
          uVar1 = puVar7[-1];
          puVar7 = puVar7 + -1;
          *puVar7 = puVar6[-1];
          puVar6[-1] = uVar1;
        }
      }
      if (puVar6 == param_2) {
        if (puVar3 == param_3) {
          *param_1 = puVar7;
          param_1[1] = puVar4;
          return;
        }
        if (puVar4 != puVar3) {
          uVar1 = *puVar7;
          *puVar7 = *puVar4;
          *puVar4 = uVar1;
        }
        uVar1 = *puVar7;
        *puVar7 = *puVar3;
        puVar7 = puVar7 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      else {
        puVar6 = puVar6 + -1;
        if (puVar3 == param_3) {
          puVar7 = puVar7 + -1;
          if (puVar6 != puVar7) {
            uVar1 = *puVar6;
            *puVar6 = *puVar7;
            *puVar7 = uVar1;
          }
          uVar1 = *puVar7;
          *puVar7 = puVar4[-1];
          puVar4[-1] = uVar1;
          puVar4 = puVar4 + -1;
        }
        else {
          uVar1 = *puVar3;
          *puVar3 = *puVar6;
          *puVar6 = uVar1;
          puVar3 = puVar3 + 1;
        }
      }
      goto joined_r0x00725623;
    }
    cVar5 = FUN_007235e0(*puVar3);
    local_8 = puVar4;
    if (cVar5 == '\0') {
      cVar5 = FUN_007235e0(*puVar7);
      if (cVar5 != '\0') goto joined_r0x0072565f;
      local_8 = puVar4 + 1;
      uVar1 = *puVar4;
      *puVar4 = *puVar3;
      *puVar3 = uVar1;
    }
    puVar3 = puVar3 + 1;
    puVar4 = local_8;
  } while( true );
}

