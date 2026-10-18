// FUN_005c51e0 @ 005c51e0 body=[[005c51e0, 005c5239]]


void FUN_005c51e0(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != param_4) {
    puVar2 = (undefined4 *)FUN_005c5a60(*(undefined4 *)(param_1 + 4),param_1);
    puVar1 = *(undefined4 **)(param_1 + 4);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 7) {
      (**(code **)*puVar3)(0);
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  *param_2 = param_3;
  return;
}

