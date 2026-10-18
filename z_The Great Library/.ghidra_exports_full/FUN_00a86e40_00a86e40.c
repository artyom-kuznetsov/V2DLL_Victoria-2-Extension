// FUN_00a86e40 @ 00a86e40 body=[[00a86e40, 00a86e6d]]


void FUN_00a86e40(undefined4 param_1,char param_2)

{
  int *in_ECX;
  
  (**(code **)(in_ECX[0x1d] + 0x20))(param_1,1);
  if (param_2 != '\0') {
    (**(code **)(*in_ECX + 0xe4))();
  }
  return;
}

