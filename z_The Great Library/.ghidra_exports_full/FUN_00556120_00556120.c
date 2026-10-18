// FUN_00556120 @ 00556120 body=[[00556120, 00556373]]


void FUN_00556120(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int *local_10;
  int *local_c;
  undefined4 *local_8;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00557ea0(puVar5,param_3 + -1,param_4);
  puVar6 = puVar5 + 1;
  local_8 = puVar6;
  if (param_2 < puVar5) {
    while( true ) {
      local_c = (int *)FUN_004468a0(&local_10);
      piVar3 = (int *)FUN_004468a0(local_14);
      if (*local_c < *piVar3) break;
      local_c = (int *)FUN_004468a0(local_18);
      piVar3 = (int *)FUN_004468a0(local_1c);
      if ((*local_c < *piVar3) || (puVar5 = puVar5 + -1, puVar5 <= param_2)) break;
    }
  }
  puVar2 = local_8;
  puVar4 = puVar5;
  if (puVar6 < param_3) {
    while( true ) {
      local_c = (int *)FUN_004468a0(local_1c);
      piVar3 = (int *)FUN_004468a0(local_18);
      puVar2 = puVar6;
      if (*local_c < *piVar3) break;
      local_c = (int *)FUN_004468a0(local_14);
      piVar3 = (int *)FUN_004468a0(&local_10);
      if ((*local_c < *piVar3) || (puVar6 = puVar6 + 1, puVar2 = puVar6, param_3 <= puVar6)) break;
    }
  }
joined_r0x0055620a:
  do {
    local_8 = puVar2;
    if (param_3 <= puVar6) {
joined_r0x0055627e:
      for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
        local_10 = (int *)puVar4[-1];
        local_c = (int *)FUN_004468a0(local_24);
        piVar3 = (int *)FUN_004468a0(local_28);
        if (*piVar3 <= *local_c) {
          local_10 = (int *)*puVar5;
          local_c = (int *)FUN_004468a0(local_2c);
          piVar3 = (int *)FUN_004468a0(local_30);
          if (*local_c < *piVar3) break;
          uVar1 = puVar5[-1];
          puVar5 = puVar5 + -1;
          *puVar5 = puVar4[-1];
          puVar4[-1] = uVar1;
        }
      }
      if (puVar4 == param_2) {
        if (puVar6 == param_3) {
          *param_1 = (uint)puVar5;
          param_1[1] = (uint)local_8;
          return;
        }
        if (local_8 != puVar6) {
          uVar1 = *puVar5;
          *puVar5 = *local_8;
          *local_8 = uVar1;
        }
        local_10 = (int *)*puVar5;
        *puVar5 = *puVar6;
        puVar5 = puVar5 + 1;
        *puVar6 = local_10;
        puVar6 = puVar6 + 1;
        puVar2 = local_8 + 1;
      }
      else {
        puVar4 = puVar4 + -1;
        if (puVar6 == param_3) {
          puVar5 = puVar5 + -1;
          if (puVar4 != puVar5) {
            uVar1 = *puVar4;
            *puVar4 = *puVar5;
            *puVar5 = uVar1;
          }
          uVar1 = *puVar5;
          *puVar5 = local_8[-1];
          local_8[-1] = uVar1;
          puVar2 = local_8 + -1;
        }
        else {
          uVar1 = *puVar6;
          *puVar6 = *puVar4;
          *puVar4 = uVar1;
          puVar6 = puVar6 + 1;
          puVar2 = local_8;
        }
      }
      goto joined_r0x0055620a;
    }
    local_c = (int *)*puVar5;
    local_10 = (int *)FUN_004468a0(local_1c);
    piVar3 = (int *)FUN_004468a0(local_18);
    if (*piVar3 <= *local_10) {
      local_10 = (int *)*puVar6;
      local_c = (int *)FUN_004468a0(local_14);
      piVar3 = (int *)FUN_004468a0(local_20);
      if (*local_c < *piVar3) goto joined_r0x0055627e;
      uVar1 = *local_8;
      *local_8 = *puVar6;
      *puVar6 = uVar1;
      local_8 = local_8 + 1;
    }
    puVar6 = puVar6 + 1;
    puVar2 = local_8;
  } while( true );
}

