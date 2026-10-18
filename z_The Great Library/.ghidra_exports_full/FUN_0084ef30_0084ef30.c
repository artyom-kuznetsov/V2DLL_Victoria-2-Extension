// FUN_0084ef30 @ 0084ef30 body=[[0084ef30, 0084ef5b] [0084ef60, 0084f089] [0084f095, 0084f126] [0084f133, 0084f14b] [0084f14f, 0084f161]]


void FUN_0084ef30(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char cVar8;
  int in_EAX;
  code *pcVar9;
  
  *(undefined1 *)(in_EAX + 0x234 + param_1) = 0;
  iVar1 = param_1 + in_EAX * 0x10;
  piVar2 = *(int **)(iVar1 + 0xbc);
  do {
    do {
      do {
        if (piVar2 == (int *)0x0) {
          piVar2 = *(int **)(iVar1 + 0xbc);
          do {
            piVar3 = piVar2;
            if (piVar3 == (int *)0x0) {
              return;
            }
            puVar6 = (undefined4 *)*piVar3;
            piVar2 = (int *)piVar3[2];
          } while ((puVar6[2] != 0) && (cVar8 = (**(code **)*puVar6)(), cVar8 == '\0'));
          if (*(char *)(iVar1 + 200) != '\0') {
            *(undefined1 *)(piVar3 + 3) = 1;
            if (puVar6[2] != 0) {
              *(undefined4 *)(puVar6[2] + 0x74 + puVar6[1] * 4) = 0;
            }
            puVar6[2] = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puVar6);
          }
          iVar5 = piVar3[1];
          iVar7 = piVar3[2];
          if (iVar5 != 0) {
            *(int *)(iVar5 + 8) = iVar7;
          }
          if (iVar7 != 0) {
            *(int *)(iVar7 + 4) = iVar5;
          }
          if (piVar3 == *(int **)(iVar1 + 0xbc)) {
            *(int *)(iVar1 + 0xbc) = iVar7;
          }
          if (piVar3 == *(int **)(iVar1 + 0xc0)) {
            *(int *)(iVar1 + 0xc0) = iVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar3);
        }
        piVar3 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar8 = (**(code **)*piVar3)();
      } while ((cVar8 != '\0') || (piVar3[2] == 0));
      cVar8 = (**(code **)(*piVar3 + 4))();
      if (cVar8 == '\0') {
        pcVar9 = *(code **)(*piVar3 + 0x10);
      }
      else {
        pcVar9 = *(code **)(*piVar3 + 0x14);
      }
      (*pcVar9)(param_1);
      cVar8 = (**(code **)(*piVar3 + 4))();
    } while (((cVar8 != '\0') || (cVar8 = (**(code **)*piVar3)(), cVar8 != '\0')) ||
            (piVar3[2] == 0));
    piVar4 = *(int **)(iVar1 + 0x13c);
    *(undefined1 *)(param_1 + 0x1bc) = 1;
    while( true ) {
      do {
        if (((piVar4 == (int *)0x0) || (cVar8 = (**(code **)*piVar3)(), cVar8 != '\0')) ||
           (piVar3[2] == 0)) goto LAB_0084f02e;
        iVar5 = *piVar4;
        piVar4 = (int *)piVar4[2];
      } while (iVar5 == 0);
      if (*(float *)(*(int *)(piVar3[2] + 0x68) + 0x6c) <=
          *(float *)(*(int *)(iVar5 + 0x68) + 0x6c) + 0.1) break;
      (**(code **)(*piVar3 + 0x10))(iVar5);
    }
LAB_0084f02e:
    piVar3 = *(int **)(iVar1 + 0x13c);
    while (piVar4 = piVar3, piVar4 != (int *)0x0) {
      if (*piVar4 == 0) {
        piVar3 = (int *)piVar4[2];
        if (piVar4 != (int *)0x0) {
          if (*(char *)(iVar1 + 0x148) == '\0') {
            iVar5 = piVar4[1];
            if (iVar5 != 0) {
              *(int **)(iVar5 + 8) = piVar3;
            }
            if (piVar3 != (int *)0x0) {
              piVar3[1] = iVar5;
            }
            if (piVar4 == *(int **)(iVar1 + 0x13c)) {
              *(int **)(iVar1 + 0x13c) = piVar3;
            }
            if (piVar4 == *(int **)(iVar1 + 0x140)) {
              *(int *)(iVar1 + 0x140) = iVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar4);
          }
          *(undefined1 *)(piVar4 + 3) = 1;
        }
      }
      else {
        piVar3 = (int *)piVar4[2];
      }
    }
    *(undefined1 *)(param_1 + 0x1bc) = 0;
  } while( true );
}

