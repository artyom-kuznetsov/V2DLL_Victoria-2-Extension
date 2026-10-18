// FUN_005b5a30 @ 005b5a30 body=[[005b5a30, 005b5b98] [005b5ba2, 005b5bb5]]


void FUN_005b5a30(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb6698;
  pvStack_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x18);
  ExceptionList = &pvStack_14;
  FUN_005b5980(param_1);
  piVar6 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_c = 2;
  piVar7 = piVar6;
  if (0 < *(int *)(iVar1 + 0xf4)) {
    do {
      piVar4 = *(int **)(iVar1 + 0xec);
      while (piVar6 = piVar7, piVar4 != (int *)0x0) {
        piVar2 = (int *)*piVar4;
        piVar4 = (int *)piVar4[2];
        while( true ) {
          if (piVar6 == (int *)0x0) {
            piVar4 = (int *)FUN_00aae9af(0x10);
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              *piVar4 = (int)piVar2;
              piVar4[1] = (int)local_24;
              piVar4[2] = 0;
              *(undefined1 *)(piVar4 + 3) = 0;
            }
            iVar5 = local_20 + 1;
            piVar6 = piVar4;
            if (local_20 != 0) {
              local_24[2] = (int)piVar4;
              piVar6 = piVar7;
            }
            cVar3 = (**(code **)(*piVar2 + 0x38))();
            local_24 = piVar4;
            local_20 = iVar5;
            if ((((cVar3 == '\0') ||
                 (iVar5 = (**(code **)(*piVar2 + 0x2c))(), *(int *)(iVar5 + 0x1b4) == 0)) ||
                (iVar5 = (**(code **)(*piVar2 + 0x2c))(),
                *(int *)(*(int *)(iVar5 + 0x1b4) + 0xec) < 1)) && (*(int *)(iVar1 + 0x58) != 0)) {
              if ((piVar2[0x1d] == 0) || (*(int *)(piVar2[0x1d] + 0x18) != iVar1)) {
                FUN_005b55c0(piVar2);
              }
              if ((piVar2[0x1d] == 0) || (*(int *)(piVar2[0x1d] + 0x18) != iVar1)) {
                FUN_005b5620(param_1,iVar1,piVar2);
              }
            }
            goto LAB_005b5b72;
          }
          if ((int *)*piVar6 == piVar2) break;
          piVar6 = (int *)piVar6[2];
        }
      }
LAB_005b5b72:
      piVar7 = piVar6;
    } while (local_20 < *(int *)(iVar1 + 0xf4));
  }
  if (piVar6 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar6);
  }
  ExceptionList = pvStack_14;
  return;
}

