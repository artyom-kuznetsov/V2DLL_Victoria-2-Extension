// FUN_00707230 @ 00707230 body=[[00707230, 007073cf]]


void FUN_00707230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_8;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00708510(param_3 + -1,param_4);
  puVar6 = puVar5;
  while (((param_2 < puVar6 && (cVar3 = FUN_006f3820(puVar6[-1]), cVar3 == '\0')) &&
         (cVar3 = FUN_006f3820(*puVar6), cVar3 == '\0'))) {
    puVar6 = puVar6 + -1;
  }
  do {
    puVar5 = puVar5 + 1;
    puVar2 = puVar5;
    puVar4 = puVar6;
    if ((param_3 <= puVar5) || (cVar3 = FUN_006f3820(*puVar5), cVar3 != '\0')) break;
    cVar3 = FUN_006f3820(*puVar6);
  } while (cVar3 == '\0');
joined_r0x007072cb:
  do {
    if (param_3 <= puVar5) {
joined_r0x0070730a:
      for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
        cVar3 = FUN_006f3820(puVar4[-1]);
        if (cVar3 == '\0') {
          cVar3 = FUN_006f3820(*puVar6);
          if (cVar3 != '\0') break;
          uVar1 = puVar6[-1];
          puVar6 = puVar6 + -1;
          *puVar6 = puVar4[-1];
          puVar4[-1] = uVar1;
        }
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
        puVar6 = puVar6 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      else {
        puVar4 = puVar4 + -1;
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
      goto joined_r0x007072cb;
    }
    cVar3 = FUN_006f3820(*puVar6);
    local_8 = puVar2;
    if (cVar3 == '\0') {
      cVar3 = FUN_006f3820(*puVar5);
      if (cVar3 != '\0') goto joined_r0x0070730a;
      local_8 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = *puVar5;
      *puVar5 = uVar1;
    }
    puVar5 = puVar5 + 1;
    puVar2 = local_8;
  } while( true );
}

