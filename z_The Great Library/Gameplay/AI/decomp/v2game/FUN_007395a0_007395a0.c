// FUN_007395a0 @ 007395a0 body=[[007395a0, 00739b82]]


void FUN_007395a0(uint *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43830;
  local_10 = ExceptionList;
  local_18 = param_2 + ((int)(param_3 - param_2) / 0x50) * 0x28;
  ExceptionList = &local_10;
  FUN_0073a1e0();
  uVar3 = local_18 + 0x28;
  if (param_2 < local_18) {
    iVar2 = local_18 - 0x24;
    do {
      FUN_00408ed0();
      local_8 = 0;
      FUN_00408ed0(iVar2 + 8,0,0xffffffff);
      local_8 = 0xffffffff;
      cVar1 = FUN_0072fd90();
      if (cVar1 != '\0') break;
      FUN_00408ed0();
      local_8 = 1;
      FUN_00408ed0(iVar2 + 0x30,0,0xffffffff);
      local_8 = 0xffffffff;
      cVar1 = FUN_0072fd90();
      if (cVar1 != '\0') break;
      local_18 = local_18 - 0x28;
      iVar2 = iVar2 + -0x28;
    } while (param_2 < local_18);
  }
  uVar4 = uVar3;
  local_14 = uVar3;
  uVar6 = local_18;
  if (uVar3 < param_3) {
    while( true ) {
      FUN_00408ed0();
      local_8 = 2;
      FUN_00408ed0(uVar3 + 0xc,0,0xffffffff);
      local_8 = 0xffffffff;
      cVar1 = FUN_0072fd90();
      uVar4 = uVar3;
      local_14 = uVar3;
      if (cVar1 != '\0') break;
      FUN_00408ed0();
      local_8 = 3;
      FUN_00408ed0(local_18 + 0xc,0,0xffffffff);
      local_8 = 0xffffffff;
      cVar1 = FUN_0072fd90();
      if ((cVar1 != '\0') ||
         (uVar3 = uVar3 + 0x28, uVar4 = uVar3, local_14 = uVar3, param_3 <= uVar3)) break;
    }
  }
joined_r0x00739857:
  do {
    if (param_3 <= uVar3) {
LAB_00739994:
      if (param_2 < local_18) {
        iVar2 = local_18 - 0x24;
        do {
          FUN_00408ed0();
          local_8 = 6;
          FUN_00408ed0(iVar2 + 8,0,0xffffffff);
          local_8 = 0xffffffff;
          cVar1 = FUN_0072fd90();
          if (cVar1 == '\0') {
            FUN_00408ed0();
            local_8 = 7;
            FUN_00408ed0(uVar6 + 0xc,0,0xffffffff);
            local_8 = 0xffffffff;
            cVar1 = FUN_0072fd90();
            uVar4 = local_14;
            if (cVar1 != '\0') break;
            uVar6 = uVar6 - 0x28;
            FUN_0073aa80();
          }
          local_18 = local_18 - 0x28;
          iVar2 = iVar2 + -0x28;
          uVar4 = local_14;
        } while (param_2 < local_18);
      }
      if (local_18 == param_2) {
        if (uVar3 == param_3) {
          *param_1 = uVar6;
          param_1[1] = uVar4;
          ExceptionList = local_10;
          return;
        }
        uVar5 = uVar4;
        if (uVar4 != uVar3) {
          FUN_0073aa80();
          uVar5 = local_14;
        }
        uVar3 = uVar3 + 0x28;
        FUN_0073aa80();
        uVar4 = uVar5 + 0x28;
        local_14 = uVar5 + 0x28;
        uVar6 = uVar6 + 0x28;
      }
      else {
        local_18 = local_18 - 0x28;
        if (uVar3 == param_3) {
          uVar5 = uVar4;
          if (local_18 != uVar6 - 0x28) {
            FUN_0073aa80();
            uVar5 = local_14;
          }
          FUN_0073aa80();
          uVar4 = uVar5 - 0x28;
          local_14 = uVar5 - 0x28;
          uVar6 = uVar6 - 0x28;
        }
        else {
          FUN_0073aa80();
          uVar3 = uVar3 + 0x28;
          uVar4 = local_14;
        }
      }
      goto joined_r0x00739857;
    }
    FUN_00408ed0();
    local_8 = 4;
    FUN_00408ed0(uVar6 + 0xc,0,0xffffffff);
    local_8 = 0xffffffff;
    cVar1 = FUN_0072fd90();
    if (cVar1 == '\0') {
      FUN_00408ed0();
      local_8 = 5;
      FUN_00408ed0(uVar3 + 0xc,0,0xffffffff);
      local_8 = 0xffffffff;
      cVar1 = FUN_0072fd90();
      if (cVar1 != '\0') goto LAB_00739994;
      uVar4 = uVar4 + 0x28;
      FUN_0073aa80();
      local_14 = uVar4;
    }
    uVar3 = uVar3 + 0x28;
  } while( true );
}

