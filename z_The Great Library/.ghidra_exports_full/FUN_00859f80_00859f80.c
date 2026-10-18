// FUN_00859f80 @ 00859f80 body=[[00859f80, 00859fee] [00859ff5, 00859ffd]]


void FUN_00859f80(code *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  
  iVar4 = in_EAX * 0x10;
  piVar1 = (int *)(&DAT_01318b20)[in_EAX * 4];
  while( true ) {
    do {
      while( true ) {
        piVar3 = piVar1;
        if (piVar3 == (int *)0x0) {
          return;
        }
        if (*piVar3 == 0) break;
        (*param_1)(param_2,param_3);
        piVar1 = (int *)piVar3[2];
      }
      piVar1 = (int *)piVar3[2];
    } while (piVar3 == (int *)0x0);
    if ((&DAT_01318b2c)[iVar4] == '\0') break;
    *(undefined1 *)(piVar3 + 3) = 1;
  }
  iVar2 = piVar3[1];
  if (iVar2 != 0) {
    *(int **)(iVar2 + 8) = piVar1;
  }
  if (piVar1 != (int *)0x0) {
    piVar1[1] = iVar2;
  }
  if (piVar3 == (int *)(&DAT_01318b20)[in_EAX * 4]) {
    (&DAT_01318b20)[in_EAX * 4] = piVar1;
  }
  if (piVar3 == *(int **)(&DAT_01318b24 + iVar4)) {
    *(int *)(&DAT_01318b24 + iVar4) = iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3);
}

