// FUN_005d9310 @ 005d9310 body=[[005d9310, 005d94f7] [005d9500, 005d9abc] [005d9ac0, 005da04c] [005da050, 005da058] [005da062, 005da07d] [005da087, 005da099]]


void FUN_005d9310(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined1 local_c8 [4];
  undefined1 local_c4 [8];
  int local_bc;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined **local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  int local_60;
  int *local_5c;
  int *local_58;
  int local_54;
  undefined1 local_50;
  int local_4c;
  int local_44;
  int local_3c;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb7c33;
  local_10 = ExceptionList;
  pcVar1 = *(code **)(*param_1 + 0x38);
  ExceptionList = &local_10;
  param_1[0x20] = 0;
  cVar7 = (*pcVar1)();
  if (cVar7 == '\0') {
    ExceptionList = local_10;
    return;
  }
  param_1[0x20] = 1;
  if (param_1[0x1d] != 0) {
LAB_005d935c:
    param_1[0x20] = 2;
    ExceptionList = local_10;
    return;
  }
  local_b0 = param_1[0x30];
  local_3c = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4);
  (**(code **)(*param_1 + 0x94))(&local_94);
  (**(code **)(*param_1 + 0x44))(&local_98);
  if (local_94 < local_98) {
    local_94 = local_98;
  }
  iVar8 = local_94;
  if (local_94 == 0) {
LAB_005d93d9:
    param_1[0x20] = 3;
    ExceptionList = local_10;
    return;
  }
  uVar14 = __allmul(local_98,local_98 >> 0x1f,1000,0);
  local_1c = (int *)((ulonglong)uVar14 >> 0x20);
  local_98 = __alldiv(uVar14,iVar8,iVar8 >> 0x1f);
  if (local_98 < DAT_0125ff54) goto LAB_005d93d9;
  local_a4 = param_1[0x10];
  (**(code **)(*param_1 + 0x5c))(&local_9c);
  if (param_1[0x1c] != 0) goto LAB_005d935c;
  local_2c = 0;
  local_4c = 0;
  local_8c = CSafePathFind::vftable;
  local_88 = (undefined4 *)0x0;
  local_84 = (undefined4 *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_8 = 0;
  local_5c = (int *)0x0;
  local_58 = (int *)0x0;
  local_54 = 0;
  local_50 = 0;
  iVar8 = *(int *)(local_3c + 0x84);
  while (iVar8 != 0) {
    iVar12 = *(int *)(iVar8 + 8);
    FUN_0057aab0(iVar8);
    iVar8 = iVar12;
  }
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar8 = FUN_005dc8b0(param_1[0x30],param_1[0x31]);
  if ((0 < iVar8) &&
     (iVar8 = (*(int *)(*(int *)(param_1[0x37] + 0x5c) + 0xcc) -
              *(int *)(*(int *)(param_1[0x37] + 0x5c) + 200)) / 0x24, 0 < iVar8)) {
    iVar12 = 0;
    local_34 = iVar8;
    do {
      iVar8 = *(int *)(*(int *)(param_1[0x37] + 0x5c) + 200);
      piVar10 = local_5c;
      if (((*(int *)(iVar12 + iVar8) != 4) &&
          (piVar11 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar8 + 4 + iVar12) * 4),
          piVar11[0x4b] == param_1[0x31])) &&
         (local_1c = piVar11, cVar7 = FUN_0048fee0(), piVar5 = local_58, piVar10 = local_5c,
         cVar7 == '\0')) {
        local_58 = (int *)FUN_00aae9af(0x10);
        if (local_58 == (int *)0x0) {
          local_58 = (int *)0x0;
        }
        else {
          *local_58 = (int)piVar11;
          local_58[1] = (int)piVar5;
          local_58[2] = 0;
          *(undefined1 *)(local_58 + 3) = 0;
        }
        iVar8 = local_54 + 1;
        bVar13 = local_54 != 0;
        piVar10 = local_58;
        local_54 = iVar8;
        if (bVar13) {
          piVar5[2] = (int)local_58;
          piVar10 = local_5c;
        }
      }
      local_5c = piVar10;
      iVar12 = iVar12 + 0x24;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
    local_34 = 0;
  }
  piVar10 = local_5c;
  if (local_5c == (int *)0x0) {
LAB_005d95a1:
    iVar12 = local_3c;
    iVar8 = (*(int *)(*(int *)(param_1[0x37] + 0x5c) + 0xcc) -
            *(int *)(*(int *)(param_1[0x37] + 0x5c) + 200)) / 0x24;
    local_24 = 0;
    if (iVar8 < 1) goto LAB_005d9f98;
    local_18 = 0;
    local_1c = (int *)iVar8;
    do {
      iVar8 = *(int *)(*(int *)(param_1[0x37] + 0x5c) + 200);
      if ((*(int *)(local_18 + iVar8) != 4) &&
         (iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar8 + 4 + local_18) * 4),
         *(char *)(*(int *)(iVar8 + 0x5c) + 0x2a) != '\0')) {
        piVar10 = *(int **)(iVar8 + 0xec);
        while (piVar10 != (int *)0x0) {
          piVar11 = (int *)*piVar10;
          piVar10 = (int *)piVar10[2];
          cVar7 = (**(code **)(*piVar11 + 0x38))();
          if ((((cVar7 != '\0') && (piVar11[0x31] != *(int *)(iVar12 + 0x20))) &&
              (((*(int *)(*(int *)(*(int *)(iVar12 + 0xbe8) + piVar11[0x31] * 4) + 0x34) != 0 ||
                ((((char)piVar11[0x30] == 'R' && (*(char *)((int)piVar11 + 0xc1) == 'E')) &&
                 (*(char *)((int)piVar11 + 0xc2) == 'B')))) ||
               (((*(char *)(iVar12 + 0x1c) == 'R' && (*(char *)(iVar12 + 0x1d) == 'E')) &&
                (*(char *)(iVar12 + 0x1e) == 'B')))))) &&
             ((((char)piVar11[0x30] != 'R' || (*(char *)((int)piVar11 + 0xc1) != 'E')) ||
              (*(char *)((int)piVar11 + 0xc2) != 'B')))) {
            local_24 = local_24 + piVar11[0x10];
          }
        }
      }
      local_18 = local_18 + 0x24;
      local_1c = (int *)((int)local_1c + -1);
    } while (local_1c != (int *)0x0);
    local_1c = (int *)0x0;
    if (((local_24 < 1) || (local_24 < param_1[0x10] / 2)) ||
       (local_44 = 0,
       (*(int *)(*(int *)(param_1[0x37] + 0x5c) + 0xcc) -
       *(int *)(*(int *)(param_1[0x37] + 0x5c) + 200)) / 0x24 < 1)) goto LAB_005d9f98;
    local_18 = 0;
    do {
      iVar8 = *(int *)(*(int *)(param_1[0x37] + 0x5c) + 200);
      if ((((*(int *)(local_18 + iVar8) != 4) &&
           (iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar8 + 4 + local_18) * 4),
           *(char *)(*(int *)(iVar8 + 0x5c) + 0x2a) != '\0')) &&
          ((cVar7 = FUN_005b9690(), cVar7 == '\0' &&
           (cVar7 = (**(code **)(*param_1 + 0x84))(iVar8), cVar7 != '\0')))) &&
         ((iVar12 = FUN_005dc8b0(param_1[0x30],param_1[0x31]), iVar12 < 1 ||
          (iVar9 = FUN_005cb1b0(), iVar12 < *(int *)(iVar9 + 8) / 2)))) {
        piVar10 = (int *)FUN_004b3c40(iVar8,param_1 + 0x30);
        iVar9 = *(int *)(iVar8 + 0x5c);
        iVar12 = (10 - iVar12) * 100000 + *piVar10;
        local_34 = 0;
        if (0 < (*(int *)(iVar9 + 0xcc) - *(int *)(iVar9 + 200)) / 0x24) {
          local_1c = (int *)0x0;
          do {
            if ((*(int *)((int)local_1c + *(int *)(iVar9 + 200)) != 4) &&
               (iVar9 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                *(int *)(*(int *)(iVar9 + 200) + 4 + (int)local_1c) * 4),
               param_1[0x37] != iVar9)) {
              iVar2 = param_1[0x31];
              if (*(int *)(iVar9 + 0x134) == iVar2) {
                iVar12 = iVar12 + 5000;
              }
              if (*(int *)(iVar9 + 300) == iVar2) {
                iVar12 = iVar12 + 2000;
              }
              if ((*(int *)(iVar9 + 300) != 0) && (*(int *)(iVar9 + 0x158) != 0)) {
                iVar12 = iVar12 + 1000;
              }
              iVar9 = FUN_005dc8b0(param_1[0x30],iVar2);
              iVar12 = iVar12 + iVar9 * -1000;
            }
            iVar9 = *(int *)(iVar8 + 0x5c);
            local_34 = local_34 + 1;
            local_1c = local_1c + 9;
          } while (local_34 < (*(int *)(iVar9 + 0xcc) - *(int *)(iVar9 + 200)) / 0x24);
        }
        if (local_4c < iVar12) {
          local_4c = iVar12;
          local_2c = iVar8;
        }
      }
      local_18 = local_18 + 0x24;
      local_44 = local_44 + 1;
    } while (local_44 <
             (*(int *)(*(int *)(param_1[0x37] + 0x5c) + 0xcc) -
             *(int *)(*(int *)(param_1[0x37] + 0x5c) + 200)) / 0x24);
    if (local_2c == 0) goto LAB_005d9f98;
    if (param_1[0x3b] < 1) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)param_1[0x3a] * 4);
    }
    if (iVar8 == local_2c) goto LAB_005d9f98;
    FUN_009a63f0();
    puVar4 = local_84;
    uVar3 = *(undefined4 *)(local_2c + 0x58);
    local_84 = (undefined4 *)FUN_00aae9af(0x10);
    if (local_84 == (undefined4 *)0x0) {
      local_84 = (undefined4 *)0x0;
    }
    else {
      *local_84 = uVar3;
      local_84[1] = puVar4;
      local_84[2] = 0;
      *(undefined1 *)(local_84 + 3) = 0;
    }
    iVar8 = local_80 + 1;
    bVar13 = local_80 != 0;
    puVar6 = local_84;
    local_80 = iVar8;
    if (bVar13) {
      puVar4[2] = local_84;
      puVar6 = local_88;
    }
  }
  else {
    do {
      iVar8 = local_3c;
      local_1c = (int *)piVar10[2];
      local_20 = *piVar10;
      if (param_1[0x37] != local_20) {
        piVar10 = *(int **)(local_20 + 0xec);
        local_34 = 100000;
        local_28 = 0;
        local_24 = 0;
joined_r0x005d997d:
        while (piVar10 != (int *)0x0) {
          piVar11 = (int *)*piVar10;
          piVar10 = (int *)piVar10[2];
          if ((((char)piVar11[0x30] != 'R') || (*(char *)((int)piVar11 + 0xc1) != 'E')) ||
             (*(char *)((int)piVar11 + 0xc2) != 'B')) goto LAB_005d99a3;
          cVar7 = FUN_005cbec0();
          if (cVar7 == '\0') {
            local_28 = local_28 + piVar11[0x10];
            piVar11 = (int *)(**(code **)(*piVar11 + 0x5c))(local_c4);
            local_24 = local_24 + *piVar11;
          }
        }
        iVar12 = (*(int *)(*(int *)(local_20 + 0x5c) + 0xcc) -
                 *(int *)(*(int *)(local_20 + 0x5c) + 200)) / 0x24;
        local_60 = 0;
        if (0 < iVar12) {
          local_18 = 0;
          local_44 = iVar12;
          do {
            iVar12 = *(int *)(*(int *)(local_20 + 0x5c) + 200);
            if ((*(int *)(local_18 + iVar12) != 4) &&
               (iVar12 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                 *(int *)(iVar12 + 4 + local_18) * 4),
               *(char *)(*(int *)(iVar12 + 0x5c) + 0x2a) != '\0')) {
              piVar10 = *(int **)(iVar12 + 0xec);
              while (piVar10 != (int *)0x0) {
                piVar11 = (int *)*piVar10;
                piVar10 = (int *)piVar10[2];
                if ((((char)piVar11[0x30] == 'R') && (*(char *)((int)piVar11 + 0xc1) == 'E')) &&
                   (*(char *)((int)piVar11 + 0xc2) == 'B')) {
                  if (((char)piVar11[0x41] != '\0') || (cVar7 = FUN_005cbec0(), cVar7 == '\0')) {
                    if (piVar11[0x3b] < 1) {
                      iVar12 = 0;
                    }
                    else {
                      iVar12 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar11[0x39] * 4)
                      ;
                    }
                    if (iVar12 == local_20) {
                      local_28 = local_28 + piVar11[0x10];
                      piVar11 = (int *)(**(code **)(*piVar11 + 0x5c))(local_c8);
                      local_24 = local_24 + *piVar11;
                    }
                  }
                }
                else {
                  cVar7 = (**(code **)(*piVar11 + 0x38))();
                  if (((cVar7 != '\0') && (piVar11[0x31] != *(int *)(iVar8 + 0x20))) &&
                     ((*(int *)(*(int *)(*(int *)(iVar8 + 0xbe8) + piVar11[0x31] * 4) + 0x34) != 0
                      || (((((char)piVar11[0x30] == 'R' && (*(char *)((int)piVar11 + 0xc1) == 'E'))
                           && (*(char *)((int)piVar11 + 0xc2) == 'B')) ||
                          (((*(char *)(iVar8 + 0x1c) == 'R' && (*(char *)(iVar8 + 0x1d) == 'E')) &&
                           (*(char *)(iVar8 + 0x1e) == 'B')))))))) {
                    local_60 = local_60 + piVar11[0x10];
                  }
                }
              }
            }
            local_18 = local_18 + 0x24;
            local_44 = local_44 + -1;
          } while (local_44 != 0);
        }
        if (local_60 <= local_a4 / 2) {
          iVar8 = local_34;
          if (local_28 == 0) {
            if ((((*(char *)(local_20 + 0x130) != 'R') || (*(char *)(local_20 + 0x131) != 'E')) ||
                (*(char *)(local_20 + 0x132) != 'B')) || (*(int *)(local_20 + 0x110) != 0))
            goto LAB_005d9ee0;
          }
          else if (0 < local_28) {
            iVar12 = (local_a4 + 1) * 1000;
            iVar8 = (local_28 + 1) * 1000;
            if (iVar12 == 0) {
              local_44 = -1;
            }
            else if (iVar8 + 0x189373U < 0x39580e) {
              local_44 = ((local_28 + 1) * 1000000) / iVar12;
            }
            else {
              local_b4 = iVar12 >> 0x1f;
              uVar14 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
              local_44 = __alldiv(uVar14,iVar12,local_b4);
            }
            iVar12 = local_24 + 1000;
            iVar8 = local_9c + 1000;
            if (iVar8 == 0) {
              iVar8 = -1;
            }
            else if ((iVar12 < -0x189373) || (0x20c49a < iVar12)) {
              local_bc = iVar8 >> 0x1f;
              uVar14 = __allmul(iVar12,iVar12 >> 0x1f,1000,0);
              iVar8 = __alldiv(uVar14,iVar8,local_bc);
              local_34 = iVar8 >> 0x1f;
            }
            else {
              iVar8 = (iVar12 * 1000) / iVar8;
            }
            iVar12 = local_28;
            FUN_00401000(0x44fa1000);
            iVar9 = FUN_00b31c00();
            iVar8 = iVar8 + local_44;
            if (iVar9 == 0) {
              iVar9 = -1;
            }
            else if ((iVar8 < -0x189373) || (0x20c49a < iVar8)) {
              local_ac = iVar9 >> 0x1f;
              uVar14 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
              iVar9 = __alldiv(uVar14,iVar9,local_ac);
              local_44 = iVar9 >> 0x1f;
              iVar12 = local_28;
            }
            else {
              iVar9 = (iVar8 * 1000) / iVar9;
            }
            if (DAT_0125ff68 < iVar9) goto LAB_005d9ee0;
            iVar8 = iVar12 * 20000 + 100000;
          }
          FUN_004a0e80(DAT_0125870c,&local_a0);
          uVar14 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
          iVar8 = local_a0;
          local_34 = __alldiv(uVar14,local_a0,local_a0 >> 0x1f);
          if (local_34 <= local_4c) goto LAB_005d9ee0;
          piVar10 = *(int **)(local_3c + 0x7b4);
          while (piVar10 != (int *)0x0) {
            piVar11 = (int *)*piVar10;
            piVar10 = (int *)piVar10[2];
            cVar7 = (**(code **)(*piVar11 + 0x38))();
            if (cVar7 != '\0') {
              if (piVar11[0x3b] < 1) {
                iVar12 = 0;
              }
              else {
                iVar12 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar11[0x3a] * 4);
              }
              if (iVar12 == local_20) {
                FUN_004a0e80(DAT_0125870c,&local_90);
                if (local_90 <= iVar8) goto LAB_005d9ee0;
                if ((char)piVar11[0x1e] != '\0') {
                  FUN_005d1890();
                }
              }
            }
          }
          local_74 = 0;
          local_70 = 0;
          local_6c = 0;
          local_68 = 0;
          local_64 = 0;
          local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
          local_8 = CONCAT31(local_8._1_3_,2);
          cVar7 = FUN_005b8500(&local_8c,param_1,local_20,&local_74);
          if (cVar7 != '\0') {
            local_4c = local_34;
            local_2c = local_20;
            FUN_009a63f0();
            FUN_00549920();
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_00849e90();
        }
      }
LAB_005d9ee0:
      piVar10 = local_1c;
    } while (local_1c != (int *)0x0);
    if (local_2c == 0) goto LAB_005d95a1;
    if (param_1[0x3b] < 1) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)param_1[0x3a] * 4);
    }
    puVar6 = local_88;
    if (iVar8 == local_2c) goto LAB_005d9f98;
  }
  local_88 = puVar6;
  FUN_005d1bb0(&local_88,1);
LAB_005d9f98:
  if ((0 < local_54) && (local_2c == 0)) {
    param_1[0x20] = 4;
  }
  iVar8 = param_1[0x1f];
  if (((iVar8 != 0) && (param_1[0x3b] < 1)) && (*(int *)(param_1[0x37] + 0x58) != iVar8)) {
    uVar3 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + iVar8 * 4);
    cVar7 = (**(code **)(*param_1 + 0x88))(uVar3);
    if (cVar7 != '\0') {
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_8 = CONCAT31(local_8._1_3_,3);
      cVar7 = FUN_005b8500(&local_8c,param_1,uVar3,&local_74);
      if (cVar7 != '\0') {
        FUN_005d1bb0(&local_74,1);
      }
      FUN_00849e90();
    }
  }
  if (local_5c == (int *)0x0) {
    local_5c = (int *)0x0;
    local_58 = (int *)0x0;
    local_54 = 0;
    if (local_88 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_5c);
LAB_005d99a3:
  cVar7 = (**(code **)(*piVar11 + 0x38))();
  if (((cVar7 != '\0') && (piVar11[0x31] != *(int *)(iVar8 + 0x20))) &&
     (((*(int *)(*(int *)(*(int *)(iVar8 + 0xbe8) + piVar11[0x31] * 4) + 0x34) != 0 ||
       ((((char)piVar11[0x30] == 'R' && (*(char *)((int)piVar11 + 0xc1) == 'E')) &&
        (*(char *)((int)piVar11 + 0xc2) == 'B')))) ||
      (((*(char *)(iVar8 + 0x1c) == 'R' && (*(char *)(iVar8 + 0x1d) == 'E')) &&
       (*(char *)(iVar8 + 0x1e) == 'B')))))) goto LAB_005d9ee0;
  goto joined_r0x005d997d;
}

