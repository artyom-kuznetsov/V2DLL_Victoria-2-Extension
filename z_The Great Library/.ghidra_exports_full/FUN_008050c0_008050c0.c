// FUN_008050c0 @ 008050c0 body=[[008050c0, 008051f8]]


undefined4 * FUN_008050c0(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00805200(param_3 + -1);
  piVar4 = piVar3 + 1;
  for (; param_2 < piVar3; piVar3 = piVar3 + -1) {
    if ((piVar3[-1] < *piVar3) || (*piVar3 < piVar3[-1])) break;
  }
  piVar5 = piVar4;
  piVar2 = piVar3;
  if (piVar4 < param_3) {
    do {
      piVar5 = piVar4;
      if ((*piVar4 < *piVar3) || (*piVar3 < *piVar4)) break;
      piVar4 = piVar4 + 1;
      piVar5 = piVar4;
    } while (piVar4 < param_3);
  }
joined_r0x00805126:
  do {
    if (param_3 <= piVar4) {
joined_r0x00805150:
      for (; param_2 < piVar3; piVar3 = piVar3 + -1) {
        if (*piVar2 <= piVar3[-1]) {
          if (*piVar2 < piVar3[-1]) break;
          iVar1 = piVar2[-1];
          piVar2 = piVar2 + -1;
          *piVar2 = piVar3[-1];
          piVar3[-1] = iVar1;
        }
      }
      if (piVar3 == param_2) {
        if (piVar4 == param_3) {
          param_1[1] = piVar5;
          *param_1 = piVar2;
          return param_1;
        }
        if (piVar5 != piVar4) {
          iVar1 = *piVar2;
          *piVar2 = *piVar5;
          *piVar5 = iVar1;
        }
        iVar1 = *piVar2;
        *piVar2 = *piVar4;
        *piVar4 = iVar1;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        piVar3 = piVar3 + -1;
        if (piVar4 == param_3) {
          piVar2 = piVar2 + -1;
          if (piVar3 != piVar2) {
            iVar1 = *piVar3;
            *piVar3 = *piVar2;
            *piVar2 = iVar1;
          }
          iVar1 = *piVar2;
          *piVar2 = piVar5[-1];
          piVar5[-1] = iVar1;
          piVar5 = piVar5 + -1;
        }
        else {
          iVar1 = *piVar4;
          *piVar4 = *piVar3;
          *piVar3 = iVar1;
          piVar4 = piVar4 + 1;
        }
      }
      goto joined_r0x00805126;
    }
    if (*piVar4 <= *piVar2) {
      if (*piVar4 < *piVar2) goto joined_r0x00805150;
      iVar1 = *piVar5;
      *piVar5 = *piVar4;
      piVar5 = piVar5 + 1;
      *piVar4 = iVar1;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}

