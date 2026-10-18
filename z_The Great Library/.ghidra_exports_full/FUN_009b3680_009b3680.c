// FUN_009b3680 @ 009b3680 body=[[009b3680, 009b36a5]]


void FUN_009b3680(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    (**(code **)(in_ECX + 0x20))(param_1,param_2);
  }
  return;
}

