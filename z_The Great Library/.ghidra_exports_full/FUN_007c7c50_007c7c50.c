// FUN_007c7c50 @ 007c7c50 body=[[007c7c50, 007c7c72]]


void FUN_007c7c50(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) != 0) {
    (**(code **)(in_ECX + 0x10))(param_1,param_2);
  }
  return;
}

