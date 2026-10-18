// FUN_00706a20 @ 00706a20 body=[[00706a20, 00706a8c] [00706a90, 00706b0e] [00706b10, 00706bdc]]


void FUN_00706a20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  FUN_00707b60(puVar5,param_4);
  puVar4 = puVar5;
  while (((param_2 < puVar4 && (cVar3 = FUN_006f38d0(), cVar3 == '\0')) &&
         (cVar3 = FUN_006f38d0(), cVar3 == '\0'))) {
    puVar4 = puVar4 + -1;
  }
  do {
    puVar5 = puVar5 + 1;
    puVar2 = puVar5;
    local_c = puVar4;
    puVar6 = puVar4;
    if ((param_3 <= puVar5) || (cVar3 = FUN_006f38d0(), cVar3 != '\0')) break;
    cVar3 = FUN_006f38d0();
  } while (cVar3 == '\0');
joined_r0x00706ac8:
  do {
    if (param_3 <= puVar5) {
joined_r0x00706b0b:
      while (param_2 < puVar4) {
        cVar3 = FUN_006f38d0();
        if (cVar3 == '\0') {
          cVar3 = FUN_006f38d0();
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
      goto joined_r0x00706ac8;
    }
    cVar3 = FUN_006f38d0();
    local_8 = puVar2;
    puVar4 = local_c;
    if (cVar3 == '\0') {
      cVar3 = FUN_006f38d0();
      if (cVar3 != '\0') goto joined_r0x00706b0b;
      local_8 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = *puVar5;
      *puVar5 = uVar1;
    }
    puVar5 = puVar5 + 1;
    puVar2 = local_8;
  } while( true );
}

