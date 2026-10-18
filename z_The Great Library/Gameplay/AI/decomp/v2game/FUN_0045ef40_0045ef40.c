// FUN_0045ef40 @ 0045ef40 body=[[0045ef40, 0045ef9c] [0045efa0, 0045efc6] [0045efca, 0045f019]]


void FUN_0045ef40(int param_1)

{
  int *piVar1;
  char cVar2;
  void **ppvVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bb8828;
  local_10 = ExceptionList;
  piVar5 = (int *)**(int **)(param_1 + 0xc);
  ExceptionList = &local_10;
  ppvVar3 = &local_10;
  if (piVar5 != *(int **)(param_1 + 0xc)) {
    do {
      ExceptionList = ppvVar3;
      local_8 = 0xffffffff;
      piVar6 = piVar5;
      if (*(char *)((int)piVar5 + 0x39) == '\0') {
        piVar6 = (int *)piVar5[2];
        if (*(char *)((int)piVar6 + 0x39) == '\0') {
          cVar2 = *(char *)(*piVar6 + 0x39);
          piVar1 = (int *)*piVar6;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar1 + 0x39);
            piVar6 = piVar1;
            piVar1 = (int *)*piVar1;
          }
        }
        else {
          cVar2 = *(char *)(piVar5[1] + 0x39);
          piVar4 = (int *)piVar5[1];
          piVar1 = piVar5;
          while ((piVar6 = piVar4, cVar2 == '\0' && (piVar1 == (int *)piVar6[2]))) {
            cVar2 = *(char *)(piVar6[1] + 0x39);
            piVar4 = (int *)piVar6[1];
            piVar1 = piVar6;
          }
        }
      }
      piVar1 = piVar5 + 10;
      if (piVar1 != local_24) {
        if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*piVar1);
        }
        *piVar1 = 0;
        piVar5[0xb] = 0;
        piVar5[0xc] = 0;
      }
      piVar5 = piVar6;
      ppvVar3 = ExceptionList;
    } while (piVar6 != *(int **)(param_1 + 0xc));
  }
  local_8 = 0xffffffff;
  FUN_00462210(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  *(int *)(*(int *)(param_1 + 0xc) + 4) = *(int *)(param_1 + 0xc);
  *(undefined4 *)*(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(*(int *)(param_1 + 0xc) + 8) = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_10;
  return;
}

