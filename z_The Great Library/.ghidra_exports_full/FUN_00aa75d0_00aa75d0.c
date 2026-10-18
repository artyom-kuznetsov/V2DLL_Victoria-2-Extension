// FUN_00aa75d0 @ 00aa75d0 body=[[00aa75d0, 00aa75e5] [00aa75f3, 00aa77f4]]


void FUN_00aa75d0(undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0xaaaaaa8 < *(uint *)(in_ECX + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
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
  cVar1 = *(char *)(param_4[1] + 0x24);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *(int *)(*(int *)(in_ECX + 4) + 4);
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x24) = 1;
      return;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x24) == '\0') {
        *(undefined1 *)(piVar5 + 9) = 1;
        *(undefined1 *)(iVar2 + 0x24) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x24) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x25) == '\0') {
            *(int **)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
            *(int **)(*(int *)(in_ECX + 4) + 4) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x24) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x24) = 0;
        piVar5 = *(int **)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x25) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
          *(int **)(*(int *)(in_ECX + 4) + 4) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00aa77cd:
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x24) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*(char *)(*(int *)(iVar2 + 8) + 0x25) == '\0') {
            *(int **)(*(int *)(iVar2 + 8) + 4) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
            *(int *)(*(int *)(in_ECX + 4) + 4) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int **)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x24) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x24) = 0;
        piVar5 = *(int **)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x25) == '\0') {
          *(int **)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
          *(int **)(*(int *)(in_ECX + 4) + 4) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00aa77cd;
      }
      *(undefined1 *)(piVar5 + 9) = 1;
      *(undefined1 *)(iVar2 + 0x24) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x24) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x24);
  } while( true );
}

