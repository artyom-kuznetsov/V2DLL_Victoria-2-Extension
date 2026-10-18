// FUN_006cb9b0 @ 006cb9b0 body=[[006cb9b0, 006cbaea] [006cbaed, 006cbb62] [006cbb65, 006cbcf2]]


undefined4 *
FUN_006cb9b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_10 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f)
                       >> 1);
  FUN_006cc3c0(param_2,local_10,param_3 + -1,param_4,param_5);
  local_18 = local_10 + 1;
  while (((param_2 < local_10 && (cVar2 = FUN_006bee40(local_10[-1],*local_10), cVar2 == '\0')) &&
         (cVar2 = FUN_006bee40(*local_10,local_10[-1]), cVar2 == '\0'))) {
    local_10 = local_10 + -1;
  }
  while (((local_18 < param_3 && (cVar2 = FUN_006bee40(*local_18,*local_10), cVar2 == '\0')) &&
         (cVar2 = FUN_006bee40(*local_10,*local_18), cVar2 == '\0'))) {
    local_18 = local_18 + 1;
  }
  local_c = local_18;
  local_14 = local_10;
  do {
    while (param_3 <= local_c) {
LAB_006cbb1f:
      for (; param_2 < local_14; local_14 = local_14 + -1) {
        cVar2 = FUN_006bee40(local_14[-1],*local_10);
        if (cVar2 == '\0') {
          cVar2 = FUN_006bee40(*local_10,local_14[-1]);
          if (cVar2 != '\0') break;
          local_10 = local_10 + -1;
          FUN_006cd2d0(local_10,local_14 + -1);
        }
      }
      if ((local_14 == param_2) && (local_c == param_3)) {
        *param_1 = local_10;
        param_1[1] = local_18;
        return param_1;
      }
      if (local_14 == param_2) {
        if (local_18 != local_c) {
          FUN_006cd2d0(local_10,local_18);
        }
        local_18 = local_18 + 1;
        FUN_006cd2d0(local_10,local_c);
        local_c = local_c + 1;
        local_10 = local_10 + 1;
      }
      else if (local_c == param_3) {
        local_14 = local_14 + -1;
        local_10 = local_10 + -1;
        if (local_14 != local_10) {
          FUN_006cd2d0(local_14,local_10);
        }
        local_18 = local_18 + -1;
        FUN_006cd2d0(local_10,local_18);
      }
      else {
        local_14 = local_14 + -1;
        uVar1 = *local_c;
        *local_c = *local_14;
        *local_14 = uVar1;
        local_c = local_c + 1;
      }
    }
    cVar2 = FUN_006bee40(*local_10,*local_c);
    if (cVar2 == '\0') {
      cVar2 = FUN_006bee40(*local_c,*local_10);
      if (cVar2 != '\0') goto LAB_006cbb1f;
      FUN_006cd2d0(local_18,local_c);
      local_18 = local_18 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

