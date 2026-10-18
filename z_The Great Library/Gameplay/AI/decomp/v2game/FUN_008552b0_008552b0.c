// FUN_008552b0 @ 008552b0 body=[[008552b0, 00855369]]


void FUN_008552b0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = param_1;
  if (param_1 != param_2) {
    while (piVar6 = piVar6 + 3, piVar6 != param_2) {
      iVar2 = *piVar6;
      iVar3 = piVar6[1];
      iVar4 = piVar6[2];
      if (*param_1 < iVar2) {
        if (param_1 != piVar6) {
          piVar7 = piVar6 + 5;
          do {
            piVar7[-5] = piVar7[-8];
            piVar7[-4] = piVar7[-7];
            piVar7[-3] = piVar7[-6];
            piVar1 = piVar7 + -8;
            piVar7 = piVar7 + -3;
          } while (piVar1 != param_1);
        }
        *param_1 = iVar2;
        param_1[1] = iVar3;
        param_1[2] = iVar4;
      }
      else {
        iVar5 = piVar6[-3];
        piVar7 = piVar6;
        while (iVar5 < iVar2) {
          *piVar7 = iVar5;
          piVar7[1] = piVar7[-2];
          piVar7[2] = piVar7[-1];
          iVar5 = piVar7[-6];
          piVar7 = piVar7 + -3;
        }
        piVar7[1] = iVar3;
        *piVar7 = iVar2;
        piVar7[2] = iVar4;
      }
    }
  }
  return;
}

