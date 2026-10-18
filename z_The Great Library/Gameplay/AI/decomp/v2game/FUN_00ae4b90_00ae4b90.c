// FUN_00ae4b90 @ 00ae4b90 body=[[00ae4b90, 00ae4db0]]


void FUN_00ae4b90(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar2 = 0;
  piVar7 = (int *)(in_ECX + 0x10);
  do {
    if (param_1 == *piVar7) {
      *(int **)(in_ECX + 0x10 + uVar2 * 4) = param_2;
      break;
    }
    uVar2 = uVar2 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar2 < 3);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar7 = *(int **)(param_1 + 0x1c);
    do {
      if (*piVar7 == in_ECX) {
        if (uVar3 != 0xffffffff) {
          if ((1 < uVar2) && (iVar9 = (uVar2 - uVar3) + -1, iVar9 != 0)) {
            piVar7 = *(int **)(param_1 + 0x1c) + uVar3;
            FID_conflict__memcpy(piVar7,piVar7 + 1,iVar9 * 4);
          }
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar3 < uVar2);
  }
  iVar9 = *(int *)((int)param_2 + 0x20);
  uVar2 = iVar9 + 1;
  *(uint *)((int)param_2 + 0x20) = uVar2;
  if (*(uint *)((int)param_2 + 0x24) < uVar2) {
    iVar9 = iVar9 + 2;
    if (iVar9 == 0) {
      *(undefined4 *)((int)param_2 + 0x20) = 0;
      *(undefined4 *)((int)param_2 + 0x24) = 0;
      if (*(int *)((int)param_2 + 0x1c) != 0) {
        (*(code *)PTR__free_00f01b10)(*(int *)((int)param_2 + 0x1c));
        *(undefined4 *)((int)param_2 + 0x1c) = 0;
      }
    }
    else {
      if (*(int *)((int)param_2 + 0x1c) == 0) {
        uVar5 = (*(code *)PTR_FUN_00f01b08)
                          (iVar9 * 4,*(undefined2 *)((int)param_2 + 0x28),4,2,0,0xffffffff);
      }
      else {
        uVar5 = (*(code *)PTR_FUN_00f01b0c)(*(int *)((int)param_2 + 0x1c),iVar9 * 4);
      }
      *(undefined4 *)((int)param_2 + 0x1c) = uVar5;
      *(int *)((int)param_2 + 0x24) = iVar9;
    }
  }
  piVar7 = (int *)(*(int *)((int)param_2 + 0x1c) + -4 + *(int *)((int)param_2 + 0x20) * 4);
  if (piVar7 != (int *)0x0) {
    *piVar7 = in_ECX;
  }
  puVar8 = (undefined4 *)(in_ECX + 0x10);
  iVar9 = 3;
  do {
    FUN_00ae4230(*puVar8);
    FUN_00ae4230(param_1);
    puVar8 = puVar8 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  param_2 = (int *)(in_ECX + 0x10);
  param_1 = 0;
  do {
    uVar2 = 0;
    piVar7 = (int *)(in_ECX + 0x10);
    do {
      if (param_1 != uVar2) {
        iVar9 = *param_2;
        uVar3 = *(uint *)(iVar9 + 0x10);
        uVar4 = 0;
        if (uVar3 != 0) {
          piVar6 = *(int **)(iVar9 + 0xc);
          do {
            if (*piVar6 == *piVar7) {
              if (uVar4 != 0xffffffff) goto LAB_00ae4d7c;
              break;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar4 < uVar3);
        }
        *(uint *)(iVar9 + 0x10) = uVar3 + 1;
        if (*(uint *)(iVar9 + 0x14) < uVar3 + 1) {
          iVar1 = uVar3 + 2;
          if (iVar1 == 0) {
            *(undefined4 *)(iVar9 + 0x10) = 0;
            *(undefined4 *)(iVar9 + 0x14) = 0;
            if (*(int *)(iVar9 + 0xc) != 0) {
              (*(code *)PTR__free_00f01b10)(*(int *)(iVar9 + 0xc));
              *(undefined4 *)(iVar9 + 0xc) = 0;
            }
          }
          else {
            if (*(int *)(iVar9 + 0xc) == 0) {
              uVar5 = (*(code *)PTR_FUN_00f01b08)
                                (iVar1 * 4,*(undefined2 *)(iVar9 + 0x18),4,2,0,0xffffffff);
            }
            else {
              uVar5 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar9 + 0xc),iVar1 * 4);
            }
            *(undefined4 *)(iVar9 + 0xc) = uVar5;
            *(int *)(iVar9 + 0x14) = iVar1;
          }
        }
        piVar6 = (int *)(*(int *)(iVar9 + 0xc) + -4 + *(int *)(iVar9 + 0x10) * 4);
        if (piVar6 != (int *)0x0) {
          *piVar6 = *piVar7;
        }
      }
LAB_00ae4d7c:
      uVar2 = uVar2 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar2 < 3);
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (2 < param_1) {
      FUN_00ae3b80();
      return;
    }
  } while( true );
}

