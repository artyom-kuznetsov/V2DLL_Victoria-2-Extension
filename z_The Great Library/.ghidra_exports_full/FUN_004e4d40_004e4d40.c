// FUN_004e4d40 @ 004e4d40 body=[[004e4d40, 004e5146]]


void FUN_004e4d40(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_34;
  int local_30;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  if ((param_3 == 0) || (*(int *)(*(int *)(param_1 + 0x30) + 0xfc) == 6)) {
    *param_2 = 0x2d2d2d;
    param_2[1] = 0;
    return;
  }
  local_18 = 0x2d2d2d;
  local_14 = 0;
  local_34 = 0;
  local_30 = 0;
  if (0 < *DAT_012587e4) {
    do {
      iVar1 = *(int *)(DAT_012587e4[1] + local_30 * 4);
      local_20 = *(undefined4 *)(iVar1 + 0x1c);
      local_1c = *(int *)(iVar1 + 0x20);
      if (((((((char)local_20 != 'R') || ((char)((uint)local_20 >> 8) != 'E')) ||
            ((char)((uint)local_20 >> 0x10) != 'B')) &&
           ((local_1c != *(int *)(param_1 + 0x3c) ||
            (*(int *)(param_3 + 300) != *(int *)(param_3 + 0x134))))) &&
          (iVar1 = *(int *)(DAT_012587e4[1] + *(int *)(iVar1 + 0x20) * 4),
          0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU))) &&
         (((*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4) + 0x16c)
            == *(int *)(param_3 + 0x16c) || (cVar3 = FUN_004b7f50(&local_20), cVar3 != '\0')) ||
          ((cVar3 = FUN_004b64e0(), cVar3 != '\0' ||
           (*(int *)(param_1 + 0x4c) == *(int *)(iVar1 + 0xe64))))))) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 0xfc);
        iVar4 = 0;
        if (iVar5 == 3) {
          if (*(int *)(iVar1 + 0xe68) == *(int *)(param_1 + 0x50)) {
            iVar4 = 100000000;
          }
        }
        else if (iVar5 == 2) {
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 0x20) == *(int *)(iVar1 + 0x20))
          {
            iVar4 = 100000000;
          }
        }
        else if ((iVar5 == 0) || (iVar5 == 1)) {
          iVar5 = *(int *)(*(int *)(param_1 + 0x4c) + 0x50);
          local_10 = *(undefined4 *)(iVar5 + 0x1c);
          if ((*(int *)(iVar5 + 0x20) == local_1c) && (cVar3 = FUN_0055dda0(), cVar3 != '\0'))
          goto LAB_004e5117;
          if (*(int *)(iVar1 + 0xe64) == *(int *)(param_1 + 0x4c)) {
            iVar4 = 100000000;
          }
          if (*(int *)(*(int *)(iVar1 + 0xe64) + 0x50) == iVar5) {
            local_10 = *(undefined4 *)(param_1 + 0x38);
            bVar6 = *(int *)(*(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0x3c) * 4) + 0xe64) ==
                    *(int *)(param_1 + 0x4c);
LAB_004e504a:
            if (!bVar6) {
              iVar4 = iVar4 + 50000000;
            }
          }
        }
        else if (iVar5 == 4) {
          iVar4 = 100000000;
          if (*(int *)(iVar1 + 0xe64) == *(int *)(param_1 + 0x4c)) {
            iVar4 = 150000000;
          }
          else if (*(int *)(*(int *)(iVar1 + 0xe64) + 0x50) ==
                   *(int *)(*(int *)(param_1 + 0x4c) + 0x50)) {
            iVar4 = 127000000;
          }
        }
        else if (iVar5 == 5) {
          if ((*(char *)(*(int *)(param_1 + 0x30) + 0x12e) == '\0') &&
             (cVar3 = FUN_00971160(), cVar3 != '\0')) {
            iVar5 = *(int *)(param_1 + 0x4c);
            iVar4 = 100000;
            if (*(int *)(iVar1 + 0xe64) == iVar5) {
              iVar4 = 0x5f767a0;
            }
            if (*(int *)(*(int *)(iVar1 + 0xe64) + 0x50) == *(int *)(iVar5 + 0x50)) {
              bVar6 = *(int *)(*(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0x3c) * 4) + 0xe64) ==
                      iVar5;
              goto LAB_004e504a;
            }
          }
        }
        else if (iVar5 == 7) {
          cVar3 = FUN_004b8b90();
          if ((cVar3 == '\0') || (cVar3 = FUN_004b7f50(&local_20), cVar3 != '\0')) {
            iVar4 = 100000;
          }
          if (*(int *)(iVar1 + 0xe64) == *(int *)(param_1 + 0x4c)) {
            iVar4 = iVar4 + 100000000;
          }
          else if (*(int *)(*(int *)(iVar1 + 0xe64) + 0x50) ==
                   *(int *)(*(int *)(param_1 + 0x4c) + 0x50)) {
            iVar4 = iVar4 + 50000000;
          }
          if (*(int *)(iVar1 + 0xe68) == *(int *)(param_1 + 0x50)) {
            iVar4 = iVar4 + 55000000;
          }
          else if (*(int *)(*(int *)(iVar1 + 0xe68) + 0x4c) ==
                   *(int *)(*(int *)(param_1 + 0x50) + 0x4c)) {
            iVar4 = iVar4 + 27000000;
          }
        }
        iVar5 = 0;
        if (iVar4 != 0) {
          cVar3 = FUN_004b64e0();
          if (cVar3 != '\0') {
            iVar4 = iVar4 + 25000000;
          }
          local_10 = *(undefined4 *)(param_1 + 0x38);
          iVar5 = *(int *)(*(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0x3c) * 4) + 0xbd0);
          iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x134) + *(int *)(iVar5 + 0x40) * 4);
          if (iVar2 != 0) {
            iVar5 = iVar2;
          }
          if (iVar5 == *(int *)(iVar1 + 0xbd0)) {
            iVar4 = iVar4 + 4000000;
          }
          cVar3 = FUN_004b7f50(&local_20);
          if (cVar3 == '\0') {
            FUN_004a0e80(DAT_0125870c,&local_24);
            if (90000 < local_24) goto LAB_004e5117;
            iVar5 = iVar4 + (5000000 - local_24);
          }
          else {
            iVar5 = iVar4 + 26000000;
          }
        }
        if (local_34 < iVar5) {
          local_18 = local_20;
          local_14 = local_1c;
          local_34 = iVar5;
        }
      }
LAB_004e5117:
      local_30 = local_30 + 1;
    } while (local_30 < *DAT_012587e4);
  }
  *param_2 = local_18;
  param_2[1] = local_14;
  return;
}

