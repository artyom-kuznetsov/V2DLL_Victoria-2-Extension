// FUN_007c9660 @ 007c9660 body=[[007c9660, 007c96cc] [007c96d0, 007c974e] [007c9750, 007c981c]]


void FUN_007c9660(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007cd070(puVar5,param_4);
  puVar4 = puVar5;
  while (((param_2 < puVar4 && (cVar3 = FUN_007c6830(), cVar3 == '\0')) &&
         (cVar3 = FUN_007c6830(), cVar3 == '\0'))) {
    puVar4 = puVar4 + -1;
  }
  do {
    puVar5 = puVar5 + 1;
    puVar2 = puVar5;
    local_c = puVar4;
    puVar6 = puVar4;
    if ((param_3 <= puVar5) || (cVar3 = FUN_007c6830(), cVar3 != '\0')) break;
    cVar3 = FUN_007c6830();
  } while (cVar3 == '\0');
joined_r0x007c9708:
  do {
    if (param_3 <= puVar5) {
joined_r0x007c974b:
      while (param_2 < puVar4) {
        cVar3 = FUN_007c6830();
        if (cVar3 == '\0') {
          cVar3 = FUN_007c6830();
          puVar4 = local_c;
          if (cVar3 != '\0') break;
          uVar1 = puVar6[-1];
          puVar6 = puVar6 + -1;
          *puVar6 = local_c[-1];
          local_c[-1] = uVar1;
        }
        local_c = local_c + -1;
        puVar4 = local_c;
      }
      if (puVar4 == param_2) {
        if (puVar5 == param_3) {
          *param_1 = puVar6;
          param_1[1] = puVar2;
          return;
        }
        if (puVar2 != puVar5) {
          uVar1 = *puVar6;
          *puVar6 = *puVar2;
          *puVar2 = uVar1;
        }
        uVar1 = *puVar6;
        *puVar6 = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      else {
        puVar4 = puVar4 + -1;
        local_c = puVar4;
        if (puVar5 == param_3) {
          puVar6 = puVar6 + -1;
          if (puVar4 != puVar6) {
            uVar1 = *puVar4;
            *puVar4 = *puVar6;
            *puVar6 = uVar1;
          }
          uVar1 = *puVar6;
          *puVar6 = puVar2[-1];
          puVar2[-1] = uVar1;
          puVar2 = puVar2 + -1;
        }
        else {
          uVar1 = *puVar5;
          *puVar5 = *puVar4;
          *puVar4 = uVar1;
          puVar5 = puVar5 + 1;
        }
      }
      goto joined_r0x007c9708;
    }
    cVar3 = FUN_007c6830();
    local_8 = puVar2;
    puVar4 = local_c;
    if (cVar3 == '\0') {
      cVar3 = FUN_007c6830();
      if (cVar3 != '\0') goto joined_r0x007c974b;
      local_8 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = *puVar5;
      *puVar5 = uVar1;
    }
    puVar5 = puVar5 + 1;
    puVar2 = local_8;
  } while( true );
}

