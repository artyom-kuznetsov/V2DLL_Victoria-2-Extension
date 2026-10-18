// FUN_00457360 @ 00457360 body=[[00457360, 004573bb] [004573cf, 00457533]]


void FUN_00457360(undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51df8;
  if (0xcccccca < *(uint *)(in_ECX + 8)) {
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_00445600(*(undefined4 *)param_4[5],(undefined4 *)param_4[5]);
    local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4[5]);
  }
  ExceptionList = &local_10;
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 **)(in_ECX + 4)) {
    (*(undefined4 **)(in_ECX + 4))[1] = param_4;
    **(undefined4 **)(in_ECX + 4) = param_4;
    *(int **)(*(int *)(in_ECX + 4) + 8) = param_4;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *(undefined4 **)(*(int *)(in_ECX + 4) + 8)) {
      *(int **)(*(int *)(in_ECX + 4) + 8) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == (undefined4 *)**(int **)(in_ECX + 4)) {
      **(int **)(in_ECX + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x20);
  piVar5 = param_4;
  while (cVar1 == '\0') {
    piVar2 = (int *)piVar5[1];
    piVar3 = (int *)piVar2[1];
    if (piVar2 == (int *)*piVar3) {
      iVar4 = piVar3[2];
      if (*(char *)(iVar4 + 0x20) == '\0') {
        *(undefined1 *)(piVar2 + 8) = 1;
        *(undefined1 *)(iVar4 + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x20) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar2[2]) {
          FUN_00457090(in_ECX);
          piVar5 = piVar2;
        }
        *(undefined1 *)(piVar5[1] + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x20) = 0;
        FUN_0093d630(in_ECX);
      }
    }
    else {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x20) == '\0') {
        *(undefined1 *)(piVar2 + 8) = 1;
        *(undefined1 *)(iVar4 + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x20) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)*piVar2) {
          FUN_0093d630(in_ECX);
          piVar5 = piVar2;
        }
        *(undefined1 *)(piVar5[1] + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x20) = 0;
        iVar4 = *(int *)(piVar5[1] + 4);
        piVar2 = *(int **)(iVar4 + 8);
        *(int *)(iVar4 + 8) = *piVar2;
        if (*(char *)(*piVar2 + 0x21) == '\0') {
          *(int *)(*piVar2 + 4) = iVar4;
        }
        piVar2[1] = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(*(int *)(in_ECX + 4) + 4)) {
          *(int **)(*(int *)(in_ECX + 4) + 4) = piVar2;
        }
        else {
          piVar3 = *(int **)(iVar4 + 4);
          if (iVar4 == *piVar3) {
            *piVar3 = (int)piVar2;
          }
          else {
            piVar3[2] = (int)piVar2;
          }
        }
        *piVar2 = iVar4;
        *(int **)(iVar4 + 4) = piVar2;
      }
    }
    cVar1 = *(char *)(piVar5[1] + 0x20);
  }
  iVar4 = *(int *)(*(int *)(in_ECX + 4) + 4);
  *param_1 = param_4;
  *(undefined1 *)(iVar4 + 0x20) = 1;
  ExceptionList = local_10;
  return;
}

