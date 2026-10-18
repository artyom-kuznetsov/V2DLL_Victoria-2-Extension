// FUN_0082aea0 @ 0082aea0 body=[[0082aea0, 0082b8ab] [0082b8af, 0082b8e2] [0082b8e6, 0082bb19] [0082bb1d, 0082c1a5] [0082c1ae, 0082c1c0]]


/* WARNING: Removing unreachable block (ram,0x0082c1a0) */
/* WARNING: Removing unreachable block (ram,0x0082bb14) */
/* WARNING: Removing unreachable block (ram,0x0082b8dd) */
/* WARNING: Removing unreachable block (ram,0x0082be2c) */
/* WARNING: Removing unreachable block (ram,0x0082c1a1) */
/* WARNING: Removing unreachable block (ram,0x0082bf87) */
/* WARNING: Removing unreachable block (ram,0x0082bb15) */
/* WARNING: Removing unreachable block (ram,0x0082b8a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082aea0(int *param_1,int *param_2,int param_3)

{
  int **ppiVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  int **local_6c;
  int **local_68;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  float local_4c;
  int local_48;
  int *local_44;
  float local_40;
  int local_3c;
  int *local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int *local_1c;
  char local_17;
  char local_16;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar5 = param_3;
  piVar9 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fc88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((param_2[0x37] != 0) &&
      (ExceptionList = &local_10, *(int *)(param_2[0x37] + 0x58) != *(int *)(param_3 + 0x58))) &&
     (ExceptionList = &local_10, cVar2 = FUN_0082a880(param_1,param_2,param_3), cVar2 == '\0')) {
    ExceptionList = local_10;
    return;
  }
  iVar4 = *(int *)(piVar9[0x37] + 0x5c);
  local_24 = 0;
  local_20 = 0;
  local_3c = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  iVar11 = (*(int *)(iVar4 + 0xcc) - *(int *)(iVar4 + 200)) / 0x24;
  local_2c = 0.0;
  local_28 = 0.0;
  local_40 = 0.0;
  local_44 = (int *)0x186a0;
  if (0 < iVar11) {
    iVar7 = 0;
    piVar9 = (int *)(*(int *)(iVar4 + 200) + 4);
    do {
      if (*piVar9 == *(int *)(iVar5 + 0x58)) {
        piVar9 = (int *)FUN_005d24a0(&local_4c);
        iVar4 = (*piVar9 + -43800000) / 0x18;
        dVar13 = (double)iVar4 / 365.0;
        iVar11 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
        dVar14 = (double)iVar11 / 365.0;
        local_44 = (int *)(((int)dVar13 * 0x16d + (iVar4 - (int)((float)(int)dVar13 * 365.0))) -
                          ((int)dVar14 * 0x16d + (iVar11 - (int)((float)(int)dVar14 * 365.0))));
        break;
      }
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 9;
    } while (iVar7 < iVar11);
  }
  local_6c = (int **)0x0;
  local_68 = (int **)0x0;
  local_8 = 0;
  local_1c = *(int **)(iVar5 + 0xec);
joined_r0x0082b038:
  if (local_1c != (int *)0x0) {
    piVar9 = (int *)*local_1c;
    local_1c = (int *)local_1c[2];
    local_38 = piVar9;
    cVar2 = (**(code **)(*piVar9 + 0x3c))();
    if ((cVar2 == '\0') && (piVar9 != param_2)) {
      local_30 = ((float)*(int *)(*(int *)(*(int *)(param_3 + 0x5c) + 0x14) + 0x98) / 1000.0) / 10.0
                 + 1.0;
      if ((piVar9[0x1d] != 0) && (cVar2 = FUN_005cf260(), cVar2 != '\0')) {
        local_30 = DAT_00f092fc;
      }
      iVar5 = *(int *)(DAT_012587e4 + 4);
      cVar2 = FUN_0051af10(1);
      if (cVar2 == '\0') {
        iVar5 = *(int *)(iVar5 + param_1[0xe] * 4);
        if ((piVar9[0x31] != *(int *)(iVar5 + 0x20)) &&
           (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + piVar9[0x31] * 4) + 0x34) != 0 ||
             ((((char)piVar9[0x30] == 'R' && (*(char *)((int)piVar9 + 0xc1) == 'E')) &&
              (*(char *)((int)piVar9 + 0xc2) == 'B')))) ||
            (((*(char *)(iVar5 + 0x1c) == 'R' && (*(char *)(iVar5 + 0x1d) == 'E')) &&
             (*(char *)(iVar5 + 0x1e) == 'B')))))) {
          if (piVar9[0x1d] == 0) {
            if (piVar9[0x3b] < 1) {
              if ((char)piVar9[0x41] == '\0') goto LAB_0082b2aa;
              if (piVar9[0x3b] < 1) goto joined_r0x0082b038;
            }
            if (*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar9[0x39] * 4) !=
                param_2[0x37]) {
              FUN_005d24a0(&local_48);
              local_38 = (int *)FUN_00457630();
              iVar5 = FUN_00457630();
              if ((int)local_38 - iVar5 < (int)local_44) goto joined_r0x0082b038;
            }
          }
LAB_0082b2aa:
          if ((((char)piVar9[0x30] == 'R') && (*(char *)((int)piVar9 + 0xc1) == 'E')) &&
             (*(char *)((int)piVar9 + 0xc2) == 'B')) {
            local_34 = local_34 + piVar9[0x10];
            piVar3 = (int *)(**(code **)(*piVar9 + 0x5c))(local_50);
            local_40 = ((float)*piVar3 / 1000.0) * local_30 + local_40;
          }
          local_20 = local_20 + piVar9[0x10];
          piVar9 = (int *)(**(code **)(*piVar9 + 0x5c))(local_54);
          local_28 = ((float)*piVar9 / 1000.0) * local_30 + local_28;
        }
      }
      else if ((piVar9[0x28] < 1) || (piVar9[0x1d] != 0)) {
        local_24 = local_24 + piVar9[0x10];
        piVar3 = (int *)(**(code **)(*piVar9 + 0x5c))(&local_4c);
        local_2c = ((float)*piVar3 / 1000.0) * local_30 + local_2c;
        if (&local_38 < local_68) {
          if (local_68 == (int **)0x0) {
            FUN_00a513f0();
          }
          else {
            *local_68 = *(int **)(((int)&local_38 >> 2) * 4);
          }
        }
        else if (local_68 == (int **)0x0) {
          FUN_00a513f0();
        }
        else {
          *local_68 = piVar9;
        }
        local_68 = local_68 + 1;
        if ((piVar9[0x1d] != 0) && (local_3c == 0)) {
          local_3c = FUN_0059c520(piVar9[0x1d]);
        }
      }
    }
    goto joined_r0x0082b038;
  }
  local_15 = '\0';
  local_17 = '\0';
  local_16 = '\0';
  local_30 = 0.0;
  iVar4 = (**(code **)(*param_1 + 0xe8))();
  iVar5 = *(int *)(param_3 + 0x5c);
  local_48 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0x38) * 4) + 0x364;
  local_1c = (int *)0x0;
  if (0 < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24) {
    local_38 = (int *)0x0;
    do {
      if ((*(int *)(*(int *)(iVar5 + 200) + (int)local_38) != 4) &&
         (local_4c = *(float *)(*(int *)(DAT_012588e8 + 0xacc) +
                               *(int *)(*(int *)(iVar5 + 200) + 4 + (int)local_38) * 4),
         *(char *)(*(int *)((int)local_4c + 0x5c) + 0x2a) != '\0')) {
        if (*(int *)((int)local_4c + 0x134) == param_1[0xe]) {
          local_30 = (float)((int)local_30 + 1);
          iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
          if ((*(int *)(param_3 + 0x134) != *(int *)(iVar5 + 0x20)) &&
             (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + *(int *)(param_3 + 0x134) * 4) + 0x34)
                != 0 || (((*(char *)(param_3 + 0x130) == 'R' && (*(char *)(param_3 + 0x131) == 'E'))
                         && (*(char *)(param_3 + 0x132) == 'B')))) ||
              (((*(char *)(iVar5 + 0x1c) == 'R' && (*(char *)(iVar5 + 0x1d) == 'E')) &&
               (*(char *)(iVar5 + 0x1e) == 'B')))))) {
            local_17 = '\x01';
          }
        }
        if (*(int *)(param_3 + 0x134) == param_1[0xe]) {
          piVar9 = *(int **)(local_48 + 0x140);
          do {
            if (piVar9 == (int *)0x0) goto LAB_0082b4c4;
            iVar5 = *piVar9;
            piVar9 = (int *)piVar9[2];
          } while (*(int *)(iVar5 + 0xc) != *(int *)((int)local_4c + 0x134));
          local_16 = '\x01';
        }
LAB_0082b4c4:
        piVar9 = *(int **)((int)local_4c + 0xec);
joined_r0x0082b4cc:
        if (piVar9 != (int *)0x0) {
          piVar3 = (int *)*piVar9;
          piVar9 = (int *)piVar9[2];
          local_44 = piVar9;
          cVar2 = (**(code **)(*piVar3 + 0x3c))();
          if (cVar2 == '\0') {
            iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
            if ((piVar3[0x31] != *(int *)(iVar5 + 0x20)) &&
               (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + piVar3[0x31] * 4) + 0x34) != 0 ||
                 (((((char)piVar3[0x30] == 'R' && (*(char *)((int)piVar3 + 0xc1) == 'E')) &&
                   (*(char *)((int)piVar3 + 0xc2) == 'B')) ||
                  (((*(char *)(iVar5 + 0x1c) == 'R' && (*(char *)(iVar5 + 0x1d) == 'E')) &&
                   (*(char *)(iVar5 + 0x1e) == 'B')))))) && (piVar3[0x1d] == 0)))) {
              if (piVar3[0x3b] < 1) {
                if ((char)piVar3[0x41] == '\0') goto joined_r0x0082b4cc;
                if (0 < piVar3[0x3b]) goto LAB_0082b57c;
                iVar5 = 0;
              }
              else {
LAB_0082b57c:
                iVar5 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar3[0x39] * 4);
              }
              if (iVar5 == param_3) {
                local_20 = local_20 + piVar3[0x10];
                piVar9 = (int *)(**(code **)(*piVar3 + 0x5c))(local_54);
                local_28 = (float)*piVar9 / 1000.0 + local_28;
                piVar9 = local_44;
                if (((char)piVar3[0x41] != '\0') && (local_4c == (float)param_2[0x37])) {
                  fVar12 = DAT_00f17898;
                  if ((char)param_1[0x3d] != '\0') {
                    fVar12 = 0.33;
                  }
                  if (fVar12 <= (float)piVar3[0x10] / (float)param_2[0x26]) {
                    local_15 = '\x01';
                  }
                }
              }
            }
          }
          goto joined_r0x0082b4cc;
        }
      }
      iVar5 = *(int *)(param_3 + 0x5c);
      local_38 = local_38 + 9;
      local_1c = (int *)((int)local_1c + 1);
    } while ((int)local_1c < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24);
  }
  if (local_20 == 0) {
    if ((*(int *)(param_3 + 0x110) == 0) ||
       (iVar5 = *(int *)(*(int *)(param_3 + 0x110) + 0x10),
       (int)(*(int *)(iVar5 + 0x38) - *(int *)(iVar5 + 0x34) & 0xfffffff8U) < 1)) {
      pcVar8 = (char *)(param_3 + 0x130);
    }
    else {
      pcVar8 = *(char **)(iVar5 + 0x34);
    }
    iVar5 = *(int *)(DAT_012587e4 + 4);
    iVar4 = *(int *)(iVar5 + param_1[0xe] * 4);
    if ((*(int *)(pcVar8 + 4) == *(int *)(iVar4 + 0x20)) ||
       (((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + *(int *)(pcVar8 + 4) * 4) + 0x34) == 0 &&
         (((*pcVar8 != 'R' || (pcVar8[1] != 'E')) || (pcVar8[2] != 'B')))) &&
        (((*(char *)(iVar4 + 0x1c) != 'R' || (*(char *)(iVar4 + 0x1d) != 'E')) ||
         (*(char *)(iVar4 + 0x1e) != 'B')))))) {
      iVar4 = *(int *)(iVar5 + param_1[0xe] * 4);
      if ((*(int *)(param_3 + 0x134) == *(int *)(iVar4 + 0x20)) ||
         ((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + *(int *)(param_3 + 0x134) * 4) + 0x34) == 0
          && ((((*(char *)(param_3 + 0x130) != 'R' || (*(char *)(param_3 + 0x131) != 'E')) ||
               (*(char *)(param_3 + 0x132) != 'B')) &&
              (((*(char *)(iVar4 + 0x1c) != 'R' || (*(char *)(iVar4 + 0x1d) != 'E')) ||
               (*(char *)(iVar4 + 0x1e) != 'B')))))))) {
        param_2 = (int *)((float)(local_24 * 10) + 100000.0);
        if ((local_16 != '\0') &&
           (iVar5 = *(int *)(iVar5 + param_1[0xe] * 4), *(char *)(iVar5 + 0x67c) == '\0')) {
          piVar9 = *(int **)(iVar5 + 0x7b4);
          local_38 = (int *)0x0;
          local_20 = 0;
          while (piVar9 != (int *)0x0) {
            piVar3 = (int *)*piVar9;
            piVar9 = (int *)piVar9[2];
            cVar2 = (**(code **)(*piVar3 + 0x38))();
            if ((cVar2 != '\0') && ((int *)piVar3[0x51] != param_1)) {
              iVar5 = FUN_00826f50();
              if (iVar5 == 0) {
                iVar5 = piVar3[0x37];
              }
              if (iVar5 == param_3) {
                local_38 = (int *)((int)local_38 + piVar3[0x26]);
              }
            }
          }
          FUN_004b3c40(param_3,param_1 + 0xd);
          FUN_005dc540();
        }
        ExceptionList = local_10;
        return;
      }
    }
    if (*(int *)(param_3 + 300) == 0) {
      ExceptionList = local_10;
      return;
    }
  }
  local_1c = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) + 0x7b4);
  iVar5 = DAT_012586dc;
  ppiVar1 = local_68;
  iVar4 = local_24;
joined_r0x0082b924:
  DAT_012586dc = iVar5;
  if (local_1c != (undefined4 *)0x0) {
    piVar9 = (int *)*local_1c;
    local_1c = (int *)local_1c[2];
    local_38 = piVar9;
    cVar2 = (**(code **)(*piVar9 + 0x38))();
    iVar5 = DAT_012586dc;
    if ((cVar2 != '\0') && ((int *)piVar9[0x51] != param_1)) {
      if (piVar9[0x28] == 0) {
        if (piVar9[0x3b] < 1) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar9[0x3a] * 4);
        }
      }
      else {
        iVar11 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar9[0x28] * 4);
      }
      if (iVar11 == 0) {
        iVar11 = piVar9[0x37];
      }
      if (iVar11 == param_3) {
        ppiVar6 = local_6c;
        if (local_68 != (int **)0x0) {
          do {
            if (*ppiVar6 == piVar9) {
              if (ppiVar6 != local_68) goto joined_r0x0082b924;
              break;
            }
            ppiVar6 = ppiVar6 + 1;
          } while (ppiVar6 != local_68);
        }
        FUN_004a0e80(DAT_0125870c,&local_48);
        FUN_004a0e80(DAT_0125870c,&local_4c);
        iVar5 = DAT_012586dc;
        if ((int)local_4c <= local_48) {
          iVar4 = iVar4 + piVar9[0x26];
          piVar3 = (int *)(**(code **)(*piVar9 + 0x68))(local_50);
          local_2c = (float)*piVar3 / 1000.0 + local_2c;
          if (&local_38 < local_68) {
            if (local_68 == (int **)0x0) {
              FUN_00a513f0();
              local_68 = ppiVar1;
            }
            if (local_68 != (int **)0x0) {
              *local_68 = *(int **)(((int)&local_38 >> 2) * 4);
            }
          }
          else {
            if (local_68 == (int **)0x0) {
              FUN_00a513f0();
              local_68 = ppiVar1;
            }
            if (local_68 != (int **)0x0) {
              *local_68 = piVar9;
            }
          }
          local_68 = local_68 + 1;
          iVar5 = DAT_012586dc;
          ppiVar1 = local_68;
        }
      }
    }
    goto joined_r0x0082b924;
  }
  local_16 = 0;
  local_24 = iVar4;
  if (0 < iVar4) {
    if (local_20 < 1) {
      if ((*(int *)(param_3 + 0x110) != 0) && (param_2[0x37] != param_3)) {
        if (*(int *)(*(int *)(iVar5 + 0x20) + 0xcc) / 1000 <= iVar4) {
          piVar9 = (int *)FUN_004b3c40(param_3,param_1 + 0xd);
          iVar11 = *piVar9;
          iVar7 = FUN_005dc540();
          if (iVar11 / 1000 < (iVar7 + iVar4) * 3) {
            FUN_00461f90();
            ExceptionList = local_10;
            return;
          }
        }
        if (*(int *)(*(int *)(iVar5 + 0x20) + 0xd0) / 1000 <= iVar4) {
          ExceptionList = local_10;
          return;
        }
      }
    }
    else {
      fVar12 = 1.33;
      if (local_15 != '\0') {
        fVar12 = DAT_00f17b54;
      }
      if ((local_28 * 0.75 <= local_2c) && (local_3c * 2 <= iVar4)) {
        ExceptionList = local_10;
        return;
      }
      if (fVar12 * local_28 <= local_2c) {
        ExceptionList = local_10;
        return;
      }
      local_16 = 1;
    }
  }
  FUN_004a0e80(DAT_0125870c,&local_4c);
  local_1c = (int *)(((float)(int)local_4c / 1000.0) / (float)((int)local_30 + 1));
  if ((char)param_1[0x3d] == '\0') {
    if (*(int *)(param_3 + 300) == param_1[0xe]) {
      if ((*(int *)(param_3 + 0x110) == 0) ||
         (iVar5 = *(int *)(*(int *)(param_3 + 0x110) + 0x10),
         (int)(*(int *)(iVar5 + 0x38) - *(int *)(iVar5 + 0x34) & 0xfffffff8U) < 1)) {
        iVar5 = param_3 + 0x130;
      }
      else {
        iVar5 = *(int *)(iVar5 + 0x34);
      }
      if (*(int *)(iVar5 + 4) != param_1[0xe]) {
        local_1c = (int *)((float)local_1c * 0.66);
      }
    }
    if (local_17 != '\0') {
      local_1c = (int *)((float)local_1c * 0.9);
    }
    cVar2 = (**(code **)(**(int **)(param_3 + 0x188) + 0x24))();
    if (cVar2 != '\0') {
      iVar5 = *(int *)(DAT_012587e4 + 4);
      iVar4 = *(int *)(iVar5 + param_1[0xe] * 4);
      uVar10 = *(uint *)(iVar4 + 0xda8);
      do {
        if ((uVar10 < *(uint *)(iVar4 + 0xda8)) || (*(uint *)(iVar4 + 0xdac) <= uVar10))
        goto LAB_0082bd92;
        piVar9 = (int *)(uVar10 + 4);
        uVar10 = uVar10 + 8;
      } while ((*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + param_1[0xe] * 4) + 0xbe8) + *piVar9 * 4
                                 ) + 0x34) == 0) ||
              (cVar2 = FUN_0093c7c0(*(undefined4 *)(param_3 + 0x188)), cVar2 == '\0'));
      local_1c = (int *)((float)local_1c * 0.2);
    }
  }
LAB_0082bd92:
  piVar9 = param_2;
  if (local_20 == 0) {
    ExceptionList = local_10;
    return;
  }
  iVar5 = param_2[0x26];
  piVar3 = (int *)(**(code **)(*param_2 + 0x68))(&param_2);
  iVar4 = local_20;
  local_4c = ((local_28 + 1.0) / ((float)*piVar3 / 1000.0 + local_2c + 1.0) +
             ((float)local_20 + 1.0) / ((float)(iVar5 + local_24) + 1.0)) * 0.5;
  param_2 = (int *)0x3f666666;
  piVar3 = (int *)(**(code **)(*piVar9 + 0x94))(local_54);
  iVar11 = *piVar3 + _DAT_01317810;
  piVar9 = (int *)(**(code **)(*piVar9 + 0x44))(local_50);
  iVar5 = *piVar9 + _DAT_01317810;
  if (iVar11 == 0) {
    iVar11 = -1;
  }
  else if ((iVar5 < -0x189373) || (0x20c49a < iVar5)) {
    uVar15 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
    iVar11 = __alldiv(uVar15,iVar11,iVar11 >> 0x1f);
  }
  else {
    iVar11 = (iVar5 * 1000) / iVar11;
  }
  fVar12 = (float)iVar11 / 1000.0;
  if (DAT_00f14a8c <= fVar12) {
    if (fVar12 < DAT_00f092fc) {
      param_2 = (int *)(0.9 - (1.0 - fVar12));
    }
    if (*(int *)(param_3 + 300) == param_1[0xe]) {
      if (iVar4 < 1) {
        iVar4 = 1;
      }
      if (local_28 < 0.01) {
        local_28 = 0.01;
      }
      param_2 = (int *)((local_40 / local_28 + (float)local_34 / (float)iVar4) * 0.5 * 0.5 +
                       (float)param_2);
    }
    if (local_4c <= (float)param_2) {
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

