// FUN_00453630 @ 00453630 body=[[00453630, 004536bc] [004536c0, 0045375c] [00453760, 004539ec] [004539f0, 00453a5c] [00453a60, 00453b1c] [00453b20, 00453c1c] [00453c20, 00453d7c]]


void FUN_00453630(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  piVar10 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_00454310(param_3 + -1,param_4);
  local_c = piVar10 + 1;
  local_8 = piVar10;
  if (param_2 < piVar10) {
    local_14 = *(int **)(DAT_012587e4 + 4);
    local_1c = *(undefined4 **)(*(int *)((int)local_14 + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100);
    local_10 = (undefined4 *)local_1c[2];
    local_18 = (undefined4 *)local_10[1];
    do {
      iVar3 = *local_8;
      cVar2 = *(char *)((int)local_18 + 0x15);
      puVar5 = local_18;
      local_20 = local_10;
      while (puVar7 = puVar5, cVar2 == '\0') {
        if ((int)puVar7[3] < *(int *)(local_8[-1] + 0x20)) {
          puVar5 = (undefined4 *)puVar7[2];
          puVar7 = local_20;
        }
        else {
          puVar5 = (undefined4 *)*puVar7;
        }
        cVar2 = *(char *)((int)puVar5 + 0x15);
        local_20 = puVar7;
      }
      if ((local_20 == (undefined4 *)local_1c[2]) ||
         (*(int *)(local_8[-1] + 0x20) < (int)local_20[3])) {
        local_24 = (undefined4 *)local_1c[2];
        ppuVar8 = &local_24;
      }
      else {
        ppuVar8 = &local_20;
      }
      puVar5 = (undefined4 *)local_1c[2];
      if ((*ppuVar8 != puVar5) && (*(char *)(*ppuVar8 + 4) == '\x01')) {
        local_20 = *(undefined4 **)(iVar3 + 0x20);
        FUN_00445430(&local_20);
        if ((local_28 == puVar5) || (*(char *)(local_28 + 4) == '\0')) break;
      }
      iVar4 = *(int *)(*(int *)((int)local_14 + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100);
      puVar5 = (undefined4 *)(*(undefined4 **)(iVar4 + 8))[1];
      iVar3 = *(int *)(iVar3 + 0x20);
      cVar2 = *(char *)((int)puVar5 + 0x15);
      local_20 = *(undefined4 **)(iVar4 + 8);
      while (cVar2 == '\0') {
        if ((int)puVar5[3] < iVar3) {
          puVar7 = (undefined4 *)puVar5[2];
          puVar5 = local_20;
        }
        else {
          puVar7 = (undefined4 *)*puVar5;
        }
        local_20 = puVar5;
        puVar5 = puVar7;
        cVar2 = *(char *)((int)puVar7 + 0x15);
      }
      if ((local_20 == *(undefined4 **)(iVar4 + 8)) || (iVar3 < (int)local_20[3])) {
        local_2c = *(undefined4 **)(iVar4 + 8);
        ppuVar8 = &local_2c;
      }
      else {
        ppuVar8 = &local_20;
      }
      puVar5 = *(undefined4 **)(iVar4 + 8);
      if ((*ppuVar8 != puVar5) && (*(char *)(*ppuVar8 + 4) == '\x01')) {
        local_20 = *(undefined4 **)(local_8[-1] + 0x20);
        FUN_00445430(&local_20);
        if ((local_30 == puVar5) || (*(char *)(local_30 + 4) == '\0')) break;
      }
      local_8 = local_8 + -1;
      if (local_8 <= param_2) break;
    } while( true );
  }
  iVar3 = DAT_012588e8;
  if (local_c < param_3) {
    local_14 = *(int **)(DAT_012587e4 + 4);
    local_2c = *(undefined4 **)(*(int *)((int)local_14 + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100);
    local_30 = (undefined4 *)local_2c[2];
    local_28 = (undefined4 *)local_30[1];
    local_10 = (undefined4 *)*local_8;
    do {
      cVar2 = *(char *)((int)local_28 + 0x15);
      local_24 = local_30;
      puVar5 = local_28;
      while (cVar2 == '\0') {
        if ((int)puVar5[3] < *(int *)(*local_c + 0x20)) {
          puVar7 = (undefined4 *)puVar5[2];
          puVar5 = local_24;
        }
        else {
          puVar7 = (undefined4 *)*puVar5;
        }
        local_24 = puVar5;
        puVar5 = puVar7;
        cVar2 = *(char *)((int)puVar7 + 0x15);
      }
      if ((local_24 == (undefined4 *)local_2c[2]) || (*(int *)(*local_c + 0x20) < (int)local_24[3]))
      {
        local_20 = (undefined4 *)local_2c[2];
        ppuVar8 = &local_20;
      }
      else {
        ppuVar8 = &local_24;
      }
      puVar5 = (undefined4 *)local_2c[2];
      if ((*ppuVar8 != puVar5) && (*(char *)(*ppuVar8 + 4) == '\x01')) {
        local_24 = *(undefined4 **)((int)local_10 + 0x20);
        FUN_00445430(&local_24);
        if ((local_1c == puVar5) || (*(char *)(local_1c + 4) == '\0')) break;
      }
      iVar4 = *(int *)(*(int *)((int)local_14 + *(int *)(iVar3 + 0xb60) * 4) + 100);
      puVar5 = (undefined4 *)(*(undefined4 **)(iVar4 + 8))[1];
      cVar2 = *(char *)((int)puVar5 + 0x15);
      local_24 = *(undefined4 **)(iVar4 + 8);
      while (cVar2 == '\0') {
        if ((int)puVar5[3] < *(int *)((int)local_10 + 0x20)) {
          puVar7 = (undefined4 *)puVar5[2];
          puVar5 = local_24;
        }
        else {
          puVar7 = (undefined4 *)*puVar5;
        }
        local_24 = puVar5;
        puVar5 = puVar7;
        cVar2 = *(char *)((int)puVar7 + 0x15);
      }
      if ((local_24 == *(undefined4 **)(iVar4 + 8)) ||
         (*(int *)((int)local_10 + 0x20) < (int)local_24[3])) {
        local_18 = *(undefined4 **)(iVar4 + 8);
        ppuVar8 = &local_18;
      }
      else {
        ppuVar8 = &local_24;
      }
      puVar5 = *(undefined4 **)(iVar4 + 8);
      if ((*ppuVar8 != puVar5) && (*(char *)(*ppuVar8 + 4) == '\x01')) {
        local_24 = *(undefined4 **)(*local_c + 0x20);
        FUN_00445430(&local_24);
        if ((local_34 == puVar5) || (*(char *)(local_34 + 4) == '\0')) break;
      }
      local_c = local_c + 1;
      if (param_3 <= local_c) break;
    } while( true );
  }
  local_14 = local_8;
  piVar10 = local_c;
  piVar9 = local_c;
  do {
    while (param_3 <= piVar10) {
joined_r0x00453b15:
      for (; param_2 < local_14; local_14 = local_14 + -1) {
        iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                        100);
        local_38 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        puVar5 = (undefined4 *)(*(undefined4 **)(iVar3 + 8))[1];
        cVar2 = *(char *)((int)puVar5 + 0x15);
        local_34 = *(undefined4 **)(iVar3 + 8);
        while (cVar2 == '\0') {
          if ((int)puVar5[3] < *(int *)(local_14[-1] + 0x20)) {
            puVar7 = (undefined4 *)puVar5[2];
            puVar5 = local_34;
          }
          else {
            puVar7 = (undefined4 *)*puVar5;
          }
          local_34 = puVar5;
          puVar5 = puVar7;
          cVar2 = *(char *)((int)puVar7 + 0x15);
        }
        local_18 = *(undefined4 **)(iVar3 + 8);
        if ((local_34 == local_18) || (*(int *)(local_14[-1] + 0x20) < (int)local_34[3])) {
          local_1c = local_18;
          ppuVar8 = &local_1c;
        }
        else {
          ppuVar8 = &local_34;
        }
        puVar5 = *(undefined4 **)(iVar3 + 8);
        if ((*ppuVar8 == puVar5) || (*(char *)(*ppuVar8 + 4) != '\x01')) {
LAB_00453bf2:
          iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4)
                          + 100);
          iVar4 = *(int *)(*local_8 + 0x20);
          local_38 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
          local_34 = *(undefined4 **)(iVar3 + 8);
          puVar5 = (undefined4 *)local_34[1];
          cVar2 = *(char *)((int)puVar5 + 0x15);
          while (cVar2 == '\0') {
            if ((int)puVar5[3] < iVar4) {
              puVar7 = (undefined4 *)puVar5[2];
              puVar5 = local_34;
            }
            else {
              puVar7 = (undefined4 *)*puVar5;
            }
            local_34 = puVar5;
            puVar5 = puVar7;
            cVar2 = *(char *)((int)puVar7 + 0x15);
          }
          local_40 = *(undefined4 **)(iVar3 + 8);
          if ((local_34 == local_40) || (iVar4 < (int)local_34[3])) {
            ppuVar8 = &local_40;
          }
          else {
            ppuVar8 = &local_34;
          }
          if ((*ppuVar8 != local_40) && (*(char *)(*ppuVar8 + 4) == '\x01')) {
            cVar2 = *(char *)((int)local_40[1] + 0x15);
            local_34 = local_40;
            puVar5 = (undefined4 *)local_40[1];
            while (cVar2 == '\0') {
              if ((int)puVar5[3] < *(int *)(local_14[-1] + 0x20)) {
                puVar7 = (undefined4 *)puVar5[2];
                puVar5 = local_34;
              }
              else {
                puVar7 = (undefined4 *)*puVar5;
              }
              local_34 = puVar5;
              puVar5 = puVar7;
              cVar2 = *(char *)((int)puVar7 + 0x15);
            }
            if ((local_34 == local_40) || (*(int *)(local_14[-1] + 0x20) < (int)local_34[3])) {
              local_44 = local_40;
              ppuVar8 = &local_44;
            }
            else {
              ppuVar8 = &local_34;
            }
            if ((*ppuVar8 == local_40) || (*(char *)(*ppuVar8 + 4) == '\0')) break;
          }
          iVar3 = local_8[-1];
          local_8 = local_8 + -1;
          *local_8 = local_14[-1];
          local_14[-1] = iVar3;
        }
        else {
          iVar3 = *(int *)(*local_8 + 0x20);
          cVar2 = *(char *)((int)puVar5[1] + 0x15);
          local_34 = puVar5;
          puVar7 = (undefined4 *)puVar5[1];
          while (cVar2 == '\0') {
            if ((int)puVar7[3] < iVar3) {
              puVar6 = (undefined4 *)puVar7[2];
              puVar7 = local_34;
            }
            else {
              puVar6 = (undefined4 *)*puVar7;
            }
            local_34 = puVar7;
            puVar7 = puVar6;
            cVar2 = *(char *)((int)puVar6 + 0x15);
          }
          if ((local_34 == local_18) || (iVar3 < (int)local_34[3])) {
            local_3c = local_18;
            ppuVar8 = &local_3c;
          }
          else {
            ppuVar8 = &local_34;
          }
          if ((*ppuVar8 != puVar5) && (*(char *)(*ppuVar8 + 4) != '\0')) goto LAB_00453bf2;
        }
      }
      if (local_14 == param_2) {
        if (piVar10 == param_3) {
          *param_1 = (uint)local_8;
          param_1[1] = (uint)piVar9;
          return;
        }
        if (piVar9 != piVar10) {
          iVar3 = *local_8;
          *local_8 = *piVar9;
          *piVar9 = iVar3;
        }
        piVar9 = piVar9 + 1;
        iVar3 = *local_8;
        *local_8 = *piVar10;
        *piVar10 = iVar3;
        piVar10 = piVar10 + 1;
        local_8 = local_8 + 1;
      }
      else {
        local_14 = local_14 + -1;
        if (piVar10 == param_3) {
          local_8 = local_8 + -1;
          if (local_14 != local_8) {
            iVar3 = *local_14;
            *local_14 = *local_8;
            *local_8 = iVar3;
          }
          piVar1 = piVar9 + -1;
          iVar3 = *local_8;
          piVar9 = piVar9 + -1;
          *local_8 = *piVar1;
          *piVar9 = iVar3;
        }
        else {
          iVar3 = *piVar10;
          *piVar10 = *local_14;
          piVar10 = piVar10 + 1;
          *local_14 = iVar3;
        }
      }
    }
    local_38 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100
                    );
    puVar5 = (undefined4 *)(*(undefined4 **)(iVar3 + 8))[1];
    cVar2 = *(char *)((int)puVar5 + 0x15);
    local_34 = *(undefined4 **)(iVar3 + 8);
    while (cVar2 == '\0') {
      if ((int)puVar5[3] < *(int *)(*local_8 + 0x20)) {
        puVar7 = (undefined4 *)puVar5[2];
        puVar5 = local_34;
      }
      else {
        puVar7 = (undefined4 *)*puVar5;
      }
      local_34 = puVar5;
      puVar5 = puVar7;
      cVar2 = *(char *)((int)puVar7 + 0x15);
    }
    local_2c = *(undefined4 **)(iVar3 + 8);
    if ((local_34 == local_2c) || (*(int *)(*local_8 + 0x20) < (int)local_34[3])) {
      local_30 = local_2c;
      ppuVar8 = &local_30;
    }
    else {
      ppuVar8 = &local_34;
    }
    puVar5 = *(undefined4 **)(iVar3 + 8);
    if ((*ppuVar8 == puVar5) || (*(char *)(*ppuVar8 + 4) != '\x01')) {
LAB_00453a32:
      local_38 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                      100);
      local_34 = *(undefined4 **)(iVar3 + 8);
      puVar5 = (undefined4 *)local_34[1];
      cVar2 = *(char *)((int)puVar5 + 0x15);
      while (cVar2 == '\0') {
        if ((int)puVar5[3] < *(int *)(*piVar10 + 0x20)) {
          puVar7 = (undefined4 *)puVar5[2];
          puVar5 = local_34;
        }
        else {
          puVar7 = (undefined4 *)*puVar5;
        }
        local_34 = puVar5;
        puVar5 = puVar7;
        cVar2 = *(char *)((int)puVar7 + 0x15);
      }
      local_24 = *(undefined4 **)(iVar3 + 8);
      if ((local_34 == local_24) || (*(int *)(*piVar10 + 0x20) < (int)local_34[3])) {
        ppuVar8 = &local_24;
      }
      else {
        ppuVar8 = &local_34;
      }
      if ((*ppuVar8 != local_24) && (*(char *)(*ppuVar8 + 4) == '\x01')) {
        cVar2 = *(char *)((int)local_24[1] + 0x15);
        local_34 = local_24;
        puVar5 = (undefined4 *)local_24[1];
        while (cVar2 == '\0') {
          if ((int)puVar5[3] < *(int *)(*local_8 + 0x20)) {
            puVar7 = (undefined4 *)puVar5[2];
            puVar5 = local_34;
          }
          else {
            puVar7 = (undefined4 *)*puVar5;
          }
          local_34 = puVar5;
          puVar5 = puVar7;
          cVar2 = *(char *)((int)puVar7 + 0x15);
        }
        if ((local_34 == local_24) || (*(int *)(*local_8 + 0x20) < (int)local_34[3])) {
          local_20 = local_24;
          ppuVar8 = &local_20;
        }
        else {
          ppuVar8 = &local_34;
        }
        if ((*ppuVar8 == local_24) || (*(char *)(*ppuVar8 + 4) == '\0')) goto joined_r0x00453b15;
      }
      local_c = piVar9 + 1;
      iVar3 = *piVar9;
      *piVar9 = *piVar10;
      *piVar10 = iVar3;
    }
    else {
      cVar2 = *(char *)((int)puVar5[1] + 0x15);
      local_34 = puVar5;
      puVar7 = (undefined4 *)puVar5[1];
      while (cVar2 == '\0') {
        if ((int)puVar7[3] < *(int *)(*piVar10 + 0x20)) {
          puVar6 = (undefined4 *)puVar7[2];
          puVar7 = local_34;
        }
        else {
          puVar6 = (undefined4 *)*puVar7;
        }
        local_34 = puVar7;
        puVar7 = puVar6;
        cVar2 = *(char *)((int)puVar6 + 0x15);
      }
      if ((local_34 == local_2c) || (*(int *)(*piVar10 + 0x20) < (int)local_34[3])) {
        local_28 = local_2c;
        ppuVar8 = &local_28;
      }
      else {
        ppuVar8 = &local_34;
      }
      local_c = piVar9;
      if ((*ppuVar8 != puVar5) && (*(char *)(*ppuVar8 + 4) != '\0')) goto LAB_00453a32;
    }
    piVar10 = piVar10 + 1;
    piVar9 = local_c;
  } while( true );
}

