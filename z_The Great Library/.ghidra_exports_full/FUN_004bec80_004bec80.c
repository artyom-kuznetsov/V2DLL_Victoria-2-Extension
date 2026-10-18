// FUN_004bec80 @ 004bec80 body=[[004bec80, 004becdd]]


void FUN_004bec80(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != param_4) {
    puVar2 = (undefined4 *)FUN_004bf970(*(undefined4 *)(param_1 + 4),param_3,param_1);
    puVar1 = *(undefined4 **)(param_1 + 4);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 0x88) {
      (**(code **)*puVar3)(0);
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  *param_2 = param_3;
  return;
}

