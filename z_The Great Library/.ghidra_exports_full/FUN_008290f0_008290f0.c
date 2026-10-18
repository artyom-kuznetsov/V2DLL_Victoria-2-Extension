// FUN_008290f0 @ 008290f0 body=[[008290f0, 00829867] [00829870, 00829aa3]]


void FUN_008290f0(int *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float local_28;
  int local_24;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar9 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1[0x2d] == 0) goto LAB_0082911b;
  ExceptionList = &local_10;
  piVar4 = (int *)(**(code **)(**(int **)param_1[0x2b] + 0x2c))();
  if ((char)piVar4[0x59] != '\0') {
    ExceptionList = local_10;
    return;
  }
  if ((char)piVar4[0x41] != '\0') {
    ExceptionList = local_10;
    return;
  }
  if (piVar4[0x1d] != 0) {
    ExceptionList = local_10;
    return;
  }
  if ((0 < piVar4[0x3b]) && (cVar2 = FUN_0082a880(param_1), cVar2 == '\0')) goto LAB_0082933f;
  if ((piVar4[0x6d] == 0) &&
     (((*(int *)(piVar4[0x37] + 0xe8) != 0 && (*(int *)(piVar4[0x37] + 0x134) == param_1[0xe])) &&
      (cVar2 = FUN_0048f070(), cVar2 != '\0')))) goto LAB_0082911b;
  iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_1[0x38] * 4);
  iVar8 = piVar4[0x37];
  bVar1 = false;
  if (iVar8 == iVar6) {
LAB_00829287:
    bVar1 = true;
  }
  else if ((*(int *)(iVar8 + 0xe8) != 0) && (*(int *)(iVar6 + 0xe8) != 0)) {
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
    if ((*(int *)(iVar8 + 0x134) != *(int *)(iVar5 + 0x20)) &&
       ((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + *(int *)(iVar8 + 0x134) * 4) + 0x34) != 0 ||
        ((((*(char *)(iVar8 + 0x130) == 'R' && (*(char *)(iVar8 + 0x131) == 'E')) &&
          (*(char *)(iVar8 + 0x132) == 'B')) ||
         (((*(char *)(iVar5 + 0x1c) == 'R' && (*(char *)(iVar5 + 0x1d) == 'E')) &&
          (*(char *)(iVar5 + 0x1e) == 'B')))))))) {
      bVar1 = true;
    }
    if (*(int *)(iVar8 + 0xe8) == *(int *)(iVar6 + 0xe8)) goto LAB_00829287;
  }
  if (*(int *)(iVar6 + 0x134) == param_1[0xe]) {
LAB_00829325:
    if (!bVar1) {
      piVar7 = (int *)piVar4[0x6d];
      if (piVar7 == (int *)0x0) {
        cVar2 = FUN_00828ab0(iVar6);
        cVar3 = FUN_00828bb0();
        if (cVar3 != '\0') {
          *(undefined1 *)(param_1 + 0x39) = 0;
          FUN_0082e5d0();
          ExceptionList = local_10;
          return;
        }
        if (cVar2 == '\0') {
LAB_0082911b:
          FUN_0082c4d0();
          ExceptionList = local_10;
          return;
        }
        *(undefined1 *)(param_1 + 0x39) = 1;
        local_24 = FUN_0082caa0();
        if (local_24 != 0) {
          iVar8 = *(int *)(DAT_012588e8 + 0xacc);
          local_28 = *(float *)(iVar8 + local_24 * 4);
          cVar2 = FUN_0051b040();
          if (cVar2 == '\0') {
            local_24 = *(int *)(*(int *)((int)local_28 + 0x5c) + 0xdc);
            local_28 = *(float *)(iVar8 + local_24 * 4);
          }
          if ((piVar4[0x3b] < 1) ||
             (*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar4[0x3a] * 4) + 0x58)
              != local_24)) {
            FUN_0082e5d0();
          }
          iVar8 = FUN_005dc5d0();
          local_20 = -iVar8;
          if (local_20 < 1) {
            if (-iVar8 < 0) {
              piVar9 = (int *)param_1[0x2f];
              while ((piVar9 != (int *)0x0 && (0 < iVar8))) {
                iVar5 = *piVar9;
                piVar9 = (int *)piVar9[2];
                if ((*(int *)(iVar5 + 0x1ac) < 1) && (iVar5 = FUN_005d0610(), iVar5 <= iVar8)) {
                  iVar5 = (**(code **)(*param_1 + 0xe8))();
                  (**(code **)(**(int **)(iVar5 + 0x210) + 0x1b8))();
                  iVar5 = FUN_005d0610();
                  iVar8 = iVar8 - iVar5;
                }
              }
              piVar9 = (int *)param_1[0x2f];
              while ((piVar9 != (int *)0x0 && (0 < iVar8))) {
                iVar5 = *piVar9;
                piVar9 = (int *)piVar9[2];
                if (*(int *)(iVar5 + 0x1ac) < 1) {
                  FUN_009c19f0();
                  uVar13 = *(undefined4 *)(iVar5 + 0xdc);
                  (**(code **)(*param_1 + 0xe8))(uVar13);
                  FUN_0084fbb0(uVar13);
                  piVar4 = *(int **)(iVar5 + 0x90);
                  for (; (piVar4 != (int *)0x0 && (0 < iVar8));
                      iVar8 = iVar8 + ((iVar5 >> 6) - (iVar5 >> 0x1f))) {
                    iVar5 = *piVar4;
                    piVar4 = (int *)piVar4[2];
                    (**(code **)(*param_1 + 0xe8))();
                    FUN_0084fd10(iVar5);
                    iVar5 = (int)((ulonglong)
                                  ((longlong)*(int *)(*(int *)(iVar5 + 0x38) + 600) * -0x10624dd3)
                                 >> 0x20);
                  }
                }
              }
            }
          }
          else {
            (**(code **)(*param_1 + 0xe8))();
            iVar8 = FUN_00825810();
            local_20 = local_20 - iVar8;
          }
          piVar9 = (int *)param_1[0x2f];
joined_r0x00829864:
          if (piVar9 != (int *)0x0) {
            iVar8 = *piVar9;
            piVar9 = (int *)piVar9[2];
            if (*(int *)(*(int *)(iVar8 + 0xdc) + 0x58) == local_24) goto code_r0x00829883;
            goto LAB_00829891;
          }
          if (1 < param_1[0x31]) {
            FUN_0082d8a0(param_1,local_28);
            ExceptionList = local_10;
            return;
          }
          if (0 < local_20) {
            if ((*(int *)(iVar6 + 0x110) == 0) ||
               (iVar8 = *(int *)(*(int *)(iVar6 + 0x110) + 0x10),
               (int)(*(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x34) & 0xfffffff8U) < 1)) {
              pcVar10 = (char *)(iVar6 + 0x130);
            }
            else {
              pcVar10 = *(char **)(iVar8 + 0x34);
            }
            iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
            if (*(int *)(pcVar10 + 4) != *(int *)(iVar6 + 0x20)) {
              if (*(int *)(*(int *)(*(int *)(iVar6 + 0xbe8) + *(int *)(pcVar10 + 4) * 4) + 0x34) !=
                  0) {
                ExceptionList = local_10;
                return;
              }
              if (((*pcVar10 == 'R') && (pcVar10[1] == 'E')) && (pcVar10[2] == 'B')) {
                ExceptionList = local_10;
                return;
              }
              if (((*(char *)(iVar6 + 0x1c) == 'R') && (*(char *)(iVar6 + 0x1d) == 'E')) &&
                 (*(char *)(iVar6 + 0x1e) == 'B')) {
                ExceptionList = local_10;
                return;
              }
            }
          }
          if ((0 < param_1[0x31]) && ((float)*(int *)(*(int *)param_1[0x2f] + 0xdc) == local_28)) {
            FUN_005dc5d0();
            uVar12 = FUN_005d0650();
            if ((int)((ulonglong)uVar12 >> 0x20) < (int)uVar12) {
              FUN_00828f90();
            }
            piVar9 = (int *)param_1[0x2f];
            if (piVar9 != (int *)0x0) {
              do {
                piVar4 = (int *)*piVar9;
                piVar9 = (int *)piVar9[2];
                cVar2 = (**(code **)(*piVar4 + 0x3c))();
                if (((cVar2 != '\0') && ((int *)piVar4[0x51] == param_1)) &&
                   (cVar2 = FUN_005cc3e0(), cVar2 == '\0')) {
                  if ((*(char *)(*(int *)((int)local_28 + 0x5c) + 0x2a) == '\0') &&
                     ((float)piVar4[0x37] == local_28)) {
                    FUN_0082e5d0();
                    ExceptionList = local_10;
                    return;
                  }
                  (**(code **)(*piVar4 + 0x30))();
                  cVar2 = FUN_005d77a0();
                  if (cVar2 != '\0') {
                    iVar6 = FUN_00aae9af();
                    local_8 = 0;
                    if (iVar6 != 0) {
                      FUN_005e4480(iVar6);
                    }
                    local_8 = 0xffffffff;
                    iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
                    (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))();
                    ExceptionList = local_10;
                    return;
                  }
                }
                if (piVar9 == (int *)0x0) {
                  ExceptionList = local_10;
                  return;
                }
              } while( true );
            }
          }
        }
      }
      else if ((int *)piVar7[0x51] == param_1) {
        cVar2 = (**(code **)(*piVar7 + 0x84))();
        if ((cVar2 == '\0') && (cVar2 = FUN_004c3e90(), cVar2 != '\0')) {
          if (0 < piVar7[0x28]) {
            FUN_0082e780();
          }
          iVar8 = *(int *)(piVar7[0x37] + 0x5c);
          local_28 = 100000.0;
          local_24 = 0;
          if (0 < (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24) {
            param_1 = (int *)0x0;
            do {
              iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                              *(int *)((int)param_1 + 4 + *(int *)(iVar8 + 200)) * 4);
              if ((((*(char *)(*(int *)(iVar8 + 0x5c) + 0x2a) != '\0') &&
                   (cVar2 = FUN_0051b040(), cVar2 != '\0')) && (*(int *)(iVar8 + 0xe8) != 0)) &&
                 ((*(int *)(iVar8 + 0xe8) == *(int *)(iVar6 + 0xe8) ||
                  (cVar2 = FUN_004e0ac0(), cVar2 != '\0')))) {
                iVar5 = FUN_005dc7c0(piVar9[0xd]);
                fVar11 = (float)iVar5;
                if (*(int *)(iVar8 + 0x58) == piVar9[0x38]) {
                  fVar11 = (float)iVar5 - 0.5;
                }
                if (fVar11 < local_28) {
                  local_28 = fVar11;
                }
              }
              iVar8 = *(int *)(piVar7[0x37] + 0x5c);
              param_1 = (int *)((int)param_1 + 0x24);
              local_24 = local_24 + 1;
            } while (local_24 < (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24);
          }
          iVar6 = FUN_0082e5d0();
          if (iVar6 != 0) {
            piVar7 = (int *)FUN_005cf9b0();
            iVar6 = *piVar7;
            piVar7 = (int *)(**(code **)(*piVar4 + 0x94))();
            if ((float)*piVar7 / 1000.0 <= (float)iVar6 / 1000.0) {
              FUN_00828c10(piVar9,piVar4);
              FUN_0082c4d0();
              ExceptionList = local_10;
              return;
            }
          }
        }
        else if (piVar7[0x28] < 1) {
          (**(code **)(*piVar7 + 0x84))();
          FUN_0082e800(param_1);
          ExceptionList = local_10;
          return;
        }
      }
      ExceptionList = local_10;
      return;
    }
  }
  else {
    iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
    if ((*(int *)(iVar6 + 0x134) != *(int *)(iVar8 + 0x20)) &&
       (((*(int *)(*(int *)(*(int *)(iVar8 + 0xbe8) + *(int *)(iVar6 + 0x134) * 4) + 0x34) != 0 ||
         (((*(char *)(iVar6 + 0x130) == 'R' && (*(char *)(iVar6 + 0x131) == 'E')) &&
          (*(char *)(iVar6 + 0x132) == 'B')))) ||
        (((*(char *)(iVar8 + 0x1c) == 'R' && (*(char *)(iVar8 + 0x1d) == 'E')) &&
         (*(char *)(iVar8 + 0x1e) == 'B')))))) goto LAB_00829325;
    if (piVar4[0x6d] != 0) {
      FUN_00828c10();
      FUN_0082c4d0();
      ExceptionList = local_10;
      return;
    }
  }
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  piVar4[0x6a] = 0;
LAB_0082933f:
  FUN_0082e780();
  ExceptionList = local_10;
  return;
code_r0x00829883:
  if (0 < *(int *)(iVar8 + 0xec)) {
    FUN_0082e780();
LAB_00829891:
    FUN_0082e800();
  }
  goto joined_r0x00829864;
}

