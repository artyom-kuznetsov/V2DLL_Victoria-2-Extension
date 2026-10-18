// FUN_009ab9f0 @ 009ab9f0 body=[[009ab9f0, 009ababa]]


undefined4
FUN_009ab9f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_10;
  
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  if ((iVar2 != 1) && (iVar2 != 0)) {
    local_10 = 0;
    for (puVar4 = *(undefined4 **)(param_1 + 4);
        (*(undefined4 **)(param_1 + 4) <= puVar4 && (puVar4 < *(undefined4 **)(param_1 + 8)));
        puVar4 = puVar4 + 1) {
      piVar1 = (int *)*puVar4;
      uVar3 = 0;
      if ((param_4 == 0) || (*piVar1 == 0)) {
        uVar3 = 999;
      }
      if (param_4 == *piVar1) {
        uVar3 = uVar3 + 1000;
      }
      if (param_5 == piVar1[1]) {
        uVar3 = uVar3 + 100;
      }
      if (param_6 == piVar1[2]) {
        uVar3 = uVar3 + 10;
      }
      if (param_7 == piVar1[3]) {
        uVar3 = uVar3 + 2;
      }
      if (local_10 < uVar3) {
        local_10 = uVar3;
      }
    }
  }
  FUN_009aa450(param_2,param_3,&param_4);
  return param_2;
}

