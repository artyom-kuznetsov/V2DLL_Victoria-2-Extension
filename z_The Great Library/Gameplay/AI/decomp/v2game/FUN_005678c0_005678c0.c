// FUN_005678c0 @ 005678c0 body=[[005678c0, 00567aa4] [00567aa8, 00567ab7] [00567abb, 00567bd4] [00567bd8, 00567c4d] [00567c51, 00567d0a] [00567d0e, 00567db2] [00567db6, 005680c4] [005680c8, 00568149]]


undefined4 * FUN_005678c0(undefined4 *param_1,undefined4 *param_2)

{
  void *_Dst;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined3 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5accc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0056bfd0();
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  piVar7 = param_1 + 0xae;
  *param_1 = CTechnologyStatus::vftable;
  *piVar7 = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  puVar14 = param_1 + 0xbb;
  *puVar14 = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  local_8._1_3_ = 0;
  uVar4 = local_8._1_3_;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  param_1[0xb6] = param_2;
  if (DAT_0125eadc == (int *)0x0) {
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 8;
    if (param_2 != (undefined4 *)0x0) {
      FUN_00576fe0();
    }
    local_8._0_1_ = 7;
    FUN_0057ab10();
    uVar4 = local_8._1_3_;
  }
  local_8._1_3_ = uVar4;
  uVar5 = DAT_0125eadc[1] - *DAT_0125eadc >> 2;
  uVar12 = param_1[0xaf] - *piVar7 >> 2;
  param_2 = (undefined4 *)0x0;
  if (uVar12 < uVar5) {
    FUN_0043cb20(piVar7,param_1[0xaf]);
  }
  else if (uVar5 < uVar12) {
    FUN_0054ab90(piVar7,*piVar7 + uVar5 * 4);
  }
  param_2 = (undefined4 *)&stack0xffffffd8;
  puVar11 = &stack0xffffffd8;
  if (DAT_0125eadc == (int *)0x0) {
    param_2 = (undefined4 *)FUN_00aae9af(0x9c);
    local_8._0_1_ = 9;
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00576fe0(param_2);
    }
    local_8._0_1_ = 7;
    FUN_0057ab10(uVar6);
    puVar11 = (undefined1 *)param_2;
  }
  param_2 = (undefined4 *)puVar11;
  FUN_0057aa50();
  FUN_0055e410();
  FUN_009d7290();
  local_14 = 0;
  while( true ) {
    piVar7 = DAT_0125e2b0;
    if (DAT_0125e2b0 == (int *)0x0) {
      piVar7 = (int *)FUN_00aae9af();
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = 0;
        piVar7[1] = 0;
        piVar7[2] = 0;
      }
      piVar3 = DAT_0125e2b0;
      if ((piVar7 != DAT_0125e2b0) && (DAT_0125e2b0 != (int *)0x0)) {
        if (*DAT_0125e2b0 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *DAT_0125e2b0 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    DAT_0125e2b0 = piVar7;
    if (DAT_0125e2b0[1] - *DAT_0125e2b0 >> 2 <= local_14) break;
    uVar5 = param_1[0xbc];
    if (*(char *)(*(int *)(*DAT_0125e2b0 + local_14 * 4) + 0x6c) == '\0') {
      param_2 = (undefined4 *)((uint)param_2 & 0xffffff);
      if (((int)&param_2 + 3U < uVar5) && (uVar12 = *puVar14, uVar12 <= (int)&param_2 + 3U))
      goto LAB_00567af4;
      if (uVar5 == param_1[0xbd]) {
        FUN_009d73c0();
      }
      if ((undefined1 *)param_1[0xbc] != (undefined1 *)0x0) {
        *(undefined1 *)param_1[0xbc] = 0;
      }
LAB_00567b78:
      param_1[0xbc] = param_1[0xbc] + 1;
      local_14 = local_14 + 1;
    }
    else {
      param_2 = (undefined4 *)CONCAT13(1,param_2._0_3_);
      if (((int)&param_2 + 3U < uVar5) && (uVar12 = *puVar14, uVar12 <= (int)&param_2 + 3U)) {
LAB_00567af4:
        if (uVar5 == param_1[0xbd]) {
          FUN_009d73c0();
        }
        if ((undefined1 *)param_1[0xbc] == (undefined1 *)0x0) goto LAB_00567b78;
        *(undefined1 *)param_1[0xbc] = *(undefined1 *)((int)&param_2 + (*puVar14 - uVar12) + 3);
        param_1[0xbc] = param_1[0xbc] + 1;
        local_14 = local_14 + 1;
      }
      else {
        if (uVar5 == param_1[0xbd]) {
          FUN_009d73c0();
        }
        if ((undefined1 *)param_1[0xbc] == (undefined1 *)0x0) goto LAB_00567b78;
        *(undefined1 *)param_1[0xbc] = 1;
        param_1[0xbc] = param_1[0xbc] + 1;
        local_14 = local_14 + 1;
      }
    }
  }
  if (DAT_0125fdd8 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    if (param_2 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)FUN_008b0060();
    }
    local_8 = CONCAT31(local_8._1_3_,0xb);
    param_2 = (undefined4 *)0x0;
    if ((puVar8 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
      FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 7;
    DAT_0125fdd8 = puVar8;
  }
  puVar14 = param_1 + 0xb7;
  FUN_009d7290();
  if (DAT_0125fdd8 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0xc;
    if (param_2 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)FUN_008b0060();
    }
    local_8 = CONCAT31(local_8._1_3_,0xd);
    param_2 = (undefined4 *)0x0;
    if ((puVar8 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
      FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 7;
    DAT_0125fdd8 = puVar8;
  }
  FUN_004bf300();
  local_14 = 0;
LAB_00567c80:
  do {
    if (DAT_0125fdd8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0xe;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8[1] = 0x1ff;
        *puVar8 = 0;
        param_2 = puVar8;
        pvVar9 = (void *)FUN_00aad56b();
        puVar8[2] = pvVar9;
        _memset(pvVar9,0,puVar8[1] * 4);
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
      }
      local_8 = CONCAT31(local_8._1_3_,0xf);
      param_2 = (undefined4 *)0x0;
      if ((puVar8 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
        FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 7;
      DAT_0125fdd8 = puVar8;
    }
    if ((int)(DAT_0125fdd8[4] - DAT_0125fdd8[3]) >> 2 <= local_14) {
      if (DAT_0125ce80 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0x13;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8[1] = 0x1ff;
          *puVar8 = 0;
          param_2 = puVar8;
          pvVar9 = (void *)FUN_00aad56b();
          puVar8[2] = pvVar9;
          _memset(pvVar9,0,puVar8[1] * 4);
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
        }
        local_8 = CONCAT31(local_8._1_3_,0x14);
        param_2 = (undefined4 *)0x0;
        if ((puVar8 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
          FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 7;
        DAT_0125ce80 = puVar8;
      }
      pvVar9 = (void *)param_1[0xc0];
      iVar1 = param_1[0xbf];
      uVar5 = (int)(DAT_0125ce80[4] - DAT_0125ce80[3]) >> 2;
      param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
      if ((uint)((int)pvVar9 - iVar1) < uVar5) {
        FUN_004d8570(param_1 + 0xbf,pvVar9,(iVar1 - (int)pvVar9) + uVar5);
      }
      else if ((uVar5 < (uint)((int)pvVar9 - iVar1)) &&
              (_Dst = (void *)(iVar1 + uVar5), _Dst != pvVar9)) {
        FID_conflict__memcpy(_Dst,pvVar9,0);
        param_1[0xc0] = _Dst;
      }
      FUN_00568460();
      ExceptionList = local_10;
      return param_1;
    }
    if (DAT_0125fdd8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x10;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8[1] = 0x1ff;
        *puVar8 = 0;
        param_2 = puVar8;
        pvVar9 = (void *)FUN_00aad56b();
        puVar8[2] = pvVar9;
        _memset(pvVar9,0,puVar8[1] * 4);
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
      }
      local_8 = CONCAT31(local_8._1_3_,0x11);
      param_2 = (undefined4 *)0x0;
      if ((puVar8 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
        FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 7;
      DAT_0125fdd8 = puVar8;
    }
    iVar1 = *(int *)(DAT_0125fdd8[3] + local_14 * 4);
    uVar12 = param_1[0xb8];
    uVar5 = (int)&param_2 + 3;
    if (*(char *)(iVar1 + 0x4c) == '\0') {
      param_2 = (undefined4 *)CONCAT13(1,param_2._0_3_);
      if ((uVar5 < uVar12) && (uVar13 = *puVar14, uVar13 <= (int)&param_2 + 3U)) goto LAB_00567ded;
      if (uVar12 == param_1[0xb9]) {
        iVar10 = uVar12 - *puVar14;
        if (iVar10 == -1) {
LAB_00568026:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if (param_1[0xb9] - *puVar14 < iVar10 + 1U) {
          FUN_009d7290();
        }
      }
      if ((undefined1 *)param_1[0xb8] != (undefined1 *)0x0) {
        *(undefined1 *)param_1[0xb8] = 1;
      }
    }
    else {
      param_2 = (undefined4 *)((uint)param_2 & 0xffffff);
      if ((uVar5 < uVar12) && (uVar13 = *puVar14, uVar13 <= uVar5)) {
LAB_00567ded:
        if (uVar12 == param_1[0xb9]) {
          if (uVar12 - uVar13 == -1) goto LAB_00568026;
          if (param_1[0xb9] - uVar13 < (uVar12 - uVar13) + 1) {
            FUN_009d7290();
          }
        }
        if ((undefined1 *)param_1[0xb8] != (undefined1 *)0x0) {
          *(undefined1 *)param_1[0xb8] = *(undefined1 *)((int)&param_2 + (*puVar14 - uVar13) + 3);
        }
      }
      else {
        if (uVar12 == param_1[0xb9]) {
          iVar10 = uVar12 - *puVar14;
          if (iVar10 == -1) goto LAB_00568026;
          if (param_1[0xb9] - *puVar14 < iVar10 + 1U) {
            FUN_009d7290();
          }
        }
        if ((undefined1 *)param_1[0xb8] != (undefined1 *)0x0) {
          *(undefined1 *)param_1[0xb8] = 0;
        }
      }
    }
    param_1[0xb8] = param_1[0xb8] + 1;
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x12;
    if (param_2 == (undefined4 *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11 = (undefined1 *)FUN_005ba2a0(param_2,iVar1 + 8);
    }
    local_8._0_1_ = 7;
    puVar8 = (undefined4 *)param_1[0xc5];
    param_2 = (undefined4 *)puVar11;
    if ((&param_2 < puVar8) && (puVar2 = (undefined4 *)param_1[0xc4], puVar2 <= &param_2)) {
      if (puVar8 == (undefined4 *)param_1[0xc6]) {
        uVar5 = (int)puVar8 - (int)puVar2 >> 2;
        if (0x3ffffffe < uVar5) goto LAB_00568026;
        if ((uint)((int)param_1[0xc6] - (int)puVar2 >> 2) < uVar5 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)param_1[0xc5] != (undefined4 *)0x0) {
        local_14 = local_14 + 1;
        *(undefined4 *)param_1[0xc5] =
             *(undefined4 *)(param_1[0xc4] + ((int)&param_2 - (int)puVar2 >> 2) * 4);
        param_1[0xc5] = param_1[0xc5] + 4;
        goto LAB_00567c80;
      }
    }
    else {
      if (puVar8 == (undefined4 *)param_1[0xc6]) {
        uVar5 = (int)puVar8 - param_1[0xc4] >> 2;
        if (0x3ffffffe < uVar5) goto LAB_00568026;
        if ((uint)((int)param_1[0xc6] - param_1[0xc4] >> 2) < uVar5 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)param_1[0xc5] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xc5] = puVar11;
      }
    }
    param_1[0xc5] = param_1[0xc5] + 4;
    local_14 = local_14 + 1;
  } while( true );
}

