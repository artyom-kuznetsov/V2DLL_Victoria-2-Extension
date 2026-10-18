// FUN_004b9780 @ 004b9780 body=[[004b9780, 004b97e6] [004b97f0, 004b992c] [004b9930, 004b994c] [004b9950, 004b9a69] [004b9a70, 004b9a8c] [004b9a90, 004b9b81]]


void FUN_004b9780(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_88 [8];
  undefined4 local_80;
  int local_7c;
  int local_74;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  char local_9;
  
  local_2c = DAT_01258a48;
  iVar5 = DAT_01258a3c;
  if (*(int *)(param_1 + 300) != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    local_14 = iVar5;
    local_34 = 0;
    if (0 < (int)(*(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x194) & 0xfffffff0U)) {
      local_1c = 0;
      do {
        iVar4 = *(int *)(local_1c + *(int *)(param_1 + 0x194));
        while (iVar4 != 0) {
          local_30 = *(int *)(iVar4 + 0x27c);
          local_28 = iVar4;
          FUN_008a8650(0);
          local_80 = *(undefined4 *)(param_1 + 0x128);
          local_7c = *(int *)(param_1 + 300);
          local_9 = *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_7c * 4) + 0x12d0);
          local_24 = 1;
          local_74 = iVar4;
          local_40 = local_80;
          if (4 < (int)(*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) & 0xfffffffcU)) {
            do {
              local_3c = *(int *)(*(int *)(iVar5 + 0xc) + local_24 * 4);
              iVar5 = local_24;
              if ((((int)((double)((*(int *)(local_3c + 0x1d0) + -43800000) / 0x18) / 365.0) < 2) ||
                  (1 < (int)((double)((*(int *)(local_3c + 0x1d4) + -43800000) / 0x18) / 365.0))) &&
                 ((*(char *)(local_3c + 0x1d8) == '\0' || (local_9 != '\0')))) {
                local_20 = *(int *)(*(int *)(iVar4 + 0x68) + 0x80) +
                           *(int *)(local_3c + 0x28) * 0x1c;
                local_18 = *(uint *)(local_20 + 8);
                local_38 = *(int *)(local_20 + 0x10) - *(int *)(local_20 + 0xc) >> 2;
                if ((local_38 != 0) && (local_10 = 0, 0 < local_38)) {
                  do {
                    iVar5 = *(int *)(*(int *)(local_20 + 0xc) + local_10 * 4);
                    iVar4 = 0;
                    iVar6 = *(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8) >> 2;
                    if (0 < iVar6) {
                      do {
                        cVar3 = (**(code **)(**(int **)(*(int *)(iVar5 + 8) + iVar4 * 4) + 0x18))
                                          (local_88);
                        if (cVar3 == '\0') goto LAB_004b9996;
                        iVar4 = iVar4 + 1;
                      } while (iVar4 < iVar6);
                    }
                    local_18 = __alldiv((longlong)(int)local_18 *
                                        (longlong)
                                        *(int *)(*(int *)(*(int *)(local_20 + 0xc) + local_10 * 4) +
                                                0x20),1000,0);
                    iVar4 = local_28;
                    if ((int)local_18 < 1) break;
LAB_004b9996:
                    local_10 = local_10 + 1;
                    iVar4 = local_28;
                  } while (local_10 < local_38);
                }
                iVar5 = local_24;
                uVar1 = *(undefined4 *)(local_3c + 8);
                uVar7 = __alldiv(local_18 << 0x1e,((int)local_18 >> 0x1f) << 0x1e | local_18 >> 2,
                                 0x1f40000,0);
                iVar6 = *(int *)(iVar4 + 0x7c);
                *(int *)(iVar6 + iVar5 * 8) = (int)uVar7;
                *(int *)(iVar6 + 4 + iVar5 * 8) = (int)((ulonglong)uVar7 >> 0x20);
                *(undefined4 *)(*(int *)(iVar4 + 0x8c) + iVar5 * 4) = uVar1;
              }
              local_24 = iVar5 + 1;
              iVar5 = local_14;
            } while (local_24 < *(int *)(local_14 + 0x10) - *(int *)(local_14 + 0xc) >> 2);
          }
          FUN_004be780(iVar4 + 0x74);
          local_20 = 1;
          iVar5 = local_2c;
          if (4 < (int)(*(int *)(local_2c + 0x1c) - *(int *)(local_2c + 0x18) & 0xfffffffcU)) {
            do {
              local_38 = *(int *)(*(int *)(iVar5 + 0x18) + local_20 * 4);
              local_24 = *(int *)(*(int *)(iVar4 + 0x68) + 0x70) + *(int *)(local_38 + 0x50) * 0x1c;
              local_18 = *(uint *)(local_24 + 8);
              local_3c = *(int *)(local_24 + 0x10) - *(int *)(local_24 + 0xc) >> 2;
              if ((local_3c != 0) && (local_10 = 0, 0 < local_3c)) {
                do {
                  iVar5 = *(int *)(*(int *)(local_24 + 0xc) + local_10 * 4);
                  iVar4 = 0;
                  iVar6 = *(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8) >> 2;
                  if (0 < iVar6) {
                    do {
                      cVar3 = (**(code **)(**(int **)(*(int *)(iVar5 + 8) + iVar4 * 4) + 0x18))
                                        (local_88);
                      if (cVar3 == '\0') goto LAB_004b9ad6;
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < iVar6);
                  }
                  local_18 = __alldiv((longlong)(int)local_18 *
                                      (longlong)
                                      *(int *)(*(int *)(*(int *)(local_24 + 0xc) + local_10 * 4) +
                                              0x20),1000,0);
                  iVar5 = local_2c;
                  iVar4 = local_28;
                  if ((int)local_18 < 1) break;
LAB_004b9ad6:
                  local_10 = local_10 + 1;
                  iVar5 = local_2c;
                  iVar4 = local_28;
                } while (local_10 < local_3c);
              }
              iVar2 = local_20;
              local_3c = *(int *)(local_38 + 0x30);
              uVar7 = __alldiv(local_18 << 0x1e,((int)local_18 >> 0x1f) << 0x1e | local_18 >> 2,
                               0x1f40000,0);
              iVar6 = *(int *)(iVar4 + 0xa4);
              *(int *)(iVar6 + 4 + iVar2 * 8) = (int)((ulonglong)uVar7 >> 0x20);
              *(int *)(iVar6 + iVar2 * 8) = (int)uVar7;
              *(int *)(*(int *)(iVar4 + 0xb4) + iVar2 * 4) = local_3c;
              local_20 = iVar2 + 1;
            } while (local_20 < *(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 2);
          }
          FUN_004be780(iVar4 + 0x9c);
          iVar4 = local_30;
          iVar5 = local_14;
        }
        local_1c = local_1c + 0x10;
        local_34 = local_34 + 1;
      } while (local_34 < *(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x194) >> 4);
    }
  }
  return;
}

