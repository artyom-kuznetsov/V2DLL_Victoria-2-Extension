// FUN_0057f050 @ 0057f050 body=[[0057f050, 0057f299] [0057f2a0, 0057f35c] [0057f360, 0057f40e] [0057f412, 0057f4a6] [0057f4ae, 0057f4b9] [0057f4bd, 0057f583] [0057f587, 0057f6bc] [0057f6c0, 0057f734] [0057f738, 0057fb26] [0057fb2a, 0057fb3e]]


/* WARNING: Removing unreachable block (ram,0x0057f70e) */

void FUN_0057f050(void)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int in_ECX;
  longlong lVar13;
  int local_154 [4];
  int *local_144;
  int *local_140;
  int *local_13c;
  undefined4 *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_124;
  uint uStack_120;
  uint local_118 [18];
  int local_d0;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb93e3;
  pvStack_14 = ExceptionList;
  bVar2 = false;
  local_144 = (int *)0x0;
  local_140 = (int *)0x0;
  local_13c = (int *)0x0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_00968940(local_118);
  local_c._0_1_ = 1;
  if (*(int *)(in_ECX + 0x50) == 0) {
    for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) +
                           0x9f8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar5 = *(int *)(DAT_012588e8[0x2b3] + *piVar1 * 4);
      if (((*(int *)(DAT_012588e8[0x2b3] +
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4) +
                            0xbe4) * 4) != iVar5) &&
          (*(int *)(iVar5 + 300) == *(int *)(in_ECX + 0x48))) &&
         (((*(char *)(iVar5 + 0x130) == 'R' &&
           ((*(char *)(iVar5 + 0x131) == 'E' && (*(char *)(iVar5 + 0x132) == 'B')))) ||
          (*(int *)(iVar5 + 0x134) == *(int *)(in_ECX + 0x48))))) {
        if (0 < *(int *)(iVar5 + 400)) {
          bVar2 = true;
        }
        local_154[0] = *(int *)(iVar5 + 0x58);
        FUN_004e9b90();
        FUN_004b6290();
      }
    }
  }
  else {
    if (DAT_0131bb34 == 0) {
      iVar5 = FUN_00aae9af(0x188);
      local_c._0_1_ = 2;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0041a160();
      }
      local_c._0_1_ = 1;
      FUN_00423700(uVar4);
    }
    local_154[2] = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    iVar5 = *(int *)(*(int *)(DAT_012588e8[0x2b3] + *(int *)(in_ECX + 0x50) * 4) + 0xe8);
    bVar2 = true;
    if (iVar5 == 0) {
      FUN_0096b900();
      ExceptionList = pvStack_14;
      return;
    }
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
    if ((int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) & 0xfffffffcU) < 1) {
      iVar12 = 1;
      iVar6 = (**(code **)(*DAT_012588e8 + 0x18))();
      if (1 < iVar6) {
        do {
          FUN_004b6290();
          iVar12 = iVar12 + 1;
          iVar6 = (**(code **)(*DAT_012588e8 + 0x18))();
        } while (iVar12 < iVar6);
      }
    }
    piVar1 = *(int **)(iVar5 + 4);
    while (piVar1 != (int *)0x0) {
      iVar5 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if ((iVar5 != 0) && (0 < *(int *)(*(int *)(iVar5 + 0x188) + 0x84))) {
        iVar6 = *(int *)(iVar5 + 0x58);
        local_154[0] = iVar6;
        if ((local_154 < local_140) && (local_144 <= local_154)) {
          iVar6 = (int)local_154 - (int)local_144;
          if (local_140 == local_13c) {
            FUN_007b94a0();
          }
          if (local_140 != (int *)0x0) {
            *local_140 = local_144[iVar6 >> 2];
          }
        }
        else {
          if (local_140 == local_13c) {
            FUN_007b94a0();
          }
          if (local_140 != (int *)0x0) {
            *local_140 = iVar6;
          }
        }
        local_140 = local_140 + 1;
        FUN_004b6290();
        iVar6 = *(int *)(iVar5 + 0x14c);
        iVar12 = *(int *)(iVar5 + 0x148);
        if (iVar12 == iVar6) {
LAB_0057f370:
          FUN_004d61d0();
          local_154[0] = *(int *)(in_ECX + 0x3c);
          FUN_0050e2d0(*(undefined4 *)(iVar5 + 0x58));
        }
        else {
          do {
            if (*(int *)(iVar12 + 4) == *(int *)(in_ECX + 0x40)) break;
            iVar12 = iVar12 + 8;
          } while (iVar12 != iVar6);
          if (iVar12 == iVar6) goto LAB_0057f370;
        }
        FUN_00969bd0(local_154[2]);
      }
    }
    FUN_0048fe90();
    local_c._0_1_ = 3;
    FUN_00408ed0();
    local_c._0_1_ = 1;
    if (0xf < uStack_120) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_134);
    }
    uStack_120 = 0xf;
    uStack_124 = 0;
    local_134 = (undefined4 *)((uint)local_134 & 0xffffff00);
  }
  iVar5 = *(int *)(DAT_012587e4 + 4);
  uVar4 = *(undefined4 *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x40) * 4) + 0xbd0);
  *(undefined4 *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x40) * 4) + 0xbd0) =
       *(undefined4 *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x48) * 4) + 0xbd0);
  local_154[2] = 0x2d2d2d;
  local_154[3] = 0;
  if (DAT_0125d50c == 0) {
    iVar5 = FUN_00aae9af(1);
    if (iVar5 != DAT_0125d50c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0125d50c);
    }
    DAT_0125d50c = iVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(0);
  }
  FUN_004ecb50(&local_144,0,local_154 + 2,*(undefined4 *)(in_ECX + 0x3c),
               *(undefined4 *)(in_ECX + 0x40));
  if (!bVar2) {
    *(undefined4 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) + 0xbd0) =
         uVar4;
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    local_154[0] = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
    FUN_0057e9f0();
    if (DAT_0131bb34 == 0) {
      iVar5 = FUN_00aae9af(0x188);
      local_c._0_1_ = 6;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0041a160();
      }
      iVar6 = DAT_0131bb34;
      local_c = CONCAT31(local_c._1_3_,7);
      if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar6);
      }
      local_c._0_1_ = 1;
      DAT_0131bb34 = iVar5;
    }
    FUN_00969520();
    if (local_118[0] == 0) {
      local_118[0] = 1;
    }
    local_134 = (undefined4 *)0x0;
    local_130 = 0;
    local_12c = 0;
    local_c = CONCAT31(local_c._1_3_,8);
    iVar6 = FUN_00969390();
    iVar5 = DAT_012587e4;
    if (iVar6 < 1) {
      uVar4 = *(undefined4 *)
               (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0xe64);
    }
    else {
      uVar4 = *local_134;
    }
    *(undefined4 *)(local_154[0] + 0xe64) = uVar4;
    iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0xe64);
    for (piVar1 = *(int **)(local_154[0] + 0xe54); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2])
    {
      if (*piVar1 == iVar5) goto LAB_0057f649;
    }
    if (iVar5 != *(int *)(local_154[0] + 0xe64)) {
      FUN_00522310(iVar5);
    }
LAB_0057f649:
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0xe54);
    iVar5 = local_154[0];
    iVar12 = local_154[0];
joined_r0x0057f66a:
    local_154[0] = iVar12;
    if (piVar1 != (int *)0x0) {
      iVar10 = *piVar1;
      piVar1 = (int *)piVar1[2];
      for (piVar8 = *(int **)(iVar5 + 0xe54); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        if (*piVar8 == iVar10) goto joined_r0x0057f66a;
      }
      if (iVar10 != *(int *)(iVar5 + 0xe64)) {
        FUN_00522310(iVar10);
        iVar5 = iVar12;
        iVar12 = local_154[0];
      }
      goto joined_r0x0057f66a;
    }
    if (1 < iVar6) {
      for (piVar1 = *(int **)(iVar5 + 0xe54); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if (*piVar1 == local_134[1]) goto LAB_0057f71f;
      }
      if ((local_134[1] != *(int *)(iVar5 + 0xe64)) && (local_118[0] != 0)) {
        iVar5 = local_134[1];
        uVar7 = *(int *)(local_d0 + *(int *)(iVar5 + 8) * 4) * 100;
        lVar13 = __alldiv(0,((int)uVar7 >> 0x1f) << 0x1e | uVar7 >> 2,local_118[0] << 0xf,
                          local_118[0] >> 0x11);
        if (0x50000 < lVar13) {
          FUN_00522310(iVar5);
        }
      }
    }
LAB_0057f71f:
    local_c._0_1_ = 1;
    if (local_134 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_134);
    }
  }
  piVar1 = (int *)(in_ECX + 0x3c);
  FUN_005443f0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4),piVar1);
  if (*(char *)(in_ECX + 0x4c) == '\0') {
    piVar8 = (int *)FUN_00aae9af(0x24);
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      FUN_0057fb40();
      *piVar8 = (int)CVassal::vftable;
    }
    piVar3 = DAT_012588e8;
    iVar5 = *piVar1;
    iVar6 = DAT_012588e8[0x2c3];
    iVar12 = *(int *)(in_ECX + 0x40);
    local_154[3] = *(int *)(in_ECX + 0x48);
    piVar8[2] = *(int *)(in_ECX + 0x44);
    piVar8[3] = local_154[3];
    piVar8[4] = iVar5;
    piVar8[5] = iVar12;
    iVar5 = DAT_012587e4;
    piVar8[6] = iVar6;
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0xbe8) +
                    *(int *)(in_ECX + 0x40) * 4);
    *(undefined1 *)(iVar5 + 0x71) = 1;
    *(int **)(iVar5 + 0x24) = piVar8;
    iVar5 = piVar3[0x2a2];
    puVar9 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = piVar8;
      puVar9[1] = iVar5;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    iVar6 = piVar3[0x2a3];
    piVar3[0x2a2] = (int)puVar9;
    piVar3[0x2a3] = iVar6 + 1;
    if (iVar6 == 0) {
      piVar3[0x2a1] = (int)puVar9;
    }
    else {
      *(undefined4 **)(iVar5 + 8) = puVar9;
    }
    (**(code **)(*piVar8 + 0x28))();
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0x31) != '\0'
       ) {
      FUN_00533e50(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4));
    }
  }
  iVar6 = DAT_012587e4;
  local_154[2] = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4);
  iVar5 = *(int *)(*(int *)(local_154[2] + 0xbe8) + *(int *)(in_ECX + 0x40) * 4);
  *(undefined1 *)(iVar5 + 0x71) = 1;
  iVar10 = *(int *)(iVar5 + 0x3c) + 500000;
  iVar12 = iVar10;
  if (DAT_0131b1e8 < iVar10) {
    iVar12 = DAT_0131b1e8;
  }
  if (iVar12 < DAT_0131b2c8) {
    iVar12 = DAT_0131b2c8;
  }
  *(int *)(iVar5 + 0x3c) = iVar12;
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + *(int *)(in_ECX + 0x40) * 4) + 0xbe8) +
                  *(int *)(local_154[2] + 0x20) * 4);
  *(undefined1 *)(iVar5 + 0x71) = 1;
  iVar12 = DAT_012586dc;
  iVar11 = DAT_0131b1e8;
  if (iVar10 <= DAT_0131b1e8) {
    iVar11 = iVar10;
  }
  if (iVar11 < DAT_0131b2c8) {
    iVar11 = DAT_0131b2c8;
  }
  *(int *)(iVar5 + 0x3c) = iVar11;
  iVar5 = *(int *)(*(int *)(iVar12 + 0x30) + 0x41c);
  iVar12 = *(int *)(*(int *)(iVar6 + 4) + *(int *)(in_ECX + 0x48) * 4);
  if (0 < iVar5) {
    iVar5 = __alldiv((longlong)(*(int *)(*(int *)(iVar12 + 0xbcc) + 0x288) + 1000) * (longlong)iVar5
                     ,1000,0);
  }
  *(int *)(iVar12 + 0xea0) = *(int *)(iVar12 + 0xea0) + iVar5;
  if (*(int *)(iVar12 + 0xea0) < 0) {
    *(undefined4 *)(iVar12 + 0xea0) = 0;
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 4) + *(int *)(in_ECX + 0x48) * 4);
  iVar12 = *(int *)(iVar5 + 0x1430) + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x420);
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  *(int *)(iVar5 + 0x1430) = iVar12;
  iVar5 = *(int *)(iVar6 + 4);
  if ((*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x40) * 4) + 0xbd0) !=
       *(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x48) * 4) + 0xbd0)) &&
     (*(char *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x48) * 4) + 0xbd0) + 0x44) != '\0')) {
    FUN_00513a90(*(undefined4 *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x48) * 4) + 0xbd0),0,0,0);
    iVar6 = DAT_012587e4;
  }
  FUN_00520150(*(undefined4 *)(*(int *)(iVar6 + 4) + *(int *)(in_ECX + 0x40) * 4));
  FUN_00520150(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4));
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4));
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4));
  FUN_00534b80(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4));
  FUN_00534b80(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4));
  if (*(int *)(in_ECX + 0x48) == DAT_012588e8[0x2d8]) {
    (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0xe0))(3);
  }
  FUN_007dcf30(piVar1);
  FUN_007dcf30((int *)(in_ECX + 0x44));
  FUN_00545be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4));
  FUN_0096b900();
  if (local_144 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_144);
  }
  ExceptionList = pvStack_14;
  return;
}

