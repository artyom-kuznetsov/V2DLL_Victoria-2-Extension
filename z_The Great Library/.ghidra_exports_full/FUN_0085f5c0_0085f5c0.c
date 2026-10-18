// FUN_0085f5c0 @ 0085f5c0 body=[[0085f5c0, 0085f87a]]


void FUN_0085f5c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int iVar12;
  int local_1c;
  int local_10;
  int local_c [2];
  
  iVar1 = *(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0xc) * 4);
  iVar2 = *(int *)(iVar1 + 0xe4c);
  if (1 < iVar2) {
    iVar5 = FUN_005db9b0();
    piVar4 = DAT_012587e4;
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    iVar5 = iVar5 * 1000;
    local_1c = 0;
    if (0 < *DAT_012587e4) {
      do {
        iVar3 = *(int *)(piVar4[1] + local_1c * 4);
        iVar12 = *(int *)(iVar3 + 0x20);
        uVar11 = *(undefined4 *)(iVar3 + 0x1c);
        if (((iVar12 != 0) &&
            (((((char)uVar11 != 'R' || ((char)((uint)uVar11 >> 8) != 'E')) ||
              ((char)((uint)uVar11 >> 0x10) != 'B')) &&
             ((iVar12 != *(int *)(param_1 + 0xc) &&
              (iVar3 = *(int *)(DAT_012587e4[1] + *(int *)(iVar3 + 0x20) * 4),
              0 < (int)(*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) & 0xfffffffcU))))))) &&
           (*(char *)(iVar3 + 0x31) == '\0')) {
          iVar6 = FUN_005db9b0();
          iVar7 = iVar6 * 1000;
          iVar8 = *(int *)(iVar3 + 0xe4c);
          if (iVar5 == 0) {
            iVar6 = -1;
          }
          else if (iVar7 + 0x189373U < 0x39580e) {
            iVar6 = (iVar6 * 1000000) / iVar5;
          }
          else {
            uVar10 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
            iVar6 = __alldiv(uVar10,iVar5,iVar5 >> 0x1f);
          }
          iVar7 = iVar8 * 1000;
          local_10 = iVar2 * 1000;
          if (local_10 == 0) {
            local_10 = -1;
          }
          else if (iVar7 + 0x189373U < 0x39580e) {
            local_10 = (iVar8 * 1000000) / local_10;
          }
          else {
            uVar10 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
            local_10 = __alldiv(uVar10,local_10,local_10 >> 0x1f);
          }
          iVar6 = local_10 + iVar6;
          if (iVar6 + 0x189373U < 0x39580e) {
            iVar8 = (iVar6 * 1000) / 2000;
          }
          else {
            uVar10 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
            iVar8 = __alldiv(uVar10,2000,0);
          }
          local_c[0] = 0;
          iVar6 = 0;
          if (iVar8 < DAT_01318e5c) {
            local_c[0] = 20000;
            if (*(int *)(iVar3 + 0xe64) == *(int *)(iVar1 + 0xe64)) {
              local_c[0] = 220000;
            }
            else if (*(int *)(*(int *)(iVar3 + 0xe64) + 0x50) ==
                     *(int *)(*(int *)(iVar1 + 0xe64) + 0x50)) {
              local_c[0] = 120000;
            }
            iVar3 = local_c[0];
            iVar6 = local_c[0];
            if (*(char *)(iVar12 + *(int *)(iVar1 + 0xd08)) != '\0') {
              iVar6 = local_c[0] + 20000;
              local_c[0] = iVar6;
              FUN_00401000(0x43488000);
              iVar8 = FUN_00b31c00();
              if (local_10 <= iVar8) {
                iVar6 = iVar3 + 45000;
                local_c[0] = iVar6;
              }
            }
          }
          if ((iVar6 != 0) && (FUN_0085fe40(local_c), 999 < local_c[0])) {
            uVar9 = FUN_009cd680(uVar11,iVar12);
            FUN_0085bee0(param_1,uVar9,uVar11,iVar12);
          }
        }
        local_1c = local_1c + 1;
      } while (local_1c < *piVar4);
    }
  }
  return;
}

