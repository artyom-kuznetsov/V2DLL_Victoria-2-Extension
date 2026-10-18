// FUN_007cb450 @ 007cb450 body=[[007cb450, 007cb5ed]]


void FUN_007cb450(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007ced20(puVar6,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (cVar3 = FUN_007c6ad0(), cVar3 == '\0')) &&
         (cVar3 = FUN_007c6ad0(), cVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (cVar3 = FUN_007c6ad0(), cVar3 != '\0')) break;
    cVar3 = FUN_007c6ad0();
  } while (cVar3 == '\0');
joined_r0x007cb4f4:
  do {
    if (puVar6 < param_3) {
      cVar3 = FUN_007c6ad0();
      local_8 = puVar2;
      if (cVar3 == '\0') {
        cVar3 = FUN_007c6ad0();
        if (cVar3 != '\0') goto joined_r0x007cb52e;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x007cb4f4;
    }
joined_r0x007cb52e:
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      cVar3 = FUN_007c6ad0();
      if (cVar3 == '\0') {
        cVar3 = FUN_007c6ad0();
        if (cVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 + -1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 + -1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 + -1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

