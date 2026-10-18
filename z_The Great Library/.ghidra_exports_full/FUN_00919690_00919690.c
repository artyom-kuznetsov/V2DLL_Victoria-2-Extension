// FUN_00919690 @ 00919690 body=[[00919690, 009196bd]]


void FUN_00919690(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 != 0x41f) {
    FUN_00911470(param_1,param_2);
    return;
  }
  (**(code **)(*(int *)(in_ECX + 0x28) + 0xc))(param_1);
  return;
}

