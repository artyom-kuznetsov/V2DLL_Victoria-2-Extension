// FUN_004b5a90 @ 004b5a90 body=[[004b5a90, 004b5dcd] [004b5dd9, 004b5e1e] [004b5e2a, 004b5f5b]]


void FUN_004b5a90(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int local_44;
  int local_40;
  undefined1 auStack_20 [12];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar5 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb6a3b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &pvStack_14;
    iVar6 = FUN_00aae9af();
    local_c = 0;
    if (iVar6 != 0) {
      FUN_0041a160();
    }
    local_c = 0xffffffff;
    FUN_00423700();
  }
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 4) * 4);
  iVar3 = *(int *)(*(int *)(iVar6 + 0xa60) + 0x88);
  piVar12 = (int *)*param_1;
  iVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  do {
    if ((piVar12 < (int *)*param_1) || ((int *)param_1[1] <= piVar12)) {
      FUN_00521560();
      ExceptionList = pvStack_14;
      return;
    }
    iVar10 = *piVar12;
    piVar12 = piVar12 + 1;
    iVar10 = *(int *)(*(int *)(iVar5 + 0xacc) + iVar10 * 4);
    iVar14 = *(int *)(iVar10 + 0x188);
    if (iVar14 == 0) {
LAB_004b5c5a:
      if (0 < iVar7) {
        iVar13 = 0;
        iVar14 = iVar7;
        do {
          for (iVar8 = *(int *)(iVar13 + *(int *)(iVar10 + 0x194)); iVar8 != 0;
              iVar8 = *(int *)(iVar8 + 0x27c)) {
            *(undefined4 *)(iVar8 + 0x274) = 0;
          }
          iVar13 = iVar13 + 0x10;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    else if (0 < iVar7) {
      local_44 = 0;
      local_40 = iVar7;
      do {
        for (iVar13 = *(int *)(local_44 + *(int *)(iVar10 + 0x194)); iVar13 != 0;
            iVar13 = *(int *)(iVar13 + 0x27c)) {
          uVar15 = __alldiv(*(uint *)(iVar13 + 0x250) << 0xf,
                            *(int *)(iVar13 + 0x254) << 0xf | *(uint *)(iVar13 + 0x250) >> 0x11);
          puVar1 = (uint *)(iVar14 + 600);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - (uint)uVar15;
          *(int *)(iVar14 + 0x25c) =
               (*(int *)(iVar14 + 0x25c) - (int)((ulonglong)uVar15 >> 0x20)) -
               (uint)(uVar2 < (uint)uVar15);
          if ((*(int *)(iVar14 + 0x25c) < 1) && (*(int *)(iVar14 + 0x25c) < 0)) {
            *(undefined4 *)(iVar14 + 600) = 0;
            *(undefined4 *)(iVar14 + 0x25c) = 0;
          }
          uVar4 = *(uint *)(iVar13 + 0x250);
          puVar1 = (uint *)(iVar13 + 0x250);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - uVar4;
          *(int *)(iVar13 + 0x254) =
               (*(int *)(iVar13 + 0x254) - *(int *)(iVar13 + 0x254)) - (uint)(uVar2 < uVar4);
          if ((*(int *)(iVar13 + 0x254) < 1) && (*(int *)(iVar13 + 0x254) < 0)) {
            *(undefined4 *)(iVar13 + 0x250) = 0;
            *(undefined4 *)(iVar13 + 0x254) = 0;
          }
        }
        local_44 = local_44 + 0x10;
        local_40 = local_40 + -1;
      } while (local_40 != 0);
      goto LAB_004b5c5a;
    }
    iVar14 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar10 + 300) * 4);
    FUN_004b5730(iVar10,param_2);
    FUN_004b52e0(param_2,param_3);
    if (*(int *)(param_5 + 4) != 0) {
      iVar13 = *(int *)(iVar10 + 0x14c);
      iVar8 = *(int *)(iVar10 + 0x148);
      if (iVar8 != iVar13) {
        do {
          if (*(int *)(iVar8 + 4) == *(int *)(param_5 + 4)) break;
          iVar8 = iVar8 + 8;
        } while (iVar8 != iVar13);
        if (iVar8 != iVar13) {
          FUN_004b6290();
        }
      }
    }
    if (*(int *)(iVar14 + 0x20) != 0) {
      if ((*(char *)(iVar14 + 0x12d0) == '\0') && (*(char *)(iVar6 + 0x12d0) != '\0')) {
        *(undefined4 *)(iVar10 + 400) = 2;
      }
      FUN_0085a090();
      *(undefined4 *)(iVar10 + 0x38) = **(undefined4 **)(DAT_012586dc + 0x40);
      if ((((*(char *)(iVar14 + 0x1c) != 'R') || (*(char *)(iVar14 + 0x1d) != 'E')) ||
          (*(char *)(iVar14 + 0x1e) != 'B')) &&
         (((int)(*(int *)(iVar14 + 0x9dc) - *(int *)(iVar14 + 0x9d8) & 0xfffffffcU) < 1 &&
          (*(int *)(iVar14 + 0x142c) != 0)))) {
        FUN_00533f20();
      }
    }
    FUN_005dbd90();
    if (*(char *)(iVar5 + 0xd1c) != '\0') {
      if (*(int *)(iVar10 + 200) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(iVar10 + 200) = 0;
      *(undefined4 *)(iVar10 + 0xcc) = 0;
      *(undefined4 *)(iVar10 + 0xd0) = 0;
      piVar11 = *(int **)(iVar10 + 0xd8);
      while (piVar11 != (int *)0x0) {
        puVar9 = (undefined4 *)*piVar11;
        piVar11 = (int *)piVar11[2];
        if (puVar9 != (undefined4 *)0x0) {
          (**(code **)*puVar9)();
        }
      }
      if (*(int *)(iVar10 + 0xd8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(iVar10 + 0xd8) = 0;
      *(undefined4 *)(iVar10 + 0xdc) = 0;
      *(undefined4 *)(iVar10 + 0xe0) = 0;
      FUN_004b2610();
      if (0 < iVar3) {
        uVar2 = *(uint *)(*(int *)(iVar6 + 0xbcc) + 0x7c);
        __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
        puVar9 = (undefined4 *)FUN_0096a2c0(iVar10 + 0x1a8,auStack_20,iVar6 + 0xa48);
        iVar10 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x154);
        uVar15 = __allmul(*puVar9,puVar9[1]);
        iVar10 = __alldiv((longlong)
                          (int)((uint)uVar15 >> 0x1e | (int)((ulonglong)uVar15 >> 0x20) << 2) *
                          (longlong)iVar10);
        *(int *)(iVar6 + 0xe3c) = iVar10 + *(int *)(iVar6 + 0xe3c);
        piVar11 = (int *)FUN_00538150();
        FUN_00401000();
        iVar10 = FUN_00b31c00();
        iVar10 = __alldiv((longlong)*piVar11 * (longlong)iVar10);
        if (*(char *)(iVar6 + 0x12d0) == '\0') {
          iVar10 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x158);
        }
        if (iVar10 < *(int *)(iVar6 + 0xe3c)) {
          *(int *)(iVar6 + 0xe3c) = iVar10;
        }
      }
    }
  } while( true );
}

