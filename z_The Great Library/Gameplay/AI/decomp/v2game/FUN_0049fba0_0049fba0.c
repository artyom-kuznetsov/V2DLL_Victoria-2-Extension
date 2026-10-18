// FUN_0049fba0 @ 0049fba0 body=[[0049fba0, 0049fcec] [0049fcf0, 0049feb6]]


void FUN_0049fba0(int *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_154 [16];
  undefined4 uStack_144;
  undefined4 uStack_140;
  char *pcStack_13c;
  char local_128 [256];
  undefined **local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b517e6;
  local_10 = ExceptionList;
  pcStack_13c = (char *)param_1[0x871];
  uStack_140 = 0x49fbd0;
  ExceptionList = &local_10;
  FUN_00aaea59();
  pcStack_13c = (char *)0x49fbdc;
  iVar3 = (**(code **)(*param_1 + 0x24))();
  lVar1 = (ulonglong)(iVar3 + 1) * 4;
  pcStack_13c = (char *)(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  uStack_140 = 0x49fbf3;
  iVar3 = FUN_00aad56b();
  param_1[0x871] = iVar3;
  iVar9 = 0;
  pcStack_13c = (char *)0x49fc09;
  iVar3 = (**(code **)(*param_1 + 0x24))();
  if (0 < iVar3) {
    do {
      *(undefined4 *)(param_1[0x871] + iVar9 * 4) = 0;
      iVar9 = iVar9 + 1;
      pcStack_13c = (char *)0x49fc23;
      iVar3 = (**(code **)(*param_1 + 0x24))();
    } while (iVar9 < iVar3);
  }
  pcStack_13c = (char *)0x54;
  uStack_140 = 0x49fc2e;
  iVar3 = FUN_00aae9af();
  local_8 = 0;
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    local_20 = auStack_154;
    uStack_140 = 0xf;
    uStack_144 = 0;
    auStack_154[0] = 0;
    local_18 = iVar3;
    FUN_00409350(&DAT_00ded94d,0);
    piVar4 = (int *)FUN_009dae60(iVar3,param_1 + 0x84e,1,0);
  }
  local_28 = &PTR_FUN_00e3b9b8;
  local_8 = 3;
  local_18 = 0;
  pcStack_13c = (char *)0x49fc90;
  local_24 = piVar4;
  iVar3 = (**(code **)(*param_1 + 0x24))();
  if (0 < iVar3) {
    do {
      iVar3 = 0;
      local_128[0] = '\0';
      cVar2 = 'z';
      while (cVar2 != '\n') {
        pcStack_13c = (char *)0x49fcb0;
        cVar2 = (**(code **)(*piVar4 + 4))();
        if (((cVar2 == -1) || (cVar2 == ';')) || (cVar2 == '\n')) break;
        local_128[iVar3] = cVar2;
        iVar3 = iVar3 + 1;
      }
      pcStack_13c = local_128;
      local_128[iVar3] = '\0';
      uStack_140 = 0x49fcda;
      local_1c = FUN_00aaf0c5();
      iVar3 = 0;
      local_128[0] = '\0';
      cVar2 = 'z';
      while (cVar2 != '\n') {
        pcStack_13c = (char *)0x49fcfd;
        cVar2 = (**(code **)(*piVar4 + 4))();
        if (((cVar2 == -1) || (cVar2 == ';')) || (cVar2 == '\n')) break;
        local_128[iVar3] = cVar2;
        iVar3 = iVar3 + 1;
      }
      pcStack_13c = local_128;
      local_128[iVar3] = '\0';
      uStack_140 = 0x49fd27;
      local_20 = (undefined1 *)FUN_00aaf0c5();
      iVar3 = 0;
      local_128[0] = '\0';
      cVar2 = 'z';
      while (cVar2 != '\n') {
        pcStack_13c = (char *)0x49fd45;
        cVar2 = (**(code **)(*piVar4 + 4))();
        if (((cVar2 == -1) || (cVar2 == ';')) || (cVar2 == '\n')) break;
        local_128[iVar3] = cVar2;
        iVar3 = iVar3 + 1;
      }
      pcStack_13c = local_128;
      local_128[iVar3] = '\0';
      uStack_140 = 0x49fd6f;
      iVar3 = FUN_00aaf0c5();
      iVar9 = 0;
      local_128[0] = '\0';
      cVar2 = 'z';
      while (cVar2 != '\n') {
        pcStack_13c = (char *)0x49fd8d;
        cVar2 = (**(code **)(*piVar4 + 4))();
        if (((cVar2 == -1) || (cVar2 == ';')) || (cVar2 == '\n')) break;
        local_128[iVar9] = cVar2;
        iVar9 = iVar9 + 1;
      }
      pcStack_13c = local_128;
      local_128[iVar9] = '\0';
      uStack_140 = 0x49fdb7;
      iVar9 = FUN_00aaf0c5();
      if (-1 < local_1c) {
        pcStack_13c = (char *)0x49fdd0;
        iVar5 = (**(code **)(*param_1 + 0x24))();
        if (local_1c < iVar5) {
          *(int *)(param_1[0x871] + local_1c * 4) = ((int)local_20 * 0x100 + iVar3) * 0x100 + iVar9;
          uVar7 = (uint)(local_20 + iVar9 + iVar3) & 0x800001ff;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffe00) + 1;
          }
          piVar8 = param_1 + (uVar7 + 6) * 4;
          pcStack_13c = (char *)0x10;
          iVar3 = piVar8[1];
          uStack_140 = 0x49fe18;
          piVar6 = (int *)FUN_00aae9af();
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            *piVar6 = local_1c;
            piVar6[1] = iVar3;
            piVar6[2] = 0;
            *(undefined1 *)(piVar6 + 3) = 0;
          }
          iVar9 = piVar8[2];
          piVar8[1] = (int)piVar6;
          piVar8[2] = iVar9 + 1;
          if (iVar9 == 0) {
            *piVar8 = (int)piVar6;
          }
          else {
            *(int **)(iVar3 + 8) = piVar6;
          }
        }
      }
      iVar3 = 1;
      do {
        pcStack_13c = (char *)0x49fe5b;
        cVar2 = (**(code **)(*piVar4 + 4))();
        while (cVar2 != '\n') {
          if (cVar2 == -1) goto LAB_0049fe76;
          pcStack_13c = (char *)0x49fe6d;
          cVar2 = (**(code **)(*piVar4 + 4))();
        }
        iVar3 = iVar3 + -1;
      } while (0 < iVar3);
LAB_0049fe76:
      iVar9 = local_18 + 1;
      pcStack_13c = (char *)0x49fe87;
      local_18 = iVar9;
      iVar3 = (**(code **)(*param_1 + 0x24))();
    } while (iVar9 < iVar3);
  }
  local_8 = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    pcStack_13c = (char *)0x1;
    uStack_140 = 0x49fea4;
    (**(code **)*piVar4)();
  }
  ExceptionList = local_10;
  return;
}

