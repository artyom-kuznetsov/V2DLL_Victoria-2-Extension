// FUN_00444040 @ 00444040 body=[[00444040, 00444159]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00444040(undefined4 param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  int in_ECX;
  int local_18;
  undefined1 *local_14 [3];
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_14[2] = &LAB_00b51efe;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  FUN_004bf300(0x40);
  local_18 = 0x40;
  do {
    puVar3 = (undefined4 *)FUN_00aae9af(0x50);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = CMapIcon::vftable;
      puVar3[1] = "siege_mapicon";
      puVar3[2] = param_1;
      *(undefined2 *)(puVar3 + 3) = 2;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 8) = 0;
      local_14[0] = (undefined1 *)puVar3;
      FUN_0043ee20();
      *puVar3 = CSiegeMapIcon::vftable;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0x12] = 0xf;
      puVar3[0x11] = 0;
      *(undefined1 *)(puVar3 + 0xd) = 0;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004422d0();
    }
    local_8 = 0xffffffff;
    ppuVar1 = *(undefined4 ***)(in_ECX + 0x28);
    local_14[0] = (undefined1 *)puVar3;
    if (local_14 < ppuVar1) {
      ppuVar2 = *(undefined4 ***)(in_ECX + 0x24);
      if (local_14 < ppuVar2) goto LAB_00444125;
      if (ppuVar1 == *(undefined4 ***)(in_ECX + 0x2c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 0x28) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x28) =
             *(undefined4 *)(*(uint *)(in_ECX + 0x24) + ((int)local_14 - (int)ppuVar2 >> 2) * 4);
      }
    }
    else {
LAB_00444125:
      if (ppuVar1 == *(undefined4 ***)(in_ECX + 0x2c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 0x28) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x28) = puVar3;
      }
    }
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 4;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      ExceptionList = local_14[1];
      return;
    }
  } while( true );
}

