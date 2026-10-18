// FUN_0085e0e0 @ 0085e0e0 body=[[0085e0e0, 0085e14e] [0085e150, 0085e9cf]]


void FUN_0085e0e0(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 local_4c;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_b;
  char local_a;
  char local_9;
  
  iVar11 = *(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0xc) * 4);
  local_14 = iVar11;
  local_2c = FUN_0050e450();
  iVar4 = FUN_005db9b0();
  local_28 = (iVar4 + 1) * 1000;
  local_24 = 0;
  local_3c = *(int *)(iVar11 + 0x9dc) - *(int *)(iVar11 + 0x9d8) >> 2;
  local_38 = DAT_012587e4;
  if (0 < *DAT_012587e4) {
    do {
      iVar4 = local_28;
      iVar11 = *(int *)(local_38[1] + local_24 * 4);
      local_40 = *(int *)(iVar11 + 0x20);
      local_44 = *(undefined4 *)(iVar11 + 0x1c);
      if ((local_40 != 0) &&
         (((((char)local_44 != 'R' || ((char)((uint)local_44 >> 8) != 'E')) ||
           ((char)((uint)local_44 >> 0x10) != 'B')) && (local_40 != *(int *)(param_1 + 0xc))))) {
        local_34 = *(undefined4 *)(iVar11 + 0x1c);
        iVar5 = DAT_012587e4[1];
        local_18 = *(int *)(iVar5 + *(int *)(iVar11 + 0x20) * 4);
        if (0 < (int)(*(int *)(local_18 + 0x9dc) - *(int *)(local_18 + 0x9d8) & 0xfffffffcU)) {
          piVar6 = *(int **)(param_1 + 0x20);
          local_10 = 0;
          if (piVar6 != (int *)0x0) {
            local_30 = *(int *)(DAT_012588e8 + 0xacc);
            do {
              iVar7 = *piVar6;
              piVar6 = (int *)piVar6[2];
              if (*(int *)(*(int *)(local_30 + *(int *)(iVar7 + 8) * 4) + 300) == local_40) {
                local_10 = local_10 + *(int *)(iVar7 + 0xc) * 1000;
              }
            } while (piVar6 != (int *)0x0);
          }
          local_4c = *(undefined4 *)(iVar11 + 0x1c);
          iVar11 = *(int *)(iVar11 + 0x20);
          iVar7 = *(int *)(iVar5 + local_40 * 4);
          if ((*(char *)(iVar7 + 0xcf5) == '\0') && (*(char *)(iVar7 + 0xcf4) == '\0')) {
            iVar11 = (*(int *)(local_18 + 0x9dc) - *(int *)(local_18 + 0x9d8) >> 2) * 1000;
            if (iVar11 < 0x1771) {
              if (iVar11 != 0) goto LAB_0085e30d;
              iVar11 = -1;
            }
            else {
              iVar11 = 6000;
LAB_0085e30d:
              iVar11 = (int)(6000000 / (longlong)iVar11);
            }
            local_30 = __alldiv((longlong)iVar11 * (longlong)local_10,1000,0);
            iVar11 = local_18;
            local_20 = 800000;
            piVar6 = &local_30;
            if (799999 < local_30) {
              piVar6 = &local_20;
            }
            iVar5 = *piVar6;
            local_30 = *(int *)(*(int *)(local_14 + 0xbe8) + local_40 * 4);
            local_10 = iVar5;
            iVar7 = FUN_005db9b0();
            iVar8 = (iVar7 + 1) * 1000;
            if (iVar4 == 0) {
              iVar4 = -1;
            }
            else if (iVar8 + 0x189373U < 0x39580e) {
              iVar4 = ((iVar7 + 1) * 1000000) / iVar4;
            }
            else {
              uVar14 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
              local_20 = (int)((ulonglong)uVar14 >> 0x20);
              iVar4 = __alldiv(uVar14,iVar4,iVar4 >> 0x1f);
            }
            iVar8 = local_3c * 1000;
            iVar11 = *(int *)(iVar11 + 0x9dc) - *(int *)(iVar11 + 0x9d8) >> 2;
            iVar7 = iVar11 * 1000;
            if (iVar8 == 0) {
              local_1c = -1;
            }
            else if (iVar7 + 0x189373U < 0x39580e) {
              local_1c = (iVar11 * 1000000) / iVar8;
            }
            else {
              uVar14 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
              local_20 = (int)((ulonglong)uVar14 >> 0x20);
              local_1c = __alldiv(uVar14,iVar8,iVar8 >> 0x1f);
            }
            iVar4 = local_1c + iVar4;
            if ((iVar4 < -0x189373) || (0x20c49a < iVar4)) {
              uVar14 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
              iVar11 = __alldiv(uVar14,2000,0);
            }
            else {
              iVar11 = (iVar4 * 1000) / 2000;
            }
            local_a = '\x01';
            if ((3000 < iVar11) || (iVar11 <= DAT_01318e90)) {
              local_a = '\0';
            }
            local_20 = iVar11;
            if (3000 < iVar11) {
              uVar14 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
              local_10 = __alldiv(uVar14,3000,0);
            }
            if ((*(char *)(local_14 + 0x31) != '\0') && (cVar3 = FUN_00534a50(), cVar3 != '\0')) {
              local_10 = local_10 + 200000;
            }
            local_b = '\0';
            if (*(char *)(*(int *)(param_1 + 0xc) + *(int *)(local_18 + 0xd08)) != '\0') {
              local_b = '\x01';
              FUN_00401000(0x47c35040);
              iVar11 = FUN_00b31c00();
              iVar11 = __alldiv((longlong)*(int *)(*(int *)(local_14 + 0xdb8) + local_40 * 4) *
                                (longlong)iVar11,1000,0);
              iVar4 = DAT_01318d80;
              iVar11 = iVar11 + 25000;
              if ((local_2c != 0) && (cVar3 = FUN_0048e320(), cVar3 != '\0')) {
                iVar11 = __alldiv((longlong)iVar11 * (longlong)iVar4,1000,0);
              }
              cVar3 = FUN_004b7f50(&local_44);
              if (cVar3 != '\0') {
                iVar11 = __alldiv((longlong)iVar11 * (longlong)iVar4,1000,0);
              }
              FUN_00401000(0x44fa1000);
              iVar4 = FUN_00b31c00();
              iVar4 = __alldiv((longlong)*(int *)(local_18 + 0x1430) * (longlong)iVar4,1000,0);
              local_10 = local_10 + iVar4 + iVar11;
              iVar11 = local_20;
            }
            local_9 = FUN_0092ede0();
            iVar4 = *(int *)(local_14 + 0x156c);
            if (((iVar4 == 0) || (*(int *)(iVar4 + 0x14) != local_40)) ||
               (*(char *)(iVar4 + 0x18) == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (((*(char *)(local_14 + 0x12d0) == '\0') ||
                (*(char *)(*(int *)(DAT_012587e4[1] + local_40 * 4) + 0x12d0) != '\0')) ||
               (5000 < *(int *)(local_14 + 0x1430))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((((local_9 != '\0') || (bVar1)) || (bVar2)) &&
               (((iVar4 = *(int *)(DAT_012587e4[1] + local_40 * 4), *(char *)(iVar4 + 0xcf5) == '\0'
                 && (*(char *)(iVar4 + 0xcf4) == '\0')) && (cVar3 = FUN_0085ffc0(), cVar3 != '\0')))
               ) {
              if (local_9 != '\0') {
                local_10 = local_10 + 50000;
              }
              if (bVar1) {
                local_10 = local_10 + 25000;
              }
            }
            if (((*(char *)(local_14 + 0xcf5) != '\0') || (*(char *)(local_14 + 0xcf4) != '\0')) &&
               ((*(int *)(local_14 + 0xcfc) == local_40 && (iVar11 < 2000)))) {
              iVar4 = (DAT_01318e30 + 2000) - local_20;
              FUN_00401000(0x48927c10);
              iVar11 = FUN_00b31c00();
              iVar11 = __alldiv((longlong)iVar4 * (longlong)iVar11,1000,0);
              local_10 = local_10 + iVar11;
            }
            if (*(int *)(local_18 + 0x142c) == *(int *)(param_1 + 0xc)) {
              local_10 = 0;
            }
            if (0 < local_10) {
              if (local_1c < 1000) {
                iVar4 = 1000 - local_1c;
                FUN_00401000(0x47c35040);
                iVar11 = FUN_00b31c00();
                iVar11 = __alldiv((longlong)iVar11 * (longlong)iVar4,1000,0);
                if (*(int *)(param_1 + 0x1c) == 4) {
                  uVar13 = 0x443ba000;
LAB_0085e7a9:
                  FUN_00401000(uVar13);
                  iVar4 = FUN_00b31c00();
                  iVar11 = __alldiv((longlong)iVar4 * (longlong)iVar11,1000,0);
                }
                else if (*(int *)(param_1 + 0x1c) != 1) {
                  uVar13 = 0x43fa4001;
                  goto LAB_0085e7a9;
                }
                local_10 = local_10 + iVar11;
              }
              uVar13 = local_44;
              cVar3 = FUN_006875e0(local_44,local_40);
              if (cVar3 == '\0') {
                iVar11 = FUN_00424a50();
                iVar4 = FUN_00424a50();
                if (iVar4 - iVar11 < 100) {
                  local_10 = __alldiv((longlong)(((100 - (iVar4 - iVar11)) / 100 + 1) * 1000) *
                                      (longlong)local_10,1000,0);
                }
              }
              if (999 < local_10) {
                FUN_009cd680(uVar13,local_40);
                FUN_0085bc30();
              }
            }
            iVar11 = 0;
            if (local_a != '\0') {
              if (local_b != '\0') {
                iVar11 = 100000;
              }
              uVar9 = *(int *)(local_14 + 0x1404) - *(int *)(local_18 + 0x1404);
              uVar12 = (int)uVar9 >> 0x1f;
              iVar4 = (uVar9 ^ uVar12) - uVar12;
              if (iVar4 < 2) {
                iVar11 = iVar11 + 100000;
              }
              else if (iVar4 < 4) {
                iVar11 = iVar11 + 40000;
              }
              if (*(int *)(local_18 + 0xe64) == *(int *)(local_14 + 0xe64)) {
                iVar11 = iVar11 + 25000;
              }
              if (*(int *)(*(int *)(local_18 + 0xe64) + 0x50) ==
                  *(int *)(*(int *)(local_14 + 0xe64) + 0x50)) {
                iVar11 = iVar11 + 25000;
              }
            }
            if (iVar11 != 0) {
              if (*(int *)(local_30 + 0x34) != 0) {
                iVar11 = iVar11 + 50000;
              }
              if (local_9 != '\0') {
                iVar11 = iVar11 + 50000;
              }
              if ((*(int *)(param_1 + 0x1c) == 2) && (*(int *)(local_18 + 0x380) == 2)) {
                FUN_00401000(0x47c35040);
                iVar4 = FUN_00b31c00();
                iVar11 = iVar11 + iVar4;
              }
              iVar4 = local_20;
              iVar11 = iVar11 + 25000;
              local_1c = 3000;
              local_30 = local_20;
              piVar6 = &local_30;
              if (2999 < local_20) {
                piVar6 = &local_1c;
              }
              local_20 = DAT_01318e90;
              local_30 = *piVar6;
              piVar10 = &local_30;
              if (*piVar6 <= DAT_01318e90) {
                piVar10 = &local_20;
              }
              iVar5 = *piVar10;
              iVar7 = 0;
              if (iVar4 < 1000) {
                lVar15 = (longlong)iVar5 * (longlong)iVar11;
                iVar5 = 1000;
              }
              else {
                lVar15 = __allmul(iVar11,iVar11 >> 0x1f,1000,0);
                iVar7 = iVar5 >> 0x1f;
              }
              local_30 = __alldiv(lVar15,iVar5,iVar7);
              if (999 < local_30) {
                FUN_009cd680(local_44,local_40);
                FUN_0085bd10();
              }
            }
          }
          else {
            while ((iVar4 = *(int *)(iVar5 + iVar11 * 4), *(char *)(iVar4 + 0xcf5) != '\0' ||
                   (*(char *)(iVar4 + 0xcf4) != '\0'))) {
              local_4c = *(undefined4 *)(iVar4 + 0xcf8);
              iVar11 = *(int *)(iVar4 + 0xcfc);
            }
            if ((iVar11 != local_40) && (0 < local_10)) {
              iVar4 = *(int *)(local_14 + 0xe18);
              iVar5 = *(int *)(local_14 + 0xe14);
              if (iVar5 != iVar4) {
                do {
                  if (*(int *)(iVar5 + 4) == iVar11) break;
                  iVar5 = iVar5 + 8;
                } while (iVar5 != iVar4);
                if ((iVar5 != iVar4) && (iVar4 = FUN_0085b8c0(local_4c,iVar11), iVar4 < 1))
                goto LAB_0085e9b5;
              }
              cVar3 = FUN_0085ffc0();
              if (cVar3 != '\0') {
                FUN_009cd680(local_4c,iVar11);
                FUN_0085bc30();
              }
            }
          }
        }
      }
LAB_0085e9b5:
      local_24 = local_24 + 1;
    } while (local_24 < *local_38);
  }
  return;
}

