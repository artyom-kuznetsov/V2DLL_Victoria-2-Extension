// FUN_00654620 @ 00654620 body=[[00654620, 00654afa] [00654b00, 00654d76]]


void FUN_00654620(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  char *pcVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  int *in_ECX;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  int local_2c [2];
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7f448;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = (**(code **)(*in_ECX + 0x38))();
  *(undefined4 *)(iVar2 + 8) = 0;
  cVar1 = FUN_00651d90();
  if (cVar1 != '\0') {
    piVar3 = *(int **)(in_ECX[0x5fa] + 0xe4);
    uVar12 = 3;
    goto LAB_00654d5f;
  }
  if ((0 < in_ECX[0x582]) && ((char)in_ECX[0x57f] == '\0')) {
    local_18 = (int *)(**(code **)(**(int **)in_ECX[0x580] + 4))();
    if (local_18 == (int *)0x3) {
      if ((in_ECX[0x582] == 1) && (iVar2 = *(int *)in_ECX[0x580], *(char *)(iVar2 + 4) != '\0')) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar2 + -8;
        }
        uVar12 = *(undefined4 *)(iVar2 + 0x58);
        iVar2 = (**(code **)(*in_ECX + 0x38))();
        *(undefined4 *)(iVar2 + 8) = uVar12;
      }
    }
    else if (((local_18 != (int *)0x4) && (local_18 != (int *)0x5)) && (local_18 != (int *)0x7)) {
      if (*(int *)(in_ECX[0x15] + 0x98) != 0) {
        (**(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10))(4);
        ExceptionList = local_10;
        return;
      }
      iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x4c))(&local_24);
      iVar2 = *(int *)(iVar2 + 4);
      piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4c))(local_2c);
      local_24 = (float)*piVar3;
      local_20 = (float)iVar2;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      uVar11 = 0;
      puVar10 = &local_3c;
      local_8 = 0;
      pfVar4 = &local_24;
      uVar12 = (**(code **)(*in_ECX + 0x38))(pfVar4,puVar10,0);
      piVar3 = (int *)FUN_006451c0(uVar12,pfVar4,puVar10,uVar11);
      if (piVar3 == (int *)0x0) {
        iVar2 = (**(code **)(**(int **)in_ECX[0x580] + 4))();
        if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) {
          uVar12 = 0;
          goto LAB_00654cf6;
        }
LAB_00654cf4:
        uVar12 = 4;
      }
      else {
        pfVar4 = (float *)(**(code **)(*in_ECX + 0x58))(local_2c);
        local_24 = *pfVar4;
        iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)pfVar4[1] * 4);
        iVar5 = (**(code **)(*piVar3 + 4))();
        if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
          iVar8 = (**(code **)(*in_ECX + 0x58))(&local_24);
          iVar5 = piVar3[0x31];
          if (*(int *)(iVar8 + 4) == iVar5) {
            (**(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10))(4);
            FUN_009a63f0();
            ExceptionList = local_10;
            return;
          }
          if ((iVar5 != *(int *)(iVar2 + 0x20)) &&
             (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + iVar5 * 4) + 0x34) != 0 ||
               ((((char)piVar3[0x30] == 'R' && (*(char *)((int)piVar3 + 0xc1) == 'E')) &&
                (*(char *)((int)piVar3 + 0xc2) == 'B')))) ||
              (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
               (*(char *)(iVar2 + 0x1e) == 'B')))))) {
            if (local_18 == (int *)0x1) {
              pcVar7 = *(code **)(*piVar3 + 0x3c);
            }
            else {
              pcVar7 = *(code **)(*piVar3 + 0x38);
            }
            cVar1 = (*pcVar7)();
            pcVar7 = *(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10);
            if (cVar1 != '\0') {
LAB_006548d3:
              (*pcVar7)(7);
              FUN_009a63f0();
              ExceptionList = local_10;
              return;
            }
            goto LAB_00654966;
          }
          if (*(char *)(*(int *)(*(int *)(iVar2 + 0xbe8) + iVar5 * 4) + 0x60) != '\0') {
            cVar1 = (**(code **)(*piVar3 + 0x38))();
LAB_00654951:
            pcVar7 = *(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10);
            if (cVar1 != '\0') {
LAB_006548f0:
              (*pcVar7)(6);
              FUN_009a63f0();
              ExceptionList = local_10;
              return;
            }
LAB_00654966:
            (*pcVar7)(5);
            FUN_009a63f0();
            ExceptionList = local_10;
            return;
          }
        }
        else {
          if (iVar5 != 3) goto LAB_00654cf4;
          if (local_18 == (int *)0x1) {
            if (*(char *)(piVar3[0x15] + 0x2a) == '\0') {
              local_11 = '\0';
              piVar3 = (int *)piVar3[0x39];
              do {
                do {
                  local_18 = piVar3;
                  if (piVar3 == (int *)0x0) goto LAB_00654856;
                  local_18 = (int *)piVar3[2];
                  piVar9 = (int *)*piVar3;
                  cVar1 = (**(code **)(*piVar9 + 0x3c))();
                  piVar3 = local_18;
                } while (cVar1 == '\0');
                local_2c[0] = piVar9[0x30];
                iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar9[0x31] * 4);
                pcVar6 = (char *)(**(code **)(*in_ECX + 0x58))(&local_24);
                piVar3 = local_18;
              } while ((*(int *)(pcVar6 + 4) == *(int *)(iVar2 + 0x20)) ||
                      ((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(pcVar6 + 4) * 4) + 0x34
                                ) == 0 &&
                       ((((*pcVar6 != 'R' || (pcVar6[1] != 'E')) || (pcVar6[2] != 'B')) &&
                        (((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
                         (*(char *)(iVar2 + 0x1e) != 'B'))))))));
              local_11 = '\x01';
LAB_00654856:
              if (in_ECX[0x36a] != 0) {
                (**(code **)(*in_ECX + 0x58))(local_2c);
                cVar1 = FUN_004b8b00();
                if (cVar1 == '\0') {
LAB_0065488e:
                  (**(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10))(5);
                  FUN_009a63f0();
                  ExceptionList = local_10;
                  return;
                }
                pcVar7 = *(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10);
                if (local_11 != '\0') goto LAB_006548d3;
                goto LAB_006548f0;
              }
              goto LAB_00654d09;
            }
            if ((piVar3[0x49] != 0) && (piVar3[0x54] != 0)) {
              iVar2 = (**(code **)(*in_ECX + 0x58))(local_2c);
              if (*(int *)(iVar2 + 4) != piVar3[0x4b]) {
                cVar1 = (**(code **)(**(int **)in_ECX[0x580] + 0x88))(piVar3 + -2);
                goto LAB_00654951;
              }
              goto LAB_00654937;
            }
          }
          else {
            if ((local_18 != (int *)0x0) ||
               (*(char *)(*(int *)(*(int *)(*(int *)in_ECX[0x580] + 0xdc) + 0x5c) + 0x2a) != '\0'))
            {
              pfVar4 = (float *)(**(code **)(*in_ECX + 0x58))(local_2c);
              local_24 = *pfVar4;
              iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)pfVar4[1] * 4);
              iVar8 = (**(code **)(*in_ECX + 0x58))(&local_24);
              iVar5 = piVar3[0x4b];
              if (*(int *)(iVar8 + 4) == iVar5) {
LAB_00654a4f:
                (**(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10))(6);
                FUN_009a63f0();
                ExceptionList = local_10;
                return;
              }
              if ((iVar5 == *(int *)(iVar2 + 0x20)) ||
                 (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + iVar5 * 4) + 0x34) == 0 &&
                   ((((char)piVar3[0x4a] != 'R' || (*(char *)((int)piVar3 + 0x129) != 'E')) ||
                    (*(char *)((int)piVar3 + 0x12a) != 'B')))) &&
                  (((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
                   (*(char *)(iVar2 + 0x1e) != 'B')))))) {
                if (*(char *)(*(int *)(*(int *)(iVar2 + 0xbe8) + iVar5 * 4) + 0x60) == '\0') {
                  if (local_18 != (int *)0x0) goto LAB_00654d09;
                  if (*(char *)(piVar3[0x15] + 0x2a) == '\0') {
                    piVar9 = (int *)piVar3[0x39];
                    if ((int *)piVar3[0x39] == (int *)0x0) goto LAB_00654983;
                    do {
                      local_18 = (int *)piVar9[2];
                      piVar9 = (int *)*piVar9;
                      cVar1 = (**(code **)(*piVar9 + 0x3c))();
                      if (((cVar1 != '\0') &&
                          (iVar2 = (**(code **)(*in_ECX + 0x58))(local_2c),
                          piVar9[0x31] == *(int *)(iVar2 + 4))) &&
                         (cVar1 = FUN_005d77a0(), cVar1 != '\0')) goto LAB_006549e8;
                      piVar9 = local_18;
                    } while (local_18 != (int *)0x0);
                    uVar12 = 5;
                    goto LAB_00654cf6;
                  }
                  if (*(char *)(*(int *)in_ECX[0x580] + 0x164) != '\0') goto LAB_00654a4f;
                  piVar9 = (int *)(**(code **)(*in_ECX + 0x58))(local_1c);
                  local_2c[0] = *piVar9;
                  iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar9[1] * 4) + 0xbe8);
                  iVar5 = *(int *)(iVar2 + piVar3[0x49] * 4);
                  if (((*(int *)(iVar5 + 0x20) == 0) && (*(char *)(iVar5 + 0x60) == '\0')) &&
                     (*(char *)(*(int *)(iVar2 + piVar3[0x4b] * 4) + 0x60) == '\0')) {
                    if (piVar3[0x49] == 0) {
                      (**(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10))(6);
                      FUN_009a63f0();
                      ExceptionList = local_10;
                      return;
                    }
                    goto LAB_0065488e;
                  }
                }
LAB_00654937:
                uVar12 = 6;
              }
              else {
                uVar12 = 7;
              }
              goto LAB_00654cf6;
            }
            if ((piVar3[0x49] != 0) && (piVar3[0x54] != 0)) {
              pfVar4 = (float *)(**(code **)(*in_ECX + 0x58))(local_2c);
              local_24 = *pfVar4;
              cVar1 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + (int)pfVar4[1] * 4))
              ;
              if (cVar1 != '\0') {
LAB_006549e8:
                (**(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10))(8);
                FUN_009a63f0();
                ExceptionList = local_10;
                return;
              }
            }
          }
        }
LAB_00654983:
        uVar12 = 5;
      }
LAB_00654cf6:
      (**(code **)(**(int **)(in_ECX[0x5fa] + 0xe4) + 0x10))(uVar12);
LAB_00654d09:
      FUN_009a63f0();
      ExceptionList = local_10;
      return;
    }
  }
  piVar3 = *(int **)(in_ECX[0x5fa] + 0xe4);
  uVar12 = 0;
LAB_00654d5f:
  (**(code **)(*piVar3 + 0x10))(uVar12);
  ExceptionList = local_10;
  return;
}

