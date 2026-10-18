// FUN_008577b0 @ 008577b0 body=[[008577b0, 00857e54]]


/* WARNING: Removing unreachable block (ram,0x00857ce8) */

int FUN_008577b0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  longlong lVar13;
  int local_c0 [24];
  int *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 uStack_34;
  int local_2c;
  int *local_28;
  float local_24;
  int *local_20;
  int local_1c;
  float local_18;
  int local_14;
  int iVar14;
  
  local_2c = DAT_012588e8;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  local_38 = *(int **)(param_1 + 0x34);
  local_18 = (float)FUN_0050e450();
  local_28 = *(int **)(iVar1 + 0xe44);
  local_24 = 0.0;
  local_20 = (int *)0x0;
  if (local_28 != (int *)0x0) {
    do {
      piVar6 = local_28 + 2;
      iVar10 = *local_28;
      iVar7 = *(int *)(iVar10 + 0x48);
      local_1c = 0;
      iVar14 = 0;
      local_14 = 0;
      local_28 = (int *)*piVar6;
      if (0 < (int)(*(int *)(iVar10 + 0x4c) - iVar7 & 0xfffffffcU)) {
        do {
          iVar7 = *(int *)(*(int *)(local_2c + 0xacc) + *(int *)(iVar7 + local_14 * 4) * 4);
          if ((*(int *)(iVar7 + 300) != 0) && (*(int *)(iVar7 + 0x158) != 0)) {
            if (*(char *)(*(int *)(param_1 + 0x80) + 0x131) == '\0') {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(iVar7 + 0x118) +
                              *(int *)(*(int *)(param_1 + 0x80) + 0x134) * 4);
            }
            iVar4 = *(int *)(iVar4 + 0x24);
            iVar3 = FUN_0051f2e0(iVar1,local_18);
            if ((0 < iVar4 / 1000) && (local_1c < iVar3)) {
              local_1c = iVar3;
              iVar14 = iVar7;
            }
          }
          iVar7 = *(int *)(iVar10 + 0x48);
          local_14 = local_14 + 1;
        } while (local_14 < *(int *)(iVar10 + 0x4c) - iVar7 >> 2);
        if (((iVar14 != 0) && ((int)local_24 < local_1c)) &&
           (iVar10 = *(int *)(param_1 + 0x80), *(int *)(iVar14 + 0x134) == *(int *)(iVar14 + 300)))
        {
          local_38 = *(int **)(iVar1 + 0xe78);
          iVar7 = *(int *)(iVar1 + 0xe7c);
          iVar4 = 0;
          if ((*(char *)(iVar10 + 0x131) != '\0') &&
             (iVar3 = *(int *)(*(int *)(iVar14 + 0x118) + *(int *)(iVar10 + 0x134) * 4), iVar3 != 0)
             ) {
            iVar4 = *(int *)(iVar3 + 0x24) / 1000;
          }
          FUN_004da850(iVar10,&local_40,iVar1,0,iVar1 + 0x1184,iVar4 + 1);
          puVar5 = (uint *)FUN_004dab20();
          bVar11 = CARRY4((uint)local_40,*puVar5);
          local_40 = (int *)((int)local_40 + *puVar5);
          local_3c = local_3c + puVar5[1] + (uint)bVar11;
          if (((local_3c <= iVar7) && ((local_3c < iVar7 || (local_40 <= local_38)))) &&
             (cVar2 = FUN_00511ef0(iVar1,iVar14,0,0,0,0,0), cVar2 != '\0')) {
            local_24 = (float)local_1c;
            local_20 = (int *)iVar14;
          }
        }
      }
    } while (local_28 != (int *)0x0);
    if (local_20 != (int *)0x0) {
      return (int)local_20;
    }
  }
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[8] = 0;
  local_c0[9] = 0;
  local_c0[10] = 0;
  local_c0[0xb] = 0;
  local_c0[0xc] = 0;
  local_c0[0xd] = 0;
  local_c0[0xe] = 0;
  local_c0[0xf] = 0;
  local_c0[0x10] = 0;
  local_c0[0x11] = 0;
  local_c0[0x12] = 0;
  local_c0[0x13] = 0;
  local_c0[0x14] = 0;
  local_c0[0x15] = 0;
  local_c0[0x16] = 0;
  local_c0[0x17] = 0;
  local_28 = *(int **)(iVar1 + 0xbe4);
  local_24 = (float)*(int *)(*(int *)(param_1 + 0x80) + 0xdc) / 1000.0;
  local_20 = (int *)(*(int *)(*(int *)(*(int *)(local_2c + 0xacc) + (int)local_28 * 4) + 0x5c) +
                    0x74);
  piVar6 = *(int **)(iVar1 + 0x9d8);
  piVar8 = local_20;
  while ((*(int **)(iVar1 + 0x9d8) <= piVar6 && (piVar6 < *(int **)(iVar1 + 0x9dc)))) {
    iVar10 = *(int *)(*(int *)(local_2c + 0xacc) + *piVar6 * 4);
    local_38 = piVar6 + 1;
    piVar6 = local_38;
    if ((*(int *)(iVar10 + 300) != 0) && (*(int *)(iVar10 + 0x158) != 0)) {
      fVar12 = (float10)FUN_005c5c80((float)(piVar8[1] - *(int *)(*(int *)(iVar10 + 0x5c) + 0x78)),
                                     (float)(*(int *)(*(int *)(iVar10 + 0x5c) + 0x74) - *piVar8));
      local_18 = (float)(fVar12 + (float10)3.1415927410125732);
      iVar7 = FUN_00b31c00();
      FUN_004a0e80(DAT_0125870c,&local_14);
      iVar14 = (int)(((float)local_14 / 1000.0) / local_24);
      if (2 < iVar14) {
        iVar14 = 2;
      }
      if (*(char *)(*(int *)(param_1 + 0x80) + 0x131) == '\0') {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*(int *)(iVar10 + 0x118) + *(int *)(*(int *)(param_1 + 0x80) + 0x134) * 4)
        ;
      }
      local_c0[iVar14 + iVar7 * 2 + iVar7] =
           local_c0[iVar14 + iVar7 * 2 + iVar7] + *(int *)(iVar10 + 0x24) / 1000;
      piVar6 = local_38;
      piVar8 = local_20;
    }
  }
  local_60 = *(int **)(iVar1 + 0x9d8);
  local_14 = 100000;
  iVar10 = 0;
  while ((*(int **)(iVar1 + 0x9d8) <= local_60 && (local_60 < *(int **)(iVar1 + 0x9dc)))) {
    iVar7 = *(int *)(*(int *)(local_2c + 0xacc) + *local_60 * 4);
    local_60 = local_60 + 1;
    if ((*(int *)(iVar7 + 300) != 0) &&
       ((*(int *)(iVar7 + 0x158) != 0 &&
        (iVar14 = *(int *)(param_1 + 0x80), *(int *)(iVar7 + 0x134) == *(int *)(iVar7 + 300))))) {
      local_58 = *(undefined4 *)(iVar1 + 0xe78);
      local_54 = *(undefined4 *)(iVar1 + 0xe7c);
      iVar4 = 0;
      if ((*(char *)(iVar14 + 0x131) != '\0') &&
         (iVar3 = *(int *)(*(int *)(iVar7 + 0x118) + *(int *)(iVar14 + 0x134) * 4), iVar3 != 0)) {
        iVar4 = *(int *)(iVar3 + 0x24) / 1000;
      }
      local_3c = iVar7;
      local_18 = (float)iVar14;
      FUN_004da850(iVar14,&local_48,iVar1,0,iVar1 + 0x1184,iVar4 + 1);
      iVar14 = *(int *)(iVar14 + 300);
      if (((iVar14 == 0) || (DAT_01258734 == 0)) || (iVar14 == DAT_01258734 + 0x10)) {
        local_38 = (int *)0x0;
        uStack_34 = 0;
        lVar13 = 0;
      }
      else {
        FUN_0047e3e0(iVar14 + 0x24,*(int *)(DAT_012588e8 + 0xbcc) + 0x280);
        lVar13 = __allmul(local_50,local_4c,0xc8000,0);
        lVar13 = lVar13 >> 0xf;
      }
      local_48 = lVar13 + local_48;
      if (local_48 <= CONCAT44(local_54,local_58)) {
        cVar2 = FUN_00511ef0(iVar1,iVar7,0,0,0,0,0);
        if (cVar2 != '\0') {
          fVar12 = (float10)FUN_005c5c80((float)(local_20[1] -
                                                *(int *)(*(int *)(iVar7 + 0x5c) + 0x78)),
                                         (float)(*(int *)(*(int *)(iVar7 + 0x5c) + 0x74) - *local_20
                                                ));
          local_18 = (float)(fVar12 + (float10)3.1415927410125732);
          iVar14 = FUN_00b31c00();
          FUN_004a0e80(DAT_0125870c,&local_1c);
          iVar7 = DAT_012588e8;
          iVar4 = (int)(((float)local_1c / 1000.0) / local_24);
          if (2 < iVar4) {
            iVar4 = 2;
          }
          iVar14 = local_c0[iVar4 + iVar14 * 2 + iVar14];
          iVar4 = DAT_012588e8 + 0xb4;
          if (*(int *)(DAT_012588e8 + 0xa74) == 0) {
            FUN_009b7700();
          }
          iVar3 = *(int *)(iVar7 + 0xa74);
          uVar9 = *(uint *)(iVar4 + iVar3 * 4);
          uVar9 = uVar9 ^ (int)uVar9 >> 0xb;
          uVar9 = uVar9 ^ (uVar9 & 0xff3a58ad) << 7;
          uVar9 = uVar9 ^ (uVar9 & 0xffffdf8c) << 0xf;
          *(int *)(iVar7 + 0xa74) = (iVar3 + 1) % 0x270;
          iVar7 = iVar14 * 5 + (int)(uVar9 ^ (int)uVar9 >> 0x12) % 3;
          if ((iVar10 == 0) || (iVar7 < local_14)) {
            local_14 = iVar7;
            iVar10 = local_3c;
          }
        }
      }
    }
  }
  return iVar10;
}

