// FUN_0048b8c0 @ 0048b8c0 body=[[0048b8c0, 0048b91a]]


void FUN_0048b8c0(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != param_4) {
    puVar2 = (undefined4 *)FUN_0048c820(*(undefined4 *)(param_1 + 4),param_3,param_1);
    puVar1 = *(undefined4 **)(param_1 + 4);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 0x16) {
      (**(code **)*puVar3)(0);
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  *param_2 = param_3;
  return;
}

