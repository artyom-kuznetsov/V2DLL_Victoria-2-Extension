// FUN_00724fe0 @ 00724fe0 body=[[00724fe0, 007250ac] [007250b0, 00725162]]


undefined4 * FUN_00724fe0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007274a0(param_3 + -1,param_4);
  piVar5 = piVar4 + 1;
  for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
    iVar1 = *(int *)(*(int *)(piVar4[-1] + 0x28) + 8);
    iVar2 = *(int *)(*(int *)(*piVar4 + 0x28) + 8);
    if ((iVar2 < iVar1) || (iVar1 < iVar2)) break;
  }
  piVar6 = piVar5;
  piVar3 = piVar4;
  if (piVar5 < param_3) {
    iVar1 = *(int *)(*(int *)(*piVar4 + 0x28) + 8);
    do {
      iVar2 = *(int *)(*(int *)(*piVar5 + 0x28) + 8);
      piVar6 = piVar5;
      if ((iVar1 < iVar2) || (iVar2 < iVar1)) break;
      piVar5 = piVar5 + 1;
      piVar6 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x00725073:
  do {
    if (param_3 <= piVar5) {
joined_r0x007250a9:
      for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
        iVar1 = *(int *)(*(int *)(piVar4[-1] + 0x28) + 8);
        iVar2 = *(int *)(*(int *)(*piVar3 + 0x28) + 8);
        if (iVar1 <= iVar2) {
          if (iVar1 < iVar2) break;
          iVar1 = piVar3[-1];
          piVar3 = piVar3 + -1;
          *piVar3 = piVar4[-1];
          piVar4[-1] = iVar1;
        }
      }
      if (piVar4 == param_2) {
        if (piVar5 == param_3) {
          param_1[1] = piVar6;
          *param_1 = piVar3;
          return param_1;
        }
        if (piVar6 != piVar5) {
          iVar1 = *piVar3;
          *piVar3 = *piVar6;
          *piVar6 = iVar1;
        }
        iVar1 = *piVar3;
        *piVar3 = *piVar5;
        *piVar5 = iVar1;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
        piVar3 = piVar3 + 1;
      }
      else {
        piVar4 = piVar4 + -1;
        if (piVar5 == param_3) {
          piVar3 = piVar3 + -1;
          if (piVar4 != piVar3) {
            iVar1 = *piVar4;
            *piVar4 = *piVar3;
            *piVar3 = iVar1;
          }
          iVar1 = *piVar3;
          *piVar3 = piVar6[-1];
          piVar6[-1] = iVar1;
          piVar6 = piVar6 + -1;
        }
        else {
          iVar1 = *piVar5;
          *piVar5 = *piVar4;
          *piVar4 = iVar1;
          piVar5 = piVar5 + 1;
        }
      }
      goto joined_r0x00725073;
    }
    iVar1 = *(int *)(*(int *)(*piVar3 + 0x28) + 8);
    iVar2 = *(int *)(*(int *)(*piVar5 + 0x28) + 8);
    if (iVar1 <= iVar2) {
      if (iVar1 < iVar2) goto joined_r0x007250a9;
      iVar1 = *piVar6;
      *piVar6 = *piVar5;
      piVar6 = piVar6 + 1;
      *piVar5 = iVar1;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

