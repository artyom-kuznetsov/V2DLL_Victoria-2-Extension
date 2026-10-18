// FUN_006ccb00 @ 006ccb00 body=[[006ccb00, 006cccba] [006cccbd, 006ccd67] [006ccd6a, 006ccf37]]


undefined4 *
FUN_006ccb00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_10 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f)
                       >> 1);
  FUN_006cd5e0(param_2,local_10,param_3 + -1,param_4);
  local_18 = local_10 + 1;
  for (; param_2 < local_10; local_10 = local_10 + -1) {
    FUN_00491020();
    FUN_00491020();
    cVar2 = FUN_00424660();
    if (cVar2 != '\0') break;
    FUN_00491020();
    FUN_00491020();
    cVar2 = FUN_00424660();
    if (cVar2 != '\0') break;
  }
  do {
    if (param_3 <= local_18) break;
    FUN_00491020();
    FUN_00491020();
    cVar2 = FUN_00424660();
    if (cVar2 != '\0') break;
    FUN_00491020();
    FUN_00491020();
    cVar2 = FUN_00424660();
    if (cVar2 != '\0') break;
    local_18 = local_18 + 1;
  } while( true );
  local_c = local_18;
  local_14 = local_10;
  do {
    while (param_3 <= local_c) {
LAB_006cccf6:
      for (; param_2 < local_14; local_14 = local_14 + -1) {
        FUN_00491020();
        FUN_00491020();
        cVar2 = FUN_00424660();
        if (cVar2 == '\0') {
          FUN_00491020();
          FUN_00491020();
          cVar2 = FUN_00424660();
          if (cVar2 != '\0') break;
          local_10 = local_10 + -1;
          uVar1 = *local_10;
          *local_10 = local_14[-1];
          local_14[-1] = uVar1;
        }
      }
      if ((local_14 == param_2) && (local_c == param_3)) {
        *param_1 = local_10;
        param_1[1] = local_18;
        return param_1;
      }
      if (local_14 == param_2) {
        if (local_18 != local_c) {
          uVar1 = *local_10;
          *local_10 = *local_18;
          *local_18 = uVar1;
        }
        local_18 = local_18 + 1;
        uVar1 = *local_10;
        *local_10 = *local_c;
        *local_c = uVar1;
        local_c = local_c + 1;
        local_10 = local_10 + 1;
      }
      else if (local_c == param_3) {
        local_14 = local_14 + -1;
        local_10 = local_10 + -1;
        if (local_14 != local_10) {
          uVar1 = *local_14;
          *local_14 = *local_10;
          *local_10 = uVar1;
        }
        local_18 = local_18 + -1;
        uVar1 = *local_10;
        *local_10 = *local_18;
        *local_18 = uVar1;
      }
      else {
        local_14 = local_14 + -1;
        uVar1 = *local_c;
        *local_c = *local_14;
        *local_14 = uVar1;
        local_c = local_c + 1;
      }
    }
    FUN_00491020();
    FUN_00491020();
    cVar2 = FUN_00424660();
    if (cVar2 == '\0') {
      FUN_00491020();
      FUN_00491020();
      cVar2 = FUN_00424660();
      if (cVar2 != '\0') goto LAB_006cccf6;
      uVar1 = *local_18;
      *local_18 = *local_c;
      *local_c = uVar1;
      local_18 = local_18 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

