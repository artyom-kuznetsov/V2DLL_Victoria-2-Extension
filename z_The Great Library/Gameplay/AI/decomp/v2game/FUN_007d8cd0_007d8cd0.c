// FUN_007d8cd0 @ 007d8cd0 body=[[007d8cd0, 007d9096]]


uint * FUN_007d8cd0(uint *param_1,int *param_2,int *param_3)

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
  int *piVar10;
  int *local_10;
  int *local_c;
  
  piVar8 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_007d9130(piVar8,param_3 + -3);
  piVar5 = piVar8 + 3;
  local_10 = piVar8;
  if (param_2 < piVar8) {
    piVar4 = piVar8 + -1;
    do {
      iVar1 = piVar4[-2];
      if ((iVar1 < *local_10) ||
         ((((iVar1 <= *local_10 &&
            ((((char)*piVar4 != '\0' && ((char)piVar4[3] == '\0')) ||
             (((char)*piVar4 == (char)piVar4[3] && (piVar4 + -1 < piVar4 + 2)))))) ||
           (*local_10 < iVar1)) ||
          ((((char)piVar4[3] != '\0' && ((char)*piVar4 == '\0')) ||
           (((char)piVar4[3] == (char)*piVar4 && (piVar4 + 2 < piVar4 + -1)))))))) break;
      local_10 = local_10 + -3;
      piVar4 = piVar4 + -3;
    } while (param_2 < local_10);
  }
  piVar9 = piVar5;
  piVar4 = piVar5;
  piVar6 = local_10;
  piVar10 = local_10;
  if (piVar5 < param_3) {
    piVar8 = piVar8 + 5;
    while( true ) {
      iVar1 = *piVar5;
      piVar9 = piVar5;
      piVar4 = piVar5;
      if (iVar1 < *local_10) break;
      if (iVar1 <= *local_10) {
        if ((((char)*piVar8 != '\0') && ((char)local_10[2] == '\0')) ||
           (((char)*piVar8 == (char)local_10[2] && (piVar8 + -1 < local_10 + 1)))) break;
      }
      if (*local_10 < iVar1) break;
      if ((((char)local_10[2] != '\0') && ((char)*piVar8 == '\0')) ||
         (((char)local_10[2] == (char)*piVar8 && (local_10 + 1 < piVar8 + -1)))) break;
      piVar5 = piVar5 + 3;
      piVar8 = piVar8 + 3;
      piVar9 = piVar5;
      piVar4 = piVar5;
      if (param_3 <= piVar5) break;
    }
  }
joined_r0x007d8de6:
  do {
    piVar3 = piVar10;
    piVar8 = piVar9;
    if (param_3 <= piVar8) {
LAB_007d8e9b:
      piVar7 = piVar5;
      if (param_2 < piVar6) {
        piVar5 = piVar6 + -2;
        piVar9 = piVar3 + 1;
        do {
          iVar1 = piVar5[-1];
          piVar10 = piVar9;
          piVar7 = piVar4;
          if ((*piVar3 <= iVar1) &&
             ((*piVar3 < iVar1 ||
              ((((char)piVar5[1] == '\0' || ((char)piVar9[1] != '\0')) &&
               (((char)piVar5[1] != (char)piVar9[1] || (piVar9 <= piVar5)))))))) {
            piVar6 = local_10;
            if (((*piVar3 < iVar1) || (((char)piVar9[1] != '\0' && ((char)piVar5[1] == '\0')))) ||
               (((char)piVar9[1] == (char)piVar5[1] && (piVar9 < piVar5)))) break;
            piVar3 = piVar3 + -3;
            piVar10 = piVar9 + -3;
            if (piVar3 != piVar5 + -1) {
              iVar2 = *piVar3;
              *piVar3 = iVar1;
              piVar5[-1] = iVar2;
              iVar2 = piVar9[-2];
              iVar1 = *piVar10;
              *piVar10 = *piVar5;
              *(char *)(piVar9 + -2) = (char)piVar5[1];
              *piVar5 = iVar1;
              *(char *)(piVar5 + 1) = (char)iVar2;
            }
          }
          piVar6 = local_10 + -3;
          piVar5 = piVar5 + -3;
          piVar9 = piVar10;
          local_10 = piVar6;
        } while (param_2 < piVar6);
      }
      if (piVar6 == param_2) {
        if (piVar8 == param_3) {
          *param_1 = (uint)piVar3;
          param_1[1] = (uint)piVar7;
          return param_1;
        }
        if ((piVar7 != piVar8) && (piVar3 != piVar7)) {
          iVar1 = *piVar3;
          *piVar3 = *piVar7;
          *piVar7 = iVar1;
          iVar2 = piVar3[2];
          iVar1 = piVar3[1];
          piVar3[1] = piVar7[1];
          *(char *)(piVar3 + 2) = (char)piVar7[2];
          piVar7[1] = iVar1;
          *(char *)(piVar7 + 2) = (char)iVar2;
        }
        piVar5 = piVar7 + 3;
        piVar9 = piVar8 + 3;
        piVar4 = piVar5;
        piVar10 = piVar3 + 3;
        if (piVar3 != piVar8) {
          iVar1 = *piVar3;
          *piVar3 = *piVar8;
          *piVar8 = iVar1;
          iVar1 = piVar3[1];
          iVar2 = piVar3[2];
          piVar3[1] = piVar8[1];
          *(char *)(piVar3 + 2) = (char)piVar8[2];
          piVar8[1] = iVar1;
          *(char *)(piVar8 + 2) = (char)iVar2;
        }
      }
      else {
        local_10 = piVar6 + -3;
        if (piVar8 == param_3) {
          piVar10 = piVar3 + -3;
          if (local_10 != piVar10) {
            iVar1 = *local_10;
            *local_10 = *piVar10;
            *piVar10 = iVar1;
            iVar2 = piVar6[-1];
            iVar1 = piVar6[-2];
            piVar6[-2] = piVar3[-2];
            *(char *)(piVar6 + -1) = (char)piVar3[-1];
            piVar3[-2] = iVar1;
            *(char *)(piVar3 + -1) = (char)iVar2;
          }
          piVar5 = piVar7 + -3;
          piVar9 = piVar8;
          piVar4 = piVar5;
          piVar6 = local_10;
          if (piVar10 != piVar5) {
            iVar1 = *piVar10;
            *piVar10 = *piVar5;
            *piVar5 = iVar1;
            iVar2 = piVar3[-1];
            iVar1 = piVar3[-2];
            piVar3[-2] = piVar7[-2];
            *(char *)(piVar3 + -1) = (char)piVar7[-1];
            piVar7[-2] = iVar1;
            *(char *)(piVar7 + -1) = (char)iVar2;
          }
        }
        else {
          if (piVar8 != local_10) {
            iVar1 = *piVar8;
            *piVar8 = *local_10;
            *local_10 = iVar1;
            iVar2 = piVar8[2];
            iVar1 = piVar8[1];
            piVar8[1] = piVar6[-2];
            *(char *)(piVar8 + 2) = (char)piVar6[-1];
            piVar6[-2] = iVar1;
            *(char *)(piVar6 + -1) = (char)iVar2;
          }
          piVar5 = piVar7;
          piVar9 = piVar8 + 3;
          piVar6 = local_10;
          piVar10 = piVar3;
        }
      }
      goto joined_r0x007d8de6;
    }
    local_c = piVar4;
    if ((*piVar8 <= *piVar3) &&
       ((*piVar8 < *piVar3 ||
        ((((char)piVar3[2] == '\0' || ((char)piVar8[2] != '\0')) &&
         (((char)piVar3[2] != (char)piVar8[2] || (piVar8 + 1 <= piVar3 + 1)))))))) {
      if (*piVar3 <= *piVar8) {
        piVar9 = piVar8 + 1;
        if ((((char)piVar8[2] == '\0') || ((char)piVar3[2] != '\0')) &&
           (((char)piVar8[2] != (char)piVar3[2] || (piVar5 = piVar4, piVar3 + 1 <= piVar9)))) {
          piVar5 = piVar4 + 3;
          local_c = piVar5;
          if (piVar4 != piVar8) {
            iVar1 = *piVar4;
            *piVar4 = *piVar8;
            *piVar8 = iVar1;
            iVar1 = piVar4[1];
            iVar2 = piVar4[2];
            piVar4[1] = *piVar9;
            *(char *)(piVar4 + 2) = (char)piVar8[2];
            *piVar9 = iVar1;
            *(char *)(piVar8 + 2) = (char)iVar2;
          }
          goto LAB_007d8e8a;
        }
      }
      goto LAB_007d8e9b;
    }
LAB_007d8e8a:
    piVar9 = piVar8 + 3;
    piVar4 = local_c;
    piVar10 = piVar3;
  } while( true );
}

