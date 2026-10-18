// FUN_007d93a0 @ 007d93a0 body=[[007d93a0, 007d94a4]]


void FUN_007d93a0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_14 [4];
  
  piVar8 = param_1 + 3;
  if (piVar8 != param_2) {
    piVar6 = param_1 + 4;
    do {
      iVar2 = *piVar6;
      cVar1 = (char)piVar6[1];
      iVar3 = *piVar8;
      piVar5 = piVar6;
      piVar7 = piVar8;
      if ((iVar3 < *param_1) ||
         ((iVar3 <= *param_1 &&
          (((cVar1 != '\0' && ((char)param_1[2] == '\0')) ||
           ((cVar1 == (char)param_1[2] && (local_14 < param_1 + 1)))))))) {
        while (param_1 != piVar7) {
          piVar5[-1] = piVar5[-4];
          *piVar5 = piVar5[-3];
          *(char *)(piVar5 + 1) = (char)piVar5[-2];
          piVar7 = piVar5 + -4;
          piVar5 = piVar5 + -3;
        }
        *param_1 = iVar3;
        param_1[1] = iVar2;
        *(char *)(param_1 + 2) = cVar1;
      }
      else {
        while( true ) {
          iVar4 = piVar7[-3];
          if ((iVar4 <= iVar3) &&
             ((iVar4 < iVar3 ||
              (((cVar1 == '\0' || ((char)piVar7[-1] != '\0')) &&
               ((cVar1 != (char)piVar7[-1] || (piVar7 + -2 <= local_14)))))))) break;
          *piVar7 = iVar4;
          piVar7[1] = piVar7[-2];
          *(char *)(piVar7 + 2) = (char)piVar7[-1];
          piVar7 = piVar7 + -3;
        }
        *piVar7 = iVar3;
        piVar7[1] = iVar2;
        *(char *)(piVar7 + 2) = cVar1;
      }
      piVar6 = piVar6 + 3;
      piVar8 = piVar8 + 3;
    } while (piVar8 != param_2);
  }
  return;
}

