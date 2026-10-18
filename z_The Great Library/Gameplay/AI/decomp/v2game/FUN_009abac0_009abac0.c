// FUN_009abac0 @ 009abac0 body=[[009abac0, 009abb5c]]


undefined4 FUN_009abac0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  uVar7 = 0;
  iVar3 = param_1[2] - param_1[1] >> 2;
  if (iVar3 == 1) {
    piVar4 = (int *)(*(int *)param_1[1] + 0x10);
  }
  else if (iVar3 == 0) {
    piVar4 = (int *)*param_1;
  }
  else {
    piVar1 = (int *)param_1[1];
    piVar4 = (int *)(*piVar1 + 0x10);
    for (piVar6 = piVar1; (piVar1 <= piVar6 && (piVar6 < (int *)param_1[2])); piVar6 = piVar6 + 1) {
      piVar2 = (int *)*piVar6;
      uVar5 = 999;
      if (*piVar2 == 0) {
        uVar5 = 1999;
      }
      if (piVar2[1] == 0) {
        uVar5 = uVar5 + 100;
      }
      if (piVar2[2] == 0) {
        uVar5 = uVar5 + 10;
      }
      if (piVar2[3] == 0) {
        uVar5 = uVar5 + 2;
      }
      if (uVar7 < uVar5) {
        piVar4 = piVar2 + 4;
        uVar7 = uVar5;
      }
    }
  }
  FUN_009aa6a0(piVar4,param_2);
  return param_2;
}

