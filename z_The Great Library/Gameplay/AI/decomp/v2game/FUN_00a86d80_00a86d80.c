// FUN_00a86d80 @ 00a86d80 body=[[00a86d80, 00a86dad]]


void FUN_00a86d80(undefined4 param_1,char param_2)

{
  int *in_ECX;
  
  (**(code **)(in_ECX[0x1d] + 0x14))(param_1,1);
  if (param_2 != '\0') {
    (**(code **)(*in_ECX + 0xe4))();
  }
  return;
}

