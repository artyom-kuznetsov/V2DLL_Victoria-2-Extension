// FUN_009d3a00 @ 009d3a00 body=[[009d3a00, 009d3cd9] [009d3cdd, 009d3cf4]]


void FUN_009d3a00(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  
  piVar3 = param_3;
  if (*(char *)((int)param_3 + 0x129) != '\0') {
    piVar3 = (int *)FUN_00aad3fa("invalid map/set<T> iterator");
  }
  FUN_009d3e90();
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x129) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x129) == '\0') && (piVar7 = (int *)param_3[2], param_3 != piVar3)) {
      piVar6[1] = (int)param_3;
      *param_3 = *piVar3;
      piVar6 = param_3;
      if (param_3 != (int *)piVar3[2]) {
        piVar6 = (int *)param_3[1];
        if (*(char *)((int)piVar7 + 0x129) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        param_3[2] = piVar3[2];
        *(int **)(piVar3[2] + 4) = param_3;
      }
      if (*(int **)(*(int *)(param_1 + 4) + 4) == piVar3) {
        *(int **)(*(int *)(param_1 + 4) + 4) = param_3;
      }
      else {
        puVar1 = (undefined4 *)piVar3[1];
        if ((int *)*puVar1 == piVar3) {
          *puVar1 = param_3;
        }
        else {
          puVar1[2] = param_3;
        }
      }
      param_3[1] = piVar3[1];
      iVar2 = param_3[0x4a];
      *(char *)(param_3 + 0x4a) = (char)piVar3[0x4a];
      *(char *)(piVar3 + 0x4a) = (char)iVar2;
      goto LAB_009d3b47;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x129) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == piVar3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((int *)*puVar1 == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x129) == '\0') {
      piVar4 = (int *)FUN_009d3e70();
    }
    *puVar1 = piVar4;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x129) == '\0') {
      uVar5 = FUN_009d3e50();
      *(undefined4 *)(iVar2 + 8) = uVar5;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
LAB_009d3b47:
  if ((char)piVar3[0x4a] == '\x01') {
    if (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x4a] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x4a] == '\0') {
            *(undefined1 *)(piVar6 + 0x4a) = 1;
            *(undefined1 *)(piVar4 + 0x4a) = 0;
            FUN_009d3d90(param_1);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x129) == '\0') {
            if ((*(char *)(*piVar6 + 0x128) != '\x01') || (*(char *)(piVar6[2] + 0x128) != '\x01'))
            {
              if (*(char *)(piVar6[2] + 0x128) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x128) = 1;
                *(undefined1 *)(piVar6 + 0x4a) = 0;
                FUN_009d3df0(param_1);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x4a) = (char)piVar4[0x4a];
              *(undefined1 *)(piVar4 + 0x4a) = 1;
              *(undefined1 *)(piVar6[2] + 0x128) = 1;
              FUN_009d3d90(param_1);
              break;
            }
LAB_009d3c56:
            *(undefined1 *)(piVar6 + 0x4a) = 0;
          }
        }
        else {
          if ((char)piVar6[0x4a] == '\0') {
            *(undefined1 *)(piVar6 + 0x4a) = 1;
            *(undefined1 *)(piVar4 + 0x4a) = 0;
            FUN_009d3df0(param_1);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x129) == '\0') {
            if ((*(char *)(piVar6[2] + 0x128) == '\x01') && (*(char *)(*piVar6 + 0x128) == '\x01'))
            goto LAB_009d3c56;
            if (*(char *)(*piVar6 + 0x128) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x128) = 1;
              *(undefined1 *)(piVar6 + 0x4a) = 0;
              FUN_009d3d90(param_1);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x4a) = (char)piVar4[0x4a];
            *(undefined1 *)(piVar4 + 0x4a) = 1;
            *(undefined1 *)(*piVar6 + 0x128) = 1;
            FUN_009d3df0(param_1);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 0x4a) = 1;
  }
  FUN_009d1130();
  if ((uint)piVar3[8] < 0x10) {
    piVar3[8] = 0xf;
    piVar3[7] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3[3]);
}

