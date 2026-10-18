// FUN_0084aa80 @ 0084aa80 body=[[0084aa80, 0084ab28] [0084ab30, 0084ab5b] [0084ab65, 0084ab89] [0084ab93, 0084ac1a] [0084ac24, 0084ac46]]


void FUN_0084aa80(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  
  for (piVar4 = DAT_01318c50; piVar3 = DAT_01318c40, piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]
      ) {
    if ((int *)*piVar4 == in_ECX) {
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar3 = DAT_01318c40;
      }
      break;
    }
  }
  do {
    piVar4 = DAT_01318c80;
    if (piVar3 == (int *)0x0) break;
    if ((int *)*piVar3 == in_ECX) {
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
        piVar4 = DAT_01318c80;
      }
      break;
    }
    piVar3 = (int *)piVar3[2];
  } while( true );
joined_r0x0084aacc:
  piVar3 = DAT_01318c70;
  if (piVar4 == (int *)0x0) goto joined_r0x0084aaea;
  if ((int *)*piVar4 == in_ECX) {
    if (piVar4 != (int *)0x0) {
      *piVar4 = 0;
      piVar3 = DAT_01318c70;
    }
    goto joined_r0x0084aaea;
  }
  piVar4 = (int *)piVar4[2];
  goto joined_r0x0084aacc;
joined_r0x0084aaea:
  if (piVar3 == (int *)0x0) {
LAB_0084ab03:
    FUN_00825fd0();
    piVar4 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0x7b4);
    while (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      piVar4 = (int *)piVar4[2];
      *(undefined4 *)(iVar1 + 0x144) = 0;
    }
    piVar4 = (int *)(**(code **)(*in_ECX + 0x1a4))();
    if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar4);
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4 = (int *)(**(code **)(*in_ECX + 0x1b4))();
    if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar4);
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4 = (int *)in_ECX[0x85];
    in_ECX[0x72] = 0;
    in_ECX[0x76] = 0;
    in_ECX[0x73] = 0;
    in_ECX[0x74] = 0;
    in_ECX[0x75] = 0;
    do {
      if (piVar4 == (int *)0x0) {
        return;
      }
      if (piVar4 != (int *)0x0) {
        if ((char)in_ECX[0x88] == '\0') {
          iVar1 = piVar4[1];
          iVar2 = piVar4[2];
          if (iVar1 != 0) {
            *(int *)(iVar1 + 8) = iVar2;
          }
          if (iVar2 != 0) {
            *(int *)(iVar2 + 4) = iVar1;
          }
          if (piVar4 == (int *)in_ECX[0x85]) {
            in_ECX[0x85] = iVar2;
          }
          if (piVar4 == (int *)in_ECX[0x86]) {
            in_ECX[0x86] = iVar1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar4);
        }
        *(undefined1 *)(piVar4 + 3) = 1;
      }
      if ((char)((int *)*piVar4)[0xf] != '\0') {
        (**(code **)(*(int *)*piVar4 + 0xd4))();
      }
      piVar4 = (int *)in_ECX[0x85];
    } while( true );
  }
  if ((int *)*piVar3 == in_ECX) {
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
    }
    goto LAB_0084ab03;
  }
  piVar3 = (int *)piVar3[2];
  goto joined_r0x0084aaea;
}

