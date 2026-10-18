// FUN_005e17f0 @ 005e17f0 body=[[005e17f0, 005e1829] [005e1830, 005e18eb] [005e18ef, 005e191c] [005e1920, 005e195c]]


void FUN_005e17f0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  uint local_154;
  undefined4 local_144;
  uint local_140;
  uint local_138;
  undefined4 local_128;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b5f616;
  puVar2 = *(undefined4 **)(in_ECX + 0x3c);
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      local_c = 0xffffffff;
      FUN_009a2520(param_1);
      ExceptionList = local_14;
      return;
    }
    local_c = 0xffffffff;
    local_160 = *puVar2;
    puVar1 = (undefined4 *)puVar2[0xb];
    local_15c = puVar2[1];
    local_158 = puVar2[2];
    local_140 = 0xf;
    local_144 = 0;
    local_154 = local_154 & 0xffffff00;
    FUN_00408ed0(puVar2 + 3,0,0xffffffff);
    local_c = 0;
    FUN_009a0940(param_1);
    local_168 = local_15c;
    local_164 = local_158;
    FUN_0099f020(&local_168);
    puVar2 = (undefined4 *)FUN_00990880();
    local_c = CONCAT31(local_c._1_3_,1);
    local_11c = 0x10;
    if (0xf < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    __snprintf(local_118,0xff,"%s",puVar2);
    FUN_0099ff90(param_1);
    if (0xf < local_124) break;
    local_c = 0xffffffff;
    local_124 = 0xf;
    local_128 = 0;
    local_138 = local_138 & 0xffffff00;
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_154);
    }
    local_140 = 0xf;
    local_144 = 0;
    local_154 = local_154 & 0xffffff00;
    puVar2 = puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_138);
}

