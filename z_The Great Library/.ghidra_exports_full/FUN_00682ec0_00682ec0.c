// FUN_00682ec0 @ 00682ec0 body=[[00682ec0, 006830d2] [006830d6, 0068315d] [00683161, 006832e3] [006832e7, 00683416] [0068341a, 00683506] [0068350a, 006835e1] [006835e5, 006836d5] [006836d9, 00683767] [0068376b, 006837a1] [006837a5, 006837c3] [006837c7, 0068384b] [0068384f, 00683885] [00683889, 006838a7] [006838ab, 00683ba8] [00683bb0, 00683bec] [00683bf6, 00683cd0]]


void FUN_00682ec0(undefined1 *param_1,int *param_2)

{
  void *_Dst;
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  float10 fVar13;
  undefined **local_d8 [18];
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_34;
  int *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar10 = (int)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bba896;
  local_10 = ExceptionList;
  local_50 = 0;
  DAT_012588ec = DAT_012588ec + 1;
  DAT_012588e6 = 0;
  ExceptionList = &local_10;
  *(undefined1 *)((int)param_1 + 0xb20) = 1;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  *(double *)(iVar10 + 0xb18) = (double)fVar13;
  iVar6 = (*(int *)(iVar10 + 0xb0c) + -43800000) / 0x18;
  local_4c = 0;
  for (iVar6 = (iVar6 - (int)((float)(int)((double)iVar6 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar6; iVar6 = iVar6 - (&DAT_00f1027c)[local_4c]) {
    local_4c = local_4c + 1;
  }
  iVar6 = *(int *)(iVar10 + 0xb0c);
  *(int *)(iVar10 + 0xb0c) = *(int *)(iVar10 + 0xb0c) + 0x18;
  local_58 = (int)((double)((iVar6 + -43800000) / 0x18) / 365.0);
  FUN_0068b610();
  local_54 = FUN_00aae9af();
  local_8 = 3;
  if (local_54 != 0) {
    FUN_0072f140();
  }
  local_8 = 0xffffffff;
  iVar6 = (**(code **)(**(int **)(iVar10 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))();
  local_30 = (int *)(iVar10 + 0xb74);
  cVar5 = FUN_0068f340();
  if (cVar5 != '\0') {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 4;
    FUN_004015b0(local_2c);
    local_8._0_1_ = 5;
    FUN_00987d20();
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00987ac0();
    local_d8[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 6;
    FUN_004015b0(local_2c);
    local_8._0_1_ = 7;
    FUN_00987d20();
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00987ac0();
    local_d8[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_54 = local_30[1] - *local_30 >> 2;
    if (0 < local_54) {
      do {
        local_8 = 0xffffffff;
        iVar10 = local_34 * 4;
        puVar11 = &DAT_00ded94d;
        if (*(int *)(iVar10 + *(int *)((int)param_1 + 0xb74)) != *(int *)(iVar10 + *param_2)) {
          puVar11 = &DAT_00e0aa18;
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350();
        local_8 = 8;
        FUN_004015b0(local_2c);
        local_8 = CONCAT31(local_8._1_3_,9);
        uVar7 = FUN_00987d20(local_34,&DAT_00ded950,
                             *(undefined4 *)(*(int *)((int)param_1 + 0xb74) + iVar10),&DAT_00e02c24)
        ;
        uVar7 = FUN_00455470(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        piVar8 = (int *)FUN_00418e30(uVar7);
        FUN_00408be0(piVar8);
        local_30 = (int *)0x0;
        if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
           (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
           iVar6 == -1)) {
          local_30 = (int *)0x4;
        }
        if (local_30 != (int *)0x0) {
          uVar9 = *(uint *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0xc) | (uint)local_30;
          if (*(int *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0x38) == 0) {
            uVar9 = uVar9 | 4;
          }
          FUN_00401120(uVar9,0);
        }
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_00987ac0(local_d8);
        local_d8[0] = std::ios_base::vftable;
        FUN_00aad52d(local_d8);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("gamestate.cpp",0xd);
        local_8 = 10;
        FUN_004015b0(local_2c,0x630,5);
        local_8 = CONCAT31(local_8._1_3_,0xb);
        uVar7 = FUN_00987d20(local_34,&DAT_00ded950,
                             *(undefined4 *)(*(int *)((int)param_1 + 0xb74) + iVar10),&DAT_00e02c24,
                             *(undefined4 *)(*param_2 + iVar10),puVar11);
        uVar7 = FUN_00455470(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        piVar8 = (int *)FUN_00418e30(uVar7);
        FUN_00408be0(piVar8);
        bVar3 = false;
        if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
           (iVar10 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
           iVar10 == -1)) {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_00401120();
        }
        local_8 = CONCAT31(local_8._1_3_,10);
        FUN_00987ac0();
        local_d8[0] = std::ios_base::vftable;
        FUN_00aad52d();
        local_8 = 0xffffffff;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_34 = local_34 + 1;
      } while (local_34 < local_54);
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 0xc;
    FUN_004015b0(local_2c);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    piVar8 = (int *)FUN_00987d20();
    FUN_00408be0();
    uVar9 = 0;
    if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
       (iVar10 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
       iVar10 == -1)) {
      uVar9 = 4;
    }
    if (uVar9 != 0) {
      uVar9 = *(uint *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0xc) | uVar9;
      if (*(int *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0x38) == 0) {
        uVar9 = uVar9 | 4;
      }
      FUN_00401120(uVar9);
    }
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_00987ac0();
    local_d8[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("gamestate.cpp");
    local_8 = 0xe;
    FUN_004015b0(local_2c,0x638);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    piVar8 = (int *)FUN_00987d20();
    FUN_00408be0();
    bVar3 = false;
    if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
       (iVar10 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
       iVar10 == -1)) {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_00401120();
    }
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_00987ac0();
    local_d8[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    piVar8 = param_2;
    DAT_00f20c14 = *(undefined4 *)*param_2;
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    DAT_00f20c1c = *(undefined1 **)(*piVar8 + 4);
    DAT_00f20c14 = 0;
    FUN_009b7c80();
    if (*(char *)((int)param_1 + 0xba8) == '\0') {
      param_2 = (int *)FUN_00aae9af();
      local_8 = 0x10;
      if (param_2 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350();
        local_8 = CONCAT31(local_8._1_3_,0x11);
        local_50 = 1;
        piVar8 = (int *)FUN_00640680();
      }
      local_8 = 0xffffffff;
      if ((local_50 & 1) != 0) {
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
      FUN_00409350();
      local_8 = 0x13;
      FUN_009a8ee0();
      local_8._0_1_ = 0x14;
      iVar10 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar10 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar10 + 0x6c) >> 0x20));
      local_8._0_1_ = 0x15;
      (**(code **)(*piVar8 + 0x3c))();
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0x16);
      FUN_009adb70();
      if (local_44 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
      FUN_00409350("OOS_DESC");
      local_8 = 0x17;
      FUN_009a8ee0(local_48);
      local_8._0_1_ = 0x18;
      iVar10 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar10 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar10 + 0x6c) >> 0x20),
                   (int)*(undefined8 *)(iVar10 + 0x74));
      local_8._0_1_ = 0x19;
      (**(code **)(*piVar8 + 0x40))();
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_90);
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      FUN_009adb70();
      iVar10 = (int)param_1;
      if (local_44 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44);
      }
      local_8 = 0xffffffff;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74);
      }
      FUN_006480e0(piVar8);
      piVar8 = (int *)FUN_00aae9af(0x5c);
      local_8 = 0x1b;
      param_2 = piVar8;
      if (piVar8 == (int *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_0068b610(DAT_012588e8);
        uVar7 = FUN_0072cef0(piVar8,uVar7,0);
      }
      local_8 = 0xffffffff;
      iVar10 = (**(code **)(**(int **)(iVar10 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar10 + 0x38) + 0x18))(uVar7);
    }
    *(undefined1 *)((int)param_1 + 0xba8) = 1;
    iVar10 = (int)param_1;
  }
  _Dst = *(void **)(iVar10 + 0xb74);
  if (_Dst != *(void **)(iVar10 + 0xb78)) {
    param_1 = (undefined1 *)0x0;
    FID_conflict__memcpy(_Dst,*(void **)(iVar10 + 0xb78),0);
    *(int *)(iVar10 + 0xb78) = (int)param_1 + (int)_Dst;
  }
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  uVar7 = DAT_00f20c14;
  puVar1 = *(undefined4 **)(iVar10 + 0xb78);
  param_1 = (undefined1 *)DAT_00f20c14;
  if ((&param_1 < puVar1) && (puVar2 = *(undefined4 **)(iVar10 + 0xb74), puVar2 <= &param_1)) {
    if (puVar1 == *(undefined4 **)(iVar10 + 0xb7c)) {
      FUN_007b94a0();
    }
    if (*(undefined4 **)(iVar10 + 0xb78) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar10 + 0xb78) =
           *(undefined4 *)(*(int *)(iVar10 + 0xb74) + ((int)&param_1 - (int)puVar2 >> 2) * 4);
    }
  }
  else {
    if (puVar1 == *(undefined4 **)(iVar10 + 0xb7c)) {
      FUN_007b94a0();
    }
    if (*(undefined4 **)(iVar10 + 0xb78) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar10 + 0xb78) = uVar7;
    }
  }
  *(int *)(iVar10 + 0xb78) = *(int *)(iVar10 + 0xb78) + 4;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  puVar11 = DAT_00f20c1c;
  puVar1 = *(undefined4 **)(iVar10 + 0xb78);
  param_1 = DAT_00f20c1c;
  if (&param_1 < puVar1) {
    puVar2 = *(undefined4 **)(iVar10 + 0xb74);
    if (puVar2 <= &param_1) {
      if (puVar1 == *(undefined4 **)(iVar10 + 0xb7c)) {
        FUN_007b94a0();
      }
      if (*(undefined4 **)(iVar10 + 0xb78) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar10 + 0xb78) =
             *(undefined4 *)(*(int *)(iVar10 + 0xb74) + ((int)&param_1 - (int)puVar2 >> 2) * 4);
      }
      goto LAB_00683aa9;
    }
  }
  if (puVar1 == *(undefined4 **)(iVar10 + 0xb7c)) {
    FUN_007b94a0();
  }
  if (*(undefined4 **)(iVar10 + 0xb78) != (undefined4 *)0x0) {
    **(undefined4 **)(iVar10 + 0xb78) = puVar11;
  }
LAB_00683aa9:
  *(int *)(iVar10 + 0xb78) = *(int *)(iVar10 + 0xb78) + 4;
  FUN_006859c0();
  iVar6 = *(int *)(iVar10 + 0xabc);
  while (iVar6 != 0) {
    iVar6 = *(int *)(iVar6 + 8);
    FUN_0059c8b0();
  }
  iVar6 = (*(int *)(iVar10 + 0xb0c) + -43800000) / 0x18;
  iVar12 = 0;
  for (iVar6 = (iVar6 - (int)((float)(int)((float)iVar6 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar6; iVar6 = iVar6 - (&DAT_00f1027c)[iVar12]) {
    iVar12 = iVar12 + 1;
  }
  if (local_4c != iVar12) {
    FUN_00687e30();
    (**(code **)(**(int **)(iVar10 + 0xb24) + 0xd0))();
  }
  if (local_58 != (int)((double)((*(int *)(iVar10 + 0xb0c) + -43800000) / 0x18) / 365.0)) {
    FUN_00688000();
    (**(code **)(**(int **)(iVar10 + 0xb24) + 0xd4))();
  }
  iVar6 = *(int *)(iVar10 + 0xb34);
  do {
    if (iVar6 < 1) {
      if ((*(int *)(iVar10 + 0xbc0) - *(int *)(iVar10 + 0xbbc) & 0xfffffffcU) != 0) {
        FUN_0068c040();
      }
      if ((*(int *)(iVar10 + 0xbc0) - *(int *)(iVar10 + 0xbbc) & 0xfffffffcU) != 0) {
        (**(code **)(**(int **)(iVar10 + 0xb24) + 0x38))();
        FUN_0081a450();
      }
      FUN_0054ab90((int *)(iVar10 + 0xbbc));
      (**(code **)(**(int **)(iVar10 + 0xb24) + 0xcc))();
      uVar4 = DAT_01258738;
      uVar7 = DAT_00f0973c;
      DAT_00f0973c = DAT_012586e4;
      DAT_012586e4 = uVar7;
      DAT_01258738 = DAT_00f096c8;
      DAT_00f096c8 = uVar4;
      *(undefined1 *)(iVar10 + 0xb20) = 0;
      ExceptionList = local_10;
      return;
    }
    iVar6 = *(int *)(iVar10 + 0xb2c);
    if (iVar6 != 0) {
      if (*(char *)(iVar10 + 0xb38) == '\0') {
        iVar6 = *(int *)(iVar6 + 0xc);
        *(int *)(iVar10 + 0xb2c) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)(iVar10 + 0xb30) = 0;
        }
        else {
          *(undefined4 *)(iVar6 + 8) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined1 *)(iVar6 + 0x10) = 1;
    }
    param_1 = &stack0xfffffe98;
    iVar6 = FUN_009c16d0();
    if ((iVar6 != 0) && (iVar6 != 8)) {
      FUN_0068aa10();
    }
    iVar6 = *(int *)(iVar10 + 0xb34);
  } while( true );
}

