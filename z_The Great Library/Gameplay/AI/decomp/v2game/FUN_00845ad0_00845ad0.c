// FUN_00845ad0 @ 00845ad0  (requested 00845AD0, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_00845ad0(int *param_1,int param_2,int param_3,char param_4,int param_5,undefined4 param_6,
                 char param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined8 uVar11;
  int iStack_36c;
  int local_368;
  int iStack_364;
  char local_35d;
  int local_35c;
  undefined4 local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  undefined4 local_344;
  int local_340;
  int local_33c;
  int local_338;
  int iStack_334;
  int *local_32c;
  undefined1 auStack_328 [12];
  int *piStack_31c;
  int iStack_314;
  undefined1 auStack_308 [4];
  int iStack_304;
  int iStack_300;
  undefined1 auStack_2e4 [4];
  undefined1 auStack_2e0 [184];
  undefined1 local_228 [8];
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 *local_204;
  undefined1 local_1e0 [8];
  undefined4 local_1d8;
  undefined4 local_1d4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00baba5f;
  local_14 = ExceptionList;
  local_348 = *(int *)(*(int *)(param_2 + 0xbe8) + *(int *)(param_3 + 0x24) * 4);
  iVar9 = *(int *)(local_348 + 0x34);
  ExceptionList = &local_14;
  if (((iVar9 != 0) &&
      (ExceptionList = &local_14,
      0 < (int)(*(int *)(iVar9 + 0x30) - *(int *)(iVar9 + 0x2c) & 0xfffffff8U))) &&
     (ExceptionList = &local_14,
     0 < (int)(*(int *)(iVar9 + 0x40) - *(int *)(iVar9 + 0x3c) & 0xfffffff8U))) {
    puVar1 = *(undefined4 **)(iVar9 + 0x2c);
    local_344 = *puVar1;
    puVar2 = *(undefined4 **)(iVar9 + 0x3c);
    local_340 = puVar1[1];
    local_358 = *puVar2;
    local_354 = puVar2[1];
    local_35c = 0;
    ExceptionList = &local_14;
    cVar5 = FUN_0042bb00();
    if (cVar5 != '\0') {
      local_344 = *puVar2;
      local_340 = puVar2[1];
      local_358 = *puVar1;
      local_354 = puVar1[1];
    }
    if ((local_340 != *(int *)(param_3 + 0x1c)) ||
       (piVar6 = (int *)FUN_009387c0(), 0 < (int)(piVar6[1] - *piVar6 & 0xffffffc0U))) {
      iVar7 = FUN_00936fc0(iVar9,&local_344,&local_358,&local_35c);
      iVar9 = *(int *)(DAT_012586dc + 0x60);
      FUN_00401000(0x47c35040);
      iVar8 = FUN_00b31c00();
      iVar8 = __alldiv((longlong)iVar8 * (longlong)*(int *)(iVar9 + 0x48),1000,0);
      if (iVar8 / 1000 < iVar7) {
        local_350 = *(int *)(iVar9 + 0x4c);
        iVar7 = iVar7 * 1000;
        iVar9 = local_35c * 1000;
        if (iVar7 == 0) {
          iVar7 = -1;
        }
        else if (iVar9 + 0x189373U < 0x39580e) {
          iVar7 = (local_35c * 1000000) / iVar7;
        }
        else {
          uVar11 = __allmul(iVar9,iVar9 >> 0x1f,1000,0);
          iVar7 = __alldiv(uVar11,iVar7,iVar7 >> 0x1f);
          local_354 = iVar7 >> 0x1f;
        }
        if (local_350 <= iVar7) goto LAB_00845c8c;
      }
    }
  }
  local_35c = 0;
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_1d8 = *(undefined4 *)(param_2 + 0x1c);
  local_1d4 = *(undefined4 *)(param_2 + 0x20);
  local_204 = local_1e0;
  local_220 = *(undefined4 *)(param_3 + 0x20);
  local_21c = *(undefined4 *)(param_3 + 0x24);
  piVar6 = *(int **)(DAT_012588e8 + 0xb3c);
joined_r0x00845d14:
  do {
    if (piVar6 == (int *)0x0) {
      local_35d = FUN_0092ede0();
      if (DAT_0131acac == 0) {
        local_33c = FUN_00aae9af(0x20);
        local_c = 0;
        if (local_33c == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_0090cca0();
        }
        local_c = 0xffffffff;
        FUN_0090d9d0(uVar10);
      }
      local_32c = (int *)(DAT_0131acac + 0xc);
      local_33c = *(int *)(DAT_0131acac + 0x10) - *(int *)(DAT_0131acac + 0xc) >> 2;
      local_34c = 0;
      iVar9 = DAT_0131acac;
      if (local_33c < 1) goto LAB_00846582;
      goto LAB_00845df5;
    }
    iVar9 = *piVar6;
    local_358 = *(undefined4 *)(param_3 + 0x20);
    iVar8 = *(int *)(iVar9 + 0x2c);
    piVar6 = (int *)piVar6[2];
    iVar7 = *(int *)(iVar9 + 0x30);
    if (iVar8 == iVar7) {
LAB_00845d40:
      iVar8 = *(int *)(iVar9 + 0x40);
      iVar9 = *(int *)(iVar9 + 0x3c);
      if (iVar9 == iVar8) goto joined_r0x00845d14;
      do {
        if (*(int *)(iVar9 + 4) == *(int *)(param_3 + 0x24)) break;
        iVar9 = iVar9 + 8;
      } while (iVar9 != iVar8);
      if (iVar9 == iVar8) goto joined_r0x00845d14;
    }
    else {
      do {
        if (*(int *)(iVar8 + 4) == *(int *)(param_3 + 0x24)) break;
        iVar8 = iVar8 + 8;
      } while (iVar8 != iVar7);
      if (iVar8 == iVar7) goto LAB_00845d40;
    }
    cVar5 = FUN_0093c280(param_3 + 0x20);
  } while (cVar5 == '\0');
LAB_00845c8c:
  *param_1 = 0;
  ExceptionList = local_14;
  return;
LAB_00845df5:
  if (local_34c < local_32c[1] - *local_32c >> 2) {
    piVar6 = *(int **)(*local_32c + local_34c * 4);
  }
  else {
    piVar6 = *(int **)*local_32c;
  }
  piVar3 = *(int **)(local_348 + 0x50);
  iVar8 = piVar6[2];
  do {
    if (piVar3 == (int *)0x0) {
      if (iVar9 == 0) {
        local_338 = FUN_00aae9af(0x20);
        local_c = 1;
        if (local_338 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_0090cca0();
        }
        local_c = 2;
        local_338 = 0;
        if ((iVar9 != DAT_0131acac) && (local_368 = DAT_0131acac, DAT_0131acac != 0)) {
          FUN_0090cd00(DAT_0131acac);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_368);
        }
        local_c = 0xffffffff;
        DAT_0131acac = iVar9;
      }
      if (iVar8 < *(int *)(iVar9 + 0x10) - *(int *)(iVar9 + 0xc) >> 2) {
        iVar8 = *(int *)(*(int *)(iVar9 + 0xc) + iVar8 * 4);
      }
      else {
        iVar8 = **(int **)(iVar9 + 0xc);
      }
      bVar4 = false;
      if (*(char *)(iVar8 + 0x132) == '\0') goto LAB_00845ed7;
      break;
    }
    iVar7 = *piVar3;
    piVar3 = (int *)piVar3[2];
  } while (*(int *)(iVar7 + 0x24) != iVar8);
  bVar4 = true;
LAB_00845ed7:
  if ((((((param_4 == '\0') || (bVar4)) && (*(char *)((int)piVar6 + 0x1cd) != '\0')) &&
       (((char)param_6 == '\0' || (*(char *)((int)piVar6 + 0x133) != '\0')))) &&
      ((cVar5 = (**(code **)(*piVar6 + 0x20))(local_228), iVar9 = DAT_0131acac, cVar5 != '\0' &&
       ((param_8 == 0 || (piVar6 == *(int **)(param_8 + 0xc))))))) &&
     ((iStack_364 = *(int *)(local_348 + 0x34), iStack_364 != 0 || ((local_35d == '\0' || (bVar4))))
     )) {
    FUN_0094bdb0(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                 *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24));
    local_338 = *(int *)(*(int *)(DAT_012587e4 + 4) + iStack_304 * 4);
    local_358 = 0x2d2d2d;
    local_354 = 0;
    FUN_00846c40(&iStack_36c,param_2,iStack_364,auStack_308,piVar6,&local_358,param_6);
    if (((piVar6[0x39] - piVar6[0x38] & 0xfffffffcU) == 0) ||
       ((piVar6[0x2b] - piVar6[0x2a] & 0xfffffffcU) == 0)) {
      if ((piVar6[0x39] - piVar6[0x38] & 0xfffffffcU) != 0) {
        piVar6 = (int *)FUN_00846830(param_2,iStack_364,param_6,param_8);
        iStack_36c = iStack_36c + *piVar6;
        cVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iStack_300 * 4) +
                                       0x188) + 0x24))();
        goto LAB_008460d0;
      }
      if ((piVar6[0x2b] - piVar6[0x2a] & 0xfffffffcU) != 0) {
        piVar6 = (int *)FUN_00846a70(auStack_2e4,param_2,iStack_364,param_6,param_8);
        iStack_36c = iStack_36c + *piVar6;
        goto LAB_008460ae;
      }
LAB_008460d8:
      if (!bVar4) {
        FUN_009500e0(auStack_328);
        iVar8 = *(int *)(param_2 + 0x1430);
        iVar9 = DAT_0131acac;
        if (param_5 <= iVar8 + local_350) goto LAB_0084656f;
        iVar9 = 1000;
        local_368 = 1000;
        if (iStack_364 == 0) {
          iVar9 = 500;
          local_368 = 500;
        }
        if (*(char *)(local_338 + 0x12d0) != '\0') {
          uVar11 = __allmul(iVar9,0,2000,0);
          iVar9 = __alldiv(uVar11,1000,0);
          local_368 = iVar9;
        }
        iVar8 = iVar8 + local_350;
        if (param_5 == 0) {
          iVar8 = -1;
        }
        else if (iVar8 + 0x189373U < 0x39580e) {
          iVar8 = (iVar8 * 1000) / param_5;
        }
        else {
          uVar11 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
          iVar8 = __alldiv(uVar11,param_5,param_5 >> 0x1f);
          iStack_334 = iVar8 >> 0x1f;
          iVar9 = local_368;
        }
        iVar9 = __alldiv((longlong)(1000 - iVar8) * (longlong)iVar9,1000,0);
        iStack_36c = __alldiv((longlong)iVar9 * (longlong)iStack_36c,1000,0);
      }
      iVar9 = DAT_0131acac;
      if ((piStack_31c != (int *)0x0) &&
         (cVar5 = (**(code **)(*piStack_31c + 0x1c))(), iVar9 = DAT_0131acac, cVar5 != '\0')) {
        if (iStack_364 == 0) {
LAB_008462b6:
          if (*(int *)(param_2 + 0x20) == 4) {
            FUN_009885d0();
            local_c = 3;
            FUN_004f97a0();
            local_c._0_1_ = 4;
            FUN_0094c240();
            local_c._0_1_ = 5;
            FUN_004015b0();
            local_c._0_1_ = 6;
            uVar10 = FUN_009cd680();
            uVar10 = FUN_00987d20(extraout_ECX," against ",extraout_ECX,&DAT_00df9638,extraout_ECX,
                                  uVar10);
            uVar10 = FUN_00989050(uVar10);
            uVar10 = FUN_00418e30(uVar10);
            FUN_00989050(uVar10);
            uVar10 = FUN_00418e30();
            uVar10 = FUN_00455470(uVar10);
            FUN_00401280(uVar10);
            local_c = CONCAT31(local_c._1_3_,5);
            FUN_00401650();
            FUN_00408ad0();
            FUN_00408ad0();
            local_c = 0xffffffff;
            FUN_00408ad0();
          }
          iVar8 = iStack_36c;
          iVar9 = iStack_36c / 1000;
          if ((0 < iVar9) && (param_7 != '\0')) {
            iVar7 = FUN_009b7610();
            iStack_36c = iVar8 + (iVar9 / 2 - iVar7 % iVar9) * 1000;
          }
          if (*(int *)(param_2 + 0x20) == 4) {
            FUN_009885d0();
            local_c = 7;
            FUN_004f97a0();
            local_c._0_1_ = 8;
            FUN_0094c240();
            local_c._0_1_ = 9;
            FUN_004015b0();
            local_c._0_1_ = 10;
            uVar10 = FUN_009cd680();
            uVar10 = FUN_00987d20(extraout_ECX_00," against ",extraout_ECX_00,&DAT_00df9638,
                                  extraout_ECX_00,uVar10);
            uVar10 = FUN_00989050(uVar10);
            uVar10 = FUN_00418e30(uVar10);
            FUN_00989050(uVar10);
            uVar10 = FUN_00418e30();
            uVar10 = FUN_00455470(uVar10);
            FUN_00401280(uVar10);
            local_c = CONCAT31(local_c._1_3_,9);
            FUN_00401650();
            FUN_00408ad0();
            FUN_00408ad0();
            local_c = 0xffffffff;
            FUN_00408ad0();
          }
          iVar9 = DAT_0131acac;
          if (local_35c < iStack_36c) {
            local_35c = iStack_36c;
            FUN_00424b60();
            iVar9 = DAT_0131acac;
          }
        }
        else {
          piVar6 = (int *)FUN_009387c0();
          iVar8 = piVar6[1];
          iVar7 = FUN_0042ca20(*piVar6);
          iVar9 = DAT_0131acac;
          if (iVar7 == iVar8) {
            iVar9 = iVar8 - *piVar6 >> 6;
            if (iVar9 != 0) {
              iVar8 = 0;
              if (0 < iVar9) {
                do {
                  local_368 = iVar9;
                  piVar6 = (int *)FUN_00951920();
                  iVar8 = iVar8 + *piVar6;
                  local_368 = local_368 + -1;
                  iVar9 = local_368;
                } while (local_368 != 0);
              }
              piVar6 = (int *)FUN_00951920();
              iVar9 = DAT_0131acac;
              if (100000 < iVar8 + *piVar6) goto LAB_0084656f;
            }
            piVar6 = (int *)FUN_00951920();
            iVar9 = DAT_0131acac;
            if (*piVar6 <= *(int *)(*(int *)(DAT_012586dc + 0x60) + 0x24)) goto LAB_008462b6;
          }
        }
      }
    }
    else {
      piVar6 = (int *)FUN_008465a0(auStack_2e0,param_2,iStack_364,param_6,param_8);
      iStack_36c = iStack_36c + *piVar6;
      iVar9 = DAT_0131acac;
      if (iStack_314 != 0) {
LAB_008460ae:
        cVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iStack_300 * 4) +
                                       0x188) + 0x24))();
LAB_008460d0:
        iVar9 = DAT_0131acac;
        if (cVar5 != '\0') goto LAB_008460d8;
      }
    }
  }
LAB_0084656f:
  local_34c = local_34c + 1;
  if (local_33c <= local_34c) {
LAB_00846582:
    *param_1 = local_35c;
    ExceptionList = local_14;
    return;
  }
  goto LAB_00845df5;
}

