// FUN_007877e0 @ 007877e0 body=[[007877e0, 0078781c] [00787820, 0078799b]]


void FUN_007877e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  FUN_00787da0(puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (cVar3 = FUN_0077f4e0(&param_4,*puVar5), cVar3 == '\0')) &&
         (cVar3 = FUN_0077f4e0(&param_4,puVar5[-1]), cVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (cVar3 = FUN_0077f4e0(&param_4,*puVar5), cVar3 != '\0')) break;
    cVar3 = FUN_0077f4e0(&param_4,*puVar6);
  } while (cVar3 == '\0');
joined_r0x00787887:
  do {
    if (param_3 <= puVar6) {
joined_r0x007878d2:
      for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
        cVar3 = FUN_0077f4e0(&param_4,*puVar5);
        if (cVar3 == '\0') {
          cVar3 = FUN_0077f4e0(&param_4,puVar4[-1]);
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
      goto joined_r0x00787887;
    }
    cVar3 = FUN_0077f4e0(&param_4,*puVar6);
    local_8 = puVar2;
    if (cVar3 == '\0') {
      cVar3 = FUN_0077f4e0(&param_4,*puVar5);
      if (cVar3 != '\0') goto joined_r0x007878d2;
      local_8 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = *puVar6;
      *puVar6 = uVar1;
    }
    puVar6 = puVar6 + 1;
    puVar2 = local_8;
  } while( true );
}

