// FUN_006cc640 @ 006cc640 body=[[006cc640, 006cc7fa] [006cc7fd, 006cc8a7] [006cc8aa, 006cca77]]


undefined4 *
FUN_006cc640(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_10 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f)
                       >> 1);
  FUN_006cd3c0(param_2,local_10,param_3 + -1,param_4);
  local_18 = local_10 + 1;
  for (; param_2 < local_10; local_10 = local_10 + -1) {
    iVar2 = FUN_004f3500();
    iVar3 = FUN_004f3500();
    if (iVar3 < iVar2) break;
    iVar2 = FUN_004f3500();
    iVar3 = FUN_004f3500();
    if (iVar3 < iVar2) break;
  }
  do {
    if (param_3 <= local_18) break;
    iVar2 = FUN_004f3500();
    iVar3 = FUN_004f3500();
    if (iVar3 < iVar2) break;
    iVar2 = FUN_004f3500();
    iVar3 = FUN_004f3500();
    if (iVar3 < iVar2) break;
    local_18 = local_18 + 1;
  } while( true );
  local_c = local_18;
  local_14 = local_10;
  do {
    while (param_3 <= local_c) {
LAB_006cc836:
      for (; param_2 < local_14; local_14 = local_14 + -1) {
        iVar2 = FUN_004f3500();
        iVar3 = FUN_004f3500();
        if (iVar2 <= iVar3) {
          iVar2 = FUN_004f3500();
          iVar3 = FUN_004f3500();
          if (iVar3 < iVar2) break;
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
    iVar2 = FUN_004f3500();
    iVar3 = FUN_004f3500();
    if (iVar2 <= iVar3) {
      iVar2 = FUN_004f3500();
      iVar3 = FUN_004f3500();
      if (iVar3 < iVar2) goto LAB_006cc836;
      uVar1 = *local_18;
      *local_18 = *local_c;
      *local_c = uVar1;
      local_18 = local_18 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

