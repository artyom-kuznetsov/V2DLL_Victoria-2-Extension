// FUN_0084aca0 @ 0084aca0  (requested 0084ACA0, first bytes: 55 8B EC 83 EC 10 8B 0D)


void FUN_0084aca0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) + 0x7b4);
joined_r0x0084acc9:
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      cVar6 = FUN_0084ac50();
    } while (cVar6 != '\0');
    cVar6 = (**(code **)(*piVar2 + 0x38))();
    if (cVar6 != '\0') {
      if (((int *)piVar2[0x51] == (int *)0x0) || ((int *)piVar2[0x51] == param_1)) {
        bVar5 = false;
        iVar7 = (**(code **)(*piVar2 + 0x2c))();
        if ((0 < *(int *)(iVar7 + 0x1b0)) &&
           (piVar8 = (int *)param_1[0x85], (int *)param_1[0x85] != (int *)0x0)) {
          do {
            piVar3 = (int *)piVar8[2];
            piVar8 = (int *)*piVar8;
            iVar7 = (**(code **)(*piVar2 + 0x2c))();
            if (*(int *)(iVar7 + 0x1b0) == piVar8[0x37]) {
              iVar7 = *piVar8;
              bVar5 = true;
              uVar9 = (**(code **)(*piVar2 + 0x2c))();
              (**(code **)(iVar7 + 0x1a8))(uVar9);
            }
            piVar8 = piVar3;
          } while (piVar3 != (int *)0x0);
          if (bVar5) goto joined_r0x0084acc9;
        }
        if ((int *)piVar2[0x51] != param_1) {
          iVar7 = *param_1;
          uVar9 = (**(code **)(*piVar2 + 0x2c))();
          (**(code **)(iVar7 + 0x1a8))(uVar9);
        }
      }
      goto joined_r0x0084acc9;
    }
    cVar6 = (**(code **)(*piVar2 + 0x3c))();
  } while (cVar6 == '\0');
  piVar8 = (int *)piVar2[0x51];
  if ((piVar8 == (int *)0x0) || (piVar8 == param_1)) {
    iVar7 = (**(code **)(*piVar2 + 0x30))();
    if (0 < *(int *)(iVar7 + 0x1ac)) {
      iVar7 = (**(code **)(*piVar2 + 0x30))();
      piVar8 = (int *)param_1[0x85];
      piVar3 = (int *)**(undefined4 **)(iVar7 + 0x1a4);
      if (piVar8 != (int *)0x0) {
        while( true ) {
          piVar4 = (int *)*piVar8;
          piVar8 = (int *)piVar8[2];
          iVar7 = (**(code **)(*piVar3 + 0x2c))();
          if (*(int *)(iVar7 + 0x1b0) == piVar4[0x37]) break;
          if (piVar8 == (int *)0x0) goto joined_r0x0084acc9;
        }
        iVar7 = *piVar4;
        uVar9 = (**(code **)(*piVar2 + 0x30))();
        (**(code **)(iVar7 + 0x1b8))(uVar9);
        (**(code **)(*piVar3 + 0x2c))();
        FUN_0082c4d0();
        iVar7 = (**(code **)(*piVar2 + 0x30))();
        piVar2 = *(int **)(iVar7 + 0x1a4);
        while (piVar2 != (int *)0x0) {
          piVar8 = (int *)*piVar2;
          piVar2 = (int *)piVar2[2];
          if ((int *)piVar8[0x51] != piVar4) {
            iVar7 = *piVar4;
            uVar9 = (**(code **)(*piVar8 + 0x2c))();
            (**(code **)(iVar7 + 0x1a8))(uVar9);
          }
        }
      }
      goto joined_r0x0084acc9;
    }
  }
  else {
    if (piVar8 != (int *)param_1[0x84]) goto joined_r0x0084acc9;
    puVar10 = (undefined4 *)(**(code **)(*(int *)param_1[0x84] + 0x1b4))();
    for (puVar10 = (undefined4 *)*puVar10; puVar10 != (undefined4 *)0x0;
        puVar10 = (undefined4 *)puVar10[2]) {
      if ((int *)*puVar10 == piVar2) goto joined_r0x0084acc9;
    }
  }
  iVar7 = *(int *)param_1[0x84];
  uVar9 = (**(code **)(*piVar2 + 0x30))();
  (**(code **)(iVar7 + 0x1b8))(uVar9);
  goto joined_r0x0084acc9;
}

