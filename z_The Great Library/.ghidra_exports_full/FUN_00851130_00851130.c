// FUN_00851130 @ 00851130 body=[[00851130, 0085117c] [00851180, 00851436]]


void FUN_00851130(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5
                 ,int param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_6 * 4);
    piVar2 = *(int **)(param_2 + 4);
joined_r0x0085115a:
    if (piVar2 != (int *)0x0) {
      piVar3 = *(int **)(*piVar2 + 0xec);
      piVar2 = (int *)piVar2[2];
joined_r0x00851175:
      do {
        if (piVar3 == (int *)0x0) goto joined_r0x0085115a;
        piVar4 = (int *)*piVar3;
        piVar3 = (int *)piVar3[2];
        cVar7 = (**(code **)(*piVar4 + 0x38))();
        if (cVar7 != '\0') {
          if ((piVar4[0x31] == *(int *)(iVar1 + 0x20)) ||
             (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + piVar4[0x31] * 4) + 0x34) == 0 &&
               ((((char)piVar4[0x30] != 'R' || (*(char *)((int)piVar4 + 0xc1) != 'E')) ||
                (*(char *)((int)piVar4 + 0xc2) != 'B')))) &&
              (((*(char *)(iVar1 + 0x1c) != 'R' || (*(char *)(iVar1 + 0x1d) != 'E')) ||
               (*(char *)(iVar1 + 0x1e) != 'B')))))) {
            if (piVar4[0x31] != *(int *)(param_1 + 0x38)) goto joined_r0x00851175;
            iVar5 = param_4[1];
            piVar8 = (int *)FUN_00aae9af(0x10);
            if (piVar8 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              *piVar8 = (int)piVar4;
              piVar8[1] = iVar5;
              piVar8[2] = 0;
              *(undefined1 *)(piVar8 + 3) = 0;
            }
            iVar6 = param_4[2];
            param_4[1] = piVar8;
            param_4[2] = iVar6 + 1;
            puVar10 = param_4;
            if (iVar6 != 0) {
              *(int **)(iVar5 + 8) = piVar8;
              goto joined_r0x00851175;
            }
          }
          else {
            iVar5 = param_3[1];
            piVar8 = (int *)FUN_00aae9af(0x10);
            if (piVar8 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              *piVar8 = (int)piVar4;
              piVar8[1] = iVar5;
              piVar8[2] = 0;
              *(undefined1 *)(piVar8 + 3) = 0;
            }
            iVar6 = param_3[2];
            param_3[1] = piVar8;
            param_3[2] = iVar6 + 1;
            puVar10 = param_3;
            if (iVar6 != 0) {
              *(int **)(iVar5 + 8) = piVar8;
              goto joined_r0x00851175;
            }
          }
          *puVar10 = piVar8;
        }
      } while( true );
    }
    puVar10 = *(undefined4 **)(param_2 + 0x14);
    while (puVar10 != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)puVar10[2];
      piVar2 = (int *)*puVar10;
      piVar3 = *(int **)(*piVar2 + 4);
      cVar7 = FUN_0051b040(iVar1);
      puVar10 = puVar11;
      if (cVar7 != '\0') {
joined_r0x008512bd:
        if (piVar3 != (int *)0x0) {
          piVar4 = *(int **)(*piVar3 + 0xec);
          piVar3 = (int *)piVar3[2];
joined_r0x008512d8:
          do {
            if (piVar4 == (int *)0x0) goto joined_r0x008512bd;
            piVar8 = (int *)*piVar4;
            piVar4 = (int *)piVar4[2];
            cVar7 = (**(code **)(*piVar8 + 0x38))();
            if (cVar7 != '\0') {
              if ((piVar8[0x31] == *(int *)(iVar1 + 0x20)) ||
                 ((puVar11 = param_3,
                  *(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + piVar8[0x31] * 4) + 0x34) == 0 &&
                  (((((char)piVar8[0x30] != 'R' || (*(char *)((int)piVar8 + 0xc1) != 'E')) ||
                    (*(char *)((int)piVar8 + 0xc2) != 'B')) &&
                   (((*(char *)(iVar1 + 0x1c) != 'R' || (*(char *)(iVar1 + 0x1d) != 'E')) ||
                    (*(char *)(iVar1 + 0x1e) != 'B')))))))) {
                if (piVar8[0x31] != *(int *)(param_1 + 0x38)) goto joined_r0x008512d8;
                puVar11 = param_4;
                if (((int *)piVar8[0x51] != (int *)0x0) &&
                   (cVar7 = (**(code **)(*(int *)piVar8[0x51] + 0xf0))(), cVar7 != '\0')) {
                  piVar9 = (int *)(**(code **)(*(int *)piVar8[0x51] + 0xf4))();
                  cVar7 = (**(code **)(*piVar9 + 0x104))();
                  if ((cVar7 != '\0') &&
                     ((0 < *(int *)(piVar8[0x51] + 0xe0) &&
                      (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                        *(int *)(piVar8[0x51] + 0xe0) * 4) + 0xe8) == *piVar2))))
                  goto joined_r0x008512d8;
                }
              }
              iVar5 = puVar11[1];
              piVar9 = (int *)FUN_00aae9af(0x10);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                *piVar9 = (int)piVar8;
                piVar9[1] = iVar5;
                piVar9[2] = 0;
                *(undefined1 *)(piVar9 + 3) = 0;
              }
              puVar11[1] = piVar9;
              iVar6 = puVar11[2];
              puVar11[2] = iVar6 + 1;
              if (iVar6 == 0) {
                *puVar11 = piVar9;
              }
              else {
                *(int **)(iVar5 + 8) = piVar9;
              }
            }
          } while( true );
        }
      }
    }
  }
  return;
}

