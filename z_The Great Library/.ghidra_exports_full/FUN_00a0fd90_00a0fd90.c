// FUN_00a0fd90 @ 00a0fd90 body=[[00a0fd90, 00a0fdbd]]


void FUN_00a0fd90(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 != 0xe7) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  (**(code **)(*(int *)(in_ECX + 0x3c) + 0xc))(param_1);
  return;
}

