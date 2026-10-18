// FUN_009846a0 @ 009846a0 body=[[009846a0, 00984815]]


void FUN_009846a0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_c;
  int *local_8;
  
  local_c = param_2 + (((int)param_3 - (int)param_2) / 0x88) * 0x11;
  FUN_00984870(local_c,param_3 + -0x11,param_4);
  piVar1 = local_c + 0x11;
  for (; param_2 < local_c; local_c = local_c + -0x11) {
    if ((*local_c < local_c[-0x11]) || (local_c[-0x11] < *local_c)) break;
  }
  piVar3 = piVar1;
  local_8 = piVar1;
  piVar4 = local_c;
  if (piVar1 < param_3) {
    do {
      piVar3 = piVar1;
      local_8 = piVar1;
      if ((*local_c < *piVar1) || (*piVar1 < *local_c)) break;
      piVar1 = piVar1 + 0x11;
      piVar3 = piVar1;
      local_8 = piVar1;
    } while (piVar1 < param_3);
  }
joined_r0x00984722:
  do {
    piVar2 = local_c;
    if (param_3 <= piVar1) {
joined_r0x0098474f:
      while (local_c = piVar2, param_2 < local_c) {
        piVar2 = local_c + -0x11;
        if (local_c[-0x11] <= *piVar4) {
          if (local_c[-0x11] < *piVar4) break;
          piVar4 = piVar4 + -0x11;
          FUN_007d03f0(piVar2);
          piVar3 = local_8;
        }
      }
      if (local_c == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar4;
          param_1[1] = piVar3;
          return;
        }
        piVar2 = piVar3;
        if (piVar3 != piVar1) {
          FUN_007d03f0(piVar3);
          piVar2 = local_8;
        }
        FUN_007d03f0(piVar1);
        piVar1 = piVar1 + 0x11;
        piVar3 = piVar2 + 0x11;
        local_8 = piVar2 + 0x11;
        piVar4 = piVar4 + 0x11;
      }
      else {
        local_c = local_c + -0x11;
        if (piVar1 == param_3) {
          piVar4 = piVar4 + -0x11;
          if (local_c != piVar4) {
            FUN_007d03f0(piVar4);
            piVar3 = local_8;
          }
          piVar3 = piVar3 + -0x11;
          FUN_007d03f0(piVar3);
          local_8 = piVar3;
        }
        else {
          FUN_007d03f0(local_c);
          piVar1 = piVar1 + 0x11;
          piVar3 = local_8;
        }
      }
      goto joined_r0x00984722;
    }
    if (*piVar4 <= *piVar1) {
      if (*piVar4 < *piVar1) goto joined_r0x0098474f;
      piVar3 = piVar3 + 0x11;
      FUN_007d03f0(piVar1);
      local_8 = piVar3;
    }
    piVar1 = piVar1 + 0x11;
  } while( true );
}

