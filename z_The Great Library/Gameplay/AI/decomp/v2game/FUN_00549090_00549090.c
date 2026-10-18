// FUN_00549090 @ 00549090 body=[[00549090, 005490f5]]


void FUN_00549090(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 == param_4) {
    *param_2 = param_3;
    return;
  }
  puVar2 = (undefined4 *)FUN_0054b6d0(param_1);
  puVar1 = *(undefined4 **)(param_1 + 4);
  for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 6) {
    (**(code **)*puVar3)(0);
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  *param_2 = param_3;
  return;
}

