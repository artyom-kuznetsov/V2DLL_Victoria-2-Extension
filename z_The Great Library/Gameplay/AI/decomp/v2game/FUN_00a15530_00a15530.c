// FUN_00a15530 @ 00a15530 body=[[00a15530, 00a15609] [00a1570c, 00a1571e]]


void FUN_00a15530(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b54e06;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    piVar1 = *(int **)(param_1 + 0xdc);
    ExceptionList = &local_10;
    while (piVar6 = piVar1, piVar6 != (int *)0x0) {
      piVar1 = (int *)piVar6[4];
      cVar4 = (**(code **)(*DAT_01258b30 + 0x18))(piVar6[2],*(undefined4 *)(param_1 + 0x90));
      if (cVar4 != '\0') {
        for (piVar5 = *(int **)(param_1 + 0xdc);
            (piVar5 != (int *)0x0 &&
            ((*piVar5 != *piVar6 || ((short)piVar5[1] != (short)piVar6[1]))));
            piVar5 = (int *)piVar5[4]) {
        }
        if (piVar5 != (int *)0x0) {
          if (*(char *)(param_1 + 0xe8) == '\0') {
            iVar2 = piVar5[3];
            iVar3 = piVar5[4];
            if (iVar2 != 0) {
              *(int *)(iVar2 + 0x10) = iVar3;
            }
            if (iVar3 != 0) {
              *(int *)(iVar3 + 0xc) = iVar2;
            }
            if (piVar5 == *(int **)(param_1 + 0xdc)) {
              *(int *)(param_1 + 0xdc) = iVar3;
            }
            if (piVar5 == *(int **)(param_1 + 0xe0)) {
              *(int *)(param_1 + 0xe0) = iVar2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar5);
          }
          *(undefined1 *)(piVar5 + 5) = 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

