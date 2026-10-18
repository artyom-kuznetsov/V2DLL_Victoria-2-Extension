// FUN_0073d6d0 @ 0073d6d0 body=[[0073d6d0, 0073d7b6] [0073d7c0, 0073d8d3]]


void FUN_0073d6d0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar8 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b50461;
  pvStack_14 = ExceptionList;
  piVar1 = *(int **)(DAT_012588e8 + 0xb24);
  ExceptionList = &pvStack_14;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &pvStack_14;
    iVar3 = FUN_00aae9af(0x3c);
    local_c = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004dada0();
    }
    local_c = 0xffffffff;
    FUN_004dc340(uVar4);
  }
  iVar3 = DAT_0125ce80;
  iVar5 = (**(code **)(*param_1 + 0x80))();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x1c) + iVar5 * 4);
  cVar2 = (**(code **)(*(int *)piVar1[7] + 0x30))();
  if ((cVar2 == '\0') || (*(char *)(iVar3 + 0xbe) != '\0')) {
    iVar8 = FUN_00aae9af(0x58);
    local_c = 2;
    if (iVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0057b560(iVar8,iVar3,*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x58),
                           *(undefined4 *)(DAT_012588e8 + 0xb5c),
                           *(undefined4 *)(DAT_012588e8 + 0xb60));
    }
    local_c = 0xffffffff;
    iVar8 = (**(code **)(*piVar1 + 0x44))();
    (**(code **)(**(int **)(iVar8 + 0x38) + 0x18))(uVar4);
  }
  else {
    iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 0x188);
    piVar9 = *(int **)(iVar5 + 0x48);
    while ((*(int **)(iVar5 + 0x48) <= piVar9 && (piVar9 < *(int **)(iVar5 + 0x4c)))) {
      iVar7 = *piVar9;
      piVar9 = piVar9 + 1;
      cVar2 = FUN_00511e70(iVar3,*(undefined4 *)(*(int *)(iVar8 + 0xacc) + iVar7 * 4));
      if (cVar2 != '\0') {
        iVar6 = FUN_00aae9af(0x58);
        local_c = 1;
        if (iVar6 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0057b560(iVar6,iVar3,iVar7,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                               *(undefined4 *)(DAT_012588e8 + 0xb60));
        }
        local_c = 0xffffffff;
        iVar7 = (**(code **)(*piVar1 + 0x44))();
        (**(code **)(**(int **)(iVar7 + 0x38) + 0x18))(uVar4);
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

