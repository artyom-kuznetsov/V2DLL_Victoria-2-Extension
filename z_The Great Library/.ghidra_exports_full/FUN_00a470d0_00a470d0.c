// FUN_00a470d0 @ 00a470d0 body=[[00a470d0, 00a47315]]


void FUN_00a470d0(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  piVar6 = param_3;
  if (*(char *)((int)param_3 + 0x29) != '\0') {
    piVar6 = (int *)FUN_00aad3fa("invalid map/set<T> iterator");
  }
  FUN_0099e2b0();
  piVar9 = (int *)*piVar6;
  if (*(char *)((int)piVar9 + 0x29) == '\0') {
    piVar10 = piVar9;
    if ((*(char *)(piVar6[2] + 0x29) == '\0') && (piVar10 = (int *)param_3[2], param_3 != piVar6)) {
      piVar9[1] = (int)param_3;
      *param_3 = *piVar6;
      piVar9 = param_3;
      if (param_3 != (int *)piVar6[2]) {
        piVar9 = (int *)param_3[1];
        if (*(char *)((int)piVar10 + 0x29) == '\0') {
          piVar10[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar10;
        param_3[2] = piVar6[2];
        *(int **)(piVar6[2] + 4) = param_3;
      }
      if (*(int **)(*(int *)(param_1 + 4) + 4) == piVar6) {
        *(int **)(*(int *)(param_1 + 4) + 4) = param_3;
      }
      else {
        puVar4 = (undefined4 *)piVar6[1];
        if ((int *)*puVar4 == piVar6) {
          *puVar4 = param_3;
        }
        else {
          puVar4[2] = param_3;
        }
      }
      param_3[1] = piVar6[1];
      iVar3 = param_3[10];
      *(char *)(param_3 + 10) = (char)piVar6[10];
      *(char *)(piVar6 + 10) = (char)iVar3;
      goto LAB_00a471f6;
    }
  }
  else {
    piVar10 = (int *)piVar6[2];
  }
  piVar9 = (int *)piVar6[1];
  if (*(char *)((int)piVar10 + 0x29) == '\0') {
    piVar10[1] = (int)piVar9;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == piVar6) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar10;
  }
  else if ((int *)*piVar9 == piVar6) {
    *piVar9 = (int)piVar10;
  }
  else {
    piVar9[2] = (int)piVar10;
  }
  if ((int *)**(undefined4 **)(param_1 + 4) == piVar6) {
    piVar8 = piVar9;
    if (*(char *)((int)piVar10 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar10 + 0x29);
      piVar2 = (int *)*piVar10;
      piVar8 = piVar10;
      while (piVar5 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar2 + 0x29);
        piVar8 = piVar5;
      }
    }
    **(undefined4 **)(param_1 + 4) = piVar8;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int **)(iVar3 + 8) == piVar6) {
    if (*(char *)((int)piVar10 + 0x29) == '\0') {
      uVar7 = FUN_00a47470();
      *(undefined4 *)(iVar3 + 8) = uVar7;
    }
    else {
      *(int **)(iVar3 + 8) = piVar9;
    }
  }
LAB_00a471f6:
  if ((char)piVar6[10] == '\x01') {
    if (piVar10 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar8 = piVar9;
        if ((char)piVar10[10] != '\x01') break;
        piVar9 = (int *)*piVar8;
        if (piVar10 == piVar9) {
          piVar9 = (int *)piVar8[2];
          if ((char)piVar9[10] == '\0') {
            *(undefined1 *)(piVar9 + 10) = 1;
            *(undefined1 *)(piVar8 + 10) = 0;
            FUN_00a473b0(param_1);
            piVar9 = (int *)piVar8[2];
          }
          if (*(char *)((int)piVar9 + 0x29) == '\0') {
            if ((*(char *)(*piVar9 + 0x28) != '\x01') || (*(char *)(piVar9[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar9[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar9 + 0x28) = 1;
                *(undefined1 *)(piVar9 + 10) = 0;
                FUN_00a47410(param_1);
                piVar9 = (int *)piVar8[2];
              }
              *(char *)(piVar9 + 10) = (char)piVar8[10];
              *(undefined1 *)(piVar8 + 10) = 1;
              *(undefined1 *)(piVar9[2] + 0x28) = 1;
              FUN_00a473b0(param_1);
              break;
            }
LAB_00a472b7:
            *(undefined1 *)(piVar9 + 10) = 0;
          }
        }
        else {
          if ((char)piVar9[10] == '\0') {
            *(undefined1 *)(piVar9 + 10) = 1;
            *(undefined1 *)(piVar8 + 10) = 0;
            FUN_00a47410(param_1);
            piVar9 = (int *)*piVar8;
          }
          if (*(char *)((int)piVar9 + 0x29) == '\0') {
            if ((*(char *)(piVar9[2] + 0x28) == '\x01') && (*(char *)(*piVar9 + 0x28) == '\x01'))
            goto LAB_00a472b7;
            if (*(char *)(*piVar9 + 0x28) == '\x01') {
              *(undefined1 *)(piVar9[2] + 0x28) = 1;
              *(undefined1 *)(piVar9 + 10) = 0;
              FUN_00a473b0(param_1);
              piVar9 = (int *)*piVar8;
            }
            *(char *)(piVar9 + 10) = (char)piVar8[10];
            *(undefined1 *)(piVar8 + 10) = 1;
            *(undefined1 *)(*piVar9 + 0x28) = 1;
            FUN_00a47410(param_1);
            break;
          }
        }
        piVar9 = (int *)piVar8[1];
        piVar10 = piVar8;
      } while (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar10 + 10) = 1;
  }
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar6[4]);
}

