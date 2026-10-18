// FUN_0095f3d0 @ 0095f3d0 body=[[0095f3d0, 0095f4bc] [0095f4c0, 0095f5e0] [0095f5e4, 0095f6d2] [0095f6d6, 0095f775]]


int * FUN_0095f3d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba014c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_01258a10 == (int *)0x0) {
    ExceptionList = &local_10;
    piVar4 = (int *)FUN_00aae9af(0x278);
    local_8 = 0;
    if (piVar4 == (int *)0x0) {
      DAT_01258a10 = (int *)0x0;
    }
    else {
      FUN_00954a40(piVar4);
      *piVar4 = (int)CNullPop::vftable;
      DAT_01258a10 = piVar4;
    }
  }
  local_14 = DAT_01258a10;
  local_8 = 0xffffffff;
  if (DAT_0131bb34 == 0) {
    iVar5 = FUN_00aae9af(0x188);
    local_8 = 1;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar6);
  }
  iVar5 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1[0x19] + 300) * 4) + 0xe64)
  ;
  iVar8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  if (0 < iVar8) {
    puVar9 = *(undefined4 **)(param_1[0x19] + 0x194);
    iVar7 = iVar8;
    do {
      for (piVar4 = (int *)*puVar9; piVar2 = local_14, piVar4 != (int *)0x0;
          piVar4 = (int *)piVar4[0x9f]) {
        iVar1 = piVar4[0x1a];
        if ((((*(int *)(iVar1 + 0x30) == -1) || (piVar4[0x16] < *(int *)(iVar1 + 0x30))) &&
            (iVar1 == param_1[0x1a])) &&
           (((piVar4 != param_1 && (*(char *)(iVar1 + 0x3d9) == '\0')) &&
            (piVar2 = piVar4, piVar4[0x1b] == iVar5)))) break;
      }
      local_14 = piVar2;
      puVar9 = puVar9 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  cVar3 = (**(code **)(*local_14 + 0x20))();
  if ((cVar3 == '\0') && (0 < iVar8)) {
    puVar9 = *(undefined4 **)(param_1[0x19] + 0x194);
    do {
      for (piVar4 = (int *)*puVar9; piVar2 = local_14, piVar4 != (int *)0x0;
          piVar4 = (int *)piVar4[0x9f]) {
        iVar7 = piVar4[0x1a];
        if (((((*(int *)(iVar7 + 0x30) == -1) || (piVar4[0x16] < *(int *)(iVar7 + 0x30))) &&
             (iVar7 == param_1[0x1a])) &&
            ((piVar4 != param_1 && (*(char *)(iVar7 + 0x3d9) == '\0')))) &&
           (piVar2 = piVar4, (char)piVar4[0x13] != '\0')) break;
      }
      local_14 = piVar2;
      puVar9 = puVar9 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  cVar3 = (**(code **)(*local_14 + 0x20))();
  if (cVar3 == '\0') {
    if (DAT_0131bb34 == 0) {
      iVar8 = FUN_00aae9af(0x188);
      local_8 = 2;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_0041a160();
      }
      iVar7 = DAT_0131bb34;
      local_8 = 3;
      if ((iVar8 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar7);
      }
      local_8 = 0xffffffff;
      DAT_0131bb34 = iVar8;
    }
    iVar8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < iVar8) {
      puVar9 = *(undefined4 **)(param_1[0x19] + 0x194);
      do {
        for (piVar4 = (int *)*puVar9; piVar2 = local_14, piVar4 != (int *)0x0;
            piVar4 = (int *)piVar4[0x9f]) {
          iVar7 = piVar4[0x1a];
          if ((((*(int *)(iVar7 + 0x30) == -1) || (piVar4[0x16] < *(int *)(iVar7 + 0x30))) &&
              (*(int *)(iVar7 + 0x3c) == *(int *)(param_1[0x1a] + 0x3c))) &&
             (((piVar4 != param_1 && (*(char *)(iVar7 + 0x3d9) == '\0')) &&
              (piVar2 = piVar4, piVar4[0x1b] == iVar5)))) break;
        }
        local_14 = piVar2;
        puVar9 = puVar9 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  cVar3 = (**(code **)(*local_14 + 0x20))();
  if (cVar3 == '\0') {
    iVar5 = DAT_0131bb34;
    if (DAT_0131bb34 == 0) {
      iVar5 = FUN_00aae9af(0x188);
      local_8 = 4;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0041a160();
      }
      iVar8 = DAT_0131bb34;
      local_8 = 5;
      if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar8);
      }
    }
    DAT_0131bb34 = iVar5;
    iVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < iVar5) {
      puVar9 = *(undefined4 **)(param_1[0x19] + 0x194);
      do {
        for (piVar4 = (int *)*puVar9; piVar2 = local_14, piVar4 != (int *)0x0;
            piVar4 = (int *)piVar4[0x9f]) {
          iVar8 = piVar4[0x1a];
          if (((((*(int *)(iVar8 + 0x30) == -1) || (piVar4[0x16] < *(int *)(iVar8 + 0x30))) &&
               (*(int *)(iVar8 + 0x3c) == *(int *)(param_1[0x1a] + 0x3c))) &&
              ((piVar4 != param_1 && (*(char *)(iVar8 + 0x3d9) == '\0')))) &&
             (piVar2 = piVar4, (char)piVar4[0x13] != '\0')) break;
        }
        local_14 = piVar2;
        puVar9 = puVar9 + 4;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          ExceptionList = local_10;
          return local_14;
        }
      } while( true );
    }
  }
  ExceptionList = local_10;
  return local_14;
}

