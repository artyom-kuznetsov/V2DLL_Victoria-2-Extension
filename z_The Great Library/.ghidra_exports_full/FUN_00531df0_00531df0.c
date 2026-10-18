// FUN_00531df0 @ 00531df0 body=[[00531df0, 00532350] [00532354, 00532367]]


void FUN_00531df0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_50;
  int local_4c;
  int local_48;
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4d528;
  local_14 = ExceptionList;
  iVar3 = *DAT_012587e4;
  iVar6 = 1;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_4c = 0;
  local_50 = 0;
  if (iVar3 < 2) {
    return;
  }
  piVar4 = DAT_012587e4 + 1;
  ExceptionList = &local_14;
  do {
    iVar7 = *(int *)(*piVar4 + iVar6 * 4);
    if ((((*(int *)(iVar7 + 0x20) == 0) ||
         (iVar1 = *(int *)(DAT_012587e4[1] + *(int *)(iVar7 + 0x20) * 4),
         (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1)) ||
        (*(int *)(iVar7 + 0x20) == *(int *)(param_1 + 0x20))) ||
       (*(char *)(*(int *)(DAT_012587e4[1] + *(int *)(iVar7 + 0x20) * 4) + 0x31) != '\0')) {
      *(undefined4 *)(*(int *)(param_1 + 0x13f0) + iVar6 * 4) = 0;
    }
    else {
      cVar2 = FUN_00531d50();
      if (cVar2 != '\0') {
        iVar7 = *(int *)(*(int *)(param_1 + 0x13f0) + iVar6 * 4);
        local_28[iVar7] = local_28[iVar7] + 1;
        local_4c = local_4c + iVar7;
        local_50 = local_50 + 1;
      }
    }
    iVar6 = iVar6 + 1;
    iVar7 = 0;
  } while (iVar6 < iVar3);
  if (local_50 == 0) {
    ExceptionList = local_14;
    return;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_c = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 0xbcc) + 0x78);
  iVar3 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x5c) *
                   (longlong)(*(int *)(*(int *)(param_1 + 0xa60) + 0x308) + 1000));
  iVar6 = __alldiv((longlong)iVar3 * (longlong)(iVar6 + 1000));
  if (local_4c == 0) {
    if ((local_50 * 1000 != 0) && ((iVar6 < -0x189373 || (0x20c49a < iVar6)))) {
      uVar8 = __allmul(iVar6,iVar6 >> 0x1f);
      __alldiv(uVar8);
      iVar7 = local_28[1];
    }
    iVar6 = *DAT_012587e4;
    local_50 = 1;
    if (iVar6 < 2) goto LAB_00532251;
    do {
      iVar3 = *(int *)(*piVar4 + local_50 * 4);
      iVar7 = *(int *)(iVar3 + 0x20);
      iVar1 = *(int *)(*(int *)(param_1 + 0xbe8) + iVar7 * 4);
      if (((((iVar7 != 0) &&
            (iVar5 = *(int *)(DAT_012587e4[1] + iVar7 * 4),
            0 < (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU))) &&
           (iVar7 != *(int *)(param_1 + 0x20))) &&
          ((*(char *)(*(int *)(DAT_012587e4[1] + *(int *)(iVar3 + 0x20) * 4) + 0x31) == '\0' &&
           (cVar2 = FUN_00531d50(), cVar2 != '\0')))) &&
         (FUN_0092f5b0(), 0 < *(int *)(iVar1 + 0x4c))) {
        FUN_004d61d0();
      }
      local_50 = local_50 + 1;
    } while (local_50 < iVar6);
  }
  else {
    iVar3 = *DAT_012587e4;
    local_50 = 1;
    if (iVar3 < 2) goto LAB_00532251;
    do {
      iVar7 = *(int *)(*(int *)(*piVar4 + local_50 * 4) + 0x20);
      iVar1 = *(int *)(*(int *)(param_1 + 0xbe8) + iVar7 * 4);
      if (((*(int *)(iVar1 + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c)) &&
          (*(int *)(iVar1 + 0x34) == 0)) &&
         ((((*(int *)(iVar1 + 0x6c) <= *(int *)(DAT_012588e8 + 0xb0c) ||
            ((*(char *)(*(int *)(DAT_012587e4[1] + *(int *)(iVar1 + 0xc) * 4) + 0x31) == '\0' &&
             (4 < *(int *)(iVar1 + 0x40))))) || (*(int *)(param_1 + 0xcfc) == iVar7)) &&
          ((((cVar2 = FUN_00531cb0(), cVar2 != '\0' && (iVar7 != 0)) &&
            (iVar5 = *(int *)(DAT_012587e4[1] + iVar7 * 4),
            0 < (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU))) &&
           (((iVar7 != *(int *)(param_1 + 0x20) && (*(char *)(iVar5 + 0x31) == '\0')) &&
            (iVar7 = *(int *)(*(int *)(param_1 + 0x13f0) + local_50 * 4), iVar7 != 0)))))))) {
        iVar7 = __alldiv((longlong)(iVar7 * 1000) * (longlong)iVar6);
        uVar8 = __allmul(iVar7,iVar7 >> 0x1f);
        __alldiv(uVar8);
        FUN_0092f5b0();
        if (0 < *(int *)(iVar1 + 0x4c)) {
          FUN_004d61d0();
        }
      }
      local_50 = local_50 + 1;
    } while (local_50 < iVar3);
  }
  iVar7 = local_28[1];
LAB_00532251:
  local_50 = iVar7 - local_28[0] >> 3;
  iVar6 = local_28[0];
  if (0 < local_50) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(iVar6 + 4) * 4);
      local_48 = 0;
      piVar4 = *(int **)(DAT_012588e8 + 0xbe0);
      iVar7 = 0;
      while ((*(int **)(DAT_012588e8 + 0xbe0) <= piVar4 &&
             (piVar4 < *(int **)(DAT_012588e8 + 0xbe4)))) {
        iVar1 = *piVar4;
        piVar4 = piVar4 + 1;
        if (*(int *)(iVar1 + 0x20) != *(int *)(param_1 + 0x20)) {
          if (DAT_01258a08 == 0) {
            iVar5 = *(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(iVar6 + 4) * 4) + 0x48);
          }
          else {
            iVar5 = 100000;
          }
          if (local_48 < iVar5) {
            iVar7 = iVar1;
            local_48 = iVar5;
          }
        }
      }
      if (iVar7 != 0) {
        FUN_0092f5b0();
      }
      local_50 = local_50 + -1;
      *(undefined4 *)(iVar3 + 0x4c) = 0;
      iVar6 = iVar6 + 8;
    } while (local_50 != 0);
  }
  if (local_28[0] == 0) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

