// FUN_004b52e0 @ 004b52e0 body=[[004b52e0, 004b5727]]


void FUN_004b52e0(char *param_1,int *param_2,char param_3,char param_4)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int in_ECX;
  int *local_50;
  undefined4 *local_4c;
  int local_38;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  pvVar4 = ExceptionList;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba200b;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 4) == *(int *)(in_ECX + 300)) {
    return;
  }
  ExceptionList = &local_14;
  if (DAT_01267970 != DAT_01267974) {
    ExceptionList = &local_14;
    *(undefined1 *)(DAT_01267970 + *(int *)(param_1 + 4)) = 1;
  }
  if (DAT_01267970 != DAT_01267974) {
    *(undefined1 *)(*(int *)(in_ECX + 300) + DAT_01267970) = 1;
  }
  if (((*param_1 == 'R') && (param_1[1] == 'E')) && (param_1[2] == 'B')) {
    ExceptionList = pvVar4;
    return;
  }
  if ((param_3 != '\0') && (*(int *)(param_1 + 4) != *(int *)(in_ECX + 300))) {
    local_4c = (undefined4 *)0x4b5378;
    cVar5 = FUN_004b64e0();
    if ((cVar5 == '\0') &&
       ((*(int *)(in_ECX + 0x188) != 0 && (*(int *)(*(int *)(in_ECX + 0x188) + 0x84) < 1)))) {
      local_20 = *(int **)(*(int *)(DAT_012586dc + 0x50) + 0x160);
      local_1c = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x164);
      if (DAT_0131bb34 == 0) {
        local_4c = (undefined4 *)0x188;
        local_50 = (int *)0x4b53cb;
        iVar6 = FUN_00aae9af();
        local_c = 2;
        if (iVar6 == 0) {
          local_4c = (undefined4 *)0x0;
        }
        else {
          local_4c = (undefined4 *)0x4b53e5;
          local_4c = (undefined4 *)FUN_0041a160();
        }
        local_c = 0xffffffff;
        local_50 = (int *)0x4b53f7;
        FUN_00423700();
      }
      local_2c = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
      if (0 < local_2c) {
        local_38 = 0;
        do {
          iVar6 = *(int *)(local_38 + *(int *)(in_ECX + 0x194));
joined_r0x004b5429:
          if (iVar6 != 0) {
            iVar9 = *(int *)(iVar6 + 0x27c);
            local_4c = (undefined4 *)0x4b544c;
            iVar7 = FUN_00967f50();
            if (iVar7 != 0) {
              local_4c = (undefined4 *)0x4b5455;
              FUN_00967f50();
              local_4c = (undefined4 *)0x4b545a;
              FUN_004e7db0();
            }
            local_28 = *(int ***)param_1;
            iVar7 = *(int *)(DAT_012587e4 + 4);
            iVar2 = *(int *)(iVar6 + 0x6c);
            iVar6 = iVar9;
            if ((*(int *)(*(int *)(iVar7 + *(int *)(param_1 + 4) * 4) + 0xe64) != iVar2) &&
               (local_28 = *(int ***)param_1,
               *(int *)(*(int *)(*(int *)(iVar7 + *(int *)(param_1 + 4) * 4) + 0xe64) + 0x50) !=
               *(int *)(iVar2 + 0x50))) {
              local_28 = *(int ***)param_1;
              for (piVar3 = *(int **)(*(int *)(iVar7 + *(int *)(param_1 + 4) * 4) + 0xe54);
                  piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
                if (*piVar3 == iVar2) goto joined_r0x004b5429;
              }
              local_28 = &local_50;
              local_50 = local_20;
              local_4c = (undefined4 *)local_1c;
              FUN_0095fbf0();
            }
            goto joined_r0x004b5429;
          }
          local_38 = local_38 + 0x10;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
    }
  }
  local_24 = *(int *)(in_ECX + 300);
  local_28 = *(int ***)(in_ECX + 0x128);
  if ((local_24 != 0) && (param_4 == '\0')) {
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_24 * 4);
    local_1c = iVar6 + 0x9d8;
    for (local_20 = *(int **)(iVar6 + 0x9d8);
        (local_20 != *(int **)(iVar6 + 0x9dc) && (*local_20 != *(int *)(in_ECX + 0x58)));
        local_20 = local_20 + 1) {
    }
    local_4c = (undefined4 *)0x4b5561;
    FUN_0068f020();
  }
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)param_1;
  iVar6 = *(int *)(param_1 + 4);
  *(int *)(in_ECX + 300) = iVar6;
  if ((iVar6 != 0) && (param_4 == '\0')) {
    local_20 = *(int **)param_1;
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 4) * 4);
    piVar3 = *(int **)(iVar6 + 0x9dc);
    piVar8 = *(int **)(iVar6 + 0x9d8);
    if (piVar8 != piVar3) {
      do {
        if (*piVar8 == *(int *)(in_ECX + 0x58)) break;
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar3);
      if (piVar8 != piVar3) goto LAB_004b55d6;
    }
    local_4c = (undefined4 *)0x4b55ce;
    FUN_004e9b90();
  }
LAB_004b55d6:
  iVar6 = local_24;
  if ((*(int *)(in_ECX + 0x134) == 0) && (*(int *)(param_1 + 4) != 0)) {
    local_4c = (undefined4 *)0x0;
    local_50 = param_2;
    FUN_004b5730(in_ECX,param_1);
  }
  if ((iVar6 != 0) &&
     (((((char)local_28 != 'R' || ((char)((uint)local_28 >> 8) != 'E')) || (local_28._2_1_ != 'B'))
      && (iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar6 * 4),
         0 < (int)(*(int *)(iVar9 + 0x9dc) - *(int *)(iVar9 + 0x9d8) & 0xfffffffcU))))) {
    local_4c = (undefined4 *)0x4b5630;
    FUN_0053f4b0();
    iVar6 = local_24;
  }
  if (((iVar6 != *(int *)(param_1 + 4)) && (*(int *)(in_ECX + 0x54) != 0)) &&
     ((*(int *)(param_1 + 4) == *(int *)(in_ECX + 0x134) || (iVar6 == *(int *)(in_ECX + 0x134))))) {
    local_4c = *(undefined4 **)(in_ECX + 0x58);
    local_50 = (int *)0x4b565e;
    FUN_00648040();
  }
  iVar9 = DAT_012588e8;
  if ((iVar6 != *(int *)(param_1 + 4)) && (*(int *)(in_ECX + 0x54) != 0)) {
    if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
      piVar3 = *(int **)(DAT_012588e8 + 0xcf4);
      local_50 = *(int **)(DAT_012586f4 + 8);
      local_4c = &local_28;
      local_4c = (undefined4 *)FUN_004692b0();
      local_50 = piVar3;
      FUN_00457b00();
    }
    iVar9 = DAT_012588e8;
    puVar1 = (uint *)(*(int *)(in_ECX + 0x54) + 0x74);
    *puVar1 = *puVar1 | 0x100;
    if ((*(int *)(iVar9 + 0xbc0) - *(int *)(iVar9 + 0xbbc) & 0xfffffffcU) == 0) {
      local_4c = (undefined4 *)0x4b56d6;
      FUN_004e9b90();
      iVar9 = DAT_012588e8;
    }
    else {
      **(undefined4 **)(iVar9 + 0xbbc) = 0xffffffff;
    }
  }
  if ((iVar9 != 0) && (*(int **)(iVar9 + 0xb24) != (int *)0x0)) {
    local_4c = (undefined4 *)0x4b56f6;
    (**(code **)(**(int **)(iVar9 + 0xb24) + 0x38))();
    local_50 = (int *)0x4b570a;
    FUN_00643b10();
  }
  ExceptionList = local_14;
  return;
}

