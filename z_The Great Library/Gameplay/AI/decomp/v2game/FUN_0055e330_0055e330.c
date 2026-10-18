// FUN_0055e330 @ 0055e330 body=[[0055e330, 0055e37b]]


void FUN_0055e330(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x3b6) {
    (**(code **)(*(int *)(in_ECX + 0x50) + 0xc))(param_1);
    return;
  }
  if (param_2 != 0x56b) {
    FUN_0044bef0(param_1,param_2);
    return;
  }
  *(bool *)(in_ECX + 0x6c) = *(int *)(param_1 + 0x228) == 0x29f;
  return;
}

