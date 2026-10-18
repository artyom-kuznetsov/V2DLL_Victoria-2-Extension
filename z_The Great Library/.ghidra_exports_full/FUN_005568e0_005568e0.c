// FUN_005568e0 @ 005568e0 body=[[005568e0, 00556927] [00556930, 00556aea] [00556af0, 00556d81]]


void FUN_005568e0(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  uint local_ac [12];
  uint local_7c [6];
  undefined8 local_64;
  uint local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  uint local_14;
  int *local_10;
  int *local_8;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00558700(piVar7,param_4);
  local_8 = piVar7 + 1;
  local_10 = piVar7;
  if (param_2 < piVar7) {
    while( true ) {
      iVar2 = *(int *)(piVar7[-1] + 0xe88);
      iVar3 = *(int *)(*piVar7 + 0xe88);
      if (iVar2 == 0) {
        local_4c = 0;
        puVar5 = (uint *)&local_4c;
      }
      else {
        local_24 = *(uint *)(iVar2 + 0x10);
        local_20 = (int *)*(undefined4 *)(iVar2 + 0x14);
        puVar5 = &local_24;
      }
      uVar4 = puVar5[1];
      local_44 = CONCAT44(uVar4,(uint)local_44);
      if (iVar3 == 0) {
        local_34 = 0;
        puVar6 = (uint *)&local_34;
      }
      else {
        local_1c = *(uint *)(iVar3 + 0x10);
        local_18 = (int *)*(undefined4 *)(iVar3 + 0x14);
        puVar6 = &local_1c;
      }
      if (((int)puVar6[1] < (int)uVar4) || (((int)puVar6[1] <= (int)uVar4 && (*puVar6 < *puVar5))))
      break;
      if (iVar3 == 0) {
        local_3c = 0;
        puVar5 = (uint *)&local_3c;
      }
      else {
        local_10 = (int *)*(undefined4 *)(iVar3 + 0x14);
        local_14 = *(uint *)(iVar3 + 0x10);
        puVar5 = &local_14;
      }
      if (iVar2 == 0) {
        local_64 = 0;
        puVar6 = (uint *)&local_64;
      }
      else {
        local_2c = *(uint *)(iVar2 + 0x10);
        local_28 = *(undefined4 *)(iVar2 + 0x14);
        puVar6 = &local_2c;
      }
      if (((int)puVar6[1] < (int)puVar5[1]) ||
         ((((int)puVar6[1] <= (int)puVar5[1] && (*puVar6 < *puVar5)) ||
          (piVar7 = piVar7 + -1, piVar7 <= param_2)))) break;
    }
    local_10 = piVar7;
  }
  if (local_8 < param_3) {
    local_20 = *(int **)(*piVar7 + 0xe88);
    piVar8 = local_20;
    while( true ) {
      iVar2 = *(int *)(*local_8 + 0xe88);
      if (iVar2 == 0) {
        local_4c = 0;
        puVar5 = (uint *)&local_4c;
      }
      else {
        local_28 = *(undefined4 *)(iVar2 + 0x14);
        local_2c = *(uint *)(iVar2 + 0x10);
        puVar5 = &local_2c;
      }
      if (piVar8 == (int *)0x0) {
        local_34 = 0;
        puVar6 = (uint *)&local_34;
      }
      else {
        local_1c = *(uint *)((int)piVar8 + 0x10);
        local_18 = (int *)*(undefined4 *)((int)piVar8 + 0x14);
        puVar6 = &local_1c;
      }
      if (((int)puVar6[1] < (int)puVar5[1]) ||
         (((int)puVar6[1] <= (int)puVar5[1] && (*puVar6 < *puVar5)))) break;
      if (local_20 == (int *)0x0) {
        local_44 = 0;
        puVar5 = (uint *)&local_44;
      }
      else {
        local_58 = *(undefined4 *)((int)local_20 + 0x14);
        local_5c = *(uint *)((int)local_20 + 0x10);
        puVar5 = &local_5c;
      }
      if (iVar2 == 0) {
        local_3c = 0;
        puVar6 = (uint *)&local_3c;
      }
      else {
        local_50 = *(undefined4 *)(iVar2 + 0x14);
        local_54 = *(uint *)(iVar2 + 0x10);
        puVar6 = &local_54;
      }
      if ((((int)puVar6[1] < (int)puVar5[1]) ||
          (((int)puVar6[1] <= (int)puVar5[1] && (*puVar6 < *puVar5)))) ||
         (local_8 = local_8 + 1, piVar8 = local_20, param_3 <= local_8)) break;
    }
  }
  local_18 = piVar7;
  piVar8 = local_8;
  local_10 = piVar7;
LAB_00556add:
  local_20 = piVar8;
  do {
    if (piVar8 < param_3) {
      do {
        iVar2 = *(int *)(*piVar7 + 0xe88);
        iVar3 = *(int *)(*piVar8 + 0xe88);
        if (iVar2 == 0) {
          local_ac[6] = 0;
          local_ac[7] = 0;
          puVar5 = local_ac + 6;
        }
        else {
          local_54 = *(uint *)(iVar2 + 0x10);
          local_50 = *(undefined4 *)(iVar2 + 0x14);
          puVar5 = &local_54;
        }
        local_ac[10] = *puVar5;
        if (iVar3 == 0) {
          local_7c[4] = 0;
          local_7c[5] = 0;
          puVar6 = local_7c + 4;
        }
        else {
          local_5c = *(uint *)(iVar3 + 0x10);
          local_58 = *(undefined4 *)(iVar3 + 0x14);
          puVar6 = &local_5c;
        }
        piVar7 = local_10;
        if (((int)puVar5[1] <= (int)puVar6[1]) &&
           (((int)puVar5[1] < (int)puVar6[1] || (*puVar5 <= *puVar6)))) {
          if (iVar3 == 0) {
            local_ac[2] = 0;
            local_ac[3] = 0;
            puVar5 = local_ac + 2;
          }
          else {
            local_28 = *(undefined4 *)(iVar3 + 0x14);
            local_2c = *(uint *)(iVar3 + 0x10);
            puVar5 = &local_2c;
          }
          if (iVar2 == 0) {
            local_7c[2] = 0;
            local_7c[3] = 0;
            puVar6 = local_7c + 2;
          }
          else {
            local_64 = *(undefined8 *)(iVar2 + 0x10);
            puVar6 = (uint *)&local_64;
          }
          if (((int)puVar6[1] < (int)puVar5[1]) ||
             (((int)puVar6[1] <= (int)puVar5[1] && (*puVar6 < *puVar5)))) break;
          iVar2 = *local_8;
          *local_8 = *piVar8;
          *piVar8 = iVar2;
          local_8 = local_8 + 1;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 < param_3);
      local_20 = piVar8;
    }
    while (param_2 < local_18) {
      iVar2 = *(int *)(local_18[-1] + 0xe88);
      iVar3 = *(int *)(*piVar7 + 0xe88);
      if (iVar2 == 0) {
        local_7c[0] = 0;
        local_7c[1] = 0;
        puVar5 = local_7c;
      }
      else {
        local_3c = *(undefined8 *)(iVar2 + 0x10);
        puVar5 = (uint *)&local_3c;
      }
      if (iVar3 == 0) {
        local_ac[8] = 0;
        local_ac[9] = 0;
        puVar6 = local_ac + 8;
      }
      else {
        local_44 = *(undefined8 *)(iVar3 + 0x10);
        puVar6 = (uint *)&local_44;
      }
      piVar8 = local_20;
      if (((int)puVar5[1] <= (int)puVar6[1]) &&
         (((int)puVar5[1] < (int)puVar6[1] || (*puVar5 <= *puVar6)))) {
        if (iVar3 == 0) {
          local_ac[4] = 0;
          local_ac[5] = 0;
          puVar5 = local_ac + 4;
        }
        else {
          local_34 = *(undefined8 *)(iVar3 + 0x10);
          puVar5 = (uint *)&local_34;
        }
        if (iVar2 == 0) {
          local_ac[0] = 0;
          local_ac[1] = 0;
          puVar6 = local_ac;
        }
        else {
          local_4c = *(undefined8 *)(iVar2 + 0x10);
          puVar6 = (uint *)&local_4c;
        }
        piVar7 = local_10;
        if (((int)puVar6[1] < (int)puVar5[1]) ||
           (((int)puVar6[1] <= (int)puVar5[1] && (*puVar6 < *puVar5)))) break;
        iVar2 = local_10[-1];
        local_10[-1] = local_18[-1];
        local_10 = local_10 + -1;
        local_18[-1] = iVar2;
      }
      local_18 = local_18 + -1;
      piVar7 = local_10;
    }
    if (local_18 == param_2) {
      if (piVar8 == param_3) {
        *param_1 = (uint)piVar7;
        param_1[1] = (uint)local_8;
        return;
      }
      if (local_8 != piVar8) {
        iVar2 = *piVar7;
        *piVar7 = *local_8;
        *local_8 = iVar2;
      }
      local_8 = local_8 + 1;
      iVar2 = *piVar7;
      *piVar7 = *piVar8;
      *piVar8 = iVar2;
      local_10 = piVar7 + 1;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 1;
      goto LAB_00556add;
    }
    local_18 = local_18 + -1;
    if (piVar8 != param_3) break;
    piVar7 = piVar7 + -1;
    local_10 = piVar7;
    if (local_18 != piVar7) {
      iVar2 = *local_18;
      *local_18 = *piVar7;
      *piVar7 = iVar2;
    }
    piVar1 = local_8 + -1;
    iVar2 = *piVar7;
    local_8 = local_8 + -1;
    *piVar7 = *piVar1;
    *local_8 = iVar2;
  } while( true );
  iVar2 = *piVar8;
  *piVar8 = *local_18;
  *local_18 = iVar2;
  piVar8 = piVar8 + 1;
  goto LAB_00556add;
}

