// FUN_0099a9a0 @ 0099a9a0 body=[[0099a9a0, 0099a9c8] [0099a9d2, 0099aa18] [0099aa22, 0099acce] [0099acd0, 0099ae01]]


int * FUN_0099a9a0(int param_1,float *param_2)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined1 local_38 [12];
  float local_2c;
  float fStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  float local_14;
  float local_10;
  int *local_c;
  int local_8;
  
  piVar6 = (int *)(param_1 + 0x28);
  local_18 = piVar6;
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x28));
  }
  *piVar6 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  for (piVar4 = *(int **)(param_1 + 0x18); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 0x24))(1);
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(float *)(param_1 + 0x38) = *param_2;
  *(float *)(param_1 + 0x3c) = param_2[1];
  local_8 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    local_c = *(int **)(param_1 + 0x108);
    local_14 = 100000.0;
    if (local_c != (int *)0x0) {
      do {
        piVar4 = (int *)*local_c;
        iVar5 = *piVar4;
        if (((((float)iVar5 <= *param_2) && (*param_2 <= (float)(piVar4[2] + iVar5))) &&
            ((float)piVar4[1] <= param_2[1])) && (param_2[1] <= (float)(piVar4[3] + iVar5))) {
          if (piVar4 == (int *)0x0) {
            return piVar6;
          }
          cVar2 = (**(code **)(piVar4[7] + 0x3c))();
          if (cVar2 != '\0') {
            local_20 = (**(code **)(piVar4[7] + 0x16c))();
            pfVar3 = (float *)(**(code **)(piVar4[7] + 0x174))();
            local_2c = ((*param_2 * 2.0) / (float)piVar4[2] - 1.0) / *pfVar3;
            fStack_28 = -(((param_2[1] * 2.0) / (float)piVar4[3] - 1.0) / pfVar3[5]);
            local_24 = DAT_00f092fc;
            if ((char)piVar4[6] != '\0') {
              piVar6 = local_18;
              for (iVar5 = *(int *)(param_1 + 0xe8); local_18 = piVar6, iVar5 != 0;
                  iVar5 = *(int *)(iVar5 + 0x10)) {
                piVar6 = *(int **)(iVar5 + 8);
                cVar2 = (**(code **)(*piVar6 + 0x3c))();
                if ((cVar2 != '\0') &&
                   (cVar2 = (**(code **)(*piVar6 + 0x140))(piVar4), cVar2 != '\0')) {
                  local_1c = CONCAT31(local_1c._1_3_,(char)piVar4[0xc1]);
                  fVar9 = (float10)(**(code **)(*piVar6 + 0x50))
                                             (*param_2,param_2[1],local_20,local_2c,fStack_28,
                                              local_24,local_38,local_1c);
                  local_10 = (float)fVar9;
                  if ((1.0 < local_10) && (local_10 < local_14)) {
                    local_14 = local_10;
                    local_8 = iVar5;
                  }
                }
                piVar6 = local_18;
              }
            }
            if (local_8 != 0) {
              iVar5 = piVar6[1];
              piVar4 = (int *)FUN_00aae9af(0x10);
              if (piVar4 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              else {
                *piVar4 = local_8;
                piVar4[1] = iVar5;
                piVar4[2] = 0;
                *(undefined1 *)(piVar4 + 3) = 0;
              }
              iVar1 = piVar6[2];
              piVar6[1] = (int)piVar4;
              piVar6[2] = iVar1 + 1;
              if (iVar1 == 0) {
                *piVar6 = (int)piVar4;
              }
              else {
                *(int **)(iVar5 + 8) = piVar4;
              }
            }
          }
        }
        local_c = (int *)local_c[2];
      } while (local_c != (int *)0x0);
      local_c = (int *)0x0;
    }
    for (iVar5 = *(int *)(param_1 + 200); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
      if ((*(char *)((int)*(int **)(iVar5 + 4) + 0x4f) != '\0') &&
         (cVar2 = (**(code **)(**(int **)(iVar5 + 4) + 0xc))(param_2), cVar2 != '\0')) {
        iVar1 = piVar6[1];
        piVar4 = (int *)FUN_00aae9af(0x10);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = iVar5;
          piVar4[1] = iVar1;
          piVar4[2] = 0;
          *(undefined1 *)(piVar4 + 3) = 0;
        }
        iVar8 = piVar6[2];
        piVar6[1] = (int)piVar4;
        piVar6[2] = iVar8 + 1;
        if (iVar8 == 0) {
          *piVar6 = (int)piVar4;
        }
        else {
          *(int **)(iVar1 + 8) = piVar4;
        }
      }
    }
    iVar5 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
joined_r0x0099ad3b:
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      iVar1 = (*(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd8)) / 0xc;
      iVar8 = 0;
      if (0 < iVar1) {
        iVar7 = *(int *)(param_1 + 0xd8);
        do {
          if ((*(int *)(*(int *)(param_1 + 0x40) + iVar5 * 4) == *(int *)(iVar7 + 8)) &&
             (*(char *)(*(int *)(iVar7 + 4) + 0x4f) != '\0')) {
            iVar1 = piVar6[1];
            piVar4 = (int *)FUN_00aae9af(0x10);
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              *piVar4 = iVar7;
              piVar4[1] = iVar1;
              piVar4[2] = 0;
              *(undefined1 *)(piVar4 + 3) = 0;
            }
            iVar8 = piVar6[2];
            piVar6[1] = (int)piVar4;
            piVar6[2] = iVar8 + 1;
            if (iVar8 == 0) {
              *piVar6 = (int)piVar4;
            }
            else {
              *(int **)(iVar1 + 8) = piVar4;
            }
            break;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0xc;
        } while (iVar8 < iVar1);
      }
      goto joined_r0x0099ad3b;
    }
    iVar5 = *(int *)(param_1 + 0x30);
    for (piVar4 = *(int **)(param_1 + 0x2c); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      iVar5 = iVar5 + -1;
      (**(code **)**(undefined4 **)(*piVar4 + 4))(iVar5);
    }
  }
  return piVar6;
}

