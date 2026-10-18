// FUN_006b5790 @ 006b5790 body=[[006b5790, 006b5985]]


/* WARNING: Type propagation algorithm not settling */

void FUN_006b5790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_006b5bf0(puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && ((3 < param_4 || (cVar2 = FUN_006a8a40(param_4), cVar2 == '\0')))) &&
         ((3 < param_4 || (cVar2 = FUN_006a8a40(param_4), cVar2 == '\0'))))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar3 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || ((param_4 < 4 && (cVar2 = FUN_006a8a40(param_4), cVar2 != '\0'))))
    break;
  } while ((3 < param_4) || (cVar2 = FUN_006a8a40(param_4), cVar2 == '\0'));
joined_r0x006b5853:
  do {
    if (puVar6 < param_3) {
      if ((3 < param_4) || (cVar2 = FUN_006a8a40(param_4), local_8 = puVar3, cVar2 == '\0')) {
        if ((param_4 < 4) && (cVar2 = FUN_006a8a40(param_4), cVar2 != '\0'))
        goto joined_r0x006b58a5;
        local_8 = puVar3 + 1;
        uVar1 = *puVar3;
        *puVar3 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar3 = local_8;
      goto joined_r0x006b5853;
    }
joined_r0x006b58a5:
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      if ((3 < param_4) || (cVar2 = FUN_006a8a40(param_4), cVar2 == '\0')) {
        if ((param_4 < 4) && (cVar2 = FUN_006a8a40(param_4), cVar2 != '\0')) break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar3;
        return;
      }
      if (puVar3 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar3;
        *puVar3 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
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
        puVar3 = puVar3 + -1;
        *puVar5 = *puVar3;
        *puVar3 = uVar1;
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

