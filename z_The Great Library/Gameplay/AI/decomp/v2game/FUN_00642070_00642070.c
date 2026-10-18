// FUN_00642070 @ 00642070 body=[[00642070, 006420bc] [006420c0, 006421cc] [006421d0, 006421e3] [006421ef, 00642219]]


void FUN_00642070(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb8828;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(param_1 + 8) + 0x2a) != '\0') {
    ExceptionList = &local_10;
    FUN_00414d70(param_1 + 0xac);
    piVar6 = (int *)(param_1 + 0xb4);
    if (piVar6 != local_24) {
      if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar6);
      }
      *piVar6 = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  local_8 = 0xffffffff;
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 0x38))();
    uVar5 = (**(code **)(**(int **)(param_1 + 0x78) + 0x44))();
    FUN_009962f0(uVar5);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x38))();
    uVar5 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x44))();
    FUN_009962f0(uVar5);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  piVar6 = (int *)**(int **)(param_1 + 0x40);
  if (piVar6 != *(int **)(param_1 + 0x40)) {
    do {
      if ((int *)piVar6[4] != (int *)0x0) {
        (**(code **)(*(int *)piVar6[4] + 0x38))();
        FUN_009962f0(DAT_012588dc + 0x1948);
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar4 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar4 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int **)(param_1 + 0x40));
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if (*(char *)(iVar3 + 0x15) == '\0') {
    FUN_00aa9f30(*(undefined4 *)(iVar3 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
  *(int *)(*(int *)(param_1 + 0x40) + 4) = *(int *)(param_1 + 0x40);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(int *)(*(int *)(param_1 + 0x40) + 8) = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = 0;
  ExceptionList = local_10;
  return;
}

