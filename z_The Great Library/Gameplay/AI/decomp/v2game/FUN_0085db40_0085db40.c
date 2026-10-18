// FUN_0085db40 @ 0085db40 body=[[0085db40, 0085de59] [0085de60, 0085e0da]]


void FUN_0085db40(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  char local_9;
  
  local_3c = *(undefined4 *)(param_1 + 8);
  iVar9 = *(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0xc) * 4);
  local_18 = iVar9;
  local_34 = FUN_0050e450();
  local_1c = DAT_01318dfc;
  local_2c = DAT_01318dfc;
  FUN_005dcbd0();
  local_30 = *(int *)(iVar9 + 0xe4c);
  local_28 = DAT_012587e4;
  local_2c = 0;
  piVar8 = DAT_012587e4;
  if (0 < *DAT_012587e4) {
    do {
      iVar5 = *(int *)(piVar8[1] + local_2c * 4);
      local_38 = *(int *)(iVar5 + 0x20);
      local_3c = *(undefined4 *)(iVar5 + 0x1c);
      if ((local_38 != 0) &&
         (((((char)local_3c != 'R' || ((char)((uint)local_3c >> 8) != 'E')) ||
           ((char)((uint)local_3c >> 0x10) != 'B')) && (local_38 != *(int *)(param_1 + 0xc))))) {
        local_24 = *(undefined4 *)(iVar5 + 0x1c);
        iVar5 = *(int *)(DAT_012587e4[1] + local_38 * 4);
        if ((0 < (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU)) &&
           (local_30 <= *(int *)(iVar5 + 0xe4c) * 5)) {
          local_20 = DAT_01318dfc;
          local_10 = DAT_01318dfc;
          FUN_005dcbd0();
          iVar2 = local_1c;
          if (local_1c == 0) {
            iVar2 = -1;
          }
          else if (local_20 + 0x189373U < 0x39580e) {
            iVar2 = (local_20 * 1000) / local_1c;
          }
          else {
            uVar11 = __allmul(local_20,local_20 >> 0x1f,1000,0);
            local_10 = (int)((ulonglong)uVar11 >> 0x20);
            iVar2 = __alldiv(uVar11,iVar2,iVar2 >> 0x1f);
          }
          piVar8 = local_28;
          if (DAT_01318e5c <= iVar2) {
            uVar3 = *(int *)(iVar9 + 0x1404) - *(int *)(iVar5 + 0x1404);
            iVar9 = 0;
            uVar7 = (int)uVar3 >> 0x1f;
            if ((int)((uVar3 ^ uVar7) - uVar7) < 0xb) {
              local_10 = 100000;
              iVar9 = 100000;
            }
            cVar1 = FUN_0092ede0();
            iVar2 = DAT_012588e8;
            if (cVar1 != '\0') {
              iVar9 = iVar9 + 100000;
            }
            iVar4 = *(int *)(iVar5 + 0x156c);
            if (((iVar4 != 0) && (*(int *)(iVar4 + 0x14) == *(int *)(param_1 + 0xc))) &&
               (*(char *)(iVar4 + 0x18) != '\0')) {
              iVar9 = iVar9 + 100000;
            }
            cVar1 = FUN_006875e0(local_3c,local_38);
            if (cVar1 == '\0') {
              iVar4 = *(int *)(iVar5 + 0xe4c);
            }
            else {
              iVar4 = *(int *)(iVar5 + 0xe4c) / 3;
            }
            FUN_00401000(((float)iVar4 + 0.0005) * 1000.0);
            iVar4 = FUN_00b31c00();
            local_10 = __alldiv((longlong)*(int *)(iVar5 + 0x1430) * (longlong)iVar4,1000,0);
            local_10 = iVar9 + local_10;
            if (*(int *)(iVar5 + 0xe64) == *(int *)(local_18 + 0xe64)) {
              local_10 = local_10 + 50000;
            }
            if (*(int *)(*(int *)(iVar5 + 0xe64) + 0x50) ==
                *(int *)(*(int *)(local_18 + 0xe64) + 0x50)) {
              local_10 = local_10 + 25000;
            }
            iVar9 = local_10;
            cVar1 = FUN_006875e0(local_3c,local_38);
            if (cVar1 == '\0') {
              iVar9 = (*(int *)(iVar2 + 0xb0c) + -43800000) / 0x18;
              iVar4 = (int)((float)iVar9 / 365.0);
              iVar2 = 0;
              for (iVar9 = (iVar9 - (int)((float)iVar4 * 365.0)) - DAT_00f1027c; -1 < iVar9;
                  iVar9 = iVar9 - (&DAT_00f1027c)[iVar2]) {
                iVar2 = iVar2 + 1;
              }
              iVar9 = (*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + *(int *)(param_1 + 0xc) * 4) +
                               0x68) + -43800000) / 0x18;
              iVar6 = (int)((double)iVar9 / 365.0);
              iVar10 = 0;
              for (iVar9 = (iVar9 - (int)((float)iVar6 * 365.0)) - DAT_00f1027c; -1 < iVar9;
                  iVar9 = iVar9 - (&DAT_00f1027c)[iVar10]) {
                iVar10 = iVar10 + 1;
              }
              iVar2 = ((iVar4 * 0xc + iVar2) - iVar10) + iVar6 * -0xc;
              iVar9 = local_10;
              if (iVar2 < 0x78) {
                iVar2 = 0xf0 - iVar2;
                iVar9 = iVar2 * 1000;
                if (iVar9 + 0x189373U < 0x39580e) {
                  iVar9 = (iVar2 * 1000000) / 120000;
                }
                else {
                  uVar11 = __allmul(iVar9,iVar9 >> 0x1f,1000,0);
                  iVar9 = __alldiv(uVar11,120000,0);
                }
                iVar9 = __alldiv((longlong)iVar9 * (longlong)local_10,1000,0);
                local_10 = iVar9;
              }
            }
            local_14 = *(undefined4 *)(param_1 + 8);
            local_9 = '\0';
            if (*(char *)(*(int *)(param_1 + 0xc) + *(int *)(iVar5 + 0xd08)) != '\0') {
              local_9 = '\x01';
              FUN_00401000(0x46c35100);
              iVar5 = FUN_00b31c00();
              iVar5 = __alldiv((longlong)*(int *)(*(int *)(local_18 + 0xdb8) + local_38 * 4) *
                               (longlong)iVar5,1000,0);
              iVar2 = DAT_01318e9c;
              iVar5 = iVar5 + 100000;
              if ((local_34 != 0) && (cVar1 = FUN_0048e320(), cVar1 != '\0')) {
                iVar5 = __alldiv((longlong)iVar5 * (longlong)iVar2,1000,0);
              }
              cVar1 = FUN_004b7f50(&local_3c);
              if (cVar1 != '\0') {
                iVar5 = __alldiv((longlong)iVar5 * (longlong)iVar2,1000,0);
              }
              iVar9 = iVar9 + iVar5;
            }
            iVar5 = local_1c;
            if (local_1c == 0) {
              iVar5 = -1;
            }
            else if (local_20 + 0x189373U < 0x39580e) {
              iVar5 = (local_20 * 1000) / local_1c;
            }
            else {
              uVar11 = __allmul(local_20,local_20 >> 0x1f,1000,0);
              iVar5 = __alldiv(uVar11,iVar5,iVar5 >> 0x1f);
            }
            if (4000 < iVar5) {
              iVar5 = 4000;
            }
            local_10 = __alldiv((longlong)iVar5 * (longlong)iVar9,1000,0);
            if (local_9 == '\0') {
              FUN_0085fe40(&local_10);
            }
            piVar8 = local_28;
            iVar9 = local_18;
            if (1000 < local_10) {
              FUN_009cd680(local_3c,local_38);
              FUN_0085bb60();
              piVar8 = local_28;
              iVar9 = local_18;
            }
          }
        }
      }
      local_2c = local_2c + 1;
    } while (local_2c < *piVar8);
  }
  return;
}

