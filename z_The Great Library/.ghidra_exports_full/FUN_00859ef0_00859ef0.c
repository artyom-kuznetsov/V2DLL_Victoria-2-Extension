// FUN_00859ef0 @ 00859ef0 body=[[00859ef0, 00859f62] [00859f69, 00859f71]]


void FUN_00859ef0(code *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_EAX;
  int iVar5;
  
  if (*(int *)(param_2 + 0x144) != 0) {
    (*param_1)(param_2);
  }
  iVar5 = in_EAX * 0x10;
  piVar1 = &DAT_01318b20 + in_EAX * 4;
  piVar2 = (int *)*piVar1;
  while( true ) {
    do {
      while( true ) {
        piVar4 = piVar2;
        if (piVar4 == (int *)0x0) {
          return;
        }
        if (*piVar4 == 0) break;
        (*param_1)(param_2);
        piVar2 = (int *)piVar4[2];
      }
      piVar2 = (int *)piVar4[2];
    } while (piVar4 == (int *)0x0);
    if ((&DAT_01318b2c)[iVar5] == '\0') break;
    *(undefined1 *)(piVar4 + 3) = 1;
  }
  iVar3 = piVar4[1];
  if (iVar3 != 0) {
    *(int **)(iVar3 + 8) = piVar2;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[1] = iVar3;
  }
  if (piVar4 == (int *)*piVar1) {
    *piVar1 = (int)piVar2;
  }
  if (piVar4 == *(int **)(&DAT_01318b24 + iVar5)) {
    *(int *)(&DAT_01318b24 + iVar5) = iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar4);
}

