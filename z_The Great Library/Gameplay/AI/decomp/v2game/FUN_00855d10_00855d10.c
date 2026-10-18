// FUN_00855d10 @ 00855d10 body=[[00855d10, 00855ec7]]


undefined4 FUN_00855d10(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba3b96;
  local_10 = ExceptionList;
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  iVar9 = param_2[1] - *param_2 >> 2;
  local_18 = 0;
  ExceptionList = &local_10;
  if (0 < iVar9) {
    do {
      piVar1 = *(int **)(*param_2 + local_18 * 4);
      cVar3 = (**(code **)(*piVar1 + 0x34))();
      if (cVar3 != '\0') {
        iVar2 = piVar1[0x15];
        iVar7 = 0;
        iVar4 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 2;
        if (0 < iVar4) {
          piVar8 = *(int **)(iVar2 + 8);
          do {
            iVar7 = iVar7 + 1;
            if (piVar1 == (int *)*piVar8) {
              if ((iVar7 < iVar4) && (iVar2 = (*(int **)(iVar2 + 8))[iVar7], iVar2 != 0)) {
                if (param_3 == '\0') {
                  cVar3 = FUN_005262c0(*(undefined4 *)(iVar2 + 0x54));
                  if (cVar3 != '\0') {
                    iVar9 = FUN_00aae9af(0x4c);
                    local_8 = 1;
                    if (iVar9 == 0) {
                      uVar5 = 0;
                    }
                    else {
                      uVar5 = FUN_005910d0(iVar9,*(undefined4 *)(param_1 + 0x34),
                                           *(undefined4 *)(param_1 + 0x38),
                                           *(undefined4 *)(iVar2 + 0x54),iVar2);
                    }
                    local_8 = 0xffffffff;
                    iVar6 = (**(code **)(**(int **)(iVar6 + 0xcdc) + 0x44))();
                    (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar5);
                    ExceptionList = local_10;
                    return 1;
                  }
                }
                else {
                  cVar3 = FUN_00525d90(*(undefined4 *)(iVar2 + 0x54));
                  if (cVar3 != '\0') {
                    iVar9 = FUN_00aae9af(0x4c);
                    local_8 = 0;
                    if (iVar9 == 0) {
                      uVar5 = 0;
                    }
                    else {
                      uVar5 = FUN_00591be0(iVar9,*(undefined4 *)(param_1 + 0x34),
                                           *(undefined4 *)(param_1 + 0x38),
                                           *(undefined4 *)(iVar2 + 0x54),iVar2);
                    }
                    local_8 = 0xffffffff;
                    iVar6 = (**(code **)(**(int **)(iVar6 + 0xcdc) + 0x44))();
                    (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar5);
                    ExceptionList = local_10;
                    return 1;
                  }
                }
              }
              break;
            }
            piVar8 = piVar8 + 1;
          } while (iVar7 < iVar4);
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < iVar9);
  }
  ExceptionList = local_10;
  return 0;
}

