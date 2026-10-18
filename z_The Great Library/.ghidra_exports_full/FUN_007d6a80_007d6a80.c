// FUN_007d6a80 @ 007d6a80 body=[[007d6a80, 007d6e6b] [007d6e70, 007d6ef3]]


void FUN_007d6a80(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int local_30 [5];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    do {
      local_10 = *(int *)(*(int *)(param_1 + 0x8c) + local_8 * 4);
      local_1c = *(int *)(*(int *)(param_1 + 0x8c) + local_8 * 4 + 4);
      while (local_10 < local_1c) {
        if (*(char *)(local_10 + *(int *)(param_1 + 0x94)) != '\0') {
          iVar8 = (int)*(short *)(*(int *)(param_1 + 0x90) + local_10 * 2);
          if ((iVar8 < *(int *)(param_1 + 0x40) + -2) && (local_8 < *(int *)(param_1 + 0x44) + -2))
          {
            iVar4 = *(int *)(param_1 + 0x38);
            iVar7 = *(int *)(iVar4 + 0x212c);
            iVar1 = *(int *)(iVar7 + 4) + -1;
            iVar6 = iVar8;
            if (iVar1 < iVar8) {
              iVar6 = iVar1;
            }
            iVar1 = local_8;
            if (local_8 < 0) {
              iVar1 = 0;
            }
            iVar2 = *(int *)(iVar7 + 8) + -1;
            if (iVar2 < iVar1) {
              iVar1 = iVar2;
            }
            local_30[0] = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                                  (uint)*(ushort *)
                                         (*(int *)(iVar7 + 0x18) * iVar1 +
                                          *(int *)(iVar7 + 0xc) * iVar6 + *(int *)(iVar7 + 0x20)) *
                                  4);
            if (iVar8 + 2 < *(int *)(param_1 + 0x40)) {
              iVar7 = *(int *)(iVar4 + 0x212c);
              iVar1 = *(int *)(iVar7 + 4) + -1;
              iVar6 = iVar8 + 1;
              if (iVar1 < iVar8 + 1) {
                iVar6 = iVar1;
              }
              iVar1 = local_8;
              if (local_8 < 0) {
                iVar1 = 0;
              }
              iVar2 = *(int *)(iVar7 + 8) + -1;
              if (iVar2 < iVar1) {
                iVar1 = iVar2;
              }
              local_30[1] = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                                    (uint)*(ushort *)
                                           (*(int *)(iVar7 + 0x18) * iVar1 +
                                            *(int *)(iVar7 + 0xc) * iVar6 + *(int *)(iVar7 + 0x20))
                                    * 4);
            }
            else {
              local_30[1] = 0;
            }
            iVar7 = iVar8 + -1;
            if (iVar7 < 1) {
              local_30[2] = 0;
            }
            else {
              iVar6 = *(int *)(iVar4 + 0x212c);
              iVar1 = *(int *)(iVar6 + 4) + -1;
              if (iVar1 < iVar7) {
                iVar7 = iVar1;
              }
              iVar1 = local_8;
              if (local_8 < 0) {
                iVar1 = 0;
              }
              iVar2 = *(int *)(iVar6 + 8) + -1;
              if (iVar2 < iVar1) {
                iVar1 = iVar2;
              }
              local_30[2] = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                                    (uint)*(ushort *)
                                           (*(int *)(iVar6 + 0x18) * iVar1 +
                                            *(int *)(iVar6 + 0xc) * iVar7 + *(int *)(iVar6 + 0x20))
                                    * 4);
            }
            if (local_8 + 2 < *(int *)(param_1 + 0x44)) {
              iVar6 = *(int *)(iVar4 + 0x212c);
              iVar2 = *(int *)(iVar6 + 4) + -1;
              iVar7 = local_8 + 1;
              iVar1 = iVar8;
              if (iVar2 < iVar8) {
                iVar1 = iVar2;
              }
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              iVar2 = *(int *)(iVar6 + 8) + -1;
              if (iVar2 < iVar7) {
                iVar7 = iVar2;
              }
              local_30[3] = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                                    (uint)*(ushort *)
                                           (*(int *)(iVar6 + 0x18) * iVar7 +
                                            *(int *)(iVar6 + 0xc) * iVar1 + *(int *)(iVar6 + 0x20))
                                    * 4);
            }
            else {
              local_30[3] = 0;
            }
            iVar7 = local_8 + -1;
            if (iVar7 < 1) {
              local_30[4] = 0;
            }
            else {
              iVar6 = *(int *)(iVar4 + 0x212c);
              iVar2 = *(int *)(iVar6 + 4) + -1;
              iVar1 = iVar8;
              if (iVar2 < iVar8) {
                iVar1 = iVar2;
              }
              iVar2 = iVar7;
              if (iVar7 < 0) {
                iVar2 = 0;
              }
              iVar3 = *(int *)(iVar6 + 8) + -1;
              if (iVar3 < iVar2) {
                iVar2 = iVar3;
              }
              local_30[4] = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                                    (uint)*(ushort *)
                                           (*(int *)(iVar6 + 0x18) * iVar2 +
                                            *(int *)(iVar6 + 0xc) * iVar1 + *(int *)(iVar6 + 0x20))
                                    * 4);
            }
            local_c = *(int *)(param_1 + 0x9c) + local_10 * 4;
            if (((((param_2 & 1) != 0) &&
                 (*(undefined2 *)(local_c + 1) = 0, iVar4 = DAT_01258708, local_30[0] != 0)) &&
                (*(int *)(local_30[0] + 0xb4) != 0)) && (*(char *)(local_30[0] + 0x2a) != '\0')) {
              iVar6 = *(int *)(*(int *)(param_1 + 0x38) + 0x2238);
              iVar1 = *(int *)(*(int *)(iVar6 + *(int *)(local_30[0] + 0xb4) * 4) + 300);
              if (((local_30[1] != 0) && (*(int *)(local_30[1] + 0xb4) != 0)) &&
                 ((*(char *)(local_30[1] + 0x2a) != '\0' &&
                  ((iVar1 != *(int *)(*(int *)(iVar6 + *(int *)(local_30[1] + 0xb4) * 4) + 300) &&
                   ((*(byte *)(*(int *)(DAT_01258708 + 0x20) * local_8 +
                               *(int *)(DAT_01258708 + 0xc) + 1 + iVar8) & 0xe) == 0)))))) {
                *(undefined1 *)(local_c + 2) = 1;
              }
              if ((((local_30[2] != 0) && (*(int *)(local_30[2] + 0xb4) != 0)) &&
                  (*(char *)(local_30[2] + 0x2a) != '\0')) &&
                 ((iVar1 != *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x2238) +
                                             *(int *)(local_30[2] + 0xb4) * 4) + 300) &&
                  ((*(byte *)(*(int *)(iVar4 + 0x20) * local_8 + *(int *)(iVar4 + 0xc) + -1 + iVar8)
                   & 0xb) == 0)))) {
                *(byte *)(local_c + 2) = *(byte *)(local_c + 2) | 2;
              }
              if (((local_30[3] != 0) && (*(int *)(local_30[3] + 0xb4) != 0)) &&
                 ((*(char *)(local_30[3] + 0x2a) != '\0' &&
                  ((iVar1 != *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x2238) +
                                              *(int *)(local_30[3] + 0xb4) * 4) + 300) &&
                   ((*(byte *)(*(int *)(iVar4 + 0x20) * (local_8 + 1) + *(int *)(iVar4 + 0xc) +
                              iVar8) & 10) == 0)))))) {
                *(byte *)(local_c + 2) = *(byte *)(local_c + 2) | 4;
              }
              if ((((local_30[4] != 0) && (*(int *)(local_30[4] + 0xb4) != 0)) &&
                  (*(char *)(local_30[4] + 0x2a) != '\0')) &&
                 ((iVar1 != *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x2238) +
                                             *(int *)(local_30[4] + 0xb4) * 4) + 300) &&
                  ((*(byte *)(*(int *)(iVar4 + 0x20) * iVar7 + *(int *)(iVar4 + 0xc) + iVar8) & 0xf)
                   == 0)))) {
                *(byte *)(local_c + 2) = *(byte *)(local_c + 2) | 8;
              }
              local_18 = *(int *)(local_30[0] + 0xb4);
              iVar8 = (*(int *)(local_30[0] + 0xcc) - *(int *)(local_30[0] + 200)) / 0x24;
              bVar9 = false;
              local_14 = 1;
              do {
                if ((*(int *)(local_30[local_14] + 0xb4) != *(int *)(local_30[0] + 0xb4)) &&
                   (iVar4 = 0, 0 < iVar8)) {
                  piVar5 = (int *)(*(int *)(local_30[0] + 200) + 4);
                  do {
                    if (*piVar5 == *(int *)(local_30[local_14] + 0xb4)) {
                      bVar9 = *(int *)(*(int *)(local_30[0] + 200) + iVar4 * 0x24) == 4;
                      bVar10 = false;
                      if (bVar9) goto LAB_007d6ebb;
                      break;
                    }
                    iVar4 = iVar4 + 1;
                    piVar5 = piVar5 + 9;
                  } while (iVar4 < iVar8);
                }
                local_14 = local_14 + 1;
              } while (local_14 < 5);
              bVar10 = !bVar9;
LAB_007d6ebb:
              *(bool *)(local_c + 1) = !bVar10;
            }
          }
        }
        local_10 = local_10 + 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x44));
  }
  return;
}

