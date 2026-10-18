// FUN_00443c80 @ 00443c80 body=[[00443c80, 00443e3a]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00443c80(undefined4 param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  int in_ECX;
  int local_18;
  undefined1 *local_14 [3];
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_14[2] = &LAB_00bb4475;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  FUN_004bf300(0x80);
  local_18 = 0x80;
  do {
    puVar3 = (undefined4 *)FUN_00aae9af(0xd8);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = CMapIcon::vftable;
      puVar3[1] = "unit_mapicon";
      puVar3[2] = param_1;
      *(undefined2 *)(puVar3 + 3) = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 8) = 0;
      local_14[0] = (undefined1 *)puVar3;
      FUN_0043ee20();
      *puVar3 = CUnitsStackMapIcon::vftable;
      puVar3[0xb] = CButtonObserverGlue<CUnitsStackMapIcon>::vftable;
      puVar3[0xc] = puVar3;
      puVar3[0xd] = FUN_0043fdf0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = CButtonObserverGlue<CUnitsStackMapIcon>::vftable;
      puVar3[0x17] = puVar3;
      puVar3[0x18] = FUN_0043fea0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1e] = 0;
      puVar3[0x1f] = &LAB_0043fe60;
      puVar3[0x20] = 0;
      puVar3[0x23] = 0;
      puVar3[0x25] = 0;
      puVar3[0x26] = 0;
      puVar3[0x27] = 0;
      puVar3[0x29] = 0;
      puVar3[0x2a] = 0;
      puVar3[0x2b] = 0xffffffff;
      puVar3[0x2c] = 0xffffffff;
      *(undefined1 *)(puVar3 + 0x2d) = 1;
      puVar3[0x2e] = 0;
      puVar3[0x34] = 0xf;
      puVar3[0x33] = 0;
      *(undefined1 *)(puVar3 + 0x2f) = 0;
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_0043fa50();
    }
    local_8 = 0xffffffff;
    ppuVar1 = *(undefined4 ***)(in_ECX + 8);
    local_14[0] = (undefined1 *)puVar3;
    if (local_14 < ppuVar1) {
      ppuVar2 = *(undefined4 ***)(in_ECX + 4);
      if (local_14 < ppuVar2) goto LAB_00443e06;
      if (ppuVar1 == *(undefined4 ***)(in_ECX + 0xc)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 8) =
             *(undefined4 *)(*(uint *)(in_ECX + 4) + ((int)local_14 - (int)ppuVar2 >> 2) * 4);
      }
    }
    else {
LAB_00443e06:
      if (ppuVar1 == *(undefined4 ***)(in_ECX + 0xc)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 8) = puVar3;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 4;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      ExceptionList = local_14[1];
      return;
    }
  } while( true );
}

