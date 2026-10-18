// FUN_00952230 @ 00952230 body=[[00952230, 0095246a] [00952470, 009525ab] [009525b0, 00952842]]


undefined4 FUN_00952230(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  undefined1 local_134 [8];
  undefined4 local_12c;
  uint *local_128;
  undefined1 local_ec [8];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d4;
  undefined1 *local_c8;
  undefined4 local_c0;
  int local_bc;
  undefined **local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int *local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  uint *local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  uint *local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  int *local_20;
  undefined4 local_18;
  uint *local_14;
  uint *local_10;
  int local_c;
  uint *local_8;
  
  FUN_0094be20();
  local_c = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_48 * 4) +
                                      0xbe8) + local_40 * 4) + 0x34);
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  cVar2 = (**(code **)(*local_58 + 0x1c))();
  if (cVar2 != '\0') {
    if (param_2 == '\0') {
      if (local_c != 0) {
        local_8 = local_48;
        piVar3 = (int *)FUN_0093d080(&local_8);
        iVar1 = *(int *)(*piVar3 + 0x14);
        iVar4 = FUN_0042ca20(*(undefined4 *)(*piVar3 + 0x10));
        if (iVar4 != iVar1) {
          return 0;
        }
      }
    }
    else if (iVar1 != 0) {
      iVar4 = FUN_00425a40();
      local_8 = (uint *)CONCAT31(local_8._1_3_,*(uint **)(iVar4 + 4) == local_48);
      cVar2 = FUN_00425840(iVar1,local_8);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    piVar3 = local_58;
    if (((local_58[0x39] - local_58[0x38] & 0xfffffffcU) == 0) || (local_50 != 0)) {
      if (((local_58[0x2b] - local_58[0x2a] & 0xfffffffcU) != 0) && (local_3c == 0)) {
        FUN_008a8650(0);
        FUN_008a8650(0);
        local_20 = *(int **)(param_1 + 0x20);
        local_12c = local_4c;
        local_c8 = local_134;
        local_128 = local_48;
        piVar3 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x24) * 4) +
                          0xe44);
        if (piVar3 != (int *)0x0) {
          local_14 = (uint *)(local_58 + 0x28);
          do {
            iVar1 = *piVar3;
            piVar3 = (int *)piVar3[2];
            if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
              local_d4 = 0;
            }
            else {
              local_d4 = **(undefined4 **)(iVar1 + 0x48);
            }
            cVar2 = (**(code **)(*local_14 + 0x18))(local_ec);
            if (cVar2 != '\0') {
              if (local_c == 0) {
                return 1;
              }
              FUN_0094be20();
              local_10 = local_48;
              piVar5 = (int *)FUN_0093d080(&local_10);
              iVar1 = *(int *)(*piVar5 + 0x14);
              iVar4 = FUN_0042ca20(*(undefined4 *)(*piVar5 + 0x10));
              if (iVar4 == iVar1) {
                return 1;
              }
            }
          } while (piVar3 != (int *)0x0);
        }
        return 0;
      }
      if (((local_58[0x32] - local_58[0x31] & 0xfffffffcU) == 0) || (local_3c != 0)) {
        return 1;
      }
      FUN_008a8650(0);
      FUN_008a8650(0);
      local_12c = local_4c;
      local_c8 = local_134;
      local_128 = local_48;
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x24) * 4);
      local_20 = *(int **)(iVar1 + 0xd48);
      local_8 = (uint *)(iVar1 + 0xd48);
      puVar6 = local_8;
      while (((undefined4 *)*puVar6 <= local_20 && (local_20 < (undefined4 *)puVar6[1]))) {
        local_18 = *local_20;
        piVar5 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_20[1] * 4) + 0xe44);
        local_20 = local_20 + 2;
        if (piVar5 != (int *)0x0) {
          local_14 = (uint *)(piVar3 + 0x2f);
          do {
            iVar1 = *piVar5;
            piVar5 = (int *)piVar5[2];
            if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
              local_d4 = 0;
            }
            else {
              local_d4 = **(undefined4 **)(iVar1 + 0x48);
            }
            cVar2 = (**(code **)(*local_14 + 0x18))(local_ec);
            if (cVar2 != '\0') {
              if (local_c == 0) {
                return 1;
              }
              local_9c = local_5c;
              local_94 = local_54;
              local_8c = local_4c;
              local_98 = local_58;
              local_80 = local_40;
              local_90 = local_50;
              local_74 = local_34;
              local_84 = local_44;
              local_6c = local_2c;
              local_78 = local_38;
              local_70 = local_30;
              local_a0 = 0x18d;
              local_a4 = CWarGoal::vftable;
              local_88 = local_48;
              local_68 = local_28;
              if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
                local_7c = 0;
              }
              else {
                local_7c = **(undefined4 **)(iVar1 + 0x48);
              }
              local_10 = local_48;
              piVar3 = (int *)FUN_0093d080(&local_10);
              iVar1 = *(int *)(*piVar3 + 0x14);
              iVar4 = FUN_0042ca20(*(undefined4 *)(*piVar3 + 0x10));
              if (iVar4 == iVar1) {
                return 1;
              }
            }
            puVar6 = local_8;
            piVar3 = local_58;
          } while (piVar5 != (int *)0x0);
        }
      }
    }
    else {
      FUN_008a8650(0);
      FUN_008a8650(0);
      local_12c = *(undefined4 *)(param_1 + 0x18);
      local_128 = *(uint **)(param_1 + 0x1c);
      local_c8 = local_134;
      local_e4 = *(undefined4 *)(param_1 + 0x20);
      local_e0 = *(undefined4 *)(param_1 + 0x24);
      local_8 = (uint *)(DAT_012588e8 + 0xadc);
      puVar6 = local_8;
      piVar3 = (int *)*local_8;
      while (((int *)*puVar6 <= piVar3 && (piVar3 < (int *)puVar6[1]))) {
        local_c0 = *(undefined4 *)(*piVar3 + 0x1c);
        local_bc = *(int *)(*piVar3 + 0x20);
        piVar3 = piVar3 + 1;
        if ((local_bc != 0) &&
           ((((char)local_c0 != 'R' || ((char)((uint)local_c0 >> 8) != 'E')) ||
            ((char)((uint)local_c0 >> 0x10) != 'B')))) {
          local_20 = piVar3;
          *(undefined4 *)(local_c8 + 0x2c) = local_c0;
          *(int *)(local_c8 + 0x30) = local_bc;
          cVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xd8) + 0x18))(local_ec);
          puVar6 = local_8;
          if (cVar2 != '\0') {
            FUN_0094be20();
            local_94 = local_c0;
            local_90 = local_bc;
            if ((local_58[0x2b] - local_58[0x2a] & 0xfffffffcU) == 0) {
              return 1;
            }
            local_18 = *(undefined4 *)(param_1 + 0x20);
            piVar5 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x24) * 4) +
                              0xe44);
            puVar6 = local_8;
            if (piVar5 != (int *)0x0) {
              local_10 = (uint *)(local_98 + 0x28);
              do {
                iVar1 = *piVar5;
                piVar5 = (int *)piVar5[2];
                if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
                  local_d4 = 0;
                }
                else {
                  local_d4 = **(undefined4 **)(iVar1 + 0x48);
                }
                cVar2 = (**(code **)(*local_10 + 0x18))(local_ec);
                if (cVar2 != '\0') {
                  if (local_c == 0) {
                    return 1;
                  }
                  FUN_0094be20();
                  local_14 = local_48;
                  piVar3 = (int *)FUN_0093d080(&local_14);
                  iVar1 = *(int *)(*piVar3 + 0x14);
                  iVar4 = FUN_0042ca20(*(undefined4 *)(*piVar3 + 0x10));
                  if (iVar4 == iVar1) {
                    return 1;
                  }
                }
                puVar6 = local_8;
                piVar3 = local_20;
              } while (piVar5 != (int *)0x0);
            }
          }
        }
      }
    }
  }
  return 0;
}

