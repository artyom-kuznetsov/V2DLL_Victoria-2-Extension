// FUN_00883e90 @ 00883e90 body=[[00883e90, 00883f07] [00883f10, 00883f96] [00883f9a, 00883fd9] [00883fe0, 008841b2]]


void FUN_00883e90(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_ECX;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int local_74;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b42639;
  local_14 = ExceptionList;
  piVar8 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
  if (*(int *)(param_1 + 0xc) == 0) {
    ExceptionList = &local_14;
    if ((piVar8 == (int *)0x0) ||
       (ExceptionList = &local_14, cVar2 = (**(code **)(*piVar8 + 0x24))(), cVar2 == '\0')) {
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
        FUN_008a88d0();
        if (DAT_0131bb34 == 0) {
          iVar3 = FUN_00aae9af(0x188);
          local_c = 3;
          if (iVar3 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_0041a160();
          }
          FUN_00423700(uVar6);
        }
        local_74 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
        if (0 < local_74) {
          iVar3 = 0;
          do {
            iVar7 = *(int *)(iVar3 + *(int *)(iVar5 + 0x194));
            while (iVar7 != 0) {
              iVar7 = *(int *)(iVar7 + 0x27c);
              FUN_00883dd0(in_ECX);
            }
            iVar3 = iVar3 + 0x10;
            local_74 = local_74 + -1;
          } while (local_74 != 0);
        }
      }
    }
    else {
      FUN_008a88d0();
      piVar9 = (int *)piVar8[0x12];
      iVar5 = DAT_0131bb34;
      while (((int *)piVar8[0x12] <= piVar9 && (piVar9 < (int *)piVar8[0x13]))) {
        iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
        piVar9 = piVar9 + 1;
        if (iVar5 == 0) {
          iVar5 = FUN_00aae9af(0x188);
          local_c = 2;
          if (iVar5 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_0041a160();
          }
          local_c = 0xffffffff;
          FUN_00423700(uVar6);
          iVar5 = DAT_0131bb34;
        }
        iVar7 = *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2;
        if (0 < iVar7) {
          iVar4 = 0;
          do {
            iVar10 = *(int *)(iVar4 + *(int *)(iVar3 + 0x194));
            iVar5 = DAT_0131bb34;
            while (DAT_0131bb34 = iVar5, iVar10 != 0) {
              iVar10 = *(int *)(iVar10 + 0x27c);
              FUN_00883dd0(in_ECX);
              iVar5 = DAT_0131bb34;
            }
            iVar4 = iVar4 + 0x10;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
    }
  }
  else {
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    piVar8 = *(int **)(iVar5 + 0x9d8);
    iVar3 = DAT_0131bb34;
    ExceptionList = &local_14;
    while ((*(int **)(iVar5 + 0x9d8) <= piVar8 && (piVar8 < *(int **)(iVar5 + 0x9dc)))) {
      iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar8 * 4);
      piVar8 = piVar8 + 1;
      if (iVar3 == 0) {
        iVar3 = FUN_00aae9af(0x188);
        local_c = 0;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_0041a160();
        }
        iVar4 = DAT_0131bb34;
        local_c = 1;
        if ((iVar3 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar4);
        }
        local_c = 0xffffffff;
        DAT_0131bb34 = iVar3;
      }
      iVar4 = *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc) >> 2;
      if (0 < iVar4) {
        iVar10 = 0;
        do {
          iVar1 = *(int *)(iVar10 + *(int *)(iVar7 + 0x194));
          iVar3 = DAT_0131bb34;
          while (DAT_0131bb34 = iVar3, iVar1 != 0) {
            iVar1 = *(int *)(iVar1 + 0x27c);
            FUN_00883dd0(in_ECX);
            iVar3 = DAT_0131bb34;
          }
          iVar10 = iVar10 + 0x10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

