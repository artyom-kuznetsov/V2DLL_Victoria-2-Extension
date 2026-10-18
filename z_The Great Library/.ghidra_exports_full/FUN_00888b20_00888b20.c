// FUN_00888b20 @ 00888b20 body=[[00888b20, 00888b4d]]


void FUN_00888b20(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 != 0x455) {
    FUN_00876b30(param_1,param_2);
    return;
  }
  (**(code **)(*(int *)(in_ECX + 0x20) + 0xc))(param_1);
  return;
}

