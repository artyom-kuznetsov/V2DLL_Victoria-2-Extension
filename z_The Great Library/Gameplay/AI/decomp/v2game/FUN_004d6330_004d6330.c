// FUN_004d6330 @ 004d6330 body=[[004d6330, 004d653c] [004d6540, 004d6871]]


uint * FUN_004d6330(uint *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 2;
  FUN_004d6880(local_c,param_4);
  puVar7 = local_c + 2;
  puVar3 = local_c;
  if (param_2 < local_c) {
    while( true ) {
      local_10 = -1;
      if (puVar3[-1] != 0) {
        local_10 = *(int *)(*(int *)(param_4 + 0x48) +
                           *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar3[-1] * 4) +
                                            0xe64) + 8) * 4);
      }
      iVar6 = -1;
      if (puVar3[1] != 0) {
        iVar6 = *(int *)(*(int *)(param_4 + 0x48) +
                        *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_c[1] * 4) +
                                         0xe64) + 8) * 4);
      }
      if (iVar6 < local_10) break;
      local_10 = -1;
      if (puVar3[1] != 0) {
        local_10 = *(int *)(*(int *)(param_4 + 0x48) +
                           *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_c[1] * 4) +
                                            0xe64) + 8) * 4);
      }
      if (puVar3[-1] == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_4 + 0x48) +
                        *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar3[-1] * 4) +
                                         0xe64) + 8) * 4);
      }
      if ((iVar6 < local_10) || (local_c = local_c + -2, puVar3 = puVar3 + -2, local_c <= param_2))
      break;
    }
  }
  puVar4 = puVar7;
  local_8 = puVar7;
  puVar3 = local_c;
  if (puVar7 < param_3) {
    while( true ) {
      local_10 = -1;
      if (puVar7[1] != 0) {
        local_10 = *(int *)(*(int *)(param_4 + 0x48) +
                           *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar7[1] * 4) +
                                            0xe64) + 8) * 4);
      }
      iVar6 = -1;
      if (local_c[1] != 0) {
        iVar6 = *(int *)(*(int *)(param_4 + 0x48) +
                        *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_c[1] * 4) +
                                         0xe64) + 8) * 4);
      }
      puVar4 = puVar7;
      local_8 = puVar7;
      if (iVar6 < local_10) break;
      local_10 = -1;
      if (local_c[1] != 0) {
        local_10 = *(int *)(*(int *)(param_4 + 0x48) +
                           *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_c[1] * 4) +
                                            0xe64) + 8) * 4);
      }
      iVar6 = -1;
      if (puVar7[1] != 0) {
        iVar6 = *(int *)(*(int *)(param_4 + 0x48) +
                        *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar7[1] * 4) +
                                         0xe64) + 8) * 4);
      }
      if ((iVar6 < local_10) ||
         (puVar7 = puVar7 + 2, puVar4 = puVar7, local_8 = puVar7, param_3 <= puVar7)) break;
    }
  }
joined_r0x004d6535:
  do {
    puVar9 = local_c;
    if (param_3 <= puVar7) {
joined_r0x004d664e:
      for (; puVar8 = puVar4, param_2 < local_c; local_c = local_c + -2) {
        puVar5 = puVar9 + -2;
        local_10 = -1;
        if (puVar9[-1] != 0) {
          local_10 = *(int *)(*(int *)(param_4 + 0x48) +
                             *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar9[-1] * 4)
                                              + 0xe64) + 8) * 4);
        }
        iVar6 = -1;
        if (puVar3[1] != 0) {
          iVar6 = *(int *)(*(int *)(param_4 + 0x48) +
                          *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar3[1] * 4) +
                                           0xe64) + 8) * 4);
        }
        puVar4 = puVar3;
        if (local_10 <= iVar6) {
          local_10 = -1;
          if (puVar3[1] != 0) {
            local_10 = *(int *)(*(int *)(param_4 + 0x48) +
                               *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar3[1] * 4
                                                         ) + 0xe64) + 8) * 4);
          }
          iVar6 = -1;
          if (puVar9[-1] != 0) {
            iVar6 = *(int *)(*(int *)(param_4 + 0x48) +
                            *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar9[-1] * 4)
                                             + 0xe64) + 8) * 4);
          }
          puVar8 = local_8;
          if (iVar6 < local_10) break;
          uVar1 = puVar3[-1];
          uVar2 = puVar3[-2];
          puVar4 = puVar3 + -2;
          *puVar4 = *puVar5;
          puVar3[-1] = puVar9[-1];
          *puVar5 = uVar2;
          puVar9[-1] = uVar1;
        }
        puVar3 = puVar4;
        puVar4 = local_8;
        puVar9 = puVar5;
      }
      if (local_c == param_2) {
        if (puVar7 == param_3) {
          *param_1 = (uint)puVar3;
          param_1[1] = (uint)puVar8;
          return param_1;
        }
        if (puVar8 != puVar7) {
          uVar1 = puVar3[1];
          uVar2 = *puVar3;
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          *puVar8 = uVar2;
          puVar8[1] = uVar1;
        }
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        *puVar3 = *puVar7;
        puVar3[1] = puVar7[1];
        *puVar7 = uVar1;
        puVar7[1] = uVar2;
        puVar7 = puVar7 + 2;
        puVar4 = puVar8 + 2;
        local_8 = puVar8 + 2;
        puVar3 = puVar3 + 2;
      }
      else {
        puVar9 = local_c + -2;
        if (puVar7 == param_3) {
          puVar5 = puVar3 + -2;
          if (puVar9 != puVar5) {
            uVar1 = *puVar9;
            uVar2 = local_c[-1];
            *puVar9 = *puVar5;
            local_c[-1] = puVar3[-1];
            *puVar5 = uVar1;
            puVar3[-1] = uVar2;
          }
          uVar1 = *puVar5;
          uVar2 = puVar3[-1];
          puVar4 = puVar8 + -2;
          *puVar5 = *puVar4;
          puVar3[-1] = puVar8[-1];
          *puVar4 = uVar1;
          puVar8[-1] = uVar2;
          local_8 = puVar4;
          local_c = puVar9;
          puVar3 = puVar5;
        }
        else {
          uVar1 = *puVar7;
          uVar2 = puVar7[1];
          *puVar7 = *puVar9;
          puVar7[1] = local_c[-1];
          *puVar9 = uVar1;
          local_c[-1] = uVar2;
          puVar7 = puVar7 + 2;
          puVar4 = puVar8;
          local_c = puVar9;
        }
      }
      goto joined_r0x004d6535;
    }
    local_10 = -1;
    if (puVar3[1] != 0) {
      local_10 = *(int *)(*(int *)(param_4 + 0x48) +
                         *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar3[1] * 4) +
                                          0xe64) + 8) * 4);
    }
    iVar6 = -1;
    if (puVar7[1] != 0) {
      iVar6 = *(int *)(*(int *)(param_4 + 0x48) +
                      *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar7[1] * 4) + 0xe64
                                       ) + 8) * 4);
    }
    puVar8 = puVar4;
    if (local_10 <= iVar6) {
      local_10 = -1;
      if (puVar7[1] != 0) {
        local_10 = *(int *)(*(int *)(param_4 + 0x48) +
                           *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar7[1] * 4) +
                                            0xe64) + 8) * 4);
      }
      iVar6 = -1;
      if (puVar3[1] != 0) {
        iVar6 = *(int *)(*(int *)(param_4 + 0x48) +
                        *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar3[1] * 4) +
                                         0xe64) + 8) * 4);
      }
      if (iVar6 < local_10) goto joined_r0x004d664e;
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      puVar8 = puVar4 + 2;
      *puVar4 = *puVar7;
      puVar4[1] = puVar7[1];
      puVar7[1] = uVar2;
      *puVar7 = uVar1;
      local_8 = puVar8;
    }
    puVar7 = puVar7 + 2;
    puVar4 = puVar8;
  } while( true );
}

