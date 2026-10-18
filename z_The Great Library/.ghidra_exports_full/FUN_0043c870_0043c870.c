// FUN_0043c870 @ 0043c870 body=[[0043c870, 0043c98b] [0043c98f, 0043c9a1]]


void FUN_0043c870(int param_1)

{
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *local_20;
  int *local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5c168;
  local_10 = ExceptionList;
  piVar6 = (int *)0x0;
  piVar5 = (int *)0x0;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_8 = 0;
  piVar8 = (int *)**(int **)(param_1 + 8);
  ExceptionList = &local_10;
  ppvVar3 = &local_10;
  if (piVar8 != *(int **)(param_1 + 8)) {
    do {
      ExceptionList = ppvVar3;
      if ((char)piVar8[4] != '\0') {
        piVar2 = piVar8 + 3;
        if ((piVar2 < piVar5) && (piVar6 <= piVar2)) {
          iVar7 = (int)piVar2 - (int)piVar6;
          if (piVar5 == local_18) {
            FUN_007b94a0();
            piVar5 = local_1c;
            piVar6 = local_20;
          }
          if (piVar5 != (int *)0x0) {
            *piVar5 = piVar6[iVar7 >> 2];
          }
        }
        else {
          if (piVar5 == local_18) {
            FUN_007b94a0();
            piVar5 = local_1c;
            piVar6 = local_20;
          }
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar2;
          }
        }
        piVar5 = piVar5 + 1;
        local_1c = piVar5;
      }
      if (*(char *)((int)piVar8 + 0x15) == '\0') {
        piVar2 = (int *)piVar8[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar8 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar8 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0x15);
          piVar4 = (int *)piVar8[1];
          piVar2 = piVar8;
          while ((piVar8 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0x15);
            piVar4 = (int *)piVar8[1];
            piVar2 = piVar8;
          }
        }
      }
      ppvVar3 = ExceptionList;
    } while (piVar8 != *(int **)(param_1 + 8));
  }
  if (0 < (int)((int)piVar5 - (int)piVar6 & 0xfffffffcU)) {
    FUN_0043cd10(&local_20,0);
  }
  if (piVar6 == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar6);
}

