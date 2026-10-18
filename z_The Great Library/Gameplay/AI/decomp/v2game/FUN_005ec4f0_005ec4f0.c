// FUN_005ec4f0 @ 005ec4f0 body=[[005ec4f0, 005ed116]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ec4f0(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_114 [66];
  int local_c;
  int *local_8;
  
  piVar3 = param_1;
switchD_005ec583_caseD_334:
  while( true ) {
    while( true ) {
      piVar6 = *(int **)(param_2 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar9 = local_114;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      }
      if ((local_114[0] == 4) || (local_114[0] == 0x13)) {
        return;
      }
      FUN_009a1440(param_2);
      iVar5 = *(int *)(param_2 + 0x20);
      if (iVar5 < 0x8a5) break;
      if (iVar5 == 0x8e0) goto LAB_005ecfb4;
      if (iVar5 == 0x8e5) {
        iVar5 = FUN_00aae9af(0x30);
        if (iVar5 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_0092cb70();
        }
        (**(code **)(*piVar6 + 0xc))(param_2);
        puVar7 = (undefined4 *)FUN_00aae9af(0x14);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          _DAT_012588d0 = _DAT_012588d0 + 1;
          *puVar7 = CHistoryEntry::vftable;
          puVar7[1] = 0x18d;
          puVar7[2] = 43800000;
          puVar7[2] = DAT_01259abc;
          *(undefined1 *)(puVar7 + 3) = 0;
          *puVar7 = CGunboatChange::vftable;
          puVar7[4] = 0;
        }
        puVar7[4] = piVar6;
        iVar5 = piVar6[6];
        cVar4 = (**(code **)(*piVar3 + 0x20))();
        if (cVar4 == '\0') {
          piVar9 = (int *)piVar3[3];
          while (piVar9 != (int *)0x0) {
            iVar1 = *piVar9;
            piVar9 = (int *)piVar9[2];
            *(int *)(iVar1 + 8) = iVar5;
          }
        }
        piVar3[2] = iVar5;
        puVar7[2] = piVar6[6];
        (**(code **)(*piVar3 + 0x18))(puVar7);
        if (1 < (int)((double)((piVar6[7] + -43800000) / 0x18) / 365.0)) {
          param_1 = (int *)FUN_00aae9af(0x14);
          if (param_1 == (undefined4 *)0x0) goto LAB_005ed0dd;
          _DAT_012588d0 = _DAT_012588d0 + 1;
          *param_1 = (int)CHistoryEntry::vftable;
          param_1[1] = 0x18d;
          param_1[2] = 43800000;
          param_1[2] = DAT_01259abc;
          *(undefined1 *)(param_1 + 3) = 1;
          *param_1 = (int)CGunboatChange::vftable;
          param_1[4] = 0;
          goto LAB_005ed0e0;
        }
      }
      else if (iVar5 == 0x93a) {
        piVar9 = (int *)FUN_00aae9af(0x24);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          FUN_0057fb40();
          *piVar9 = (int)CSubstate::vftable;
        }
        local_8 = piVar9;
        (**(code **)(*piVar9 + 0xc))(param_2);
        puVar7 = (undefined4 *)FUN_00aae9af(0x14);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          _DAT_012588d0 = _DAT_012588d0 + 1;
          *puVar7 = CHistoryEntry::vftable;
          puVar7[1] = 0x18d;
          puVar7[2] = 43800000;
          puVar7[2] = DAT_01259abc;
          *(undefined1 *)(puVar7 + 3) = 0;
          *puVar7 = CSubstateChange::vftable;
          puVar7[4] = 0;
        }
        puVar7[4] = piVar9;
        iVar5 = piVar9[6];
        cVar4 = (**(code **)(*piVar3 + 0x20))();
        if (cVar4 == '\0') {
          piVar6 = (int *)piVar3[3];
          while (piVar6 != (int *)0x0) {
            iVar1 = *piVar6;
            piVar6 = (int *)piVar6[2];
            *(int *)(iVar1 + 8) = iVar5;
          }
        }
        piVar3[2] = iVar5;
        puVar7[2] = piVar9[6];
        (**(code **)(*piVar3 + 0x18))(puVar7);
        if (1 < (int)((double)((piVar9[7] + -43800000) / 0x18) / 365.0)) {
          param_1 = (int *)FUN_00aae9af(0x14);
          if (param_1 == (undefined4 *)0x0) {
            param_1 = (undefined4 *)0x0;
          }
          else {
            _DAT_012588d0 = _DAT_012588d0 + 1;
            *param_1 = (int)CHistoryEntry::vftable;
            param_1[1] = 0x18d;
            param_1[2] = 43800000;
            param_1[2] = DAT_01259abc;
            *(undefined1 *)(param_1 + 3) = 1;
            *param_1 = (int)CSubstateChange::vftable;
            param_1[4] = 0;
          }
          param_1[4] = (int)local_8;
          param_1[2] = local_8[7];
          local_c = local_8[7];
          FUN_005edc10();
          (**(code **)(*piVar3 + 0x18))(param_1);
          piVar9 = local_8;
        }
        iVar5 = FUN_00aae9af(0x24);
        if (iVar5 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_005163c0();
        }
        (**(code **)(*piVar6 + 0x20))(piVar9[2],piVar9[3]);
        (**(code **)(*piVar6 + 0x24))(piVar9[4],piVar9[5]);
        piVar6[6] = piVar9[6];
        piVar6[7] = piVar9[7];
        puVar7 = (undefined4 *)FUN_00aae9af(0x14);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          _DAT_012588d0 = _DAT_012588d0 + 1;
          *puVar7 = CHistoryEntry::vftable;
          puVar7[1] = 0x18d;
          puVar7[2] = 43800000;
          puVar7[2] = DAT_01259abc;
          *(undefined1 *)(puVar7 + 3) = 0;
          *puVar7 = CAllianceChange::vftable;
          puVar7[4] = 0;
        }
        puVar7[4] = piVar6;
        iVar5 = piVar6[6];
        cVar4 = (**(code **)(*piVar3 + 0x20))();
        if (cVar4 == '\0') {
          piVar9 = (int *)piVar3[3];
          while (piVar9 != (int *)0x0) {
            iVar1 = *piVar9;
            piVar9 = (int *)piVar9[2];
            *(int *)(iVar1 + 8) = iVar5;
          }
        }
        piVar3[2] = iVar5;
        puVar7[2] = piVar6[6];
        (**(code **)(*piVar3 + 0x18))(puVar7);
        if (1 < (int)((double)((piVar6[7] + -43800000) / 0x18) / 365.0)) {
          param_1 = (int *)FUN_00aae9af(0x14);
          if (param_1 != (undefined4 *)0x0) {
            _DAT_012588d0 = _DAT_012588d0 + 1;
            *param_1 = (int)CHistoryEntry::vftable;
            param_1[1] = 0x18d;
            param_1[2] = 43800000;
            param_1[2] = DAT_01259abc;
            *(undefined1 *)(param_1 + 3) = 1;
            *param_1 = (int)CAllianceChange::vftable;
            param_1[4] = 0;
            goto LAB_005ed0e0;
          }
          goto LAB_005ed0dd;
        }
      }
    }
    if (iVar5 != 0x8a4) break;
    iVar5 = FUN_00aae9af(0x24);
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_0092cdb0();
    }
    (**(code **)(*piVar6 + 0xc))(param_2);
    puVar7 = (undefined4 *)FUN_00aae9af(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      _DAT_012588d0 = _DAT_012588d0 + 1;
      *puVar7 = CHistoryEntry::vftable;
      puVar7[1] = 0x18d;
      puVar7[2] = 43800000;
      puVar7[2] = DAT_01259abc;
      *(undefined1 *)(puVar7 + 3) = 0;
      *puVar7 = CDisarmamentChange::vftable;
      puVar7[4] = 0;
    }
    puVar7[4] = piVar6;
    iVar5 = piVar6[6];
    cVar4 = (**(code **)(*piVar3 + 0x20))();
    if (cVar4 == '\0') {
      piVar9 = (int *)piVar3[3];
      while (piVar9 != (int *)0x0) {
        iVar1 = *piVar9;
        piVar9 = (int *)piVar9[2];
        *(int *)(iVar1 + 8) = iVar5;
      }
    }
    piVar3[2] = iVar5;
    puVar7[2] = piVar6[6];
    (**(code **)(*piVar3 + 0x18))(puVar7);
    if (1 < (int)((double)((piVar6[7] + -43800000) / 0x18) / 365.0)) {
      puVar8 = (undefined4 *)FUN_00aae9af(0x14);
      puVar7 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        _DAT_012588d0 = _DAT_012588d0 + 1;
        *puVar8 = CHistoryEntry::vftable;
        puVar8[1] = 0x18d;
        puVar8[2] = 43800000;
        puVar8[2] = DAT_01259abc;
        puVar8[4] = 0;
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = CDisarmamentChange::vftable;
        puVar7 = puVar8;
      }
      puVar7[4] = piVar6;
      puVar7[2] = piVar6[7];
      iVar5 = piVar6[7];
      cVar4 = (**(code **)(*piVar3 + 0x20))();
      if (cVar4 == '\0') {
        piVar6 = (int *)piVar3[3];
        while (piVar6 != (int *)0x0) {
          iVar1 = *piVar6;
          piVar6 = (int *)piVar6[2];
          *(int *)(iVar1 + 8) = iVar5;
        }
      }
      pcVar2 = *(code **)(*piVar3 + 0x18);
      piVar3[2] = iVar5;
      (*pcVar2)(puVar7);
    }
  }
  switch(iVar5) {
  case 0x332:
    iVar5 = FUN_00aae9af(0x24);
    if (iVar5 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)FUN_005163c0();
    }
    (**(code **)(*param_1 + 0xc))(param_2);
    iVar5 = FUN_00aae9af(0x14);
    if (iVar5 == 0) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_005ed5b0();
    }
    local_8[4] = (int)param_1;
    local_c = param_1[6];
    FUN_005edc10();
    local_8[2] = param_1[6];
    (**(code **)(*piVar3 + 0x18))(local_8);
    if ((int)((double)((param_1[7] + -43800000) / 0x18) / 365.0) < 2)
    goto switchD_005ec583_caseD_334;
    iVar5 = FUN_00aae9af(0x14);
    if (iVar5 == 0) {
LAB_005ec874:
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_005ed5b0();
    }
    break;
  case 0x333:
    iVar5 = FUN_00aae9af(0x28);
    if (iVar5 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)FUN_0092c990();
    }
    (**(code **)(*param_1 + 0xc))(param_2);
    iVar5 = FUN_00aae9af(0x14);
    if (iVar5 == 0) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_005ed720();
    }
    local_8[4] = (int)param_1;
    local_c = param_1[6];
    FUN_005edc10();
    local_8[2] = param_1[6];
    (**(code **)(*piVar3 + 0x18))(local_8);
    if ((int)((double)((param_1[7] + -43800000) / 0x18) / 365.0) < 2)
    goto switchD_005ec583_caseD_334;
    iVar5 = FUN_00aae9af(0x14);
    if (iVar5 == 0) goto LAB_005ec874;
    local_8 = (int *)FUN_005ed720();
    break;
  default:
    goto switchD_005ec583_caseD_334;
  case 0x336:
    param_1 = (int *)FUN_00aae9af(0x24);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      FUN_0057fb40();
      *param_1 = (int)CVassal::vftable;
    }
    (**(code **)(*param_1 + 0xc))(param_2);
    iVar5 = FUN_00aae9af(0x14);
    if (iVar5 == 0) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_005ed640();
    }
    *(int **)((int)local_8 + 0x10) = param_1;
    local_c = param_1[6];
    FUN_005edc10();
    *(int *)((int)local_8 + 8) = param_1[6];
    (**(code **)(*piVar3 + 0x18))(local_8);
    if (1 < (int)((double)((param_1[7] + -43800000) / 0x18) / 365.0)) {
      iVar5 = FUN_00aae9af(0x14);
      if (iVar5 == 0) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = (int *)FUN_005ed640();
      }
      *(int **)((int)local_8 + 0x10) = param_1;
      *(int *)((int)local_8 + 8) = param_1[7];
      local_c = param_1[7];
      FUN_005edc10();
      (**(code **)(*piVar3 + 0x18))(local_8);
    }
    iVar5 = FUN_00aae9af(0x24);
    if (iVar5 == 0) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_005163c0();
    }
    piVar6 = local_8;
    (**(code **)(*local_8 + 0x20))(param_1[2],param_1[3]);
    (**(code **)(*piVar6 + 0x24))(param_1[4],param_1[5]);
    piVar6[6] = param_1[6];
    piVar6[7] = param_1[7];
    iVar5 = FUN_00aae9af(0x14);
    if (iVar5 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)FUN_005ed5b0();
    }
    *(int **)((int)param_1 + 0x10) = local_8;
    local_c = local_8[6];
    FUN_005edc10();
    piVar6 = local_8;
    *(int *)((int)param_1 + 8) = local_8[6];
    (**(code **)(*piVar3 + 0x18))(param_1);
    if (1 < (int)((double)((piVar6[7] + -43800000) / 0x18) / 365.0)) {
      iVar5 = FUN_00aae9af(0x14);
      if (iVar5 == 0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)FUN_005ed5b0();
      }
      *(int **)((int)param_1 + 0x10) = local_8;
      *(int *)((int)param_1 + 8) = local_8[7];
      local_c = local_8[7];
      FUN_005edc10();
      (**(code **)(*piVar3 + 0x18))(param_1);
    }
    goto switchD_005ec583_caseD_334;
  case 0x343:
    iVar5 = FUN_00aae9af(0x28);
    if (iVar5 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)FUN_0092d0a0();
    }
    (**(code **)(*param_1 + 0xc))(param_2);
    iVar5 = FUN_00aae9af(0x14);
    if (iVar5 == 0) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_005ed7b0();
    }
    local_8[4] = (int)param_1;
    local_c = param_1[6];
    FUN_005edc10();
    local_8[2] = param_1[6];
    (**(code **)(*piVar3 + 0x18))(local_8);
    if ((int)((double)((param_1[7] + -43800000) / 0x18) / 365.0) < 2)
    goto switchD_005ec583_caseD_334;
    iVar5 = FUN_00aae9af(0x14);
    if (iVar5 == 0) goto LAB_005ec874;
    local_8 = (int *)FUN_005ed7b0();
  }
  local_8[4] = (int)param_1;
  local_8[2] = param_1[7];
  FUN_005edc10();
  (**(code **)(*piVar3 + 0x18))(local_8);
  goto switchD_005ec583_caseD_334;
LAB_005ecfb4:
  iVar5 = FUN_00aae9af(0x24);
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0092ca00();
  }
  (**(code **)(*piVar6 + 0xc))(param_2);
  puVar7 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    _DAT_012588d0 = _DAT_012588d0 + 1;
    *puVar7 = CHistoryEntry::vftable;
    puVar7[1] = 0x18d;
    puVar7[2] = 43800000;
    puVar7[2] = DAT_01259abc;
    *(undefined1 *)(puVar7 + 3) = 0;
    *puVar7 = CPayingReparationChange::vftable;
    puVar7[4] = 0;
  }
  puVar7[4] = piVar6;
  iVar5 = piVar6[6];
  cVar4 = (**(code **)(*piVar3 + 0x20))();
  if (cVar4 == '\0') {
    piVar9 = (int *)piVar3[3];
    while (piVar9 != (int *)0x0) {
      iVar1 = *piVar9;
      piVar9 = (int *)piVar9[2];
      *(int *)(iVar1 + 8) = iVar5;
    }
  }
  piVar3[2] = iVar5;
  puVar7[2] = piVar6[6];
  (**(code **)(*piVar3 + 0x18))(puVar7);
  if (1 < (int)((double)((piVar6[7] + -43800000) / 0x18) / 365.0)) {
    param_1 = (int *)FUN_00aae9af(0x14);
    if (param_1 == (undefined4 *)0x0) {
LAB_005ed0dd:
      param_1 = (undefined4 *)0x0;
    }
    else {
      _DAT_012588d0 = _DAT_012588d0 + 1;
      *param_1 = (int)CHistoryEntry::vftable;
      param_1[1] = 0x18d;
      param_1[2] = 43800000;
      param_1[2] = DAT_01259abc;
      *(undefined1 *)(param_1 + 3) = 1;
      *param_1 = (int)CPayingReparationChange::vftable;
      param_1[4] = 0;
    }
LAB_005ed0e0:
    param_1[4] = (int)piVar6;
    param_1[2] = piVar6[7];
    local_c = piVar6[7];
    FUN_005edc10();
    (**(code **)(*piVar3 + 0x18))(param_1);
  }
  goto switchD_005ec583_caseD_334;
}

