// FUN_004bed60 @ 004bed60 body=[[004bed60, 004bedd8]]


void FUN_004bed60(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 == param_4) {
    *param_2 = param_3;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = param_3;
  for (; param_4 != puVar1; param_4 = param_4 + 0x9e) {
    FUN_004bfca0();
    puVar2 = puVar2 + 0x9e;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 0x9e) {
    (**(code **)*puVar3)(0);
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  *param_2 = param_3;
  return;
}

