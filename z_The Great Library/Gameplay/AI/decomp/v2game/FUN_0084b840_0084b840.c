// FUN_0084b840 @ 0084b840 body=[[0084b840, 0084b878] [0084b880, 0084ba7e] [0084ba80, 0084bd59]]


int FUN_0084b840(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float local_10;
  float local_c;
  float local_8;
  
  local_c = 0.0;
  local_10 = 0.0;
  if (*(int *)(param_2 + 0xe8) == 0) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(param_2 + 0xe8) + 4);
  while (piVar1 != (int *)0x0) {
    piVar8 = *(int **)(*piVar1 + 0xec);
    piVar1 = (int *)piVar1[2];
    while (piVar8 != (int *)0x0) {
      piVar2 = (int *)*piVar8;
      piVar8 = (int *)piVar8[2];
      cVar5 = (**(code **)(*piVar2 + 0x38))();
      if (cVar5 != '\0') {
        fVar9 = 0.0;
        iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
        if ((piVar2[0x31] != *(int *)(iVar7 + 0x20)) &&
           (((*(int *)(*(int *)(*(int *)(iVar7 + 0xbe8) + piVar2[0x31] * 4) + 0x34) != 0 ||
             ((((char)piVar2[0x30] == 'R' && (*(char *)((int)piVar2 + 0xc1) == 'E')) &&
              (*(char *)((int)piVar2 + 0xc2) == 'B')))) ||
            (((*(char *)(iVar7 + 0x1c) == 'R' && (*(char *)(iVar7 + 0x1d) == 'E')) &&
             (*(char *)(iVar7 + 0x1e) == 'B')))))) {
          fVar9 = (float)piVar2[0x10] + 0.0;
        }
        if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(param_1 + 0x38) * 4) + 0xbe8) +
                             piVar2[0x31] * 4) + 0x34) != 0) {
          local_c = fVar9 + local_c;
        }
        if ((float)piVar2[0x10] <= fVar9) {
          local_10 = fVar9 + local_10;
        }
      }
    }
  }
  fVar9 = 0.0;
  puVar4 = *(undefined4 **)(*(int *)(param_2 + 0xe8) + 0x14);
  do {
    do {
      if (puVar4 == (undefined4 *)0x0) {
        iVar7 = (int)ROUND(local_10);
        if ((int)ROUND(local_10) < (int)ROUND(local_c - fVar9)) {
          iVar7 = (int)ROUND(local_c - fVar9);
        }
        if (iVar7 - 1U < 2) {
          return 3;
        }
        if (iVar7 < 1) {
          iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
          if ((*(int *)(param_2 + 300) != *(int *)(iVar6 + 0x20)) &&
             ((*(int *)(*(int *)(*(int *)(iVar6 + 0xbe8) + *(int *)(param_2 + 300) * 4) + 0x34) != 0
              || ((((*(char *)(param_2 + 0x128) == 'R' && (*(char *)(param_2 + 0x129) == 'E')) &&
                   (*(char *)(param_2 + 0x12a) == 'B')) ||
                  (((*(char *)(iVar6 + 0x1c) == 'R' && (*(char *)(iVar6 + 0x1d) == 'E')) &&
                   (*(char *)(iVar6 + 0x1e) == 'B')))))))) {
            iVar7 = 1;
          }
        }
        return iVar7;
      }
      puVar3 = (undefined4 *)puVar4[2];
      iVar7 = *(int *)*puVar4;
      if (*(int *)(iVar7 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(**(int **)(iVar7 + 4) + 0x110);
        if ((iVar6 == 0) ||
           (iVar6 = *(int *)(iVar6 + 0x10),
           (int)(*(int *)(iVar6 + 0x38) - *(int *)(iVar6 + 0x34) & 0xfffffff8U) < 1)) {
          iVar6 = **(int **)(iVar7 + 4) + 0x130;
        }
        else {
          iVar6 = *(int *)(iVar6 + 0x34);
        }
        iVar6 = *(int *)(iVar6 + 4);
      }
      iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar6 * 4);
      puVar4 = puVar3;
    } while (((int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) & 0xfffffffcU) < 1) ||
            (cVar5 = FUN_0051b040(*(undefined4 *)
                                   (*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4)),
            cVar5 == '\0'));
    piVar1 = *(int **)(iVar7 + 4);
joined_r0x0084ba77:
  } while (piVar1 == (int *)0x0);
  piVar8 = (int *)piVar1[2];
  iVar7 = *piVar1;
  piVar1 = *(int **)(iVar7 + 0xec);
  local_8 = 0.0;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar5 = (**(code **)(*piVar2 + 0x38))();
    if (cVar5 != '\0') {
      if (piVar2[0x31] == *(int *)(param_1 + 0x38)) {
        local_8 = (float)piVar2[0x26] + local_8;
      }
      else {
        iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar2[0x31] * 4);
        if ((*(int *)(param_2 + 0x134) == *(int *)(iVar6 + 0x20)) ||
           (((*(int *)(*(int *)(*(int *)(iVar6 + 0xbe8) + *(int *)(param_2 + 0x134) * 4) + 0x34) ==
              0 && (((*(char *)(param_2 + 0x130) != 'R' || (*(char *)(param_2 + 0x131) != 'E')) ||
                    (*(char *)(param_2 + 0x132) != 'B')))) &&
            (((*(char *)(iVar6 + 0x1c) != 'R' || (*(char *)(iVar6 + 0x1d) != 'E')) ||
             (*(char *)(iVar6 + 0x1e) != 'B')))))) {
          if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_1 + 0x38) * 4) + 0xbe8) +
                               piVar2[0x31] * 4) + 0x34) != 0) {
            local_c = (float)piVar2[0x10] / 10.0 + local_c;
          }
        }
        else {
          local_8 = (float)piVar2[0x10] + local_8;
        }
      }
    }
  }
  iVar7 = *(int *)(iVar7 + 0x5c);
  iVar6 = 0;
  piVar1 = piVar8;
  if (0 < (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24) {
    piVar8 = *(int **)(iVar7 + 200);
    do {
      if ((*piVar8 != 4) &&
         (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar8[1] * 4) + 0xe8) ==
          *(int *)(param_2 + 0xe8))) {
        fVar9 = local_8 * 2.0 + fVar9;
        break;
      }
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 9;
    } while (iVar6 < (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24);
  }
  goto joined_r0x0084ba77;
}

