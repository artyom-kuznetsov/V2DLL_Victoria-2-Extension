// FUN_007fe1f0 @ 007fe1f0 body=[[007fe1f0, 007fe398] [007fe3a0, 007fe6a9]]


void FUN_007fe1f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_110;
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fd3e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_14;
    iVar5 = FUN_00aae9af(0x3c);
    local_c = 0;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_004dada0();
    }
    local_c = 0xffffffff;
    FUN_004dc340(uVar6);
  }
  iVar3 = DAT_012588e8;
  iVar5 = *(int *)(DAT_0125ce80 + 0x30);
  iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  local_110 = 1;
  if (1 < iVar7) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + local_110 * 4) + 0xc);
      if ((((*(int *)(iVar1 + 0x158) != 0) && (*(int *)(iVar1 + 300) != 0)) &&
          (*(int *)(iVar1 + 300) == *(int *)(iVar3 + 0xb60))) && (0 < *(int *)(iVar1 + 0x164))) {
        FUN_004cb060();
        iVar8 = *(int *)(*(int *)(iVar1 + 0x118) + DAT_01258720 * 4);
        if (((*(int *)(iVar8 + 0x20) < 1) || (*(int *)(iVar8 + 0x24) / 1000 == 0)) &&
           (cVar4 = (**(code **)(**(int **)(iVar1 + 0x188) + 0x24))(), cVar4 != '\0')) {
          piVar10 = *(int **)(*(int *)(iVar1 + 0x188) + 0x48);
          iVar8 = *(int *)(*(int *)(iVar1 + 0x188) + 0x4c) - (int)piVar10 >> 2;
          iVar9 = 0;
          if (0 < iVar8) {
            do {
              if (((*piVar10 != *(int *)(iVar1 + 0x58)) && (*(char *)(iVar5 + 0x131) != '\0')) &&
                 (DAT_0125ceac <
                  *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xacc) + *piVar10 * 4) +
                                            0x118) + *(int *)(iVar5 + 0x134) * 4) + 0x20)))
              goto LAB_007fe619;
              iVar9 = iVar9 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar9 < iVar8);
          }
        }
        FUN_009b7270(local_34);
        if (*(int *)(iVar1 + 300) == *(int *)(iVar3 + 0xb60)) {
          piVar10 = *(int **)(iVar1 + 0xd8);
          do {
            if (piVar10 == (int *)0x0) {
              FUN_00511e70(iVar5,iVar1);
              break;
            }
            piVar2 = (int *)*piVar10;
            piVar10 = (int *)piVar10[2];
            cVar4 = (**(code **)(*piVar2 + 0x30))();
          } while ((cVar4 == '\0') || (*(int *)(piVar2[0x16] + 0x10) != 3));
        }
      }
LAB_007fe619:
      uVar6 = FUN_009b6df0();
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_110 * 4) = uVar6;
      uVar6 = FUN_009b6df0();
      iVar1 = local_110 * 4;
      local_110 = local_110 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 4) = uVar6;
    } while (local_110 < iVar7);
  }
  ExceptionList = local_14;
  return;
}

