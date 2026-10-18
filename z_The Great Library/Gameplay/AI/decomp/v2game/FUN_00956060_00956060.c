// FUN_00956060 @ 00956060 body=[[00956060, 009568e6] [009568ea, 00956947]]


/* WARNING: Removing unreachable block (ram,0x009568dd) */

void FUN_00956060(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int iVar8;
  int unaff_ESI;
  char acStack_120 [4];
  undefined4 local_11c;
  char local_118 [252];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  pvStack_14 = ExceptionList;
  if (*(int *)(in_ECX + 8) == 0x2e) {
    uVar1 = *(undefined4 *)(in_ECX + 0xc);
    ExceptionList = &pvStack_14;
    FUN_009a0940(param_1);
    local_11c = 0x14;
    _sprintf(local_118,"%u",uVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  else {
    ExceptionList = &pvStack_14;
    FUN_009a0940(param_1);
    FUN_0099f020(in_ECX + 8);
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x58);
  FUN_009a0940(param_1);
  local_11c = 0xc;
  _sprintf(local_118,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x18))();
  if ((cVar3 != '\0') && (cVar3 = (**(code **)(**(int **)(in_ECX + 0x70) + 0x18))(), cVar3 != '\0'))
  {
    FUN_005e6550();
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_11c = 399;
  }
  else {
    local_11c = 0xc;
  }
  _sprintf(local_118,"%lld",*(undefined4 *)(in_ECX + 0x180),*(undefined4 *)(in_ECX + 0x184));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x74) + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x9c) + 4))(param_1);
  if (*(int *)(in_ECX + 0x118) != 0 || *(int *)(in_ECX + 0x11c) != 0) {
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  if (*(int *)(in_ECX + 0x120) != 0 || *(int *)(in_ECX + 0x124) != 0) {
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x128),*(undefined4 *)(in_ECX + 300));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if ((-1 < *(int *)(in_ECX + 0x254)) &&
     ((0 < *(int *)(in_ECX + 0x254) || (*(int *)(in_ECX + 0x250) != 0)))) {
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x1d4) + 0xb0);
    if (((iVar4 != 0) && (DAT_01258734 != 0)) && (iVar4 != DAT_01258734 + 0x10)) {
      FUN_009a0940(param_1);
      FUN_0099f770(param_1,0);
    }
    piVar7 = *(int **)(in_ECX + 0x1d4);
    iVar8 = 1;
    iVar4 = piVar7[0x13] - piVar7[0x12] >> 3;
    if (1 < iVar4) {
      piVar2 = (int *)piVar7[0x12];
      do {
        if (piVar2[2] != 0 || piVar2[3] != 0) {
          FUN_009a0940(param_1);
          (**(code **)(*piVar7 + 4))(param_1);
          break;
        }
        iVar8 = iVar8 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar8 < iVar4);
    }
    iVar4 = *(int *)(in_ECX + 0x1d4);
    iVar6 = 1;
    iVar8 = *(int *)(iVar4 + 0xa4) - *(int *)(iVar4 + 0xa0) >> 3;
    if (1 < iVar8) {
      piVar7 = *(int **)(iVar4 + 0xa0);
      do {
        if (piVar7[2] != 0 || piVar7[3] != 0) {
          FUN_009a0940(param_1);
          (**(code **)(*(int *)(iVar4 + 0x58) + 4))(param_1);
          break;
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar6 < iVar8);
    }
    FUN_0099f310();
    FUN_0099f310();
    FUN_0099f310();
    FUN_0099f310();
    FUN_0099f310();
    FUN_0099f310();
    FUN_0099f310();
    FUN_0099f310();
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  if (*(int *)(in_ECX + 0x150) != 0 || *(int *)(in_ECX + 0x154) != 0) {
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  if (*(int *)(in_ECX + 0x1b0) != 0 || *(int *)(in_ECX + 0x1b4) != 0) {
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  iVar4 = *(int *)(in_ECX + 400);
  if (iVar4 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  iVar4 = *(int *)(in_ECX + 0x194);
  if (iVar4 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  iVar4 = *(int *)(in_ECX + 0x19c);
  if (iVar4 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  iVar4 = *(int *)(in_ECX + 0x198);
  if (iVar4 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  iVar4 = *(int *)(in_ECX + 0x1a0);
  if (iVar4 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  iVar4 = *(int *)(in_ECX + 0x1a4);
  if (iVar4 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  iVar4 = *(int *)(in_ECX + 0x1a8);
  if (iVar4 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if ((*(int *)(in_ECX + 0x130) != 0x8000) || (*(int *)(in_ECX + 0x134) != 0)) {
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  if ((*(int *)(in_ECX + 0x138) != 0x8000) || (*(int *)(in_ECX + 0x13c) != 0)) {
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  if (*(int *)(in_ECX + 0x140) != 0 || *(int *)(in_ECX + 0x144) != 0) {
    FUN_0099f310();
    in_ECX = unaff_ESI;
  }
  iVar4 = FUN_00967f50();
  if (iVar4 != 0) {
    iVar4 = DAT_01258a94;
    if (*(uint *)(in_ECX + 0x224) < 0x1269) {
      iVar4 = DAT_01258a98;
    }
    if (iVar4 != 0) {
      FUN_009c1d40();
    }
    FUN_009a0940(param_1);
    FUN_0099f020(&stack0xfffffeb8);
  }
  iVar4 = *(int *)(in_ECX + 0x26c);
  if (0 < iVar4) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  uVar1 = *(undefined4 *)(in_ECX + 600);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(int *)(in_ECX + 0x274) != 0) {
    piVar7 = *(int **)(*(int *)(in_ECX + 0x274) + 0xc);
    if ((piVar7 == (int *)0x0) || (cVar3 = (**(code **)(*piVar7 + 0x34))(), cVar3 == '\0')) {
      iVar4 = *(int *)(in_ECX + 0x274);
      if (*(int *)(iVar4 + 0x14) != 0) {
        pcVar5 = (char *)(iVar4 + 0x10);
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        FUN_00409350((char *)(iVar4 + 0x10),(int)pcVar5 - (iVar4 + 0x11));
        pvStack_14 = (void *)0x0;
        FUN_009a0940(param_1);
        FUN_0099f770(param_1,0);
        pvStack_14 = (void *)0xffffffff;
      }
    }
    else {
      FUN_009a0940(param_1);
      FUN_0099f770(param_1,0);
    }
  }
  iVar4 = 0;
  piVar7 = (int *)(in_ECX + 0x158);
  do {
    if (*piVar7 != 0) {
      FUN_00967fa0(param_1,(int *)(in_ECX + 0x158));
      ExceptionList = pvStack_1c;
      return;
    }
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar4 < 8);
  ExceptionList = pvStack_1c;
  return;
}

