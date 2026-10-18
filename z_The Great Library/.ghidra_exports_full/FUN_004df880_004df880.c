// FUN_004df880 @ 004df880 body=[[004df880, 004dfae9] [004dfaf0, 004dff07]]


void FUN_004df880(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 local_2ec [352];
  undefined1 local_18c [356];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b515bb;
  local_10 = ExceptionList;
  uVar5 = ((int)(param_3 - param_2) / 0x2c0) * 0x160 + param_2;
  ExceptionList = &local_10;
  FUN_004e0110(uVar5,param_3 - 0x160,param_4);
  local_24 = uVar5 + 0x160;
  local_1c = uVar5;
  if (param_2 < uVar5) {
    puVar6 = (uint *)(uVar5 - 0x148);
    do {
      uVar5 = *puVar6;
      uVar1 = puVar6[0x58];
      if (uVar5 < puVar6[0x58]) {
        uVar1 = uVar5;
      }
      uVar1 = FUN_00414bd0(uVar1);
      if (uVar1 == 0) {
        if (uVar5 < puVar6[0x58]) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = (uint)(uVar5 != puVar6[0x58]);
        }
      }
      if ((int)uVar1 < 0) break;
      uVar1 = puVar6[0x58];
      if (uVar5 <= puVar6[0x58]) {
        uVar1 = uVar5;
      }
      uVar1 = FUN_00414bd0(uVar1);
      if (uVar1 == 0) {
        if (puVar6[0x58] < uVar5) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = (uint)(puVar6[0x58] != uVar5);
        }
      }
      if ((int)uVar1 < 0) break;
      local_1c = local_1c - 0x160;
      puVar6 = puVar6 + -0x58;
    } while (param_2 < local_1c);
  }
  if (local_24 < param_3) {
    local_20 = *(uint *)(local_1c + 0x18);
    local_14 = *(uint **)(local_1c + 0x1c);
    local_18 = (uint *)(local_24 + 0x18);
    do {
      uVar5 = *local_18;
      uVar1 = local_20;
      if (uVar5 < local_20) {
        uVar1 = uVar5;
      }
      uVar1 = FUN_00414bd0(uVar1);
      if (uVar1 == 0) {
        if (uVar5 < local_20) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = (uint)(uVar5 != local_20);
        }
      }
      if ((int)uVar1 < 0) break;
      uVar1 = local_20;
      if (uVar5 <= local_20) {
        uVar1 = uVar5;
      }
      uVar1 = FUN_00414bd0(uVar1);
      if (uVar1 == 0) {
        if (local_20 < uVar5) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = (uint)(local_20 != uVar5);
        }
      }
      if ((int)uVar1 < 0) break;
      local_18 = local_18 + 0x58;
      local_24 = local_24 + 0x160;
    } while (local_24 < param_3);
  }
  local_28 = local_24;
  local_20 = local_1c;
  uVar5 = local_24;
  do {
    uVar1 = local_28;
    if (uVar5 < param_3) {
      local_18 = (uint *)(local_1c + 8);
      local_14 = (uint *)(uVar5 + 0x18);
      do {
        uVar1 = *local_14;
        uVar4 = local_18[4];
        uVar2 = uVar4;
        if (uVar1 <= uVar4) {
          uVar2 = uVar1;
        }
        uVar2 = FUN_00414bd0(uVar2);
        if (uVar2 == 0) {
          if (uVar4 < uVar1) {
            uVar2 = 0xffffffff;
          }
          else {
            uVar2 = (uint)(uVar4 != uVar1);
          }
        }
        if (-1 < (int)uVar2) {
          uVar2 = uVar1;
          if (uVar4 <= uVar1) {
            uVar2 = uVar4;
          }
          uVar3 = FUN_00414bd0(uVar2);
          uVar2 = local_24;
          if (uVar3 == 0) {
            if (uVar1 < uVar4) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = (uint)(uVar1 != uVar4);
            }
          }
          uVar1 = uVar5;
          if ((int)uVar3 < 0) break;
          local_24 = local_24 + 0x160;
          FUN_004dff10(local_18c,uVar2);
          local_8 = 0;
          FUN_004dcf00(uVar5);
          FUN_004dcf00(local_18c);
          local_8 = 0xffffffff;
          FUN_004dd290(local_18c);
        }
        local_14 = local_14 + 0x58;
        uVar5 = uVar5 + 0x160;
        uVar1 = uVar5;
      } while (uVar5 < param_3);
    }
    local_28 = uVar1;
    if (param_2 < local_20) {
      local_18 = (uint *)(local_1c + 0x18);
      local_14 = (uint *)(local_20 - 0x148);
      do {
        uVar5 = *local_18;
        uVar1 = *local_14;
        uVar4 = uVar1;
        if (uVar5 <= uVar1) {
          uVar4 = uVar5;
        }
        uVar4 = FUN_00414bd0(uVar4);
        if (uVar4 == 0) {
          if (uVar1 < uVar5) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(uVar1 != uVar5);
          }
        }
        if (-1 < (int)uVar4) {
          uVar4 = uVar5;
          if (uVar1 <= uVar5) {
            uVar4 = uVar1;
          }
          uVar4 = FUN_00414bd0(uVar4);
          if (uVar4 == 0) {
            if (uVar5 < uVar1) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar5 != uVar1);
            }
          }
          if ((int)uVar4 < 0) break;
          local_18 = local_18 + -0x58;
          local_1c = local_1c - 0x160;
          FUN_004dff10(local_18c,local_1c);
          local_8 = 1;
          FUN_004dcf00(local_14 + -6);
          FUN_004dcf00(local_18c);
          local_8 = 0xffffffff;
          FUN_004dd290(local_18c);
        }
        local_14 = local_14 + -0x58;
        local_20 = local_20 - 0x160;
      } while (param_2 < local_20);
    }
    uVar1 = local_24;
    uVar5 = local_28;
    if (local_20 == param_2) {
      if (local_28 == param_3) {
        *param_1 = local_1c;
        param_1[1] = local_24;
        ExceptionList = local_10;
        return;
      }
      if (local_24 != local_28) {
        FUN_004dff10(local_18c,local_1c);
        local_8 = 2;
        FUN_004dcf00(uVar1);
        FUN_004dcf00(local_18c);
        local_8 = 0xffffffff;
        FUN_004dd290(local_18c);
      }
      uVar4 = local_1c;
      uVar1 = local_28;
      local_24 = local_24 + 0x160;
      local_1c = local_1c + 0x160;
      uVar5 = local_28 + 0x160;
      local_28 = uVar5;
      FUN_004dff10(local_18c,uVar4);
      local_8 = 3;
      FUN_004dcf00(uVar1);
      FUN_004dcf00(local_18c);
      local_8 = 0xffffffff;
      FUN_004dd290(local_18c);
    }
    else {
      uVar1 = local_20 - 0x160;
      local_20 = uVar1;
      if (local_28 == param_3) {
        uVar5 = local_1c - 0x160;
        local_1c = uVar5;
        if (uVar1 != uVar5) {
          FUN_004dff10(local_18c,uVar1);
          local_8 = 4;
          FUN_004dcf00(uVar5);
          FUN_004dcf00(local_18c);
          local_8 = 0xffffffff;
          FUN_004dd290(local_18c);
        }
        uVar1 = local_24 - 0x160;
        local_24 = uVar1;
        FUN_004dff10(local_18c,uVar5);
        local_8 = 5;
        FUN_004dcf00(uVar1);
        FUN_004dcf00(local_18c);
        local_8 = 0xffffffff;
        FUN_004dd290(local_18c);
        uVar5 = local_28;
      }
      else {
        FUN_004dff10(local_2ec,local_28);
        local_8 = 6;
        FUN_004dcf00(uVar1);
        FUN_004dcf00(local_2ec);
        local_8 = 0xffffffff;
        FUN_004dd290(local_2ec);
        uVar5 = uVar5 + 0x160;
        local_28 = uVar5;
      }
    }
  } while( true );
}

