// FUN_00947210 @ 00947210 body=[[00947210, 00947292] [00947296, 00947335] [00947339, 00947442] [00947446, 00947461] [00947465, 0094748b] [0094748f, 009477bf] [009477c3, 009477fb] [009477ff, 0094790c] [00947910, 00947948] [0094794c, 00947a0b] [00947a0f, 00947a35] [00947a39, 00947a90] [00947a94, 00947b0b] [00947b0f, 00947b6e] [00947b77, 00947bbb] [00947bbf, 00947c2f] [00947c33, 00947c88]]


bool FUN_00947210(void)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int in_ECX;
  int *piStack_e0;
  int *apiStack_d8 [2];
  int *piStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  int local_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined1 local_94 [4];
  undefined4 uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_84;
  uint local_80 [3];
  uint uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_44;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  void *pvStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb49ef;
  pvStack_14 = ExceptionList;
  local_80[0] = 0xf;
  local_84 = 0;
  local_94[0] = 0;
  ExceptionList = &pvStack_14;
  local_b4 = in_ECX;
  FUN_00409350("AgreeButton",0xb);
  local_c = 0;
  apiStack_d8[0] = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(local_94);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_98);
  }
  local_84 = 0xf;
  uStack_88 = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  cVar2 = FUN_00911760(0);
  if (cVar2 == '\0') {
    pcVar3 = *(code **)(*apiStack_d8[0] + 0xbc);
  }
  else {
    pcVar3 = *(code **)(*apiStack_d8[0] + 0xb8);
  }
  (*pcVar3)();
  iStack_2c = 0xf;
  pvStack_30 = (void *)0x0;
  auStack_40[0] = 0;
  FUN_00409350("setup_goals",0xb);
  puStack_10 = (undefined1 *)0x1;
  piVar4 = (int *)(**(code **)(**(int **)(uStack_b8 + 4) + 0x6c))(auStack_40);
  pvStack_14 = (void *)0xffffffff;
  if (0xf < pvStack_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_44);
  }
  pvStack_30 = (void *)0xf;
  uStack_34 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  if (*(char *)((int)piVar4 + 0x67) == '\0') goto LAB_00947a39;
  uStack_c4 = 0xf;
  uStack_c8 = 0;
  apiStack_d8[0] = (int *)((uint)apiStack_d8[0] & 0xffffff00);
  FUN_00409350();
  pvStack_14 = (void *)0x2;
  iVar5 = FUN_009293c0();
  uStack_88 = 0xf;
  uStack_8c = 0;
  uStack_9c = uStack_9c & 0xffffff00;
  pvStack_14._0_1_ = 3;
  pcVar6 = __itoa(iVar5,(char *)local_80,10);
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00409350();
  pvStack_14._0_1_ = 4;
  uVar7 = FUN_0042c180();
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,5);
  (**(code **)(*piVar4 + 0x3c))(apiStack_d8);
  FUN_00408ed0();
  FUN_00a5ecc0(uVar7,0);
  if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_a8 = 0xf;
  uStack_ac = 0;
  uStack_bc = uStack_bc & 0xffffff00;
  if (0xf < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_18 = 0xffffffff;
  uStack_8c = 0xf;
  uStack_90 = 0;
  uVar9 = uStack_a0 >> 8;
  uStack_a0 = uVar9 << 8;
  if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar4 = *(int **)(iStack_c0 + 0x6c);
  iVar5 = piVar4[5];
  uStack_c8 = 0xf;
  uStack_cc = 0;
  if ((iVar5 < *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
     (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + iVar5 * 4) == 0)) {
    iVar1 = piVar4[4];
    iVar8 = piVar4[3];
    iStack_2c = piVar4[2];
    cVar2 = FUN_00911760();
    if (cVar2 == '\0') goto switchD_009475e0_caseD_899;
    if (DAT_012589a7 == '\0') {
      if ((iVar5 != iVar8) && (cVar2 = (**(code **)(*piVar4 + 0x6c))(), cVar2 != '\0'))
      goto LAB_009476dc;
LAB_0094752b:
      iVar8 = (**(code **)(*piVar4 + 0x20))();
      if (iVar8 < 0x81f) {
        if (iVar8 == 0x81e) {
          uVar9 = FUN_0083de70();
        }
        else if (iVar8 == 0x332) {
          uVar9 = FUN_00841640();
        }
        else {
          if (iVar8 == 0x38d) goto LAB_009476dc;
          if (iVar8 != 0x470) goto switchD_009475e0_caseD_899;
          if ((piVar4[0xb] < 0) || ((piVar4[0xb] < 1 && ((uint)piVar4[10] < 0x28001)))) {
            uVar9 = 0;
          }
          else {
            uVar9 = 100;
          }
        }
        goto LAB_009476d3;
      }
      if (0x9fa < iVar8) {
        if (iVar8 == 0x9fb) {
          uVar9 = FUN_00843b90(iVar1,iVar5);
        }
        else {
          if (iVar8 != 0xa02) goto switchD_009475e0_caseD_899;
          uVar9 = FUN_00843170(piVar4,0,iVar1,iVar5);
        }
        goto LAB_009476d3;
      }
      if (iVar8 == 0x9fa) {
        uVar9 = FUN_00843a10();
        goto LAB_009476d3;
      }
      switch(iVar8) {
      case 0x897:
      case 0x898:
        cVar2 = FUN_00911760();
        uVar9 = -(uint)(cVar2 != '\0') & 100;
        break;
      default:
        goto switchD_009475e0_caseD_899;
      case 0x8c6:
        uVar9 = FUN_008419c0(piVar4,0,iVar1,iVar5);
        break;
      case 0x8c7:
        uVar9 = FUN_00842a00(iVar1,iVar5);
        break;
      case 0x8c8:
        uVar9 = FUN_00842a50(0,0,iVar1,iVar5);
        break;
      case 0x8c9:
        uVar9 = FUN_008430d0();
        break;
      case 0x8ca:
        uVar9 = FUN_008416b0(iVar1,iVar5);
        break;
      case 0x8cb:
        uVar9 = FUN_00841900(iVar1,iVar5);
        break;
      case 0x8d5:
        uVar9 = FUN_00844050(iVar1,iVar5);
        break;
      case 0x8d6:
        uVar9 = FUN_00844140(iVar1,iVar5);
      }
LAB_009476d3:
      if ((int)uVar9 < 0x32) {
switchD_009475e0_caseD_899:
        uStack_a8 = 0xf;
        uStack_ac = 0;
        uStack_bc = uStack_bc & 0xffffff00;
        FUN_00409350("PEACE_WILL_NOT_ACCEPT",0x15);
        uStack_18 = 10;
        uStack_c8 = 0xf;
        uStack_cc = 0;
        FUN_00409350("acceptance",10);
        uStack_18._0_1_ = 0xb;
        FUN_009a8ee0(&uStack_a0,&uStack_bc);
        uStack_18._0_1_ = 0xc;
        iVar5 = FUN_00475500();
        uVar7 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        uStack_18 = CONCAT31(uStack_18._1_3_,0xd);
        (**(code **)(*piStack_e0 + 0x3c))();
        FUN_00408ed0(uVar7,0,0xffffffff);
        FUN_00a5ecc0();
        if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_80[0]);
        }
        uStack_6c = 0xf;
        uStack_70 = 0;
        local_80[0] = local_80[0] & 0xffffff00;
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xb);
        FUN_009a9740(&uStack_9c);
        uVar9 = uStack_b8;
        if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(apiStack_d8[0]);
        }
        goto joined_r0x00947a2a;
      }
    }
    else if (iVar5 == iVar8) goto LAB_0094752b;
LAB_009476dc:
    uStack_a8 = 0xf;
    uStack_ac = 0;
    uStack_bc = uStack_bc & 0xffffff00;
    FUN_00409350("PEACE_WILL_ACCEPT",0x11);
    uStack_18 = 6;
    uStack_c8 = 0xf;
    uStack_cc = 0;
    FUN_00409350("acceptance",10);
    uStack_18._0_1_ = 7;
    FUN_009a8ee0(&uStack_a0,&uStack_bc);
    uStack_18._0_1_ = 8;
    iVar5 = FUN_00475500();
    uVar7 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    uStack_18 = CONCAT31(uStack_18._1_3_,9);
    (**(code **)(*piStack_e0 + 0x3c))();
    FUN_00408ed0(uVar7,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    uStack_6c = 0xf;
    uStack_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,7);
    FUN_009a9740(&uStack_9c);
    uVar9 = uStack_b8;
    if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(apiStack_d8[0]);
    }
  }
  else {
    uStack_8c = 0xf;
    uStack_90 = 0;
    uStack_a0 = uVar9 << 8;
    FUN_00409350(&DAT_00ded94d,0);
    uStack_18 = 0xe;
    uStack_c8 = 0xf;
    uStack_cc = 0;
    FUN_00409350("acceptance",10);
    uStack_18 = CONCAT31(uStack_18._1_3_,0xf);
    (**(code **)(*piStack_e0 + 0x3c))();
    FUN_00408ed0(&uStack_9c,0,0xffffffff);
    FUN_00a5ecc0();
    uVar9 = uStack_9c;
    uStack_a4 = uStack_88;
    if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(apiStack_d8[0]);
    }
  }
joined_r0x00947a2a:
  apiStack_d8[0] = (int *)((uint)apiStack_d8[0] & 0xffffff00);
  if (0xf < uStack_a4) {
    pvStack_14 = (void *)0xffffffff;
    uStack_c4 = 0xf;
    uStack_c8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar9);
  }
LAB_00947a39:
  pvStack_14 = (void *)0xffffffff;
  uStack_c4 = 0xf;
  uStack_c8 = 0;
  apiStack_d8[0] = (int *)((uint)apiStack_d8[0] & 0xffffff00);
  FUN_00409350();
  pvStack_14 = (void *)0x10;
  piVar4 = (int *)(**(code **)(**(int **)(uStack_bc + 4) + 0x6c))(apiStack_d8);
  uStack_18 = 0xffffffff;
  if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_c8 = 0xf;
  uStack_cc = 0;
  uStack_a8 = 0xf;
  uStack_ac = 0;
  uStack_bc = uStack_bc & 0xffffff00;
  if (*(char *)(*(int *)(iStack_c0 + 0x6c) + 0x30) == '\0') {
    FUN_00409350("offer_button",0xc);
    uStack_18 = 0x13;
    piVar10 = (int *)(**(code **)(*piVar4 + 0x34))();
    (**(code **)(*piVar10 + 0x48))(2);
    uStack_20 = 0xffffffff;
    if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    uStack_6c = uStack_6c & 0xffffff00;
    FUN_00409350("demand_button",0xd);
    uStack_20 = 0x14;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x34))();
    (**(code **)(*piVar4 + 0x48))(1);
    uStack_28 = 0xffffffff;
    if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_74);
    }
    uStack_60 = 0xf;
    uStack_64 = 0;
    uStack_74 = uStack_74 & 0xffffff00;
  }
  else {
    FUN_00409350("offer_button",0xc);
    uStack_18 = 0x11;
    piVar10 = (int *)(**(code **)(*piVar4 + 0x34))();
    (**(code **)(*piVar10 + 0x48))(1);
    uStack_20 = 0xffffffff;
    if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_b0 = 0xf;
    local_b4 = 0;
    uStack_c4 = uStack_c4 & 0xffffff00;
    FUN_00409350("demand_button",0xd);
    uStack_20 = 0x12;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x34))();
    (**(code **)(*piVar4 + 0x48))(2);
    uStack_28 = 0xffffffff;
    if (0xf < uStack_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_cc);
    }
  }
  uStack_28 = 0xffffffff;
  cVar2 = (**(code **)(*piStack_d0 + 0x20))();
  if (cVar2 == '\0') {
    ExceptionList = pvStack_30;
    return false;
  }
  ExceptionList = pvStack_30;
  return (char)piStack_d0[0x19] == '\0';
}

