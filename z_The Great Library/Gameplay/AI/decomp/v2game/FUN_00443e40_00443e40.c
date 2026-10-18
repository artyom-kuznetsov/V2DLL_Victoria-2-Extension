// FUN_00443e40 @ 00443e40 body=[[00443e40, 00444037]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00443e40(undefined4 param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  int in_ECX;
  int local_18;
  undefined1 *local_14 [3];
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_14[2] = &LAB_00bb4425;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  FUN_004bf300(0x40);
  local_18 = 0x40;
  do {
    puVar3 = (undefined4 *)FUN_00aae9af(0x100);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = CMapIcon::vftable;
      puVar3[1] = "combat_mapicon";
      puVar3[2] = param_1;
      *(undefined2 *)(puVar3 + 3) = 1;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 8) = 0;
      local_14[0] = (undefined1 *)puVar3;
      FUN_0043ee20();
      *puVar3 = CCombatMapIcon::vftable;
      puVar3[0x11] = CButtonObserverGlue<CCombatMapIcon>::vftable;
      puVar3[0x12] = puVar3;
      puVar3[0x13] = FUN_00441170;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1c] = CButtonObserverGlue<CCombatMapIcon>::vftable;
      puVar3[0x1d] = puVar3;
      puVar3[0x1e] = &LAB_00441260;
      puVar3[0x1f] = 0;
      puVar3[0x20] = 0;
      puVar3[0x21] = 0;
      puVar3[0x22] = 0;
      puVar3[0x23] = 0;
      puVar3[0x24] = 0;
      puVar3[0x25] = 0;
      puVar3[0x26] = 0;
      puVar3[0x27] = CButtonObserverGlue<CCombatMapIcon>::vftable;
      puVar3[0x28] = puVar3;
      puVar3[0x29] = &LAB_00441280;
      puVar3[0x2a] = 0;
      puVar3[0x2b] = 0;
      puVar3[0x2c] = 0;
      puVar3[0x2d] = 0;
      puVar3[0x2e] = 0;
      puVar3[0x2f] = 0;
      puVar3[0x30] = 0;
      puVar3[0x31] = 0;
      puVar3[0x32] = 0;
      puVar3[0x33] = 0;
      puVar3[0x34] = 0;
      puVar3[0x35] = 0;
      puVar3[0x36] = 0;
      puVar3[0x37] = 0;
      puVar3[0x38] = 0;
      puVar3[0x3e] = 0xf;
      puVar3[0x3d] = 0;
      *(undefined1 *)(puVar3 + 0x39) = 0;
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00440d70();
    }
    local_8 = 0xffffffff;
    ppuVar1 = *(undefined4 ***)(in_ECX + 0x18);
    local_14[0] = (undefined1 *)puVar3;
    if (local_14 < ppuVar1) {
      ppuVar2 = *(undefined4 ***)(in_ECX + 0x14);
      if (local_14 < ppuVar2) goto LAB_00444003;
      if (ppuVar1 == *(undefined4 ***)(in_ECX + 0x1c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 0x18) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x18) =
             *(undefined4 *)(*(uint *)(in_ECX + 0x14) + ((int)local_14 - (int)ppuVar2 >> 2) * 4);
      }
    }
    else {
LAB_00444003:
      if (ppuVar1 == *(undefined4 ***)(in_ECX + 0x1c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 0x18) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x18) = puVar3;
      }
    }
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 4;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      ExceptionList = local_14[1];
      return;
    }
  } while( true );
}

