// FUN_0055d1b0 @ 0055d1b0 body=[[0055d1b0, 0055d3fb] [0055d3ff, 0055d41e] [0055d422, 0055d431]]


/* WARNING: Removing unreachable block (ram,0x0055d270) */
/* WARNING: Removing unreachable block (ram,0x0055d280) */
/* WARNING: Removing unreachable block (ram,0x0055d289) */
/* WARNING: Removing unreachable block (ram,0x0055d28c) */
/* WARNING: Removing unreachable block (ram,0x0055d27c) */
/* WARNING: Removing unreachable block (ram,0x0055d29a) */
/* WARNING: Removing unreachable block (ram,0x0055d2aa) */
/* WARNING: Removing unreachable block (ram,0x0055d2b5) */
/* WARNING: Removing unreachable block (ram,0x0055d2b1) */
/* WARNING: Removing unreachable block (ram,0x0055d2a5) */
/* WARNING: Removing unreachable block (ram,0x0055d2b8) */

void FUN_0055d1b0(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (*(char *)((int)param_3 + 0x45) != '\0') {
    FUN_00aad3fa("invalid map/set<T> iterator");
  }
  FUN_0055d540();
  piVar7 = (int *)*param_3;
  if (*(char *)((int)piVar7 + 0x45) == '\0') {
    if (*(char *)(param_3[2] + 0x45) == '\0') {
      piVar7 = (int *)param_3[2];
    }
  }
  else {
    piVar7 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar7 + 0x45) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar6 == param_3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if ((int *)**(undefined4 **)(param_1 + 4) == param_3) {
    piVar5 = piVar6;
    if (*(char *)((int)piVar7 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar7 + 0x45);
      piVar2 = (int *)*piVar7;
      piVar5 = piVar7;
      while (piVar3 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar2 + 0x45);
        piVar5 = piVar3;
      }
    }
    **(undefined4 **)(param_1 + 4) = piVar5;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
    if (*(char *)((int)piVar7 + 0x45) == '\0') {
      uVar4 = FUN_0055d520();
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = uVar4;
    }
    else {
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar6;
    }
  }
  if ((char)param_3[0x11] == '\x01') {
    if (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar5 = piVar6;
        if ((char)piVar7[0x11] != '\x01') break;
        piVar6 = (int *)*piVar5;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar5[2];
          if ((char)piVar6[0x11] == '\0') {
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(piVar5 + 0x11) = 0;
            FUN_0055d460(param_1);
            piVar6 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar6 + 0x45) == '\0') {
            if ((*(char *)(*piVar6 + 0x44) != '\x01') || (*(char *)(piVar6[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x44) = 1;
                *(undefined1 *)(piVar6 + 0x11) = 0;
                FUN_0055d4c0(param_1);
                piVar6 = (int *)piVar5[2];
              }
              *(char *)(piVar6 + 0x11) = (char)piVar5[0x11];
              *(undefined1 *)(piVar5 + 0x11) = 1;
              *(undefined1 *)(piVar6[2] + 0x44) = 1;
              FUN_0055d460(param_1);
              break;
            }
LAB_0055d39c:
            *(undefined1 *)(piVar6 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar6[0x11] == '\0') {
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(piVar5 + 0x11) = 0;
            FUN_0055d4c0(param_1);
            piVar6 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar6 + 0x45) == '\0') {
            if ((*(char *)(piVar6[2] + 0x44) == '\x01') && (*(char *)(*piVar6 + 0x44) == '\x01'))
            goto LAB_0055d39c;
            if (*(char *)(*piVar6 + 0x44) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x44) = 1;
              *(undefined1 *)(piVar6 + 0x11) = 0;
              FUN_0055d460(param_1);
              piVar6 = (int *)*piVar5;
            }
            *(char *)(piVar6 + 0x11) = (char)piVar5[0x11];
            *(undefined1 *)(piVar5 + 0x11) = 1;
            *(undefined1 *)(*piVar6 + 0x44) = 1;
            FUN_0055d4c0(param_1);
            break;
          }
        }
        piVar6 = (int *)piVar5[1];
        piVar7 = piVar5;
      } while (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 0x11) = 1;
  }
  if (0xf < (uint)param_3[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3[10]);
  }
  param_3[0xf] = 0xf;
  param_3[0xe] = 0;
  *(undefined1 *)(param_3 + 10) = 0;
  if (0xf < (uint)param_3[8]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3[3]);
  }
  param_3[8] = 0xf;
  param_3[7] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_3);
}

