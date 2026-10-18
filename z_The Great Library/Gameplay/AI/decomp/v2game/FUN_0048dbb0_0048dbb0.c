// FUN_0048dbb0 @ 0048dbb0 body=[[0048dbb0, 0048dc4d] [0048dc50, 0048dd0c] [0048dd10, 0048dd6e]]


void FUN_0048dbb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  int local_18;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0xc);
  piVar7 = (int *)FUN_00aae9af(0x10);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = param_2;
    piVar7[1] = iVar1;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(int **)(param_1 + 0xc) = piVar7;
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(param_1 + 8) = piVar7;
  }
  else {
    *(int **)(iVar1 + 8) = piVar7;
  }
  iVar1 = *(int *)(param_2 + 0x5c);
  local_18 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24;
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xdc) * 4);
  if (0 < local_18) {
    local_10 = 0;
    do {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(*(int *)(*(int *)(param_2 + 0x5c) + 200) + 4 + local_10) * 4);
      if (*(int *)(iVar2 + 0xe8) == *(int *)(param_2 + 0xe8)) {
        if (*(char *)(param_1 + 0x18) == '\0') {
          cVar6 = FUN_004b7550(iVar2);
          if (cVar6 != '\0') {
            piVar7 = *(int **)(in_ECX + 0x40);
            while (piVar7 != (int *)0x0) {
              iVar8 = *piVar7;
              piVar7 = (int *)piVar7[2];
              for (piVar3 = *(int **)(iVar8 + 8); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
                if (*piVar3 == iVar2) goto LAB_0048dd59;
              }
            }
LAB_0048dd51:
            FUN_0048dbb0(param_1,iVar2);
          }
        }
        else {
          iVar8 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xdc);
          if (iVar8 != 0) {
            iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar8 * 4);
            piVar7 = *(int **)(iVar1 + 0x15c);
            bVar5 = false;
            if (piVar7 != (int *)0x0) {
              do {
                iVar4 = *piVar7;
                piVar7 = (int *)piVar7[2];
                for (piVar3 = *(int **)(iVar8 + 0x15c); piVar3 != (int *)0x0;
                    piVar3 = (int *)piVar3[2]) {
                  if (*piVar3 == iVar4) {
                    bVar5 = true;
                    goto LAB_0048dd25;
                  }
                }
              } while (piVar7 != (int *)0x0);
            }
LAB_0048dd25:
            if ((((*(int *)(iVar8 + 0x164) == 0) && (*(int *)(iVar1 + 0x164) == 0)) || (bVar5)) &&
               (iVar8 = FUN_0048df80(), iVar8 == 0)) goto LAB_0048dd51;
          }
        }
      }
LAB_0048dd59:
      local_10 = local_10 + 0x24;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

