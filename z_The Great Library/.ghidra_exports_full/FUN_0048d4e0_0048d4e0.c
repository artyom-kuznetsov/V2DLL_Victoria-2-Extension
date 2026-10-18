// FUN_0048d4e0 @ 0048d4e0 body=[[0048d4e0, 0048d54c] [0048d550, 0048d5a5] [0048d5b5, 0048d5fc] [0048d600, 0048d616] [0048d620, 0048d646] [0048d650, 0048d668] [0048d672, 0048d68a] [0048d694, 0048d6ac] [0048d6b6, 0048d6ce] [0048d6d8, 0048d6e9] [0048d6f0, 0048d6f8] [0048d702, 0048d71d]]


/* WARNING: Removing unreachable block (ram,0x0048d660) */

void FUN_0048d4e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40237;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = COwnerArea::vftable;
  piVar3 = DAT_012587e4;
  local_8 = 4;
  iVar4 = 0;
  if (0 < *DAT_012587e4) {
    do {
      iVar5 = *(int *)(DAT_012587e4[1] + *(int *)(*(int *)(piVar3[1] + iVar4 * 4) + 0x20) * 4);
      for (piVar1 = *(int **)(iVar5 + 0xa08); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if ((undefined4 *)*piVar1 == param_1) {
          if (piVar1 != (int *)0x0) {
            if (*(char *)(iVar5 + 0xa14) == '\0') {
              iVar4 = piVar1[1];
              iVar2 = piVar1[2];
              if (iVar4 != 0) {
                *(int *)(iVar4 + 8) = iVar2;
              }
              if (iVar2 != 0) {
                *(int *)(iVar2 + 4) = iVar4;
              }
              if (piVar1 == *(int **)(iVar5 + 0xa08)) {
                *(int *)(iVar5 + 0xa08) = iVar2;
              }
              if (piVar1 == *(int **)(iVar5 + 0xa0c)) {
                *(int *)(iVar5 + 0xa0c) = iVar4;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar1);
            }
            *(undefined1 *)(piVar1 + 3) = 1;
          }
          break;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar3);
  }
  iVar5 = 0;
  iVar4 = (**(code **)(*DAT_012588e8 + 0x18))();
  if (0 < iVar4) {
    do {
      iVar5 = iVar5 + 1;
      iVar4 = (**(code **)(*DAT_012588e8 + 0x18))();
    } while (iVar5 < iVar4);
  }
  if (param_1[0xf] != 0) {
    FUN_0048f490();
  }
  piVar3 = (int *)param_1[0x10];
  if (piVar3 != (int *)0x0) {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar3);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  piVar3 = (int *)param_1[0x14];
  if (piVar3 != (int *)0x0) {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar3);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (param_1[0x10] == 0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if (param_1[10] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[10]);
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    if (param_1[5] == 0) {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      if (param_1[1] == 0) {
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x10]);
}

