// FUN_00521560 @ 00521560 body=[[00521560, 005219ec] [005219f0, 00521b8d] [00521b91, 00521bba] [00521bbe, 00521c16] [00521c1a, 00521cf9] [00521d03, 00521d2c] [00521d30, 00521d57] [00521d5b, 00521d73]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00521560(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar11;
  undefined8 uVar12;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  int *local_4c;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb672c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != '\0') {
    ExceptionList = &local_10;
    FUN_00520e60();
  }
  if (DAT_0125ce80 == 0) {
    iVar5 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_004dada0();
    }
    FUN_004dc340(uVar6);
  }
  iVar8 = DAT_0125ce80;
  iVar11 = 0;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_8 = 1;
  FUN_004bf300(*(int *)(DAT_0125ce80 + 0x10) - *(int *)(DAT_0125ce80 + 0xc) >> 2);
  iVar5 = *(int *)(iVar8 + 0xc);
  puVar7 = local_2c;
  puVar10 = local_30;
  if (0 < (int)(*(int *)(iVar8 + 0x10) - iVar5 & 0xfffffffcU)) {
    do {
      puVar1 = (undefined4 *)(iVar5 + iVar11 * 4);
      if (*(char *)(*(int *)(iVar5 + iVar11 * 4) + 0xbe) != '\0') {
        if ((puVar1 < puVar7) && (puVar10 <= puVar1)) {
          iVar5 = (int)puVar1 - (int)puVar10;
          if (puVar7 == local_28) {
            FUN_00a513f0();
            puVar7 = local_2c;
            puVar10 = local_30;
          }
          if (puVar7 != (undefined4 *)0x0) {
            uVar6 = puVar10[iVar5 >> 2];
LAB_00521651:
            *puVar7 = uVar6;
          }
        }
        else {
          if (puVar7 == local_28) {
            FUN_00a513f0();
            puVar7 = local_2c;
            puVar10 = local_30;
          }
          if (puVar7 != (undefined4 *)0x0) {
            uVar6 = *puVar1;
            goto LAB_00521651;
          }
        }
        puVar7 = puVar7 + 1;
        local_2c = puVar7;
      }
      iVar5 = *(int *)(iVar8 + 0xc);
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(iVar8 + 0x10) - iVar5 >> 2);
  }
  local_4c = *(int **)(param_1 + 0x9d8);
  local_34 = DAT_012588e8;
  do {
    do {
      while( true ) {
        if ((local_4c < *(int **)(param_1 + 0x9d8)) || (*(int **)(param_1 + 0x9dc) <= local_4c)) {
          if (local_30 == (undefined4 *)0x0) {
            ExceptionList = local_10;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30);
        }
        iVar5 = *local_4c;
        local_4c = local_4c + 1;
        iVar5 = *(int *)(*(int *)(local_34 + 0xacc) + iVar5 * 4);
        local_20 = iVar5;
        if (((*(int *)(iVar5 + 0x164) == 0) || (**(int **)(iVar5 + 0x15c) == 0)) ||
           (cVar4 = (**(code **)(**(int **)(iVar5 + 0x188) + 0x24))(), cVar4 != '\0')) break;
        piVar9 = *(int **)(param_1 + 0x9d8);
        do {
          if ((piVar9 < *(int **)(param_1 + 0x9d8)) || (*(int **)(param_1 + 0x9dc) <= piVar9))
          goto LAB_00521766;
          iVar5 = *(int *)(*(int *)(local_34 + 0xacc) + *piVar9 * 4);
          piVar9 = piVar9 + 1;
          cVar4 = (**(code **)(**(int **)(iVar5 + 0x188) + 0x24))();
        } while (((cVar4 == '\0') || (iVar8 = FUN_004b8a80(), extraout_ECX != iVar8)) ||
                ((*(int *)(iVar5 + 400) < 1 && (0 < *(int *)(local_20 + 400)))));
        iVar5 = *(int *)(iVar5 + 0x188);
        if (iVar5 == 0) {
LAB_00521766:
          iVar5 = FUN_00aae9af(0x290);
          local_8._0_1_ = 2;
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004cdc60(iVar5,param_1 + 0x1c,1);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          iVar8 = *(int *)(param_1 + 0xe48);
          piVar9 = (int *)FUN_00aae9af(0x10);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            *piVar9 = iVar5;
            piVar9[1] = iVar8;
            piVar9[2] = 0;
            *(undefined1 *)(piVar9 + 3) = 0;
          }
          iVar11 = *(int *)(param_1 + 0xe4c);
          *(int **)(param_1 + 0xe48) = piVar9;
          *(int *)(param_1 + 0xe4c) = iVar11 + 1;
          if (iVar11 == 0) {
            *(int **)(param_1 + 0xe44) = piVar9;
          }
          else {
            *(int **)(iVar8 + 8) = piVar9;
          }
        }
        iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_20 + 0x58) * 4);
        if (*(int *)(iVar8 + 0x164) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined4 **)(iVar8 + 0x15c);
        }
        *(undefined4 *)(iVar5 + 0x250) = uVar6;
        FUN_004ceae0(iVar5);
        FUN_004d22a0(iVar5);
      }
      cVar4 = (**(code **)(**(int **)(iVar5 + 0x188) + 0x24))();
    } while ((cVar4 == '\0') ||
            (puVar7 = *(undefined4 **)(iVar5 + 0x188), local_40 = puVar7,
            puVar7[0x17] == *(int *)(param_1 + 0x20)));
    piVar9 = *(int **)(param_1 + 0x9d8);
    local_18 = 0;
    local_11 = '\0';
    do {
      if ((piVar9 < *(int **)(param_1 + 0x9d8)) || (*(int **)(param_1 + 0x9dc) <= piVar9))
      goto LAB_005218d0;
      iVar5 = *(int *)(*(int *)(local_34 + 0xacc) + *piVar9 * 4);
      if (*(int *)(iVar5 + 0x164) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(iVar5 + 0x15c);
      }
      uVar12 = FUN_004b8a80();
      piVar9 = (int *)((ulonglong)uVar12 >> 0x20);
    } while ((iVar5 != (int)uVar12) ||
            (iVar5 = *(int *)(extraout_ECX_00 + 0x188),
            *(int *)(iVar5 + 0x5c) != *(int *)(param_1 + 0x20)));
    local_18 = iVar5;
    if (*(int *)(iVar5 + 0x84) < 1) {
      local_11 = '\x01';
    }
LAB_005218d0:
    bVar3 = false;
    if (local_18 == 0) {
      local_38 = (undefined1 *)FUN_00aae9af(0x290);
      local_8._0_1_ = 3;
      if (local_38 == (undefined1 *)0x0) {
        local_1c = 0;
      }
      else {
        local_1c = FUN_004cdc60(local_38,param_1 + 0x1c,1);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar5 = *(int *)(param_1 + 0xe48);
      local_18 = local_1c;
      piVar9 = (int *)FUN_00aae9af(0x10);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        *piVar9 = local_1c;
        piVar9[1] = iVar5;
        piVar9[2] = 0;
        *(undefined1 *)(piVar9 + 3) = 0;
      }
      iVar8 = *(int *)(param_1 + 0xe4c);
      *(int **)(param_1 + 0xe48) = piVar9;
      *(int *)(param_1 + 0xe4c) = iVar8 + 1;
      if (iVar8 == 0) {
        *(int **)(param_1 + 0xe44) = piVar9;
      }
      else {
        *(int **)(iVar5 + 8) = piVar9;
      }
      local_3c = *(undefined4 *)(*(int *)(local_20 + 0x188) + 0x58);
      if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                             *(int *)(*(int *)(local_20 + 0x188) + 0x5c) * 4) + 0x12d0) == '\0') &&
         (*(char *)(param_1 + 0x12d0) != '\0')) {
        FUN_004d2260();
      }
      else if ((int)puVar7[0x21] < 1) {
        bVar3 = true;
      }
    }
    iVar5 = puVar7[0x1a];
    iVar8 = 0;
    local_1c = 0;
    local_38 = &stack0xffffff3c;
    if ((*(int *)(*(int *)(local_20 + 0x188) + 0x4c) - *(int *)(*(int *)(local_20 + 0x188) + 0x48) &
        0xfffffffcU) == 4) {
      while (iVar5 != 0) {
        iVar5 = puVar7[0x18];
        if ((puVar7[0x91] == 2) || (puVar7[0x91] == 3)) {
          iVar11 = puVar7[0x90];
          if (iVar11 == 0) {
            puVar7[0x91] = 4;
            puVar7[0x90] = 0;
          }
          else if (0 < iVar11) {
            puVar7[0x90] = iVar11 + -1;
          }
        }
        if (*(char *)(puVar7 + 0x1b) == '\0') {
          iVar11 = *(int *)(iVar5 + 0x220);
          iVar2 = *(int *)(iVar5 + 0x224);
          if (iVar11 != 0) {
            *(int *)(iVar11 + 0x224) = iVar2;
          }
          if (iVar2 != 0) {
            *(int *)(iVar2 + 0x220) = iVar11;
          }
          if (iVar5 == puVar7[0x18]) {
            puVar7[0x18] = iVar2;
          }
          if (iVar5 == puVar7[0x19]) {
            puVar7[0x19] = iVar11;
          }
          puVar7[0x1a] = puVar7[0x1a] + -1;
          *(undefined4 *)(iVar5 + 0x220) = 0;
          *(undefined4 *)(iVar5 + 0x224) = 0;
        }
        *(int *)(&stack0xffffff3c + iVar8 * 4) = iVar5;
        iVar8 = iVar8 + 1;
        iVar5 = puVar7[0x1a];
      }
      local_38 = &stack0xffffff3c;
      local_1c = iVar8;
      if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + puVar7[0x17] * 0x10) +
                  *(int *)(**(int **)(local_20 + 0x15c) + 0x6c) * 4) != 0) {
        local_38 = &stack0xffffff3c;
        FUN_0068dd70();
      }
    }
    iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_20 + 0x58) * 4);
    if (*(int *)(iVar5 + 0x164) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = **(undefined4 **)(iVar5 + 0x15c);
    }
    *(undefined4 *)(local_18 + 0x250) = uVar6;
    FUN_004ceae0(local_18);
    if (bVar3) {
      iVar8 = 0;
      FUN_008a8650(0);
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      FUN_00409350("on_state_conquest",0x11);
      local_8._0_1_ = 6;
      iVar5 = DAT_0131a584;
      if (DAT_0131a584 == 0) {
        iVar5 = FUN_00aae9af(0x1c);
        local_8._0_1_ = 7;
        if (iVar5 != 0) {
          iVar8 = FUN_008b0060();
        }
        iVar11 = DAT_0131a584;
        local_8._0_1_ = 6;
        iVar5 = iVar8;
        if ((iVar8 != DAT_0131a584) && (DAT_0131a584 != 0)) {
          FUN_008b2740(DAT_0131a584);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar11);
        }
      }
      DAT_0131a584 = iVar5;
      local_8._0_1_ = 6;
      FUN_008b2680(DAT_0131a584,local_68);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
    }
    if (local_11 != '\0') {
      FUN_004d2260();
    }
    FUN_004d22a0(local_18);
    iVar5 = 0;
    if (0 < local_1c) {
      do {
        iVar8 = *(int *)(local_38 + iVar5 * 4);
        cVar4 = FUN_0052ca30(local_18,0);
        if (cVar4 == '\0') {
          if (iVar8 != 0) {
            FUN_004f33c0(iVar8);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar8);
          }
        }
        else {
          FUN_004d0150();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_1c);
    }
    iVar5 = local_18;
    if ((local_1c != 0) &&
       (((*(int *)(local_18 + 0x244) == 0 || (*(int *)(local_18 + 0x244) == 3)) &&
        (cVar4 = FUN_004a50e0(), cVar4 == '\0')))) {
      *(undefined4 *)(iVar5 + 0x244) = 4;
      *(undefined4 *)(iVar5 + 0x238) = 0;
      *(undefined4 *)(iVar5 + 0x23c) = 0;
      *(undefined4 *)(iVar5 + 0x240) = 0;
    }
    if ((local_40[0x13] - local_40[0x12] & 0xfffffffc) == 0) {
      local_44 = local_40[0x16];
      iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_40[0x17] * 4);
      piVar9 = *(int **)(iVar5 + 0xe44);
      if (piVar9 == (int *)0x0) {
LAB_00521d03:
        (**(code **)*local_40)(1);
      }
      else {
        do {
          if ((undefined4 *)*piVar9 == local_40) {
            if (piVar9 == (int *)0x0) goto LAB_00521d03;
            if (*(char *)(iVar5 + 0xe50) == '\0') {
              iVar8 = piVar9[1];
              iVar11 = piVar9[2];
              if (iVar8 != 0) {
                *(int *)(iVar8 + 8) = iVar11;
              }
              if (iVar11 != 0) {
                *(int *)(iVar11 + 4) = iVar8;
              }
              if (piVar9 == *(int **)(iVar5 + 0xe44)) {
                *(int *)(iVar5 + 0xe44) = iVar11;
              }
              if (piVar9 == *(int **)(iVar5 + 0xe48)) {
                *(int *)(iVar5 + 0xe48) = iVar8;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar9);
            }
            *(undefined1 *)(piVar9 + 3) = 1;
            (**(code **)*local_40)(1);
            goto LAB_00521d15;
          }
          piVar9 = (int *)piVar9[2];
        } while (piVar9 != (int *)0x0);
        (**(code **)*local_40)(1);
      }
    }
    else {
      FUN_004d22a0(local_40);
    }
LAB_00521d15:
    iVar5 = local_18;
    iVar8 = 0;
    iVar11 = (int)local_2c - (int)local_30 >> 2;
    if (0 < iVar11) {
      do {
        FUN_00521d80(param_1,iVar5,local_30[iVar8]);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar11);
    }
  } while( true );
}

