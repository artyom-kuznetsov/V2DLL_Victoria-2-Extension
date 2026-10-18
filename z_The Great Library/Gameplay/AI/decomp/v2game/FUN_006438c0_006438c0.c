// FUN_006438c0 @ 006438c0 body=[[006438c0, 0064391c] [00643920, 00643941]]


void FUN_006438c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  
  if ((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) & 0xfffffff8U) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x98) + 4) + 0x38))();
    FUN_009962f0(in_EAX + 0x14d4);
    puVar3 = *(undefined4 **)(param_1 + 0x98);
    puVar1 = *(undefined4 **)(param_1 + 0x9c);
    puVar2 = puVar3;
    while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -8;
  }
  return;
}

