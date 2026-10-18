// FUN_004def70 @ 004def70 body=[[004def70, 004defd6]]


void FUN_004def70(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 == param_4) {
    *param_2 = param_3;
    return;
  }
  puVar2 = (undefined4 *)FUN_004df740(param_4,param_1);
  puVar1 = *(undefined4 **)(param_1 + 4);
  for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 8) {
    (**(code **)*puVar3)(0);
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  *param_2 = param_3;
  return;
}

