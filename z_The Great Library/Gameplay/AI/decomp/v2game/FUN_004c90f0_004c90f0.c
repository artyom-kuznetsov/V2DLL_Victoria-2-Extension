// FUN_004c90f0 @ 004c90f0 body=[[004c90f0, 004c9159]]


void FUN_004c90f0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != param_4) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    puVar5 = param_3;
    puVar4 = param_3;
    if (param_4 != puVar2) {
      puVar3 = param_4 + 3;
      do {
        puVar4[2] = puVar3[-1];
        puVar1 = puVar3 + 1;
        puVar5 = puVar4 + 4;
        puVar4[3] = *puVar3;
        puVar3 = puVar3 + 4;
        puVar4 = puVar5;
      } while (puVar1 != puVar2);
    }
    for (; puVar5 != puVar2; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(0);
    }
    *(undefined4 **)(param_1 + 4) = puVar4;
  }
  *param_2 = param_3;
  return;
}

