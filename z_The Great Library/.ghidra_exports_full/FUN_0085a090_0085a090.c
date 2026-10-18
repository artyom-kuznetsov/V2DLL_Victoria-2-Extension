// FUN_0085a090 @ 0085a090 body=[[0085a090, 0085a100] [0085a10a, 0085a111]]


void FUN_0085a090(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = DAT_01318c80;
  while( true ) {
    do {
      while( true ) {
        piVar3 = piVar1;
        if (piVar3 == (int *)0x0) {
          return;
        }
        if (*piVar3 == 0) break;
        FUN_004c0fa0(param_1);
        piVar1 = (int *)piVar3[2];
      }
      piVar1 = (int *)piVar3[2];
    } while (piVar3 == (int *)0x0);
    if (DAT_01318c8c == '\0') break;
    *(undefined1 *)(piVar3 + 3) = 1;
  }
  piVar2 = (int *)piVar3[1];
  if (piVar2 != (int *)0x0) {
    piVar2[2] = (int)piVar1;
  }
  if (piVar1 != (int *)0x0) {
    piVar1[1] = (int)piVar2;
  }
  if (piVar3 == DAT_01318c80) {
    DAT_01318c80 = piVar1;
  }
  if (piVar3 == DAT_01318c84) {
    DAT_01318c84 = piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3);
}

