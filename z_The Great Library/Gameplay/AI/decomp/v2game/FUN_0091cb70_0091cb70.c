// FUN_0091cb70 @ 0091cb70 body=[[0091cb70, 0091cbb7]]


void FUN_0091cb70(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x41f) {
    (**(code **)(*(int *)(in_ECX + 0x28) + 0xc))(param_1);
    return;
  }
  if (param_2 != 0x7eb) {
    FUN_00911470(param_1,param_2);
    return;
  }
  FUN_009a1bb0(in_ECX + 0x98);
  return;
}

