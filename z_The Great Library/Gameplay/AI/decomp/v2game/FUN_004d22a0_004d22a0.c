// FUN_004d22a0 @ 004d22a0 body=[[004d22a0, 004d236a] [004d236e, 004d2426] [004d2430, 004d2476]]


void FUN_004d22a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_34;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba1fb3;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x250) != 0) {
    piVar7 = *(int **)(*(int *)(param_1 + 0x250) + 8);
    ExceptionList = &local_14;
    if (piVar7 != (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x4c);
      do {
        if (*(int **)(param_1 + 0x48) != piVar1) {
          piVar5 = *(int **)(param_1 + 0x48);
          do {
            if (*piVar5 == *piVar7) break;
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar1);
          if (piVar5 != piVar1) {
            ExceptionList = &local_14;
            *(int *)(param_1 + 0x268) = *piVar7;
            break;
          }
        }
        piVar7 = (int *)piVar7[2];
        ExceptionList = &local_14;
      } while (piVar7 != (int *)0x0);
    }
    iVar4 = DAT_012588e8;
    iVar6 = DAT_0131bb34;
    if (DAT_0131bb34 == 0) {
      iVar6 = FUN_00aae9af(0x188);
      local_c = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0041a160();
      }
      iVar2 = DAT_0131bb34;
      local_c = 1;
      if ((iVar6 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
    }
    DAT_0131bb34 = iVar6;
    iVar6 = DAT_0131bb34;
    local_c = 0xffffffff;
    for (piVar7 = *(int **)(param_1 + 0x48);
        (*(int **)(param_1 + 0x48) <= piVar7 && (piVar7 < *(int **)(param_1 + 0x4c)));
        piVar7 = piVar7 + 1) {
      if (*piVar7 != *(int *)(param_1 + 0x268)) {
        iVar2 = *(int *)(*(int *)(iVar4 + 0xacc) + *piVar7 * 4);
        uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0xacc) + *(int *)(param_1 + 0x268) * 4);
        iVar10 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2;
        iVar9 = 0;
        if (0 < iVar10) {
          local_34 = 0;
          do {
            if (*(int *)(local_34 + 8 + *(int *)(iVar2 + 0x194)) != 0) {
              if (*(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2 < iVar9) {
                iVar8 = FUN_0096bb70();
              }
              else {
                iVar8 = *(int *)(*(int *)(iVar6 + 0xc) + iVar9 * 4);
              }
              if (*(char *)(iVar8 + 0x3ec) != '\0') {
                iVar8 = *(int *)(local_34 + *(int *)(iVar2 + 0x194));
                while (iVar8 != 0) {
                  iVar8 = *(int *)(iVar8 + 0x27c);
                  FUN_004b9150(uVar3);
                }
              }
            }
            local_34 = local_34 + 0x10;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar10);
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

