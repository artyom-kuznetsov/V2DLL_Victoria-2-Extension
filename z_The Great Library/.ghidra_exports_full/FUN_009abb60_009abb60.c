// FUN_009abb60 @ 009abb60 body=[[009abb60, 009abc4a]]


undefined4 * FUN_009abb60(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint local_10;
  
  iVar3 = (int)(param_1[2] - param_1[1]) >> 2;
  if (iVar3 == 1) {
    piVar4 = (int *)(*(int *)param_1[1] + 0x10);
  }
  else if (iVar3 == 0) {
    piVar4 = (int *)*param_1;
  }
  else {
    piVar1 = (int *)param_1[1];
    local_10 = 0;
    piVar4 = (int *)(*piVar1 + 0x10);
    for (piVar6 = piVar1; (piVar1 <= piVar6 && (piVar6 < (int *)param_1[2])); piVar6 = piVar6 + 1) {
      piVar2 = (int *)*piVar6;
      uVar5 = 0;
      if ((*param_3 == 0) || (*piVar2 == 0)) {
        uVar5 = 999;
      }
      if (*param_3 == *piVar2) {
        uVar5 = uVar5 + 1000;
      }
      if (param_3[1] == piVar2[1]) {
        uVar5 = uVar5 + 100;
      }
      if (param_3[2] == piVar2[2]) {
        uVar5 = uVar5 + 10;
      }
      if (param_3[3] == piVar2[3]) {
        uVar5 = uVar5 + 2;
      }
      if (local_10 < uVar5) {
        piVar4 = piVar2 + 4;
        local_10 = uVar5;
      }
    }
  }
  if ((piVar4[2] - piVar4[1] & 0xfffffffcU) == 4) {
    (**(code **)(**(int **)piVar4[1] + 0xc))(param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return param_2;
}

