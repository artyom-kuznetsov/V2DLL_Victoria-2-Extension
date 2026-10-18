// FUN_00a2cb60 @ 00a2cb60 body=[[00a2cb60, 00a2cda7] [00a2cdab, 00a2cdc5]]


void FUN_00a2cb60(int param_1,undefined4 param_2,int *param_3)

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
  if (*(char *)((int)param_3 + 0x31) != '\0') {
    piVar6 = (int *)FUN_00aad3fa("invalid map/set<T> iterator");
  }
  FUN_00a2cf30();
  piVar9 = (int *)*piVar6;
  if (*(char *)((int)piVar9 + 0x31) == '\0') {
    piVar10 = piVar9;
    if ((*(char *)(piVar6[2] + 0x31) == '\0') && (piVar10 = (int *)param_3[2], param_3 != piVar6)) {
      piVar9[1] = (int)param_3;
      *param_3 = *piVar6;
      piVar9 = param_3;
      if (param_3 != (int *)piVar6[2]) {
        piVar9 = (int *)param_3[1];
        if (*(char *)((int)piVar10 + 0x31) == '\0') {
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
      iVar3 = param_3[0xc];
      *(char *)(param_3 + 0xc) = (char)piVar6[0xc];
      *(char *)(piVar6 + 0xc) = (char)iVar3;
      goto LAB_00a2cc86;
    }
  }
  else {
    piVar10 = (int *)piVar6[2];
  }
  piVar9 = (int *)piVar6[1];
  if (*(char *)((int)piVar10 + 0x31) == '\0') {
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
    if (*(char *)((int)piVar10 + 0x31) == '\0') {
      cVar1 = *(char *)(*piVar10 + 0x31);
      piVar2 = (int *)*piVar10;
      piVar8 = piVar10;
      while (piVar5 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar2 + 0x31);
        piVar8 = piVar5;
      }
    }
    **(undefined4 **)(param_1 + 4) = piVar8;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int **)(iVar3 + 8) == piVar6) {
    if (*(char *)((int)piVar10 + 0x31) == '\0') {
      uVar7 = FUN_00a2cf10();
      *(undefined4 *)(iVar3 + 8) = uVar7;
    }
    else {
      *(int **)(iVar3 + 8) = piVar9;
    }
  }
LAB_00a2cc86:
  if ((char)piVar6[0xc] == '\x01') {
    if (piVar10 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar8 = piVar9;
        if ((char)piVar10[0xc] != '\x01') break;
        piVar9 = (int *)*piVar8;
        if (piVar10 == piVar9) {
          piVar9 = (int *)piVar8[2];
          if ((char)piVar9[0xc] == '\0') {
            *(undefined1 *)(piVar9 + 0xc) = 1;
            *(undefined1 *)(piVar8 + 0xc) = 0;
            FUN_00a2ce50(param_1);
            piVar9 = (int *)piVar8[2];
          }
          if (*(char *)((int)piVar9 + 0x31) == '\0') {
            if ((*(char *)(*piVar9 + 0x30) != '\x01') || (*(char *)(piVar9[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar9[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar9 + 0x30) = 1;
                *(undefined1 *)(piVar9 + 0xc) = 0;
                FUN_00a2ceb0(param_1);
                piVar9 = (int *)piVar8[2];
              }
              *(char *)(piVar9 + 0xc) = (char)piVar8[0xc];
              *(undefined1 *)(piVar8 + 0xc) = 1;
              *(undefined1 *)(piVar9[2] + 0x30) = 1;
              FUN_00a2ce50(param_1);
              break;
            }
LAB_00a2cd47:
            *(undefined1 *)(piVar9 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar9[0xc] == '\0') {
            *(undefined1 *)(piVar9 + 0xc) = 1;
            *(undefined1 *)(piVar8 + 0xc) = 0;
            FUN_00a2ceb0(param_1);
            piVar9 = (int *)*piVar8;
          }
          if (*(char *)((int)piVar9 + 0x31) == '\0') {
            if ((*(char *)(piVar9[2] + 0x30) == '\x01') && (*(char *)(*piVar9 + 0x30) == '\x01'))
            goto LAB_00a2cd47;
            if (*(char *)(*piVar9 + 0x30) == '\x01') {
              *(undefined1 *)(piVar9[2] + 0x30) = 1;
              *(undefined1 *)(piVar9 + 0xc) = 0;
              FUN_00a2ce50(param_1);
              piVar9 = (int *)*piVar8;
            }
            *(char *)(piVar9 + 0xc) = (char)piVar8[0xc];
            *(undefined1 *)(piVar8 + 0xc) = 1;
            *(undefined1 *)(*piVar9 + 0x30) = 1;
            FUN_00a2ceb0(param_1);
            break;
          }
        }
        piVar9 = (int *)piVar8[1];
        piVar10 = piVar8;
      } while (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar10 + 0xc) = 1;
  }
  if (0xf < (uint)piVar6[8]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar6[3]);
  }
  piVar6[8] = 0xf;
  piVar6[7] = 0;
  *(undefined1 *)(piVar6 + 3) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar6);
}

