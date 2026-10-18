// FUN_00a84fb0 @ 00a84fb0 body=[[00a84fb0, 00a84fd1] [00a84fd5, 00a84fec] [00a84ffa, 00a8514e]]


void FUN_00a84fb0(undefined4 *param_1,char param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_EAX;
  int *piVar5;
  int unaff_EDI;
  
  if (*(uint *)(unaff_EDI + 8) < 0x2c8590a) {
    *(uint *)(unaff_EDI + 8) = *(uint *)(unaff_EDI + 8) + 1;
    param_3[1] = (int)in_EAX;
    if (in_EAX == *(undefined4 **)(unaff_EDI + 4)) {
      (*(undefined4 **)(unaff_EDI + 4))[1] = param_3;
      **(undefined4 **)(unaff_EDI + 4) = param_3;
      *(int **)(*(int *)(unaff_EDI + 4) + 8) = param_3;
    }
    else if (param_2 == '\0') {
      in_EAX[2] = param_3;
      if (in_EAX == *(undefined4 **)(*(int *)(unaff_EDI + 4) + 8)) {
        *(int **)(*(int *)(unaff_EDI + 4) + 8) = param_3;
      }
    }
    else {
      *in_EAX = param_3;
      if (in_EAX == (undefined4 *)**(int **)(unaff_EDI + 4)) {
        **(int **)(unaff_EDI + 4) = (int)param_3;
      }
    }
    cVar1 = *(char *)(param_3[1] + 0x68);
    piVar5 = param_3;
    while (cVar1 == '\0') {
      piVar2 = (int *)piVar5[1];
      piVar3 = (int *)piVar2[1];
      if (piVar2 == (int *)*piVar3) {
        iVar4 = piVar3[2];
        if (*(char *)(iVar4 + 0x68) == '\0') {
          *(undefined1 *)(piVar2 + 0x1a) = 1;
          *(undefined1 *)(iVar4 + 0x68) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x68) = 0;
          piVar5 = *(int **)(piVar5[1] + 4);
        }
        else {
          if (piVar5 == (int *)piVar2[2]) {
            FUN_00a848d0(unaff_EDI);
            piVar5 = piVar2;
          }
          *(undefined1 *)(piVar5[1] + 0x68) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x68) = 0;
          FUN_00a84930(unaff_EDI);
        }
      }
      else {
        iVar4 = *piVar3;
        if (*(char *)(iVar4 + 0x68) == '\0') {
          *(undefined1 *)(piVar2 + 0x1a) = 1;
          *(undefined1 *)(iVar4 + 0x68) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x68) = 0;
          piVar5 = *(int **)(piVar5[1] + 4);
        }
        else {
          if (piVar5 == (int *)*piVar2) {
            FUN_00a84930(unaff_EDI);
            piVar5 = piVar2;
          }
          *(undefined1 *)(piVar5[1] + 0x68) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x68) = 0;
          iVar4 = *(int *)(piVar5[1] + 4);
          piVar2 = *(int **)(iVar4 + 8);
          *(int *)(iVar4 + 8) = *piVar2;
          if (*(char *)(*piVar2 + 0x69) == '\0') {
            *(int *)(*piVar2 + 4) = iVar4;
          }
          piVar2[1] = *(int *)(iVar4 + 4);
          if (iVar4 == *(int *)(*(int *)(unaff_EDI + 4) + 4)) {
            *(int **)(*(int *)(unaff_EDI + 4) + 4) = piVar2;
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
      cVar1 = *(char *)(piVar5[1] + 0x68);
    }
    iVar4 = *(int *)(*(int *)(unaff_EDI + 4) + 4);
    *param_1 = param_3;
    *(undefined1 *)(iVar4 + 0x68) = 1;
    return;
  }
  if ((uint)param_3[8] < 0x10) {
    param_3[8] = 0xf;
    param_3[7] = 0;
    *(undefined1 *)(param_3 + 3) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_3[3]);
}

