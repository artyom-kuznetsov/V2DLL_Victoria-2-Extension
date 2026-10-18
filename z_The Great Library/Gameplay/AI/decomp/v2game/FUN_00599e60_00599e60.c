// FUN_00599e60 @ 00599e60 body=[[00599e60, 00599f54] [00599f58, 00599ffa] [00599ffe, 0059a05e] [0059a062, 0059a0c7] [0059a0cb, 0059a130] [0059a134, 0059a199] [0059a19d, 0059a248] [0059a24c, 0059a2e8] [0059a2ec, 0059a34c] [0059a350, 0059a3de]]


void FUN_00599e60(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int *piVar2;
  int *local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b62613;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_13c = in_ECX;
  FUN_00594010(param_1);
  FUN_004013e0(param_1);
  FUN_004013e0(param_1);
  FUN_004013e0(param_1);
  piVar2 = (int *)(in_ECX + 0x6c);
  local_140 = 0;
  do {
    if (*piVar2 != 0) {
      local_11c = 0xc;
      _sprintf(local_118,"%d",local_140);
      FUN_0099ff90(param_1);
      puVar1 = (undefined4 *)FUN_00990880();
      local_c = 0;
      local_11c = 1;
      if (0xf < (uint)puVar1[5]) {
        puVar1 = (undefined4 *)*puVar1;
      }
      __snprintf(local_118,0xff,"%s",puVar1);
      FUN_0099ff90(param_1);
      local_c = 0xffffffff;
      if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_138);
      }
      local_148 = *(undefined4 *)(*piVar2 + 8);
      local_144 = *(undefined4 *)(*piVar2 + 0xc);
      FUN_0099f020(&local_148);
    }
    local_140 = local_140 + 1;
    piVar2 = piVar2 + 1;
  } while (local_140 < 0x1e);
  puVar1 = (undefined4 *)FUN_00990880();
  local_c = 1;
  local_11c = 4;
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  __snprintf(local_118,0xff,"%s",puVar1);
  FUN_0099ff90(param_1);
  local_c = 0xffffffff;
  if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_138);
  }
  puVar1 = (undefined4 *)FUN_00990880();
  local_c = 2;
  local_11c = 0x10;
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  __snprintf(local_118,0xff,"%s",puVar1);
  FUN_0099ff90(param_1);
  local_c = 0xffffffff;
  if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_138);
  }
  puVar1 = (undefined4 *)FUN_00990880();
  local_c = 3;
  local_11c = 0x425;
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  __snprintf(local_118,0xff,"%s",puVar1);
  FUN_0099ff90(param_1);
  local_c = 0xffffffff;
  if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_138);
  }
  puVar1 = (undefined4 *)FUN_00990880();
  local_c = 4;
  local_11c = 1;
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  __snprintf(local_118,0xff,"%s",puVar1);
  FUN_0099ff90(param_1);
  local_c = 0xffffffff;
  if (local_124 < 0x10) {
    puVar1 = (undefined4 *)FUN_00990880();
    local_c = 5;
    local_11c = 3;
    if (0xf < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    __snprintf(local_118,0xff,"%s",puVar1);
    FUN_0099ff90(param_1);
    local_c = 0xffffffff;
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_138);
    }
    local_14c = (int *)(local_13c + 0xec);
    local_140 = 0;
    do {
      if (*local_14c != 0) {
        local_11c = 0xc;
        _sprintf(local_118,"%d",local_140);
        FUN_0099ff90(param_1);
        puVar1 = (undefined4 *)FUN_00990880();
        local_c = 6;
        local_11c = 1;
        if (0xf < (uint)puVar1[5]) {
          puVar1 = (undefined4 *)*puVar1;
        }
        __snprintf(local_118,0xff,"%s",puVar1);
        FUN_0099ff90(param_1);
        local_c = 0xffffffff;
        if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_138);
        }
        local_148 = *(undefined4 *)(*local_14c + 8);
        local_144 = *(undefined4 *)(*local_14c + 0xc);
        FUN_0099f020(&local_148);
      }
      local_14c = local_14c + 1;
      local_140 = local_140 + 1;
    } while (local_140 < 0x1e);
    puVar1 = (undefined4 *)FUN_00990880();
    local_c = 7;
    local_11c = 4;
    if (0xf < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    __snprintf(local_118,0xff,"%s",puVar1);
    FUN_0099ff90(param_1);
    local_c = 0xffffffff;
    if (local_124 < 0x10) {
      puVar1 = (undefined4 *)FUN_00990880();
      local_c = 8;
      local_11c = 0x10;
      if (0xf < (uint)puVar1[5]) {
        puVar1 = (undefined4 *)*puVar1;
      }
      __snprintf(local_118,0xff,"%s",puVar1);
      FUN_0099ff90(param_1);
      local_c = 0xffffffff;
      if (local_124 < 0x10) {
        piVar2 = *(int **)(local_13c + 0x16c);
        while (piVar2 != (int *)0x0) {
          local_148 = *(undefined4 *)(*piVar2 + 8);
          local_144 = *(undefined4 *)(*piVar2 + 0xc);
          piVar2 = (int *)piVar2[2];
          FUN_009a0940(param_1);
          FUN_0099f020(&local_148);
        }
        piVar2 = *(int **)(local_13c + 0x17c);
        while (piVar2 != (int *)0x0) {
          local_148 = *(undefined4 *)(*piVar2 + 8);
          local_144 = *(undefined4 *)(*piVar2 + 0xc);
          piVar2 = (int *)piVar2[2];
          FUN_009a0940(param_1);
          FUN_0099f020(&local_148);
        }
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_138);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_138);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_138);
}

