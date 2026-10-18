// FUN_00848930 @ 00848930 body=[[00848930, 00848b37]]


void FUN_00848930(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  uint local_8;
  
  local_c = ((int)(param_3 - param_2) / 200) * 100 + param_2;
  FUN_00849000(local_c,param_3 - 100,param_4);
  uVar2 = local_c + 100;
  for (; param_2 < local_c; local_c = local_c - 100) {
    if ((*(int *)(local_c + 4) < *(int *)(local_c - 0x60)) ||
       (*(int *)(local_c - 0x60) < *(int *)(local_c + 4))) break;
  }
  local_8 = uVar2;
  uVar3 = local_c;
  if (uVar2 < param_3) {
    do {
      local_8 = uVar2;
      if ((*(int *)(local_c + 4) < *(int *)(uVar2 + 4)) ||
         (*(int *)(uVar2 + 4) < *(int *)(local_c + 4))) break;
      uVar2 = uVar2 + 100;
      local_8 = uVar2;
    } while (uVar2 < param_3);
  }
joined_r0x008489ba:
  do {
    uVar1 = local_c;
    if (param_3 <= uVar2) {
joined_r0x00848a04:
      for (; param_2 < local_c; local_c = local_c - 100) {
        if (*(int *)(uVar1 - 0x60) <= *(int *)(uVar3 + 4)) {
          if (*(int *)(uVar1 - 0x60) < *(int *)(uVar3 + 4)) break;
          uVar3 = uVar3 - 100;
          FUN_00849680();
          FUN_00849680();
          FUN_00849680();
        }
        uVar1 = uVar1 - 100;
      }
      if (local_c == param_2) {
        if (uVar2 == param_3) {
          *param_1 = uVar3;
          param_1[1] = local_8;
          return;
        }
        if (local_8 != uVar2) {
          FUN_00849680();
          FUN_00849680();
          FUN_00849680();
        }
        local_8 = local_8 + 100;
        uVar3 = uVar3 + 100;
        uVar2 = uVar2 + 100;
        FUN_00849680();
      }
      else {
        local_c = local_c - 100;
        if (uVar2 != param_3) {
          FUN_00849680();
          FUN_00849680();
          FUN_00849680();
          uVar2 = uVar2 + 100;
          goto joined_r0x008489ba;
        }
        uVar3 = uVar3 - 100;
        if (local_c != uVar3) {
          FUN_00849680();
          FUN_00849680();
          FUN_00849680();
        }
        local_8 = local_8 - 100;
        FUN_00849680();
      }
      FUN_00849680();
      FUN_00849680();
      goto joined_r0x008489ba;
    }
    if (*(int *)(uVar3 + 4) <= *(int *)(uVar2 + 4)) {
      if (*(int *)(uVar3 + 4) < *(int *)(uVar2 + 4)) goto joined_r0x00848a04;
      local_8 = local_8 + 100;
      FUN_00849680();
      FUN_00849680();
      FUN_00849680();
    }
    uVar2 = uVar2 + 100;
  } while( true );
}

