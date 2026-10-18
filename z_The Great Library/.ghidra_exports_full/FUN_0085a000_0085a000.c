// FUN_0085a000 @ 0085a000 body=[[0085a000, 0085a070] [0085a07a, 0085a081]]


void FUN_0085a000(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = DAT_01318c70;
  while( true ) {
    do {
      while( true ) {
        piVar3 = piVar1;
        if (piVar3 == (int *)0x0) {
          return;
        }
        if (*piVar3 == 0) break;
        FUN_004c0fd0(param_1);
        piVar1 = (int *)piVar3[2];
      }
      piVar1 = (int *)piVar3[2];
    } while (piVar3 == (int *)0x0);
    if (DAT_01318c7c == '\0') break;
    *(undefined1 *)(piVar3 + 3) = 1;
  }
  piVar2 = (int *)piVar3[1];
  if (piVar2 != (int *)0x0) {
    piVar2[2] = (int)piVar1;
  }
  if (piVar1 != (int *)0x0) {
    piVar1[1] = (int)piVar2;
  }
  if (piVar3 == DAT_01318c70) {
    DAT_01318c70 = piVar1;
  }
  if (piVar3 == DAT_01318c74) {
    DAT_01318c74 = piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3);
}

