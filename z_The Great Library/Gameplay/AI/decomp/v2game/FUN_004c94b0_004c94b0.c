// FUN_004c94b0 @ 004c94b0 body=[[004c94b0, 004c9551]]


void FUN_004c94b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_EDX;
  
  iVar2 = 0;
  piVar4 = (int *)(in_EDX + 0x54);
  do {
    if ((piVar4[1] - *piVar4 & 0xfffffffcU) != 0) {
      piVar4 = *(int **)(in_EDX + 0x58 + *(char *)(param_1 + 0xc) * 0x10);
      piVar1 = *(int **)(in_EDX + 0x54 + *(char *)(param_1 + 0xc) * 0x10);
      for (piVar3 = piVar1; (piVar3 != piVar4 && (*piVar3 != param_1)); piVar3 = piVar3 + 1) {
      }
      if ((piVar1 <= piVar3) && (piVar3 < piVar4)) {
        piVar3 = (int *)*piVar3;
        (**(code **)(*piVar3 + 0x14))();
        if (((undefined4 *)piVar3[5] != (undefined4 *)0x0) && (*(char *)((int)piVar3 + 0xd) != '\0')
           ) {
          (*(code *)**(undefined4 **)piVar3[5])(piVar3,0);
        }
        *(undefined1 *)((int)piVar3 + 0xd) = 0;
        piVar3[5] = 0;
        if ((int *)piVar3[4] != (int *)0x0) {
          (**(code **)(*(int *)piVar3[4] + 0x24))();
        }
        FUN_004c99c0(&param_1);
      }
      return;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 4;
  } while (iVar2 < 5);
  return;
}

