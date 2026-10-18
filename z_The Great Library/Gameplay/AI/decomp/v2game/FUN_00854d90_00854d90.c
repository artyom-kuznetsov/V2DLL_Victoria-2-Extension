// FUN_00854d90 @ 00854d90 body=[[00854d90, 00854dfc] [00854e00, 00854ff1]]


undefined4 * FUN_00854d90(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_00855040(piVar5,param_3 + -3,param_4);
  piVar7 = piVar5 + 3;
  for (; param_2 < piVar5; piVar5 = piVar5 + -3) {
    if ((*piVar5 < piVar5[-3]) || (piVar5[-3] < *piVar5)) break;
  }
  piVar8 = piVar7;
  piVar4 = piVar5;
  if (piVar7 < param_3) {
    do {
      piVar8 = piVar7;
      if ((*piVar5 < *piVar7) || (*piVar7 < *piVar5)) break;
      piVar7 = piVar7 + 3;
      piVar8 = piVar7;
    } while (piVar7 < param_3);
  }
joined_r0x00854e16:
  do {
    piVar9 = piVar5;
    if (param_3 <= piVar7) {
joined_r0x00854e64:
      for (; param_2 < piVar9; piVar9 = piVar9 + -3) {
        piVar5 = piVar4;
        if (piVar9[-3] <= *piVar4) {
          if (piVar9[-3] < *piVar4) break;
          iVar1 = piVar4[-2];
          iVar2 = piVar4[-3];
          piVar5 = piVar4 + -3;
          iVar3 = piVar4[-1];
          *piVar5 = piVar9[-3];
          piVar4[-2] = piVar9[-2];
          piVar4[-1] = piVar9[-1];
          piVar9[-3] = iVar2;
          piVar9[-2] = iVar1;
          piVar9[-1] = iVar3;
        }
        piVar4 = piVar5;
      }
      if (piVar9 == param_2) {
        if (piVar7 == param_3) {
          param_1[1] = piVar8;
          *param_1 = piVar4;
          return param_1;
        }
        if (piVar8 != piVar7) {
          iVar1 = piVar4[1];
          iVar2 = *piVar4;
          iVar3 = piVar4[2];
          *piVar4 = *piVar8;
          piVar4[1] = piVar8[1];
          piVar4[2] = piVar8[2];
          *piVar8 = iVar2;
          piVar8[1] = iVar1;
          piVar8[2] = iVar3;
        }
        iVar1 = *piVar4;
        iVar2 = piVar4[1];
        iVar3 = piVar4[2];
        *piVar4 = *piVar7;
        piVar4[1] = piVar7[1];
        piVar4[2] = piVar7[2];
        *piVar7 = iVar1;
        piVar7[1] = iVar2;
        piVar7[2] = iVar3;
        piVar7 = piVar7 + 3;
        piVar8 = piVar8 + 3;
        piVar5 = piVar9;
        piVar4 = piVar4 + 3;
      }
      else {
        piVar5 = piVar9 + -3;
        if (piVar7 == param_3) {
          piVar6 = piVar4 + -3;
          if (piVar5 != piVar6) {
            iVar1 = piVar9[-2];
            iVar2 = *piVar5;
            iVar3 = piVar9[-1];
            *piVar5 = *piVar6;
            piVar9[-2] = piVar4[-2];
            piVar9[-1] = piVar4[-1];
            *piVar6 = iVar2;
            piVar4[-2] = iVar1;
            piVar4[-1] = iVar3;
          }
          iVar1 = piVar4[-2];
          iVar2 = *piVar6;
          iVar3 = piVar4[-1];
          piVar9 = piVar8 + -3;
          *piVar6 = *piVar9;
          piVar4[-2] = piVar8[-2];
          piVar4[-1] = piVar8[-1];
          *piVar9 = iVar2;
          piVar8[-2] = iVar1;
          piVar8[-1] = iVar3;
          piVar8 = piVar9;
          piVar4 = piVar6;
        }
        else {
          iVar1 = piVar7[1];
          iVar2 = *piVar7;
          iVar3 = piVar7[2];
          *piVar7 = *piVar5;
          piVar7[1] = piVar9[-2];
          piVar7[2] = piVar9[-1];
          *piVar5 = iVar2;
          piVar9[-2] = iVar1;
          piVar9[-1] = iVar3;
          piVar7 = piVar7 + 3;
        }
      }
      goto joined_r0x00854e16;
    }
    if (*piVar4 <= *piVar7) {
      if (*piVar4 < *piVar7) goto joined_r0x00854e64;
      iVar1 = *piVar8;
      iVar2 = piVar8[1];
      iVar3 = piVar8[2];
      *piVar8 = *piVar7;
      piVar8[1] = piVar7[1];
      piVar8[2] = piVar7[2];
      *piVar7 = iVar1;
      piVar7[1] = iVar2;
      piVar8 = piVar8 + 3;
      piVar7[2] = iVar3;
    }
    piVar7 = piVar7 + 3;
  } while( true );
}

