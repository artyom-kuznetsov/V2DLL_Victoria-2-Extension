// FUN_00444160 @ 00444160 body=[[00444160, 004442db]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00444160(undefined4 param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  int in_ECX;
  int local_18;
  undefined1 *local_14 [3];
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_14[2] = &LAB_00bb43c7;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  FUN_004bf300(0x40);
  local_18 = 0x40;
  do {
    puVar3 = (undefined4 *)FUN_00aae9af(0xa8);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = CMapIcon::vftable;
      puVar3[1] = "colonization_mapicon";
      puVar3[2] = param_1;
      *(undefined2 *)(puVar3 + 3) = 3;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 8) = 0;
      local_14[0] = (undefined1 *)puVar3;
      FUN_0043ee20();
      *puVar3 = CColonizationMapIcon::vftable;
      puVar3[0xb] = 0;
      puVar3[9] = 0x2d2d2d;
      puVar3[10] = 0;
      puVar3[0xd] = 0xfffffc18;
      puVar3[0xf] = CButtonObserverGlue<CColonizationMapIcon>::vftable;
      puVar3[0x10] = puVar3;
      puVar3[0x11] = &LAB_00442a40;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x20] = 0xf;
      puVar3[0x1f] = 0;
      *(undefined1 *)(puVar3 + 0x1b) = 0;
      puVar3[0x27] = 0xf;
      puVar3[0x26] = 0;
      *(undefined1 *)(puVar3 + 0x22) = 0;
      local_8 = CONCAT31(local_8._1_3_,4);
      puVar3[0x29] = 0;
      FUN_00442880();
    }
    local_8 = 0xffffffff;
    ppuVar1 = *(undefined4 ***)(in_ECX + 0x38);
    local_14[0] = (undefined1 *)puVar3;
    if ((local_14 < ppuVar1) && (ppuVar2 = *(undefined4 ***)(in_ECX + 0x34), ppuVar2 <= local_14)) {
      if (ppuVar1 == *(undefined4 ***)(in_ECX + 0x3c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x38) =
             *(undefined4 *)(*(uint *)(in_ECX + 0x34) + ((int)local_14 - (int)ppuVar2 >> 2) * 4);
      }
    }
    else {
      if (ppuVar1 == *(undefined4 ***)(in_ECX + 0x3c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x38) = puVar3;
      }
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 4;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  ExceptionList = local_14[1];
  return;
}

