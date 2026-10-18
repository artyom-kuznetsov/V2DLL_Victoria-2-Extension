// FUN_006e0b30 @ 006e0b30 body=[[006e0b30, 006e0d25]]


void FUN_006e0b30(uint *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint local_10;
  uint local_8;
  
  uVar2 = ((int)(param_3 - param_2) / 0x60) * 0x30 + param_2;
  FUN_006e11d0(uVar2,param_4,param_5);
  uVar3 = uVar2;
  while (local_10 = uVar3, param_2 < local_10) {
    cVar1 = FUN_006cf130();
    if ((cVar1 != '\0') || (cVar1 = FUN_006cf130(), uVar3 = local_10 - 0x30, cVar1 != '\0')) break;
  }
  do {
    uVar2 = uVar2 + 0x30;
    local_8 = uVar2;
    uVar3 = local_10;
    if (param_3 <= uVar2) break;
    cVar1 = FUN_006cf130();
    if ((cVar1 != '\0') || (cVar1 = FUN_006cf130(), cVar1 != '\0')) break;
  } while( true );
joined_r0x006e0bf3:
  if (param_3 <= uVar2) {
joined_r0x006e0c3a:
    for (; param_2 < local_10; local_10 = local_10 - 0x30) {
      cVar1 = FUN_006cf130();
      if (cVar1 == '\0') {
        cVar1 = FUN_006cf130();
        if (cVar1 != '\0') break;
        uVar3 = uVar3 - 0x30;
        FUN_006e19d0();
      }
    }
    if (local_10 == param_2) {
      if (uVar2 == param_3) {
        *param_1 = uVar3;
        param_1[1] = local_8;
        return;
      }
      if (local_8 != uVar2) {
        FUN_006e19d0();
      }
      uVar2 = uVar2 + 0x30;
      FUN_006e19d0();
      local_8 = local_8 + 0x30;
      uVar3 = uVar3 + 0x30;
    }
    else {
      local_10 = local_10 - 0x30;
      if (uVar2 == param_3) {
        if (local_10 != uVar3 - 0x30) {
          FUN_006e19d0();
        }
        FUN_006e19d0();
        local_8 = local_8 - 0x30;
        uVar3 = uVar3 - 0x30;
      }
      else {
        FUN_006e19d0();
        uVar2 = uVar2 + 0x30;
      }
    }
    goto joined_r0x006e0bf3;
  }
  cVar1 = FUN_006cf130();
  if (cVar1 == '\0') {
    cVar1 = FUN_006cf130();
    if (cVar1 != '\0') goto joined_r0x006e0c3a;
    local_8 = local_8 + 0x30;
    FUN_006e19d0();
  }
  uVar2 = uVar2 + 0x30;
  goto joined_r0x006e0bf3;
}

