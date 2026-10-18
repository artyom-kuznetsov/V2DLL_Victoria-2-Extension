// FUN_0093bdd0 @ 0093bdd0 body=[[0093bdd0, 0093be0c] [0093be10, 0093bf45] [0093bf4f, 0093bfdb] [0093bfe5, 0093c1df]]


void FUN_0093bdd0(char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  int in_EAX;
  int *piVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_c;
  int local_8;
  
  if (param_1 == '\0') {
    piVar6 = (int *)(in_EAX + 0x2c);
  }
  else {
    piVar6 = (int *)(in_EAX + 0x3c);
  }
  local_8 = 0;
  iVar7 = piVar6[1] - *piVar6 >> 3;
  if (0 < iVar7) {
    do {
      iVar11 = DAT_012587e4;
      iVar1 = *(int *)(local_8 * 8 + 4 + *piVar6);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4) * 4) +
                               0xbe8) + iVar1 * 4);
      iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4) * 4);
      iVar10 = *(int *)(*(int *)(iVar9 + 0xbe8) + iVar1 * 4);
      iVar8 = *(int *)(iVar10 + 0x3c) + -100000;
      *(undefined1 *)(iVar10 + 0x71) = 1;
      local_c = iVar8;
      if (DAT_0131b1e8 < iVar8) {
        local_c = DAT_0131b1e8;
      }
      iVar12 = DAT_0131b2c8;
      if (DAT_0131b2c8 <= local_c) {
        iVar12 = local_c;
      }
      *(int *)(iVar10 + 0x3c) = iVar12;
      iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(iVar11 + 4) + iVar1 * 4) + 0xbe8) +
                      *(int *)(iVar9 + 0x20) * 4);
      *(undefined1 *)(iVar9 + 0x71) = 1;
      iVar10 = DAT_0131b1e8;
      if (iVar8 <= DAT_0131b1e8) {
        iVar10 = iVar8;
      }
      if (iVar10 < DAT_0131b2c8) {
        iVar10 = DAT_0131b2c8;
      }
      *(int *)(iVar9 + 0x3c) = iVar10;
      piVar3 = *(int **)(iVar2 + 0x20);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x2c))();
        iVar9 = DAT_012588e8;
        for (puVar4 = *(undefined4 **)(DAT_012588e8 + 0xa84); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)puVar4[2]) {
          if ((int *)*puVar4 == piVar3) {
            if (puVar4 != (undefined4 *)0x0) {
              if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
                iVar7 = puVar4[1];
                iVar1 = puVar4[2];
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 8) = iVar1;
                }
                if (iVar1 != 0) {
                  *(int *)(iVar1 + 4) = iVar7;
                }
                if (puVar4 == *(undefined4 **)(iVar9 + 0xa84)) {
                  *(int *)(iVar9 + 0xa84) = iVar1;
                }
                if (puVar4 == *(undefined4 **)(iVar9 + 0xa88)) {
                  *(int *)(iVar9 + 0xa88) = iVar7;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(puVar4);
              }
              *(undefined1 *)(puVar4 + 3) = 1;
            }
            break;
          }
        }
        (**(code **)*piVar3)(1);
        iVar11 = DAT_012587e4;
      }
      piVar3 = *(int **)(iVar2 + 0x28);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x2c))();
        iVar9 = DAT_012588e8;
        for (puVar4 = *(undefined4 **)(DAT_012588e8 + 0xa84); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)puVar4[2]) {
          if ((int *)*puVar4 == piVar3) {
            if (puVar4 != (undefined4 *)0x0) {
              if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
                iVar7 = puVar4[1];
                iVar1 = puVar4[2];
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 8) = iVar1;
                }
                if (iVar1 != 0) {
                  *(int *)(iVar1 + 4) = iVar7;
                }
                if (puVar4 == *(undefined4 **)(iVar9 + 0xa84)) {
                  *(int *)(iVar9 + 0xa84) = iVar1;
                }
                if (puVar4 == *(undefined4 **)(iVar9 + 0xa88)) {
                  *(int *)(iVar9 + 0xa88) = iVar7;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(puVar4);
              }
              *(undefined1 *)(puVar4 + 3) = 1;
            }
            break;
          }
        }
        (**(code **)*piVar3)(1);
        iVar11 = DAT_012587e4;
      }
      if ((*(int *)(iVar2 + 0x34) == 0) && (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar2 + 0x6c))
         ) {
        iVar9 = *(int *)(DAT_012588e8 + 0xb0c) + -0x18;
        *(int *)(iVar2 + 0x6c) = iVar9;
        *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar11 + 4) +
                                           *(int *)(*piVar6 + local_8 * 8 + 4) * 4) + 0xbe8) +
                         *(int *)(in_ECX + 4) * 4) + 0x6c) = iVar9;
      }
      FUN_0092f420();
      FUN_0092f420();
      iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
      if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
        FUN_005b53d0(DAT_012588e8 + 0xab4,iVar2);
        iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0x20) * 4) + 0x9e8);
        while (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 8);
          FUN_004b7c50();
        }
        FUN_005dbd90();
      }
      FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4));
      local_8 = local_8 + 1;
    } while (local_8 < iVar7);
  }
  if (((*(int **)(DAT_012588e8 + 0xb24) != (int *)0x0) &&
      (cVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x128))(), cVar5 == '\0')) &&
     (iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4) * 4),
     *(char *)(DAT_012588e8 + 0xd1c) != '\0')) {
    FUN_005b53d0(DAT_012588e8 + 0xab4,iVar7);
    iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x20) * 4) + 0x9e8);
    while (iVar7 != 0) {
      iVar7 = *(int *)(iVar7 + 8);
      FUN_004b7c50();
    }
    FUN_005dbd90();
  }
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4) * 4));
  return;
}

