// FUN_0067b7d0 @ 0067b7d0 body=[[0067b7d0, 0067b80c] [0067b810, 0067bd05]]


void FUN_0067b7d0(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_8;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_0067c1d0(param_3 + -1,param_4);
  piVar3 = piVar4 + 1;
  if (param_2 < piVar4) {
    while( true ) {
      iVar2 = piVar4[-1];
      iVar1 = *piVar4;
      if (((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
          (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) ||
         (*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20))) break;
      if ((*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18)) ||
         (piVar4 = piVar4 + -1, piVar4 <= param_2)) break;
    }
  }
  piVar5 = piVar3;
  local_8 = piVar4;
  if (piVar3 < param_3) {
    iVar2 = (int)param_3 + (3 - (int)piVar3);
    if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
      iVar2 = *piVar4;
      do {
        iVar1 = *piVar3;
        piVar5 = piVar3;
        if (((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
            (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) ||
           ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20) ||
            (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))))) goto LAB_0067ba20;
        iVar1 = piVar3[1];
        if ((((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
             (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) ||
            (*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20))) ||
           (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
          piVar3 = piVar3 + 1;
          piVar5 = piVar3;
          goto LAB_0067ba20;
        }
        iVar1 = piVar3[2];
        if (((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
            (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) ||
           ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20) ||
            (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))))) {
          piVar3 = piVar3 + 2;
          piVar5 = piVar3;
          goto LAB_0067ba20;
        }
        iVar1 = piVar3[3];
        if (((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
            (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) ||
           ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20) ||
            (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))))) {
          piVar3 = piVar3 + 3;
          piVar5 = piVar3;
          goto LAB_0067ba20;
        }
        piVar3 = piVar3 + 4;
      } while ((int)piVar3 < (int)(param_3 + -3));
    }
    piVar5 = piVar3;
    if (piVar3 < param_3) {
      iVar2 = *piVar4;
      while (((iVar1 = *piVar3, piVar5 = piVar3, *(char *)(iVar1 + 0x20) <= *(char *)(iVar2 + 0x20)
              && (*(float *)(iVar2 + 0x18) <= *(float *)(iVar1 + 0x18))) &&
             (*(char *)(iVar2 + 0x20) <= *(char *)(iVar1 + 0x20)))) {
        if ((*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18)) ||
           (piVar3 = piVar3 + 1, piVar5 = piVar3, param_3 <= piVar3)) break;
      }
    }
  }
LAB_0067ba20:
  if (piVar3 < param_3) {
    iVar2 = (int)param_3 + (3 - (int)piVar3);
    if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
      do {
        iVar2 = *piVar4;
        iVar1 = *piVar3;
        if ((*(char *)(iVar2 + 0x20) <= *(char *)(iVar1 + 0x20)) &&
           (*(float *)(iVar1 + 0x18) <= *(float *)(iVar2 + 0x18))) {
          if ((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
             (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) goto joined_r0x0067bc18;
          iVar2 = *piVar5;
          *piVar5 = iVar1;
          piVar5 = piVar5 + 1;
          *piVar3 = iVar2;
        }
        iVar2 = *piVar4;
        iVar1 = piVar3[1];
        if ((*(char *)(iVar2 + 0x20) <= *(char *)(iVar1 + 0x20)) &&
           (*(float *)(iVar1 + 0x18) <= *(float *)(iVar2 + 0x18))) {
          if ((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
             (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) {
            piVar3 = piVar3 + 1;
            goto joined_r0x0067bc18;
          }
          iVar2 = *piVar5;
          *piVar5 = iVar1;
          piVar5 = piVar5 + 1;
          piVar3[1] = iVar2;
        }
        iVar2 = *piVar4;
        iVar1 = piVar3[2];
        if ((*(char *)(iVar2 + 0x20) <= *(char *)(iVar1 + 0x20)) &&
           (*(float *)(iVar1 + 0x18) <= *(float *)(iVar2 + 0x18))) {
          if ((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
             (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) {
            piVar3 = piVar3 + 2;
            goto joined_r0x0067bc18;
          }
          iVar2 = *piVar5;
          *piVar5 = iVar1;
          piVar5 = piVar5 + 1;
          piVar3[2] = iVar2;
        }
        iVar2 = *piVar4;
        iVar1 = piVar3[3];
        if ((*(char *)(iVar2 + 0x20) <= *(char *)(iVar1 + 0x20)) &&
           (*(float *)(iVar1 + 0x18) <= *(float *)(iVar2 + 0x18))) {
          if ((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
             (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) {
            piVar3 = piVar3 + 3;
            goto joined_r0x0067bc18;
          }
          iVar2 = *piVar5;
          *piVar5 = iVar1;
          piVar5 = piVar5 + 1;
          piVar3[3] = iVar2;
        }
        piVar3 = piVar3 + 4;
      } while ((int)piVar3 < (int)(param_3 + -3));
    }
    for (; piVar3 < param_3; piVar3 = piVar3 + 1) {
      iVar2 = *piVar4;
      iVar1 = *piVar3;
      if ((*(char *)(iVar2 + 0x20) <= *(char *)(iVar1 + 0x20)) &&
         (*(float *)(iVar1 + 0x18) <= *(float *)(iVar2 + 0x18))) {
        if ((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
           (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) break;
        iVar2 = *piVar5;
        *piVar5 = iVar1;
        piVar5 = piVar5 + 1;
        *piVar3 = iVar2;
      }
    }
  }
joined_r0x0067bc18:
  do {
    if (local_8 <= param_2) break;
    iVar2 = local_8[-1];
    iVar1 = *piVar4;
    if ((*(char *)(iVar2 + 0x20) <= *(char *)(iVar1 + 0x20)) &&
       (*(float *)(iVar1 + 0x18) <= *(float *)(iVar2 + 0x18))) {
      if ((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
         (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) break;
      iVar2 = piVar4[-1];
      piVar4 = piVar4 + -1;
      *piVar4 = local_8[-1];
      local_8[-1] = iVar2;
    }
    local_8 = local_8 + -1;
  } while( true );
  if (local_8 == param_2) {
    if (piVar3 == param_3) {
      param_1[1] = (uint)piVar5;
      *param_1 = (uint)piVar4;
      return;
    }
    if (piVar5 != piVar3) {
      iVar2 = *piVar4;
      *piVar4 = *piVar5;
      *piVar5 = iVar2;
    }
    iVar2 = *piVar4;
    *piVar4 = *piVar3;
    *piVar3 = iVar2;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  else {
    local_8 = local_8 + -1;
    if (piVar3 == param_3) {
      piVar4 = piVar4 + -1;
      if (local_8 != piVar4) {
        iVar2 = *local_8;
        *local_8 = *piVar4;
        *piVar4 = iVar2;
      }
      iVar2 = *piVar4;
      *piVar4 = piVar5[-1];
      piVar5[-1] = iVar2;
      piVar5 = piVar5 + -1;
    }
    else {
      iVar2 = *piVar3;
      *piVar3 = *local_8;
      *local_8 = iVar2;
      piVar3 = piVar3 + 1;
    }
  }
  goto LAB_0067ba20;
}

