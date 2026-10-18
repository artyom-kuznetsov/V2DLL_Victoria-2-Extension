// FUN_004c0860 @ 004c0860 body=[[004c0860, 004c08bc] [004c08c0, 004c08dc] [004c08e0, 004c0a46]]


undefined4 * FUN_004c0860(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *local_8;
  
  local_8 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 2;
  FUN_004c0c00(local_8,param_3 + -2,param_4);
  piVar7 = local_8 + 2;
  for (; param_2 < local_8; local_8 = local_8 + -2) {
    if ((*local_8 < local_8[-2]) || (local_8[-2] < *local_8)) break;
  }
  piVar8 = piVar7;
  piVar9 = local_8;
  piVar3 = local_8;
  if (piVar7 < param_3) {
    do {
      piVar8 = piVar7;
      if ((*local_8 < *piVar7) || (*piVar7 < *local_8)) break;
      piVar7 = piVar7 + 2;
      piVar8 = piVar7;
    } while (piVar7 < param_3);
  }
joined_r0x004c08d9:
  do {
    piVar5 = piVar9;
    if (param_3 <= piVar7) {
joined_r0x004c091a:
      while (param_2 < piVar9) {
        piVar6 = piVar5 + -2;
        piVar4 = piVar3;
        if (*piVar6 <= *piVar3) {
          piVar9 = local_8;
          if (*piVar6 < *piVar3) break;
          iVar1 = piVar3[-1];
          iVar2 = piVar3[-2];
          piVar4 = piVar3 + -2;
          *piVar4 = *piVar6;
          piVar3[-1] = piVar5[-1];
          *piVar6 = iVar2;
          piVar5[-1] = iVar1;
        }
        piVar9 = local_8 + -2;
        piVar3 = piVar4;
        piVar5 = piVar6;
        local_8 = piVar9;
      }
      if (piVar9 == param_2) {
        if (piVar7 == param_3) {
          param_1[1] = piVar8;
          *param_1 = piVar3;
          return param_1;
        }
        if (piVar8 != piVar7) {
          iVar1 = piVar3[1];
          iVar2 = *piVar3;
          *piVar3 = *piVar8;
          piVar3[1] = piVar8[1];
          *piVar8 = iVar2;
          piVar8[1] = iVar1;
        }
        iVar1 = *piVar3;
        iVar2 = piVar3[1];
        *piVar3 = *piVar7;
        piVar3[1] = piVar7[1];
        *piVar7 = iVar1;
        piVar7[1] = iVar2;
        piVar7 = piVar7 + 2;
        piVar8 = piVar8 + 2;
        piVar3 = piVar3 + 2;
      }
      else {
        local_8 = piVar9 + -2;
        if (piVar7 == param_3) {
          piVar5 = piVar3 + -2;
          if (local_8 != piVar5) {
            iVar1 = piVar9[-1];
            iVar2 = *local_8;
            *local_8 = *piVar5;
            piVar9[-1] = piVar3[-1];
            *piVar5 = iVar2;
            piVar3[-1] = iVar1;
          }
          iVar1 = piVar3[-1];
          iVar2 = *piVar5;
          piVar9 = piVar8 + -2;
          *piVar5 = *piVar9;
          piVar3[-1] = piVar8[-1];
          *piVar9 = iVar2;
          piVar8[-1] = iVar1;
          piVar8 = piVar9;
          piVar9 = local_8;
          piVar3 = piVar5;
        }
        else {
          iVar1 = piVar7[1];
          iVar2 = *piVar7;
          *piVar7 = *local_8;
          piVar7[1] = piVar9[-1];
          *local_8 = iVar2;
          piVar9[-1] = iVar1;
          piVar7 = piVar7 + 2;
          piVar9 = local_8;
        }
      }
      goto joined_r0x004c08d9;
    }
    if (*piVar3 <= *piVar7) {
      if (*piVar3 < *piVar7) goto joined_r0x004c091a;
      iVar1 = *piVar8;
      iVar2 = piVar8[1];
      *piVar8 = *piVar7;
      piVar8[1] = piVar7[1];
      *piVar7 = iVar1;
      piVar8 = piVar8 + 2;
      piVar7[1] = iVar2;
    }
    piVar7 = piVar7 + 2;
  } while( true );
}

