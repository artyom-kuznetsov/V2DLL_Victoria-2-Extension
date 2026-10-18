// FUN_007331c0 @ 007331c0 body=[[007331c0, 007332b0] [007332b4, 0073330e] [00733312, 007333bc] [007333c0, 00733422] [00733426, 007334f0] [007334f4, 00733544] [00733548, 007336af] [007336b3, 007336ef] [007336f3, 00733775] [00733779, 00733822] [00733826, 00733852] [00733856, 0073387c] [00733880, 007338a4] [007338a8, 00733973] [00733977, 007339d3] [007339d7, 00733a40] [00733a44, 00733a93] [00733a9c, 00733b00] [00733b04, 00733b4f] [00733b53, 00733b76]]


void FUN_007331c0(int *param_1,char param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  char *pcVar7;
  int *piVar8;
  code *pcVar9;
  char *pcVar10;
  int *piVar11;
  int *unaff_EDI;
  bool bVar12;
  char local_d4 [32];
  undefined1 local_b4 [4];
  char local_b0 [4];
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  char local_90 [4];
  undefined4 local_8c [5];
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4bc4f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(unaff_EDI + 0x17) = 0;
  unaff_EDI[0x1c] = *param_1;
  unaff_EDI[0x1d] = param_1[1];
  if (param_2 != (char)unaff_EDI[0x1e]) {
    unaff_EDI[0x31] = -1;
  }
  *(char *)(unaff_EDI + 0x1e) = param_2;
  *(undefined1 *)(unaff_EDI + 0x58) = 1;
  if (DAT_0125fdd8 == 0) {
    iVar3 = FUN_00aae9af(0x1c);
    local_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_008b0060();
    }
    local_8 = 0xffffffff;
    FUN_005c2810(uVar4);
  }
  iVar3 = DAT_0125fdd8;
  piVar11 = (int *)(DAT_0125fdd8 + 0xc);
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_14 = piVar11;
  FUN_00409350("close",5);
  local_8 = 1;
  iVar5 = (**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_54);
  piVar8 = *(int **)(iVar5 + 0x58);
  bVar12 = piVar8 == (int *)0x0;
  if (!bVar12) {
    do {
      if ((int *)*piVar8 == unaff_EDI + 1) break;
      piVar8 = (int *)piVar8[2];
    } while (piVar8 != (int *)0x0);
    bVar12 = piVar8 == (int *)0x0;
  }
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  if (bVar12) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("close",5);
    local_8 = 2;
    iVar5 = (**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_54);
    (**(code **)(*(int *)(iVar5 + 0x54) + 4))(unaff_EDI + 1);
    local_8 = 0xffffffff;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
  }
  local_8 = 0xffffffff;
  if (unaff_EDI[0x31] == -1) {
    local_1c = 0x7fffffff;
    local_18 = *(int *)(iVar3 + 0x10) - *piVar11 >> 2;
    param_1 = (int *)0x0;
    if (0 < local_18) {
      do {
        cVar2 = (**(code **)(**(int **)(*piVar11 + (int)param_1 * 4) + 0x24))();
        if ((cVar2 != '\0') &&
           (iVar5 = *(int *)(*piVar11 + (int)param_1 * 4), *(int *)(iVar5 + 0x28) != 0)) {
          if (param_2 == '\0') {
            cVar2 = *(char *)(iVar5 + 0x3a);
          }
          else {
            cVar2 = *(char *)(iVar5 + 0x39);
          }
          if (cVar2 != '\0') {
            uVar4 = FUN_009888f0(local_70);
            local_8 = 3;
            FUN_00988fa0(uVar4);
            local_8 = CONCAT31(local_8._1_3_,5);
            if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_70[0]);
            }
            local_5c = 0xf;
            local_60 = 0;
            local_70[0] = local_70[0] & 0xffffff00;
            piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_8c);
            psVar6 = (short *)(**(code **)(*piVar8 + 0x3c))(local_b4);
            sVar1 = *psVar6;
            if (sVar1 < local_1c) {
              unaff_EDI[0x31] = *(int *)(*(int *)(*piVar11 + (int)param_1 * 4) + 0x28);
              local_1c = (int)sVar1;
            }
            local_8 = 0xffffffff;
            if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_8c[0]);
            }
          }
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < local_18);
    }
  }
  param_1 = (int *)0x0;
  local_18 = *(int *)(iVar3 + 0x10) - *piVar11 >> 2;
  if (0 < local_18) {
    do {
      cVar2 = (**(code **)(**(int **)(*piVar11 + (int)param_1 * 4) + 0x24))();
      if ((cVar2 != '\0') &&
         (iVar3 = *(int *)(*piVar11 + (int)param_1 * 4), *(int *)(iVar3 + 0x28) != 0)) {
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        local_8 = 6;
        pcVar7 = __itoa(*(int *)(iVar3 + 0x28),local_90,10);
        pcVar10 = pcVar7;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_00409350(pcVar7,(int)pcVar10 - (int)(pcVar7 + 1));
        local_8 = 7;
        FUN_00988fa0(local_38);
        local_8 = CONCAT31(local_8._1_3_,9);
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        if (param_2 == '\0') {
          if (*(char *)(*(int *)(*local_14 + (int)param_1 * 4) + 0x3a) != '\0') goto LAB_00733582;
LAB_00733516:
          pcVar9 = *(code **)(*(int *)unaff_EDI[0x18] + 0x34);
LAB_00733522:
          piVar8 = (int *)(*pcVar9)(local_54);
          uVar4 = 1;
        }
        else {
          if (*(char *)(*(int *)(*local_14 + (int)param_1 * 4) + 0x39) == '\0') goto LAB_00733516;
LAB_00733582:
          iVar3 = (**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_54);
          for (piVar8 = *(int **)(iVar3 + 0x58); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
            if ((int *)*piVar8 == unaff_EDI + 0xc) goto LAB_007335c4;
          }
          iVar3 = (**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_54);
          (**(code **)(*(int *)(iVar3 + 0x54) + 4))(unaff_EDI + 0xc);
LAB_007335c4:
          pcVar9 = *(code **)(*(int *)unaff_EDI[0x18] + 0x34);
          if (*(int *)(*(int *)(*local_14 + (int)param_1 * 4) + 0x28) != unaff_EDI[0x31])
          goto LAB_00733522;
          piVar8 = (int *)(*pcVar9)(local_54);
          uVar4 = 2;
        }
        (**(code **)(*piVar8 + 0x48))(uVar4);
        local_8 = 0xffffffff;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar11 = local_14;
    } while ((int)param_1 < local_18);
  }
  if (param_2 == '\0') {
    local_1c = unaff_EDI[0x33];
  }
  else {
    local_1c = unaff_EDI[0x32];
  }
  param_1 = (int *)0x0;
  local_18 = piVar11[1] - *piVar11 >> 2;
  if (0 < local_18) {
LAB_00733614:
    cVar2 = (**(code **)(**(int **)(*local_14 + (int)param_1 * 4) + 0x24))();
    if ((cVar2 == '\0') ||
       (iVar3 = *(int *)(*local_14 + (int)param_1 * 4), *(int *)(iVar3 + 0x28) == 0))
    goto LAB_007336f3;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_8 = 10;
    pcVar7 = __itoa(*(int *)(iVar3 + 0x28),local_b0,10);
    pcVar10 = pcVar7;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(pcVar7,(int)pcVar10 - (int)(pcVar7 + 1));
    local_8 = 0xb;
    FUN_00988fa0(local_54);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    iVar3 = *(int *)(*local_14 + (int)param_1 * 4);
    if (param_2 == '\0') {
      if (*(char *)(iVar3 + 0x3a) != '\0') goto LAB_007336cf;
LAB_007336d7:
      local_8 = 0xffffffff;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c[0]);
      }
      goto LAB_007336f3;
    }
    if (*(char *)(iVar3 + 0x39) == '\0') goto LAB_007336d7;
LAB_007336cf:
    if (*(int *)(iVar3 + 0x28) != local_1c) goto LAB_007336d7;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_8._0_1_ = 0xe;
    pcVar7 = __itoa(unaff_EDI[0x31],local_b0,10);
    pcVar10 = pcVar7;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(pcVar7,(int)pcVar10 - (int)(pcVar7 + 1));
    local_8._0_1_ = 0xf;
    FUN_00988fa0(local_38);
    local_8._0_1_ = 0x11;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_54);
    (**(code **)(*piVar8 + 0x48))(1);
    unaff_EDI[0x31] = local_1c;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_8._0_1_ = 0x12;
    pcVar7 = __itoa(local_1c,local_d4,10);
    pcVar10 = pcVar7;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(pcVar7,(int)pcVar10 - (int)(pcVar7 + 1));
    local_8._0_1_ = 0x13;
    uVar4 = FUN_00988fa0(local_70);
    local_8._0_1_ = 0x14;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_ac);
    }
    local_8 = CONCAT31(local_8._1_3_,0x11);
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_54);
    (**(code **)(*piVar8 + 0x48))(2);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_8 = 0xffffffff;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
  }
LAB_007338a8:
  (**(code **)(*(int *)(unaff_EDI[0x18] + 0x18) + 0x34))();
  param_1 = (int *)0x0;
  local_18 = local_14[1] - *local_14 >> 2;
  if (0 < local_18) {
    do {
      piVar8 = local_14;
      cVar2 = (**(code **)(**(int **)(*local_14 + (int)param_1 * 4) + 0x24))();
      if ((cVar2 != '\0') &&
         (iVar3 = *(int *)(*piVar8 + (int)param_1 * 4), *(int *)(iVar3 + 0x28) != 0)) {
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        local_8 = 0x15;
        pcVar7 = __itoa(*(int *)(iVar3 + 0x28),local_d4,10);
        pcVar10 = pcVar7;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_00409350(pcVar7,(int)pcVar10 - (int)(pcVar7 + 1));
        local_8 = 0x16;
        FUN_00988fa0(local_38);
        local_8 = CONCAT31(local_8._1_3_,0x18);
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        if (param_2 == '\0') {
          if (*(char *)(*(int *)(*local_14 + (int)param_1 * 4) + 0x3a) != '\0') goto LAB_00733ab0;
LAB_007339a1:
          piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_8c);
          pcVar9 = *(code **)(*piVar8 + 0x38);
        }
        else {
          if (*(char *)(*(int *)(*local_14 + (int)param_1 * 4) + 0x39) == '\0') goto LAB_007339a1;
LAB_00733ab0:
          piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x34))(local_8c);
          pcVar9 = *(code **)(*piVar8 + 0x34);
        }
        (*pcVar9)();
        local_8 = 0xffffffff;
        if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_8c[0]);
        }
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < local_18);
  }
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_5c = 0xf;
  FUN_00409350("build_army_label",0x10);
  if (param_2 == '\0') {
    local_8 = 0x1b;
    piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x3c))(local_70);
    (**(code **)(*piVar8 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("build_navy_label",0x10);
    local_8 = 0x1c;
    piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x3c))(local_38);
    (**(code **)(*piVar8 + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  else {
    local_8 = 0x19;
    piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x3c))(local_70);
    (**(code **)(*piVar8 + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350("build_navy_label",0x10);
    local_8 = 0x1a;
    piVar8 = (int *)(**(code **)(*(int *)unaff_EDI[0x18] + 0x3c))(local_70);
    (**(code **)(*piVar8 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
  }
  local_8 = 0xffffffff;
  (**(code **)(*unaff_EDI + 4))();
  ExceptionList = local_10;
  return;
LAB_007336f3:
  param_1 = (int *)((int)param_1 + 1);
  if (local_18 <= (int)param_1) goto LAB_007338a8;
  goto LAB_00733614;
}

