// FUN_008a57f0 @ 008a57f0 body=[[008a57f0, 008a5828]]


void FUN_008a57f0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xd9) {
    FUN_009a1750(in_ECX + 0x20,0);
  }
  else if (param_2 == 0x455) {
    (**(code **)(*(int *)(in_ECX + 0x3c) + 0xc))(param_1);
    return;
  }
  return;
}

