// FUN_006cbfc0 @ 006cbfc0 body=[[006cbfc0, 006cc101] [006cc104, 006cc17d] [006cc180, 006cc34c]]


undefined4 * FUN_006cbfc0(undefined4 *param_1,short *param_2,short *param_3,undefined4 param_4)

{
  short sVar1;
  char cVar2;
  short *local_18;
  short *local_14;
  short *local_10;
  short *local_c;
  
  local_10 = param_2 + (((int)param_3 - (int)param_2 >> 1) - ((int)param_3 - (int)param_2 >> 0x1f)
                       >> 1);
  FUN_006ccfb0(param_2,local_10,param_3 + -1,param_4);
  local_18 = local_10 + 1;
  while (((param_2 < local_10 &&
          (cVar2 = FUN_006bed80((int)local_10[-1],(int)*local_10), cVar2 == '\0')) &&
         (cVar2 = FUN_006bed80((int)*local_10,(int)local_10[-1]), cVar2 == '\0'))) {
    local_10 = local_10 + -1;
  }
  while (((local_18 < param_3 &&
          (cVar2 = FUN_006bed80((int)*local_18,(int)*local_10), cVar2 == '\0')) &&
         (cVar2 = FUN_006bed80((int)*local_10,(int)*local_18), cVar2 == '\0'))) {
    local_18 = local_18 + 1;
  }
  local_c = local_18;
  local_14 = local_10;
  do {
    while (param_3 <= local_c) {
LAB_006cc136:
      for (; param_2 < local_14; local_14 = local_14 + -1) {
        cVar2 = FUN_006bed80((int)local_14[-1],(int)*local_10);
        if (cVar2 == '\0') {
          cVar2 = FUN_006bed80((int)*local_10,(int)local_14[-1]);
          if (cVar2 != '\0') break;
          local_10 = local_10 + -1;
          FUN_006cd930(local_10,local_14 + -1);
        }
      }
      if ((local_14 == param_2) && (local_c == param_3)) {
        *param_1 = local_10;
        param_1[1] = local_18;
        return param_1;
      }
      if (local_14 == param_2) {
        if (local_18 != local_c) {
          FUN_006cd930(local_10,local_18);
        }
        local_18 = local_18 + 1;
        FUN_006cd930(local_10,local_c);
        local_c = local_c + 1;
        local_10 = local_10 + 1;
      }
      else if (local_c == param_3) {
        local_14 = local_14 + -1;
        local_10 = local_10 + -1;
        if (local_14 != local_10) {
          sVar1 = *local_14;
          *local_14 = *local_10;
          *local_10 = sVar1;
        }
        local_18 = local_18 + -1;
        sVar1 = *local_10;
        *local_10 = *local_18;
        *local_18 = sVar1;
      }
      else {
        local_14 = local_14 + -1;
        sVar1 = *local_c;
        *local_c = *local_14;
        *local_14 = sVar1;
        local_c = local_c + 1;
      }
    }
    cVar2 = FUN_006bed80((int)*local_10,(int)*local_c);
    if (cVar2 == '\0') {
      cVar2 = FUN_006bed80((int)*local_c,(int)*local_10);
      if (cVar2 != '\0') goto LAB_006cc136;
      FUN_006cd930(local_18,local_c);
      local_18 = local_18 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

