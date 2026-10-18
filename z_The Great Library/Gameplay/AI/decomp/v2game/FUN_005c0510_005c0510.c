// FUN_005c0510 @ 005c0510 body=[[005c0510, 005c05e4] [005c05e8, 005c07cc]]


void FUN_005c0510(int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_24;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5f69e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_10;
    iVar3 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar4);
  }
  iVar3 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_24 = 0;
  local_14 = iVar3;
  if (0 < iVar3) {
    local_18 = (int *)0x0;
    iVar5 = DAT_0131bb34;
    do {
      if (iVar5 == 0) {
        iVar5 = FUN_00aae9af(0x188);
        local_8 = 1;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0041a160();
        }
        iVar6 = DAT_0131bb34;
        local_8 = 2;
        if ((iVar5 != DAT_0131bb34) && (iVar3 = local_14, DAT_0131bb34 != 0)) {
          FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar6);
        }
        local_8 = 0xffffffff;
        DAT_0131bb34 = iVar5;
      }
      if (*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2 < local_24) {
        iVar6 = FUN_0096bb70();
        iVar5 = DAT_0131bb34;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + local_24 * 4);
      }
      if (*(char *)(iVar6 + 0x42) != '\0') {
        iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x19] * 4);
        piVar7 = *(int **)(iVar6 + 0x9d8);
LAB_005c064b:
        do {
          iVar5 = DAT_0131bb34;
          iVar3 = local_14;
          if ((piVar7 < *(int **)(iVar6 + 0x9d8)) || (*(int **)(iVar6 + 0x9dc) <= piVar7)) break;
          iVar3 = *piVar7;
          piVar7 = piVar7 + 1;
          iVar3 = *(int *)((int)local_18 +
                          *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4) + 0x194));
          do {
            iVar5 = iVar3;
            if (iVar5 == 0) goto LAB_005c064b;
            iVar3 = *(int *)(iVar5 + 0x27c);
            iVar8 = FUN_00965930(0);
            iVar9 = FUN_00965870(iVar5,0);
            piVar10 = param_1;
          } while (iVar9 < iVar8);
          if (iVar5 != 0) {
            ppiVar1 = *(int ***)(iVar5 + 0x40);
            local_18 = param_1;
            if ((&local_18 < ppiVar1) && (ppiVar2 = *(int ***)(iVar5 + 0x3c), ppiVar2 <= &local_18))
            {
              if (ppiVar1 == *(int ***)(iVar5 + 0x44)) {
                FUN_00a513f0();
              }
              if (*(undefined4 **)(iVar5 + 0x40) != (undefined4 *)0x0) {
                **(undefined4 **)(iVar5 + 0x40) =
                     *(undefined4 *)
                      (*(int *)(iVar5 + 0x3c) + ((int)&local_18 - (int)ppiVar2 >> 2) * 4);
              }
              *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 4;
              param_1[0xc] = iVar5;
              ExceptionList = local_10;
              return;
            }
            if (ppiVar1 == *(int ***)(iVar5 + 0x44)) {
              FUN_00a513f0();
            }
            if (*(undefined4 **)(iVar5 + 0x40) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar5 + 0x40) = piVar10;
            }
            *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 4;
            piVar10[0xc] = iVar5;
            ExceptionList = local_10;
            return;
          }
        } while( true );
      }
      local_18 = local_18 + 4;
      local_24 = local_24 + 1;
    } while (local_24 < iVar3);
  }
  piVar7 = param_1;
  iVar3 = 0;
  piVar10 = (int *)(**(code **)(*param_1 + 0x30))(&param_1,0);
  if (*piVar10 < 0) {
    piVar10 = (int *)(**(code **)(*piVar7 + 0x30))(&param_1,0);
    iVar3 = *piVar10;
  }
  FUN_00401000(0x3f000000);
  iVar5 = FUN_00b31c00();
  if (iVar3 < iVar5) {
    iVar3 = iVar5;
  }
  piVar7[0xf] = iVar3;
  ExceptionList = local_10;
  return;
}

