// FUN_0093d280 @ 0093d280 body=[[0093d280, 0093d4e1] [0093d4e5, 0093d4f6]]


void FUN_0093d280(int param_1,undefined4 param_2,int *param_3)

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
  undefined4 *puVar10;
  int *piVar11;
  
  piVar6 = param_3;
  if (*(char *)((int)param_3 + 0x21) != '\0') {
    piVar6 = (int *)FUN_00aad3fa("invalid map/set<T> iterator");
  }
  FUN_0093d230();
  piVar9 = (int *)*piVar6;
  if (*(char *)((int)piVar9 + 0x21) == '\0') {
    piVar11 = piVar9;
    if ((*(char *)(piVar6[2] + 0x21) == '\0') && (piVar11 = (int *)param_3[2], param_3 != piVar6)) {
      piVar9[1] = (int)param_3;
      *param_3 = *piVar6;
      piVar9 = param_3;
      if (param_3 != (int *)piVar6[2]) {
        piVar9 = (int *)param_3[1];
        if (*(char *)((int)piVar11 + 0x21) == '\0') {
          piVar11[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar11;
        param_3[2] = piVar6[2];
        *(int **)(piVar6[2] + 4) = param_3;
      }
      if (*(int **)(*(int *)(param_1 + 4) + 4) == piVar6) {
        *(int **)(*(int *)(param_1 + 4) + 4) = param_3;
      }
      else {
        puVar10 = (undefined4 *)piVar6[1];
        if ((int *)*puVar10 == piVar6) {
          *puVar10 = param_3;
        }
        else {
          puVar10[2] = param_3;
        }
      }
      param_3[1] = piVar6[1];
      iVar3 = param_3[8];
      *(char *)(param_3 + 8) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar3;
      goto LAB_0093d3a6;
    }
  }
  else {
    piVar11 = (int *)piVar6[2];
  }
  piVar9 = (int *)piVar6[1];
  if (*(char *)((int)piVar11 + 0x21) == '\0') {
    piVar11[1] = (int)piVar9;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == piVar6) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar11;
  }
  else if ((int *)*piVar9 == piVar6) {
    *piVar9 = (int)piVar11;
  }
  else {
    piVar9[2] = (int)piVar11;
  }
  if ((int *)**(undefined4 **)(param_1 + 4) == piVar6) {
    piVar8 = piVar9;
    if (*(char *)((int)piVar11 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar11 + 0x21);
      piVar2 = (int *)*piVar11;
      piVar8 = piVar11;
      while (piVar5 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar2 + 0x21);
        piVar8 = piVar5;
      }
    }
    **(undefined4 **)(param_1 + 4) = piVar8;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int **)(iVar3 + 8) == piVar6) {
    if (*(char *)((int)piVar11 + 0x21) == '\0') {
      uVar7 = FUN_004570f0();
      *(undefined4 *)(iVar3 + 8) = uVar7;
    }
    else {
      *(int **)(iVar3 + 8) = piVar9;
    }
  }
LAB_0093d3a6:
  if ((char)piVar6[8] == '\x01') {
    if (piVar11 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar8 = piVar9;
        if ((char)piVar11[8] != '\x01') break;
        piVar9 = (int *)*piVar8;
        if (piVar11 == piVar9) {
          piVar9 = (int *)piVar8[2];
          if ((char)piVar9[8] == '\0') {
            *(undefined1 *)(piVar9 + 8) = 1;
            *(undefined1 *)(piVar8 + 8) = 0;
            FUN_00457090(param_1);
            piVar9 = (int *)piVar8[2];
          }
          if (*(char *)((int)piVar9 + 0x21) == '\0') {
            if ((*(char *)(*piVar9 + 0x20) != '\x01') || (*(char *)(piVar9[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar9[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar9 + 0x20) = 1;
                *(undefined1 *)(piVar9 + 8) = 0;
                FUN_0093d630(param_1);
                piVar9 = (int *)piVar8[2];
              }
              *(char *)(piVar9 + 8) = (char)piVar8[8];
              *(undefined1 *)(piVar8 + 8) = 1;
              *(undefined1 *)(piVar9[2] + 0x20) = 1;
              FUN_00457090(param_1);
              break;
            }
LAB_0093d467:
            *(undefined1 *)(piVar9 + 8) = 0;
          }
        }
        else {
          if ((char)piVar9[8] == '\0') {
            *(undefined1 *)(piVar9 + 8) = 1;
            *(undefined1 *)(piVar8 + 8) = 0;
            FUN_0093d630(param_1);
            piVar9 = (int *)*piVar8;
          }
          if (*(char *)((int)piVar9 + 0x21) == '\0') {
            if ((*(char *)(piVar9[2] + 0x20) == '\x01') && (*(char *)(*piVar9 + 0x20) == '\x01'))
            goto LAB_0093d467;
            if (*(char *)(*piVar9 + 0x20) == '\x01') {
              *(undefined1 *)(piVar9[2] + 0x20) = 1;
              *(undefined1 *)(piVar9 + 8) = 0;
              FUN_00457090(param_1);
              piVar9 = (int *)*piVar8;
            }
            *(char *)(piVar9 + 8) = (char)piVar8[8];
            *(undefined1 *)(piVar8 + 8) = 1;
            *(undefined1 *)(*piVar9 + 0x20) = 1;
            FUN_0093d630(param_1);
            break;
          }
        }
        piVar9 = (int *)piVar8[1];
        piVar11 = piVar8;
      } while (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar11 + 8) = 1;
  }
  puVar10 = (undefined4 *)piVar6[4];
  if (puVar10 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)piVar6[5];
    for (; puVar10 != puVar4; puVar10 = puVar10 + 0x10) {
      (**(code **)*puVar10)(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar6[4]);
  }
  piVar6[4] = 0;
  piVar6[5] = 0;
  piVar6[6] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar6);
}

